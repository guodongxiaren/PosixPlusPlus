CC = g++
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SRCS))
ROOT = ../
ALL: $(OBJS)
	
%.o:%.cpp
	@echo -n "\033[32m"
	$(CC) $^ -c
	mv $@ $(ROOT)/lib/
	@echo -n "\033[33m"

