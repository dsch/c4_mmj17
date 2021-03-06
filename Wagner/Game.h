#ifndef GAME_H
#define GAME_H

#include "UserInterface.h"

class Game
{
    public:
        Game(UserInterface& ui);
        virtual ~Game();
        void playGame();
        int changeBetweenPlayer(int);
        int searchFreeRow(int, int);
        int writeInField(int,int,int);

        int checkVertikalWinner(int,int,int);
        int checkHorizontalWinner(int,int);
        int checkDiagonalLeftWinner();
        int checkDiagonalRightWinner();
        bool outputWinner(int);
        bool checkIfDraw(int);

    protected:

    private:
        static const int RED = 0;
        static const int YELLOW = 1;
        void updateBoard();

        UserInterface& ui;
        UserInterface::GridType grid;
};

#endif // GAME_H
