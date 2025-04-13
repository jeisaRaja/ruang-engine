CC = g++
LANG_STD = -std=c++17
COMPILER_FLAGS = -Wall -Wfatal-errors -g
INCLUDE_PATH = -I"./libs/"
SRC_FILES = ./src/*.cpp ./src/Game/*.cpp ./src/Graphics/*.cpp
LINKER_FLAGS = 
OUTPUT_NAME = ruang

build:
	${CC} ${COMPILER_FLAGS} ${LANG_STD} ${SRC_FILES} ${INCLUDE_PATH} ${LINKER_FLAGS} -o ${OUTPUT_NAME};

run:
	./${OUTPUT_NAME}
clean:
	rm ${OUT_NAME}
