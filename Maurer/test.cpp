#include <gtest/gtest.h>

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Console_UI.h"
#include "Game.h"

Console_UI ui;
Game game(ui);
UserInterface::GridType SpielFeld;

unsigned int colNow;
UserInterface::ColumnType col;
UserInterface::RowType row;
UserInterface::GridType grid;
int Reihe = 0;
int run =1;


TEST(gewonnen, in_einer_Reihe)
{
    SpielFeld[0][1] = (ui.Color::RED);
    SpielFeld[0][2] = (ui.Color::RED);
    SpielFeld[0][3] = (ui.Color::RED);
    SpielFeld[0][4] = (ui.Color::RED);

    ASSERT_EQ(game.Gewonnen(SpielFeld) , 1);
}


TEST(gewonnen, in_einer_Spalte)
{
    SpielFeld[1][0] = (ui.Color::RED);
    SpielFeld[2][0] = (ui.Color::RED);
    SpielFeld[3][0] = (ui.Color::RED);
    SpielFeld[4][0] = (ui.Color::RED);

    ASSERT_EQ(game.Gewonnen(SpielFeld) , 1);
}


TEST(gewonnen, diagonal_1)
{
    SpielFeld[1][1] = (ui.Color::RED);
    SpielFeld[2][2] = (ui.Color::RED);
    SpielFeld[3][3] = (ui.Color::RED);
    SpielFeld[4][4] = (ui.Color::RED);

    ASSERT_EQ(game.Gewonnen(SpielFeld) , 1);
}
