cmake_minimum_required(VERSION 3.27)
project(correctBusproject)

set(CMAKE_CXX_STANDARD 17)

add_executable(correctBusproject main.cpp
        customer.cpp
        customer.h
        routes.cpp
        routes.h
        ticket.cpp
        ticket.h
        trip.cpp
        trip.h)
