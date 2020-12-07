#
# This is an example Makefile for a countwords program.  This
# program uses both the scanner module and a counter module.
# Typing 'make' or 'make count' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
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
default: rational_test

# To create the executable file count we need the object files
# countwords.o, counter.o, and scanner.o:
#
rational_test:  rational.o use_rat.o
	$(CC) $(CFLAGS) -o rational_test use_rat.o rational.o 
	@echo linking compiled files

# To create the object file countwords.o, we need the source
# files countwords.c, scanner.h, and counter.h:
#
use_rat.o:  use_rat.c rational.h 
	$(CC) $(CFLAGS) -c use_rat.c
	@echo compile use_rat.c

# To create the object file counter.o, we need the source files
# counter.c and counter.h:
#
rational.o:  rational.c rational.h 
	$(CC) $(CFLAGS) -c rational.c
	@echo compile rational.c

# To create the object file scanner.o, we need the source files
# scanner.c and scanner.h: 
# scanner.o:  scanner.c scanner.h 
# 	$(CC) $(CFLAGS) -c scanner.c

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean: 
	$(RM) rational_test *.o *~