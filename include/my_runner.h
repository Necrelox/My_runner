/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#ifndef RUNNER_H_
#define RUNNER_H_

#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct map_t
{
    char **def;
    int time;
}map_s;

typedef struct wintex_t
{
    sfVideoMode scale;
    sfRenderWindow *window;
    sfTexture *texture;
    sfColor color;
}wintex_s;

typedef struct rectsprite_t
{
    sfIntRect rect;
    sfSprite *sprite;

}rectsprite_s;

typedef struct evclock_t
{
    sfEvent event;
    sfClock *clock;
    sfClock *clocktwo;
}evclock_s;

typedef struct vecto_t
{
    sfVector2f twof;
    sfVector2i twoi;
    sfVector2u twou;
    sfVector3f threef;
    sfVector2f twoff;
    sfVector2i twoii;
    sfVector2u twouu;
    sfVector3f threeff;
}vecto_s;

typedef struct texfont_t
{
    sfFont *font;
    sfText *text;
}texfont_s;

typedef struct audio_t
{
    sfMusic *music;
}audio_s;

typedef struct varint_t
{
    float i;
    float ii;
    int j;
    int key;
    int top;
    int left;
    int breakint;
    int pause;
    int audio;
}varint_s;

typedef struct varchar_t
{
    char c;
    char *str;
    char *str2;
}varchar_s;

typedef struct index_t
{
    struct wintex_t wintex;
    struct rectsprite_t rectsprite;
    struct texfont_t texfont;
    struct evclock_t evclock;
    struct vecto_t vecto;
    struct audio_t audio;
    struct varint_t varint;
    struct varchar_t varchar;
}index_s;

// Main
int main(int ac, char **av);

// Map and Rules
void map_translate(map_s *map, char *buff);
int define_time(char *buff);
void init_map(char *buff, int buff_size);
int read_file(int fd, char *file);
int open_file(char *file);

// Display_Menu
void go_game(index_s *game);
void event_cursor_click_two(index_s *menu);
void event_cursor_click(index_s *menu);
void anime_cursor_three(index_s *menu);
void anime_cursor_two(index_s *menu);
void anime_cursor(index_s *menu);
void clock_animate_cursor(index_s *menu);
void clock_window_icon_down(index_s *menu);
void clock_window_icon_up(index_s *menu);
void clock_cursor(index_s *menu);
index_s cursor_menu(void);
index_s text_quit(void);
index_s text_play(void);
index_s icon_menu(void);
index_s my_menu(void);
void window_menu(index_s *menu);
void prepare_my_menu();

// Display_Game
void player_collision_monster2(index_s *game);
void clock_monster2(index_s *game);
index_s monster2(void);
void window_game_eight(index_s *game);
void go_to_end(index_s *game);
void player_collision_monster(index_s *game);
void set_score_convert(index_s *game);
void clock_score(index_s *game);
index_s text_scoretwo(void);
index_s text_score(void);
void event_manage_two(index_s *game);
void event_cursor_clicktwo(index_s *game);
index_s text_resume(void);
void display_pause_two(index_s *game);
void event_manage_one(index_s *game);
void display_pause(index_s *game);
int pause_game(index_s * game);
void clock_animate_monster(index_s *game);
void clock_monster(index_s *game);
index_s monster(void);
void clock_fantomtwo_down(index_s *game);
void clock_fantomtwo_up(index_s *game);
void clock_fantom_down(index_s *game);
void clock_fantom_up(index_s *game);
void display_fantom(index_s *game);
void clock_asset_fantomtwo(index_s *game);
void clock_asset_fantom(index_s *game);
index_s asset_fantom_two(void);
index_s asset_fantom(void);
void player_movement(index_s *game);
void clock_jump_down(index_s *game);
void player_jump_down(index_s *game);
void player_jump_up(index_s *game);
void clock_jump_up(index_s *game);
void event_game_one(index_s *game);
void clock_animated_player(index_s *game);
void window_game_six(index_s *game);
index_s player(void);
void clock_asset_ninetwo(index_s *game);
void clock_asset_nine(index_s *game);
index_s asset_nine_two(void);
index_s asset_nine(void);
void clock_eighttwo_down(index_s *game);
void clock_eighttwo_up(index_s *game);
void clock_eight_down(index_s *game);
void clock_eight_up(index_s *game);
void clock_asset_eightwo(index_s *game);
void clock_asset_eight(index_s *game);
index_s asset_eight_two(void);
index_s asset_eight(void);
void window_game_five(index_s *game);
void clock_asset_seventwo(index_s *game);
void clock_asset_seven(index_s *game);
index_s asset_seven_two(void);
index_s asset_seven(void);
void window_game_four(index_s *game);
void clock_asset_sixtwo(index_s *game);
void clock_asset_six(index_s *game);
index_s asset_six_two(void);
index_s asset_six(void);
void clock_asset_fivetwo(index_s *game);
void clock_asset_five(index_s *game);
void window_game_three(index_s *game);
index_s asset_five_two(void);
index_s asset_five(void);
void clock_assetfour_two(index_s *game);
void clock_assetfour(index_s *game);
index_s asset_four_two(void);
index_s asset_four(void);
void window_game_two(index_s *game);
void clock_bat_two(index_s *game);
void clock_bat(index_s *game);
index_s game_fog_bat_two(void);
index_s game_fog_bat(void);
index_s game_moon(void);
index_s game_window(void);
void window_game(index_s *game);
void display_menu(index_s *menu);
void prepare_my_game(index_s *game);

//Display_End
void event_cursor_end(index_s *end);
index_s play(void);
index_s quit_end(void);
void window_end(index_s *end);
void display_end(index_s *end);

#endif /* !RUNNER_H_ */