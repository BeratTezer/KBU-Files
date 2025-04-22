# Kullanılan Python versiyonu: 3.12.4

import socket
import os

def list_eml_files():
    return sorted([f for f in os.listdir('.') if f.endswith('.eml')])

def read_eml_file(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        return f.read()

def handle_client(conn, addr):
    conn.send(b"+OK POP3 server ready\r\n")
    authed = False
    mails = []

    while True:
        data = conn.recv(1024).decode().strip()
        if not data:
            break

        if data.upper().startswith('USER'):
            conn.send(b"+OK user accepted\r\n")
        elif data.upper().startswith('PASS'):
            authed = True
            mails = list_eml_files()
            conn.send(b"+OK password accepted\r\n")
        elif data.upper() == 'STAT':
            total_size = sum(os.path.getsize(f) for f in mails)
            conn.send(f"+OK {len(mails)} {total_size}\r\n".encode())
        elif data.upper() == 'LIST':
            conn.send(f"+OK {len(mails)} messages\r\n".encode())
            for i, f in enumerate(mails):
                conn.send(f"{i+1} {os.path.getsize(f)}\r\n".encode())
            conn.send(b".\r\n")
        elif data.upper().startswith('RETR'):
            try:
                msg_num = int(data.split()[1]) - 1
                content = read_eml_file(mails[msg_num])
                conn.send(b"+OK message follows\r\n")
                conn.send(content.encode() + b"\r\n.\r\n")
            except:
                conn.send(b"-ERR message not found\r\n")
        elif data.upper() == 'QUIT':
            conn.send(b"+OK goodbye\r\n")
            break
        else:
            conn.send(b"-ERR unknown command\r\n")
    conn.close()

def run_server():
    HOST = 'localhost'
    PORT = 1100

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT))
        s.listen(1)
        print(f"POP3 server running on {HOST}:{PORT}")
        while True:
            conn, addr = s.accept()
            print(f"Client connected: {addr}")
            handle_client(conn, addr)

if __name__ == '__main__':
    run_server()