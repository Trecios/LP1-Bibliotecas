INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN_DIR = bin

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -ansi -I. -I $(INC_DIR)
AR = ar

all: movimento.a produto.a q2

movimento.a: $(SRC_DIR)/movimentacao.cpp $(INC_DIR)/movimentacao.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/movimentacao.cpp -o $(OBJ_DIR)/movimentacao.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/movimentacao.o
	@echo "+++ [Biblioteca estatica criada em $(LIB_DIR)/$@] +++"

produto.a: $(SRC_DIR)/produto.cpp $(INC_DIR)/produto.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/produto.cpp -o $(OBJ_DIR)/produto.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/produto.o
	@echo "+++ [Biblioteca estatica criada em $(LIB_DIR)/$@] +++"

q2:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/movimento.a $(LIB_DIR)/produto.a -o $(BIN_DIR)/$@

	
clean:
	@echo "Removendo arquivos objeto e executaveis/binarios..."
	@rm -rf $(OBJ_DIR)/*
	@rm -rf $(BIN_DIR)/*