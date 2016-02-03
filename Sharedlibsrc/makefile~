CC=g++
INC_DIR=../include
SRC=$(wildcard *.cpp)
OUT_DIR=../Output
OBJ=$(SRC:.cpp=.o) 
EXE=libAddNum.so

CFLAGS=-I$(INC_DIR) 

all: dir $(OUT_DIR)/$(OBJ) $(OUT_DIR)/$(EXE)

dir:
	@make -p $(OUT_DIR) 

$(OUT_DIR)/$(OBJ):$(SRC) $(INC_DIR)/*.h
	$(CC) -fpic -c $< -o $@ $(CFLAGS)

$(OUT_DIR)/$(EXE):$(OUT_DIR)/$(OBJ)
	$(CC) -shared -o $@ $<

clean:
	rm -rf $(OUT_DIR)/*.o

#run: $(OUT_DIR)/$(EXEC)
#	./$(OUT_DIR)/$(EXEC)
