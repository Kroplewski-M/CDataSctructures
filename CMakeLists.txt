cmake_minimum_required(VERSION 3.28)
project(DataStructures C)

set(CMAKE_C_STANDARD 11)

add_executable(DataStructures main.c
        LinkedList/LinkedList.c
        DoubleLinkedList/DoubleLinkedList.c
        DoubleLinkedList/DoubleLinkedList.h
)
