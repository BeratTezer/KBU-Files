import subprocess

# Use the `iwlist` command to get a list of available WiFi networks
output = subprocess.check_output(['iwlist', 'scan'])

# Parse the output to extract the SSIDs
ssids = []
for line in output.splitlines():
    if "SSID" in line:
        ssid = line.strip().split("=")[1]
        ssids.append(ssid)

print(ssids)