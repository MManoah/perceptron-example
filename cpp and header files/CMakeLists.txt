cmake_minimum_required(VERSION 3.13)
project(Perceptron)

set(CMAKE_CXX_STANDARD 17)

add_executable(Perceptron main.cpp Perceptron.cpp Point.cpp TrainingValues.cpp)