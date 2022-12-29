cmake_minimum_required(VERSION 3.24)
project(Projekt)

set(CMAKE_CXX_STANDARD 17)


set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CSS_STANDARD_LIBRARIES}") #FLAGS NEED TO IGONRE .DDL's FILES
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive") #################################

add_executable(Projekt main.cpp model/Figure.cpp model/Figure.h Program.h service/FigureSERVICE.cpp service/FigureSERVICE.h service/CmdSERVICE.cpp service/CmdSERVICE.h)
