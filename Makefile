CC := gcc
CFLAGS := -Wall \
		-Wextra \
		-Werror \
		-Wno-unused \
		-O3
CFILES := *.c
OUT := checker.exe

.PHONY: all Makefile clean LICENSE run
all: *.o
	${CC} ${^} -o ${OUT}
	@rm -fr *.o
	
%.o: ${CFILES}
	@${CC} --version
	${CC} $^ ${CFLAGS} -c

clean:
	@rm -fr *.o *.out *.exe

run:
	@echo Executing program...
	@./${OUT}