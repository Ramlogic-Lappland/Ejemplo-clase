#include "raylib.h"
#include "scene_menu.h"


const int screenWidth = 640;
const int screenHeight = 480;

enum Screen
{
    menu,
    gameplay
};

const float speed = 25.0f;

Screen currentScreen = menu;

Rectangle rectangle2;


void init();
void update();
void draw();
void close();


void run()
{
    init();

    while (!WindowShouldClose())
    {
        update();

        draw();
    }

    close();
}

void init()
{
    InitWindow(screenWidth, screenHeight, "Ejemplo");

    initMenu();

    rectangle2.x = 0;
    rectangle2.y = 100;
    rectangle2.width = 100;
    rectangle2.height = 100;
}


void update()
{
    switch (currentScreen)
    {
    case menu:
        updateMenu();
        break;
    case gameplay:
        rectangle2.x += speed * GetFrameTime();
        break;
    default:
        break;
    }

}

void draw()
{
    BeginDrawing();
    ClearBackground(SKYBLUE);

    if (currentScreen == menu)
    {
        drawMenu();
    }
    else if (currentScreen == gameplay)
    {
        DrawRectangleRec(rectangle2, RED);
    }

    EndDrawing();
}

void close()
{
    CloseWindow();
}
