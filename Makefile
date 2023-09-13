CC = clang++          # Compiler
CFLAGS = -std=c++20   # Compiler flags
TARGET = main         # Name of the output executable

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)
