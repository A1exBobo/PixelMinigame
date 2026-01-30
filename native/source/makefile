CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
INCLUDES = -I.

BUILD_DIR = ../build
TARGET = $(BUILD_DIR)/mygame

OBJS = \
	$(BUILD_DIR)/environment.o \
	$(BUILD_DIR)/CoordonateGenerator.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ -lm

$(BUILD_DIR)/environment.o: environment.c coordinates.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR)/CoordonateGenerator.o: CoordonateGenerator.c coordinates.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)

.PHONY: all clean

run: $(TARGET)
	cd $(BUILD_DIR) && ./mygame

