#include "Game.h"

bool Game::Unentschieden(const UserInterface::GridType& grid)
{
int row = 0;
int zaehler = 0;

        for(int col=0; col<=6; col++)
        {
            if(grid[row][col].isEmpty() == false)
            {
                zaehler++;
            }
        }
            if(zaehler >= 7)
            {
                ui.notifyDraw();
                return true;
            }
    return false;
}

int Game::Gewonnen(const UserInterface::GridType& grid)
{
int rueckgabe = 0;
/// nach rechts

    for(int row=0; row<=7; row++)
    {
        for(int col=0; col<=3; col++)
        {
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row][col+1].getColor() == UserInterface::Color::RED)&&\
                    (grid[row][col+1].isEmpty() == false)&&\
                    (grid[row][col+2].getColor() == UserInterface::Color::RED)&&\
                    (grid[row][col+2].isEmpty() == false)&&\
                    (grid[row][col+3].getColor() == UserInterface::Color::RED)&&\
                    (grid[row][col+3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::RED);
                rueckgabe = 1;
            }
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row][col+1].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row][col+1].isEmpty() == false)&&\
                    (grid[row][col+2].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row][col+2].isEmpty() == false)&&\
                    (grid[row][col+3].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row][col+3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::YELLOW);
                rueckgabe = 1;

            }
        }
    }
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////
/// nach oben

    for(int col=0; col<=6; col++)
    {
        for(int row=0; row<=2; row++)
        {
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col].isEmpty() == false)&&\
                    (grid[row+2][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+2][col].isEmpty() == false)&&\
                    (grid[row+3][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+3][col].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::RED);
                rueckgabe = 1;
            }
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col].isEmpty() == false)&&\
                    (grid[row+2][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+2][col].isEmpty() == false)&&\
                    (grid[row+3][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+3][col].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::YELLOW);
                rueckgabe = 1;
            }
        }
    }
    /// ///////////////////////////////////////////////////////////////////////////////////////////////////////
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////
/// schr�g nach rechts oben

    for(int col=0; col<=6; col++)
    {
        for(int row=0; row<=2; row++)
        {
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col+1].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col+1].isEmpty() == false)&&\
                    (grid[row+2][col+2].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+2][col+2].isEmpty() == false)&&\
                    (grid[row+3][col+3].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+3][col+3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::RED);
                rueckgabe = 1;
            }
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col+1].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col+1].isEmpty() == false)&&\
                    (grid[row+2][col+2].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+2][col+2].isEmpty() == false)&&\
                    (grid[row+3][col+3].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+3][col+3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::YELLOW);
                rueckgabe = 1;
            }
        }
    }
    /// ///////////////////////////////////////////////////////////////////////////////////////////////////////
/// schr�g nach links oben

    for(int col=3; col<=6; col++)
    {
        for(int row=7; row>=0; row--)
        {
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col-1].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+1][col-1].isEmpty() == false)&&\
                    (grid[row+2][col-2].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+2][col-2].isEmpty() == false)&&\
                    (grid[row+3][col-3].getColor() == UserInterface::Color::RED)&&\
                    (grid[row+3][col-3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::RED);
                rueckgabe = 1;
            }
            if((grid[row][col].isEmpty() == false)&&\
                    (grid[row][col].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col-1].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+1][col-1].isEmpty() == false)&&\
                    (grid[row+2][col-2].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+2][col-2].isEmpty() == false)&&\
                    (grid[row+3][col-3].getColor() == UserInterface::Color::YELLOW)&&\
                    (grid[row+3][col-3].isEmpty() == false))
            {
                ui.notifyWinner(ui.Color::YELLOW);
                rueckgabe = 1;
            }
        }
    }
    if (rueckgabe == 1){
        return 1;
    }
    else return 0;
}
/// ///////////////////////////////////////////////////////////////////////////////////////////////////////


Game::Game(UserInterface& ui) : ui(ui)
{
    //ctor
}

Game::~Game()
{
    //dtor
}

//definieren was gemacht wird wenn play() aufgerufen wird
void Game::play()
{
    UserInterface::GridType SpielFeld;

    unsigned int colNow;

//    UserInterface::ColumnType col;
    UserInterface::RowType row;
    UserInterface::GridType grid;

    // ui.askPlayer(UserInterface::Color::RED); //gut
    // ui.askPlayer(ui.Color::RED);
    // ui.notifyDraw();
    // ui.notifyWinner(ui.Color::RED);
    int Reihe = 0;
    int run =1;

    ui.updateBoard(SpielFeld);

    while (run)
    {
        Reihe = 5;
        colNow = ui.askPlayer(ui.Color::RED);
        while (SpielFeld[Reihe][colNow].isEmpty() == false)
        {
            Reihe--;
            if(Reihe < 0)
            {
                // std::cout << "Fail - Spalte ist voll. Andere Spalte w�hlen";
                colNow = ui.askPlayer(ui.Color::RED);
                Reihe = 5;
            }
        }

        SpielFeld[Reihe][colNow] = (ui.Color::RED); /// col in int?
        ui.updateBoard(SpielFeld);
        run = (Gewonnen(SpielFeld) == 0) && !Unentschieden(SpielFeld);

        if (run)
        {
        Reihe = 5;
        colNow = ui.askPlayer(ui.Color::YELLOW);
        while (SpielFeld[Reihe][colNow].isEmpty() == false)
        {
            Reihe--;
            if(Reihe < 0)
            {
                // std::cout << "Fail Spalte voll. Andere Spalte w�hlen";
                colNow = ui.askPlayer(ui.Color::YELLOW);
                /// if (0 <= colNow <= 7)
                Reihe = 5;
            }
        }
        SpielFeld[Reihe][colNow] = (ui.Color::YELLOW); /// col in int?
        ui.updateBoard(SpielFeld);

        run = (Gewonnen(SpielFeld) == 0) && !Unentschieden(SpielFeld);
        }
    }
}
