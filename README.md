🧠 Arduino Leonardo Keyboard Emulator
This project transforms an Arduino Leonardo into a USB keyboard that responds to serial commands. Ideal for automation, scripting, or simulating human-like typing behavior using Python.

🔧 What It Does
Listens for characters over Serial (from a Python script).

Presses the corresponding keyboard key.

Supports letters, numbers, function keys, arrows, and special characters.

Includes a Python script to simulate realistic human typing.

🧰 Files
arduino_keyboard_emulator.ino – Arduino sketch that handles key emulation.

type_like_human.py – Python script that sends characters with natural typing delays.

🛠 Requirements
Arduino Leonardo, Micro, or Pro Micro (any board with native USB HID support)

USB cable

Python 3.x

pyserial installed (pip install pyserial)

🚀 How to Use
1. Upload the Arduino Code
Open the .ino sketch in the Arduino IDE.

Select the correct board and port (Tools > Board & Port).

Upload the code.

Close the Serial Monitor after upload — only one app can use the port.

2. Run the Python Script
Edit the COM port in type_like_human.py to match your system (e.g., 'COM5').

Run the script with Python: python type_like_human.py

🔤 Supported Commands (via Serial)
Function Keys
'1' → F1

'2' → F2
...

'=' → F12

Letters (case-insensitive)
'A' or 'a' → presses 'a'

'Z' or 'z' → presses 'z'

Symbols → Numbers (Shifted)
'!' → '1'

'@' → '2'
...

')' → '0'

Arrow Keys
'[' → Up

']' → Down

'{' → Left

'}' → Right

Special Characters
'\n' → Enter

'\t' → Tab

' ' (space) → Spacebar

'\\' → Backspace

` → Escape

🧠 Human Typing Simulation
The Python script includes:

Random typing delays per character

Slight pauses at punctuation

More realistic typing behavior

You can customize it further with:

Typos and corrections

Random pauses (to simulate "thinking")

Multi-threaded input for simulating multiple bots

⚠️ Warning
This sketch gives the Arduino full keyboard control of your machine.

Use on test systems first.

Be cautious with key sequences (no loops that could lock you out).

Always keep a USB cable unplug option nearby.

📄 License
MIT License — free to use, modify, and distribute.

