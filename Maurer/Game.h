#ifndef GAME_H
#define GAME_H

#include "UserInterface.h"

class Game
{
    public:
        Game(UserInterface& ui);
        ~Game();
        void play();
        int Gewonnen(const UserInterface::GridType& grid);
        bool Unentschieden(const UserInterface::GridType& grid);

    protected:

    private:
        UserInterface& ui;
};

#endif // GAME_H
