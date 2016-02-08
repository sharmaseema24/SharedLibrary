CC=g++

INC_DIR=../include
BIN_PATH=../bin
LD_LIBRARY_PATH=../lib
OBJ_PATH=../src-obj
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)


CFLAGS=-I$(INC_DIR)
LDFLAGS=-L$(LD_LIBRARY_PATH)

LIBS=-lAddNum

all: dir $(OBJ_PATH)/$(OBJ) $(BIN_PATH)/App.bin

dir:
	@mkdir -p $(OBJ_PATH)
	@mkdir -p $(BIN_PATH)


$(BIN_PATH)/App.bin: $(OBJ_PATH)/$(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^ $(LIBS)

$(OBJ_PATH)/$(OBJ): $(SRC) $(INC_DIR)/*.h
	$(CC) -c -o $@ $< $(CFLAGS)
