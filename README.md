📘 Arduino Leonardo: Keyboard Emulator Instructions
This sketch turns your Arduino Leonardo into a USB keyboard. It listens over Serial and presses specific keys when it receives characters.

✅ General Setup:
Serial Communication: 9600 baud

Keyboard Library Used: #include <Keyboard.h>

Character Received → Keyboard Key Pressed

After each command, the key is held briefly (100ms) then released.

🔡 Commands and Corresponding Keyboard Actions
🔢 Function Keys:
Sent Char	Key Pressed
1	F1
2	F2
3	F3
4	F4
5	F5
6	F6
7	F7
8	F8
9	F9
0	F10
-	F11
=	F12
🔡 Alphabet:
Accepts A-Z (uppercase or lowercase)

Sends the lowercase letter to the keyboard.

Example:

'A' or 'a' → a

'Z' or 'z' → z

🔢 Shifted Number Keys:
Sent Char	Keyboard Output
!	1
@	2
#	3
$	4
%	5
^	6
&	7
*	8
(	9
)	0
⬅️ Arrow Keys:
Sent Char	Key Pressed
[	Up Arrow
]	Down Arrow
{	Left Arrow
}	Right Arrow
🔁 Special Keys:
Sent Char	Action
\n	Enter
\t	Tab
`	Escape
\\	Backspace
' '	Spacebar
🕹️ Execution Behavior:
Each key is pressed using Keyboard.press() then released using Keyboard.releaseAll() after 100 ms.

No key hold functionality — all keys are briefly tapped.

Only one key at a time is sent (no combinations).

⚠️ Important Notes:
Only works on Arduino Leonardo (or any board that supports USB HID, like Micro).

Do not open Serial Monitor in Arduino IDE while using external Python scripts.

Always disconnect USB if things go wrong — this sketch gives Arduino full keyboard control!

