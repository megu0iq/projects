import pygame
from pygame.locals import *
from time import sleep
import time

pygame.init()
ac1amMusic = pygame.mixer.Sound('better1am@48.wav')
ac2amMusic = pygame.mixer.Sound('better2am@48.wav')
acMusic = [ac1amMusic, ac2amMusic]
sleepTime = [178, 176]

startTime = time.time()
oneHour = 3600
pygame.mixer.pre_init(48000, -16, 1, 1024)
pygame.mixer.music.set_volume(0.6)
i = 0
while i < 2:
  currentTime = time.time()
  elapsedTime = currentTime - startTime
  acMusic[i].play(0)
  print("starting acMusic")
  sleep(sleepTime[i])
  print("stopping acMusic")  # so acMusic[0] which is the 1am song plays for 1m twice then plays 2am song for 60 seconds and then stops for whatever reason, figure it out
  acMusic[i].stop()
  i += 1
  if elapsedTime >= oneHour:
    acMusic[i].play(0)
    sleep(sleepTime[i])
    acMusic[i].stop()