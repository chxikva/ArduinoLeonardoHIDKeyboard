# 🧠 Arduino Leonardo Keyboard Emulator

This project turns an Arduino Leonardo (or any board with native USB HID support) into a USB keyboard that receives commands via serial and emulates keystrokes — useful for automation, testing, or building a human-like bot farm. 😎

---

## 📦 Project Structure

- `arduino_keyboard_emulator.ino` — Arduino sketch that listens for serial input and emulates keyboard actions.
- `type_like_human.py` — Python script that sends characters over serial to the Arduino, simulating human typing behavior.

---

## 🔌 Hardware Requirements

- Arduino **Leonardo**, **Micro**, or **Pro Micro** (must support USB HID)
- USB cable
- PC with Python installed

---

## 🚀 Getting Started

### 1. Upload the Arduino Sketch

Upload the provided `.ino` file to your **Leonardo** using the Arduino IDE.

> 💡 Make sure to **disconnect Serial Monitor** after upload — only one app can use the port at a time.

---

### 2. Run the Python Script

Edit the COM port in the script:

```python
arduino_port = 'COM5'  # Replace with your actual port
Then run:

bash
Copy
Edit
python type_like_human.py
This script will simulate typing "Hello, World!" with randomized, human-like delays between keystrokes.

🧠 Command Reference
The Arduino listens for single ASCII characters over serial and maps them to keyboard actions.

Function Keys
Input	Action
1	F1
2	F2
...	...
=	F12
Letters (case-insensitive)
Input	Action
a/A	a
z/Z	z
Shifted Numbers (symbols)
Input	Output
!	1
@	2
...	...
Arrow Keys
Input	Direction
[	Up
]	Down
{	Left
}	Right
Special Keys
Input	Key
\n	Enter
\t	Tab
Space
`	Escape
\	Backspace
🤖 Human Typing Simulation
The Python script uses random delays between keystrokes to mimic natural typing. You can enhance it further by adding:

Typos + corrections

Random pauses

Multi-bot parallel inputs

⚠️ Safety Notice
This code gives your Arduino keyboard control over your system.

Use with caution.

Test on a safe machine or virtual environment.

Always keep a USB unplug option handy.

📄 License
MIT License — free to use, modify, and distribute.

💬 Questions or Ideas?
Open an issue or start a discussion! Contributions welcome 😊

yaml
Copy
Edit

---

Let me know if you want it personalized (with your GitHub handle, emoji tone, or converted to minimalist style).





