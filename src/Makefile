CC = g++
CFLAGS = -std=c++20 -Wall
TARGET = program

all: $(TARGET)

$(TARGET): main.cpp
	@echo.
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp
	@echo Compilation successful.
	@echo.

run: $(TARGET)
	@$(TARGET)
	@echo.
	
clean:
	-@del $(TARGET).exe
