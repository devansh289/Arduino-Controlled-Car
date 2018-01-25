# Import Libraries from making this task a tad bit easier
# MUST INSTALL PyBluez LIBRARY USING PIP BEFORE
import csv
import serial
from time import sleep
from bluetooth import *

#Read the File Made by The processing IDE
lis = list(csv.reader(open('capture.txt')))
data = (lis[-1])

# prints final line as a list of strings
print (lis[-1])




#ALL TRIAL ATTEMPTS ARE COMMENTED OUT#
#IF YOU NEED TO USE A SPECIFIC ONE REMOVE THE OPENING/CLOSING COMMENTING SYNTAX



#Method 1 to Test Outgoing Serial Communication 
'''
s = serial.Serial('COM8', 9600,timeout = 1)
print("connected!")
time.sleep(10)
s.write(b"Hello")
print("Sent Message!")
'''



#Method 2 to Test Outgoing Serial Communication
'''
ser = serial.Serial('/dev/ttyACM0',9600)
ser.write("333")
ser.close()
ser.open()
data = ser.readline()
print (data)
ser.close()
'''



#Method 3 to Test Outgoing Serial Communication
'''
BTsocket=BluetoothSocket( RFCOMM )
BTsocket.connect(("30:AE:A4:03:CD:6E", 1))
BTsocket.send("Hello world")
BTsocket.close()
'''



#Method 4 to Test Outgoing Serial Communication
'''
ser=serial.Serial()
ser.baudrate=9600
ser.timeout=5
ser.port='4'
ser.open()
'''



#Method 4 to Test Outgoing Serial Communication
'''
s = serial.Serial("98D331FB6137", 9600 ,timeout = 10)
#sleep(1)
print("DONE")
s.write(bytes("A",'utf-8'))
print("DONE1")
#s.close()
'''



#Method 5 to Test Outgoing Serial Communication
'''
ser = serial.Serial('COM8')  
print(ser.name)         
ser.write(b'A') 
ser.close()         
'''


#Method 6 To Test Outgoing Serial Communication
'''
def connect ():
    bd_addr = "x:x:x:x:x:x"
    port = 1
    sock=bluetooth.BluetoothSocket(bluetooth.RFCOMM)
    sock.connect((bd_addr, port))
    sock.send("hello!!")
    sock.close()

connect()
'''

