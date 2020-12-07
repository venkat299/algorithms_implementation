#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = gcc
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: multiply_test

multiply_test:  multiply.o use_multiply.o
	$(CC) $(CFLAGS) -o multiply_test use_rat.o multiply.o 
	@echo linking compiled files

# multiply.o:  multiply.c multiply.h 
use_multiply.o:  use_multiply.c
	$(CC) $(CFLAGS) -c use_multiply.c
	@echo compile use_multiply.c

# multiply.o:  multiply.c multiply.h 
multiply.o:  multiply.c  
	$(CC) $(CFLAGS) -c multiply.c
	@echo compile multiply.c

clean: 
	$(RM) multiply_test *.o *~