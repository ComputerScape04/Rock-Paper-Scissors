#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
using namespace std;

bool game_over;

class rps
{
public:
    string in(); // player's input
    string cpu(); // computer's input
};

void home()
{
    game_over = false;
    cout << "1. Rock\n2. Paper\n3. Scissors\n";

    rps a;
    string p_in = a.in();
    string c_in = a.cpu();

    if (p_in == c_in) cout << "It's a tie!\n";
    else if (p_in == "Rock" && c_in == "Paper") cout << "CPU played " << c_in << " and CPU Wins!\n";
    else if (p_in == "Paper" && c_in == "Rock") cout << "CPU played " << c_in << " and Player Wins!\n";
    else if (p_in == "Scissors" && c_in == "Rock") cout << "CPU played " << c_in << " and CPU Wins!\n";
    else if (p_in == "Rock" && c_in == "Scissors") cout << "CPU played " << c_in << " and Player Wins!\n";
    else if (p_in == "Paper" && c_in == "Scissors") cout << "CPU played " << c_in << " and CPU Wins!\n";
    else if (p_in == "Scissors" && c_in == "Paper") cout << "CPU played " << c_in << " and Player Wins!\n";
}

string rps :: in()
{
    string choice[3] = {"Rock", "Paper", "Scissors"};
    int input; // 1, 2, 3
    cout << "Your input:";
    cin >> input;

    switch(input)
    {
    case 1: // rock
        return choice[0];
    case 2: // paper
        return choice[1];
    case 3: // scissors
        return choice[2];
    default:
        cout << "Invalid Option!";
        exit(0);
    }
}

string rps :: cpu()
{
    string choice[3] = {"Rock", "Paper", "Scissors"};
    srand(time(NULL));
    int cpu_input = 1 + (rand() % 3);

    switch(cpu_input)
    {
    case 1: // rock
        return choice[0];
    case 2: // paper
        return choice[1];
    case 3: // scissors
        return choice[2];
    }
}

int main()
{
    while(!game_over)
    {
        home();
    }
    return 0;
}
