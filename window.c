/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** abc
*/

#include "SFML/Graphics.h"
#include "SFML/Window.h"

int main(void)
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;

    texture = sfTexture_createFromFile("wallpaper.jpg", NULL);
    sprite = sfSprite_create();
    window = sfRenderWindow_create(mode, "My Window", sfResize | sfClose, NULL);

    while (sfRenderWindow_isOpen(window))
    {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }

        sfSprite_setTexture(sprite, texture, sfTrue);

        sfRenderWindow_clear(window, sfBlack);

        sfRenderWindow_drawSprite(window, sprite, NULL);

        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
