#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "Testy.h"
#include "Platform.h"

const char* introArt = R"(
   ___  _     ____    _____ ___  _    _ _   _
  / _ \| |   |  _ \  |_   _/ _ \| |  | | \ | |
 | | | | |   | | | |   | || | | | |  | |  \| |
 | |_| | |___| |_| |   | || |_| | |/\| | |\  |
  \___/|_____|____/    |_| \___/|__/\__|_| \_|

          ROGUELIKE FROM SCRATCH | C++
)";

void setPolishCharacters() 
{
    setupLocale();
}

void startGame() 
{
    Game game;
    game.init();
    while (game.running()) 
    {
        game.handleInput();
        game.update();
        game.render();
    }
}

int main() 
{
    setPolishCharacters();
    srand(time(NULL));

    std::cout << introArt << std::endl;
    std::cout << "Naciśnij dowolny klawisz, aby kontynuować..." << std::endl;
    getchWrapper();
    clearScreen();

    Testy testy;
    
    while(true) 
    {
        std::cout << "\nMenu główne:\n";
        std::cout << "1. Rozpocznij grę\n";
        std::cout << "2. Tryb testowy\n";
        std::cout << "3. Wyjście\n";
        
        int mainChoice;
        std::cin >> mainChoice;

        if(mainChoice == 1) 
        {
            startGame();
        }
        else if(mainChoice == 2) 
        {
            testy.runTests();
        }
        else if(mainChoice == 3) {
            break;
        }
    }
    return 0;
}