# This is a sort test program

CFLAGS += -std=c99 -g -Wall

APP := test
OBJS := test.o sort.o

all : $(APP)
	./$(APP)

$(APP) : $(OBJS)

$(OBJS) : sort.h

.PHONY :
clean:
	rm -f *.o *.exe

