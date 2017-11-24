INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -ansi -I.
AR = ar
linux: MatheusRangel.a MatheusRangel.so prog_estatico prog_dinamico

MatheusRangel.a : $(SRC_DIR)/MatheusRangel.cpp $(INC_DIR)/MatheusRangel.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/MatheusRangel.cpp -o $(OBJ_DIR)/MatheusRangel.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/MatheusRangel.o
	@echo "+++ [Biblioteca estatica $@ criada] +++"
MatheusRangel.so: $(SRC_DIR)/MatheusRangel.cpp $(INC_DIR)/MatheusRangel.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/MatheusRangel.cpp -o $(OBJ_DIR)/MatheusRangel.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/MatheusRangel.o
	@echo "+++ [Biblioteca dinamica $@ criada] +++"
prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/MatheusRangel.a -o $(OBJ_DIR)/$@
prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/MatheusRangel.so -o $(OBJ_DIR)/$@