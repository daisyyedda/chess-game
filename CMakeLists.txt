cmake_minimum_required(VERSION 3.25)
project(chess_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chess_game
        main.cpp Board.h Piece.h Player.h Position.cpp Player.cpp Enum.h Piece.cpp)
