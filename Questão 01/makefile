INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN_DIR = bin

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I $(INC_DIR)
AR = ar

all: mbasic.a mbasic.so prog_estatico prog_dinamico

mbasic.a: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o
	@echo "+++ [Biblioteca estatica criada em $(LIB_DIR)/$@] +++"

mbasic.so: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o
	@echo "+++ [Biblioteca dinamica criada em $(LIB_DIR)/$@] +++"

prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.a -o $(BIN_DIR)/$@

prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.so -o $(BIN_DIR)/$@

clean:
	@echo "Removendo arquivos objeto e executaveis/binarios..."
	@rm -rf $(OBJ_DIR)/*
	@rm -rf $(BIN_DIR)/*