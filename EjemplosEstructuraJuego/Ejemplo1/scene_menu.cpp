#include "raylib.h"

Rectangle rectangle1;
const float speed = 25.0f;

void initMenu()
{
    rectangle1.x = 0;
    rectangle1.y = 0;
    rectangle1.width = 100;
    rectangle1.height = 100;
}

void updateMenu()
{
	rectangle1.x += speed * GetFrameTime();
}

void drawMenu()
{
	DrawRectangleRec(rectangle1, BLUE);
}