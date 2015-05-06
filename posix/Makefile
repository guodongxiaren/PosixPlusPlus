CC = g++
CFLAGS = -O2 -Wall
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
ROOT = ../
ALL: $(OBJS)
	
%.o:%.cpp
	@echo -n "\033[32m"
	$(CC) $^ -c $(CFLAGS)
	mv $@ $(ROOT)/lib/
	@echo -n "\033[0m"

