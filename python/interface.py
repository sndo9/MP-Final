import tkinter
from tkinter import messagebox
import serial
import time
from array import array
import math
import numpy as np
import matplotlib
matplotlib.use("TkAgg")
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2TkAgg
from matplotlib.figure import Figure
import matplotlib.pyplot as plt
import curses

device = '/dev/tty.A3H-RNI-SPP'

ser = serial.Serial(device, 115200, timeout = .5)

top = tkinter.Tk()
top.configure(background = "gray")


# Gets keyboard input from the user
def getch():
    import sys, tty, termios
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)

    # def signal_handler(signum, frame):
    #     raise Exception("Timed out!")
    #
    # signal.signal(signal.SIGALRM, signal_handler)
    # signal.alarm(10)  # Ten seconds

    try:
        tty.setraw(fd)
        ch = sys.stdin.read(1)
    except ValueError:
        a = 1
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
        # termios.tcsetattdr(fd, termios.TCSADRAIN, old_settings)
        ch = ch
    return ch

# Echos back message (for testing)

while 1:
    yam = getch()
    if yam == "œ":
        ser.close()
        break
    print(yam)
    ser.write(yam.encode())

    toRead = ser.inWaiting()
    print(ser.read(toRead).decode())



