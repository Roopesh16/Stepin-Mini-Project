
PROJ_NAME = Sudoku

BUILD_DIR = Build


SRC = src\main.c\
src\printSudoku.c\
src\inputSudoku.c\
src\safeSudoku.c\
src\solveSudoku.c

INC = -Iinc



ifdef OS
RM = del /q
FixPath = $(subst /,\,$1)
EXEC = exe
else
	ifeq ($(shell uname), Linux)
     RM = rm -rf
     FixPath = $1
     EXEC = out
   endif
endif

.PHONY : all run clean doc

all:$(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$n(EXEC))

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html

