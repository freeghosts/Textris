#include <iostream>
#include <stdlib.h>  //random number function
#include <time.h>  // seed random number generator
#include <cctype>  // isupper and toupper functions
#include <iomanip>  // setw()
#include <unistd.h> // sleep function
#include <clocale>  // non-ascii characters
#include "include/constants.h"  // constant variables
#include "include/bgone.h"   // badGuess screens 0 - 2
#include "include/bgtwo.h"   // badGuess screens 3 - 5
#include "include/endtextris.h"  // intro/exit/winner/loser screens
using namespace std;


void mainGame(string SecretWord)  // write game function to match secret word with user input
{
    //Create symbol to represent SecretWord to player at beginning of game.
    string GuessWord = SecretWord;
    for (int x = 0; x < SecretWord.size(); x++)
    {
        if (SecretWord[x]==' ')
            GuessWord[x] = ' ';
        else
            GuessWord[x] = '*';
    }

    int BadGuesses = 0, Num = 1, Lives = 6;
    string Letter, Letter2, LettersGuessed;
    int Location, Location2;

    while (BadGuesses < 6 && GuessWord != SecretWord)
    {
        cout << clearScreen << reset;

        if (BadGuesses == 0)
        {
            badGuessZero();
        }
        if (BadGuesses == 1)
        {
            if (BadGuesses == Num)
            {
                badGuessOne();
                Num++;
            }
            displayBoard1();
        }
        if (BadGuesses == 2)
        {
            if (BadGuesses == Num)
            {
                badGuessTwo();
                Num++;
            }
            displayBoard2();
        }
        if (BadGuesses == 3)
        {
            if (BadGuesses == Num)
            {
                badGuessThree();
                Num++;
            }
            displayBoard3();
        }
        if (BadGuesses == 4)
        {
            if (BadGuesses == Num)
            {
                badGuessFour();
                Num++;
            }
            displayBoard4();
        }
        if (BadGuesses == 5)
        {
            if (BadGuesses == Num)
            {
                badGuessFive();
                Num++;
            }
            displayBoard5();
        }

        cout << endl << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
        cout << cyan << "LIVES: " << Lives << endl << endl;
        cout << "Letters Guessed: " << LettersGuessed << endl << endl; // displays letters already guessed
        cout << GuessWord << endl << endl << "Guess a letter: ";
        cin >> Letter;
        cout << endl << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
        LettersGuessed += Letter + " "; // LettersGuessed = LettersGuessed + Letter
        cout << endl;
        // for loop for capitalization
        for (int y = 0; y < Letter.size(); y++)
        {
            if (islower(Letter[y]))
                Letter2 = toupper(Letter[y]);
        }

        Location = SecretWord.find(Letter,0);
        Location2 = SecretWord.find(Letter2,0);
        if (Location > SecretWord.size() && Location2 > SecretWord.size())
        {
            BadGuesses++;
            Lives--;
        }
        else
        {
            if (Location < SecretWord.size())
                while (Location < SecretWord.size())
                {
                    GuessWord.replace(Location,1,Letter);
                    Location = SecretWord.find(Letter, Location + 1);
                }
            if (Location2 < SecretWord.size())
                while (Location2 < SecretWord.size())
                {
                    GuessWord.replace(Location2,1,Letter2);
                    Location2 = SecretWord.find(Letter2, Location2 + 1);
                }
        }
    }

    if (BadGuesses == 6)
    {
        cout << clearScreen;
        loseEndScreen();
        cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
        cout << cyan << "The secret word is: " << SecretWord << endl << endl;
        cout << "Better luck next time!\n" << reset << endl;
    }
    else
    {
        winEndScreen();
        cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
        cout << cyan << SecretWord << endl << endl << "Hooray! You guessed the secret word!\n" << reset << endl;
    }
}

