#pragma once

#include "physics.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 640;

const int INPUT_UPDATE_FREQUENCY = 200;
float MOUSE_X, MOUSE_Y;
int MOUSE_X_PX, MOUSE_Y_PX;
bool KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT;
bool MOUSE_1, MOUSE_2;
bool USER_QUIT = false;
bool RUNTIME_ERROR = false;

const int PHYSICS_UPDATE_FREQUENCY = 100;
const float FRICTION = 1;
const float FORCE_STRENGTH = 5;
Entity player = {
    .position = {0, 0},
    .collision_box = {1, 1},
    .render_collision_box = true,
    .texture_path = "res/3.bmp",
    .texture_ptr = NULL,
    .mass = .1,
    .movement_control_type = KEYBOARD,
    .keyboard_control_type = FORCE,
};

SDL_Window *WINDOW_PTR;
SDL_Renderer *RENDERER_PTR;
