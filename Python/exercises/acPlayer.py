import pygame
from pygame.locals import *
from time import sleep

pygame.mixer.pre_init(48000, -16, 1, 1024)
pygame.init()
my_sound = pygame.mixer.Sound('1amAudio@48test.wav')
pygame.mixer.music.set_volume(0.6)

while True:
    my_sound.play(-1)
    sleep(1)
    sleep(21)
    my_sound.stop()
    sleep(1)