int main()
{
    cout << clearScreen << endl;
    introScreen();

    char PlayAgain;
    short int ChoiceA, ChoiceB;
    do {
        srand (time(0));
        // use multidimensional array to store categories of secret words
        string ArcadeAtari[2][10] = {{"Pacman","Panama Joe","Scorpion","Ryu","Centipede","Space Invaders","Frogger","Montezuma","Blanka","Pitfall Harry"},
                                     {"Q*bert","Sub Zero","Yar","M Bison","Inky","Roderick Hero","Grundle","Bentley Bear","Reptile","Tarra"}};
        string Nintendo[2][10] = {{"Mario","Princess Peach","Donkey Kong","Yoshi","Luigi","Zelda","Bowser","Mega Man","Wario","Star Fox"},
                                  {"Mr Game and Watch","Samus Aran","Dixie Kong","Shy Guy","Koopa Troopa","Captain Falcon","Pikachu","Daisy","Dr Mario","Kirby"}};
        string Sega[2][10] = {{"Sonic the Hedgehog","Tails","Knuckles","Yoshimitsu","Echo the Dolphin","Shadow the Hedgehog","Nightmare","Eggman","Inferno","Ivy"},
                              {"Miles Tails Prower", "Amy Rose","Dr Ivo Robotnik","Knuckles the Echidna","Astaroth","Beat","Axel Stone","Alex Kidd","Joe Musashi","Voldo"}};
        string PlayStation[2][10] = {{"Spyro the Dragon","Crash Bandicoot","Daxter","Jak","Lara Croft","Tomba","Yoshimitsu","Chris Redfield","Paul Phoenix","James Marcus"},
                                     {"Parappa the Rapper","Robbit","Sir Daniel Fortesque","Dart","Cloud Strife","Ozwell E Spencer","Alex Wesker","Forest Law","Gun Jack","Rebecca Chambers"}};
        string Random[2][40] = {{"Pacman","Panama Joe","Scorpion","Ryu","Centipede","Space Invaders","Frogger","Montezuma","Blanka","Pitfall Harry",
                                 "Mario","Princess Peach","Donkey Kong","Yoshi","Luigi","Zelda","Bowser","Mega Man","Wario","Star Fox",
                                 "Sonic the Hedgehog","Tails","Knuckles","Yoshimitsu","Echo the Dolphin","Shadow the Hedgehog","Nightmare","Eggman","Inferno","Ivy",
                                 "Spyro the Dragon","Crash Bandicoot","Daxter","Jak","Lara Croft","Tomba","Chris Redfield","Paul Phoenix","James Marcus"},
                                {"Q*bert","Sub Zero","Yar","M Bison","Inky","Roderick Hero","Grundle","Bentley Bear","Reptile","Tarra",
                                 "Mr Game and Watch","Samus Aran","Dixie Kong","Shy Guy","Koopa Troopa","Captain Falcon","Pikachu","Daisy","Dr Mario","Kirby",
                                 "Miles Tails Prower", "Amy Rose","Dr Ivo Robotnik","Knuckles the Echidna","Astaroth","Beat","Axel Stone","Alex Kidd","Joe Musashi","Voldo",
                                 "Parappa the Rapper","Robbit","Sir Daniel Fortesque","Dart","Cloud Strife","Ozwell E Spencer","Alex Wesker","Forest Law","Gun Jack","Rebecca Chambers"}};

        cout << bold << cyan << underline << "How To Play" << reset << cyan << ": Choose a category and see if you can guess the video game\n";
        cout << "character associated with it.  You have six lives.  Good luck!\n";
        cout << endl;
        cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << cyan << endl;
        // category selection menu
        cout << "(1) Arcade/Atari\n";
        cout << "(2) Nintendo\n";
        cout << "(3) Sega\n";
        cout << "(4) Play Station\n";
        cout << "(5) Random\n";
        cout << "(6) Quit\n";
        cout << endl << "Where does your allegiance lie? ";
        cin >> ChoiceA;
        cout << endl << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << cyan << endl;
        if (ChoiceA == 1)  // arcade & atari game loop
        {
            cout << "(1) Easy  (2) Hard\n";  // difficulty menu
            cout << "Choose a difficulty level: ";
            cin >> ChoiceB;
            cout << clearScreen;
            if (ChoiceB == 1)
            {
                mainGame(ArcadeAtari[0][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
            if (ChoiceB == 2)
            {
                mainGame(ArcadeAtari[1][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
        }
        if (ChoiceA == 2)  // Nintendo game loop
        {
            cout << "(1) Easy  (2) Hard\n";  // difficulty menu
            cout << endl << "Choose a difficulty level: ";
            cin >> ChoiceB;
            cout << clearScreen;
            if (ChoiceB == 1)
            {
                mainGame(Nintendo[0][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
            if (ChoiceB == 2)
            {
                mainGame(Nintendo[1][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
        }
        if (ChoiceA == 3)  // sega game loop
        {
            cout << "(1) Easy  (2) Hard\n"; // difficulty menu
            cout << "Choose a difficulty level: \n";
            cin >> ChoiceB;
            cout << clearScreen;
            if (ChoiceB == 1)
            {
                mainGame(Sega[0][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
            if (ChoiceB == 2)
            {
                mainGame(Sega[1][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
        }
        if (ChoiceA == 4)  // play station game loop
        {
            cout << "(1) Easy  (2) Hard\n"; // difficulty menu
            cout << "Choose a difficulty level: \n";
            cin >> ChoiceB;
            cout << clearScreen;
            if (ChoiceB == 1)
            {
                mainGame(PlayStation[0][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
            if (ChoiceB == 2)
            {
                mainGame(PlayStation[1][rand()%10]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
        }
        if (ChoiceA == 5)  // random game loop
        {
            cout << "(1) Easy  (2) Hard\n"; // difficulty menu
            cout << "Choose a difficulty level: \n";
            cin >> ChoiceB;
            cout << clearScreen;
            if (ChoiceB == 1)
            {
                mainGame(Random[0][rand()%40]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
            if (ChoiceB == 2)
            {
                mainGame(Random[1][rand()%40]);
                cout << bold << magenta << "++++++++++++++++++++++++++++++++\n" << reset << endl;
                cout << cyan << "Would you like to play again (y/n)? ";
                cin >> PlayAgain;
                cout << clearScreen << reset;
            }
        }
        if (ChoiceA == 6)  // player quits
        {
            cout << clearScreen;
            exitScreen();
        }
    } while (PlayAgain == 'y' || PlayAgain == 'Y');
    cout << clearScreen << reset;
    exitScreen();

    cout << endl;
    return 0;
}
