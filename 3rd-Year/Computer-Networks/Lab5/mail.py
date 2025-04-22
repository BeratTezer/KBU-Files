# Kullanılan Python versiyonu: 3.12.4


import smtplib
from email.mime.text import MIMEText

msg = MIMEText('Bu bir test mailidir.')
msg['Subject'] = 'Test Başlığı'
msg['From'] = 'gonderen@example.com'
msg['To'] = 'alici@example.com'

with smtplib.SMTP('localhost', 1025) as server:
    server.send_message(msg)

print("E-posta gönderildi.")
