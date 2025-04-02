import serial
import time
import random

arduino_port = 'COM5'  # Change if needed
baud = 9600

ser = serial.Serial(arduino_port, baud, timeout=1)
time.sleep(2)  # Let Arduino initialize

def human_delay(char):
    # Base delay with randomness
    base = random.uniform(0.08, 0.2)  # simulates natural typing speed
    if char in ['.', ',', '?', '!', ':', ';']:
        base += random.uniform(0.1, 0.3)  # simulate pause at punctuation
    time.sleep(base)

def type_like_human(text):
    for char in text:
        ser.write(char.encode())
        human_delay(char)

# Simulate typing "Hello, World!" like a person
type_like_human("Hello, World!")

ser.close()
