OBJECTS = src/addsub.o src/muldiv.o

.PHONY: default all build clean rebuild

default: mmlib.a
all: default
build: default

src/addsub.o : src/addsub.c include/mmlib/addsub.h
src/muldiv.o : src/muldiv.c include/mmlib/muldiv.h

%.o:
	$(CC) -I./include -c $< -o $@

mmlib.a : $(OBJECTS)
	$(AR) rcs $@ $(OBJECTS)

clean:
	$(RM) $(OBJECTS) mmlib.a

rebuild: clean default
