import mido
import time
import serial
import pygame

# Initializing the MidiFile
mid = mido.MidiFile('MIDISample.mid', clip=True)


# Initializing the Arduino serial connection
Arduino = serial.Serial(port='COM3', baudrate=9600, timeout=1)
time.sleep(1)


#Playing the wav file Audio, testing to see if its in sync
pygame.mixer.init()
my_sound = pygame.mixer.Sound('Sample.wav')
my_sound.play()


for msg in mid:
    try:
        if msg.type == 'note_off' and msg.channel == 0:
            print(msg)
            timeout_start = time.time()

            hold_bool = True
            while time.time() < timeout_start + msg.time:
                # Everything within the if is executed once, despite being in a while loop to keep count of time
                if hold_bool:
                    hold_bool = False


                    #------ SEND DATA THROUGH SERIAL PORT-----#
                    senddata = str(msg.note).encode('utf-8')
                    Arduino.write(senddata)
                    print(senddata)



    except:
        AttributeError
