cmake_minimum_required(VERSION 3.16.3)
project(gerenciador_de_musicas)
include_directories(src)

add_executable(start src/main.cpp src/playlist src/sistema.cpp)