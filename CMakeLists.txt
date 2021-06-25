cmake_minimum_required(VERSION 3.19)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c GameAssets.c Hero.c Hunter.c Mage.c OutputFuncs.c Thief.c Warrior.c)