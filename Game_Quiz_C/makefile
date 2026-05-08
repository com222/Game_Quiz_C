CC=gcc
CFLAGS=-Wall -Wextra -g
TARGET= game_quiz
SRCS=game.c quiz.c
OBJS=$(SRCS:.c=.o)

all:$(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c game.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean