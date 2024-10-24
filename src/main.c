#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <raylib.h>

int main(int argc, char** argv){
    InitWindow(800, 600, NULL);
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }
    CloseWindow();
    exit(EXIT_SUCCESS);
}
