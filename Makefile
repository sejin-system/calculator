CC=gcc
CFLAGS=
LDFLAGS=
LDLIBS=
OBJS=main.o cal.o
TARGET=cal

all:$(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o: main.c cal.h 
cal.o: cal.h cal.c
