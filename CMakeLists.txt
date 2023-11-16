cmake_minimum_required(VERSION 3.26)
project(niyacc C)

set(CMAKE_C_STANDARD 11)

add_executable(niyacc main.c
        parser.tab.h
        parser.tab.c
        lex.yy.c)
