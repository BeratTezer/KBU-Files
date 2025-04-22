# Kullanılan Python versiyonu: 3.12.4

from aiosmtpd.controller import Controller
from datetime import datetime

class CustomHandler:
    counter = 0

    async def handle_DATA(self, server, session, envelope):
        filename = f"{datetime.now().strftime('%Y%m%d%H%M%S')}-{self.counter}.eml"
        with open(filename, 'w', encoding='utf-8') as f:
            f.write(envelope.content.decode('utf8', errors='replace'))
        print(f"{filename} kaydedildi.")
        self.counter += 1
        return '250 Message accepted for delivery'

if __name__ == "__main__":
    controller = Controller(CustomHandler(), hostname='localhost', port=1025)
    controller.start()
    print("SMTP sunucusu çalışıyor. Ctrl+C ile durdurabilirsin.")

    try:
        while True:
            pass
    except KeyboardInterrupt:
        controller.stop()
