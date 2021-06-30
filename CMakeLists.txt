cmake_minimum_required(VERSION 3.19)
project(Cidle C)

set(CMAKE_C_STANDARD 99)

add_executable(Cidle main.c Equipment.c GameAssets.c Hero.c Hunter.c Mage.c OutputFuncs.c Thief.c Warrior.c)