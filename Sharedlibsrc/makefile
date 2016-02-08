#make file for shared library
CC=g++

#Header files path
INC_DIR=../include

#include all aource files
SRC=$(wildcard *.cpp)

OUT_DIR=../Output
LIB_PATH=../lib

#output of all source files
OBJ=$(SRC:.cpp=.o) 

#Shared library name & path(library name must start with the three letters 'lib' and have the suffix '.so')
EXE=libAddNum.so

CFLAGS=-I$(INC_DIR) 

all: dir $(OUT_DIR)/$(OBJ) $(LIB_PATH)/$(EXE)

dir:
	@mkdir -p $(OUT_DIR) 
	@mkdir -p $(LIB_PATH)

$(OUT_DIR)/$(OBJ):$(SRC) $(INC_DIR)/*.h
	$(CC) -fpic -c $< -o $@ $(CFLAGS)

$(LIB_PATH)/$(EXE):$(OUT_DIR)/$(OBJ)
	$(CC) -shared -o $@ $<

clean:
	rm -rf $(OUT_DIR)/*.o

#run: $(OUT_DIR)/$(EXEC)
#	./$(OUT_DIR)/$(EXEC)
