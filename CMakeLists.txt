cmake_minimum_required(VERSION 3.0)
project(SnakeGame)

# Definir as versões de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Configuração para encontrar arquivos de cabeçalho e código fonte
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Remover a referência a main.cpp e adicionar apenas snakeGame.cpp
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
list(APPEND SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/snakeGame.cpp")

# Adicionar os executáveis e vincular arquivos fonte e cabeçalhos
add_executable(snakeGame ${SOURCES} ${HEADERS})

# Definições de compilador e flags
target_compile_options(snakeGame PRIVATE -Wall -Wextra -pedantic)
