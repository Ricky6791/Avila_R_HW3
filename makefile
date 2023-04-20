.SUFFIXES : .cpp
CC = g++

CXXFLAGS = -g -std=c++11

OBJS = rectangle.o

TARGET = hw3

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<


clean:
	rm -f $(OBJS) $(TARGET) core

zipIt:
	zip -r Avila_R_HW3.zip rectangle.cpp README makefile