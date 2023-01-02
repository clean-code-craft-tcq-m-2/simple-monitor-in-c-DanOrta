CC := gcc
CFLAGS := -Wall \
		  -Wextra \
		  -Werror \
		  -Wno-unused \
		  -O3
OBJS := checkBatteryStatus.o main.o printMessages.o
EXE := checker

.PHONY: all clean run version
all: version $(EXE)

$(EXE): $(OBJS)
	@echo
	$(CC) $^ -o $@
	@ls $(EXE) -sh

%.o: %.c
	$(CC) $(CFLAGS) $^ -c

clean:
	@rm -fr $(EXE) $(OBJS)

run:
	@echo Executing program...
	./$(EXE)

version:
	@$(CC) --version
