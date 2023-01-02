CC := gcc
CFLAGS := -Wall \
		  -Wextra \
		  -Werror \
		  -Wno-unused \
		  -O3
OBJS := checkBatteryStatus.o main.o printMessages.o
EXE := checker

.PHONY: all clean run
all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) $^ -c

clean:
	@rm -fr $(EXE) $(OBJS)

run:
	@echo Executing program...
	./$(EXE)
