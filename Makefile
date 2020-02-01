##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

NAME	=	my_runner

SRC	=	src/main.c	\
		src/map_and_rules/open.c	\
		src/map_and_rules/read.c	\
		src/map_and_rules/translate_map.c	\
		src/menu/go_to_game.c	\
		src/menu/animated_cursor.c	\
		src/menu/clock_menu.c	\
		src/menu/sprite_menu.c	\
		src/menu/menu.c	\
		src/game/event_game_two.c	\
		src/game/event_game_one.c	\
		src/game/clock_game_eight.c	\
		src/game/clock_game_seven.c	\
		src/game/clock_game_six.c	\
		src/game/clock_game_five.c	\
		src/game/clock_game_four.c	\
		src/game/clock_game_three.c	\
		src/game/clock_game_two.c	\
		src/game/clock_game.c	\
		src/game/game_three.c	\
		src/game/game_two.c	\
		src/game/game.c	\
		src/game/score.c	\
		src/game/event.c	\
		src/game/pause_game.c	\
		src/game/game_sprite_five.c	\
		src/game/game_sprite_four.c	\
		src/game/game_sprite_three.c	\
		src/game/game_sprite_two.c	\
		src/game/game_sprite_one.c	\
		src/game/go_to_end.c	\
		src/end/end.c	\
		src/end/end_sprite.c	\
		src/end/event_end.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -I./include -g3

# LDFLAGS = -lasan


all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib re
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio lib/libmy

clean:
	rm -f $(OBJ)

fclean: clean
	make -C lib/ fclean
	rm -f $(NAME)

re: fclean all