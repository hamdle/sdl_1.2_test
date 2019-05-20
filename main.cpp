/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eric
 *
 * Created on May 20, 2019, 10:53 AM
 */

#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Init SDL with everything
    SDL_Init(SDL_INIT_EVERYTHING);
    
    // Create window
    if (SDL_SetVideoMode(640, 480, 32, SDL_DOUBLEBUF | SDL_OPENGL) == 0)
    {
        std::cerr << "Failed to set video mode\n";
        return 1;
    }
    
    SDL_Event event;
    bool running = true;
    
    while(running)
    {
        // Poll for events from SDL
        while (SDL_PollEvent(&event))
        {
            running = event.type != SDL_QUIT;
        }
        
        // Swap OpenGL buffers
        SDL_GL_SwapBuffers();
    }
    
    // Quit SDL
    SDL_Quit();
    
    return 0;
}

