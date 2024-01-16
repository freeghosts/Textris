#ifndef BGTWO_H_INCLUDE
#define BGTWO_H_INCLUDE

// variables for this function can be found in "constants.h"

void badGuessThree()
{
    // Array of tetromino board after 3 bad guesses.
    std::string bgBoard19[12][22] = {
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|        ",BB,BB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard19[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard20[12][22] = {
                                 {"|                    |\n"},
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|        ",BB,BB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard20[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard21[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|          ",BB,reset,"        |\n"},
                                 {"|        ",BB,BB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard21[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard22[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|            ",BB,reset,"      |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard22[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard23[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|            ",BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard23[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard24[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard24[nRow][nCol];
        }
    }
    std::cout << clearScreen;
}

void displayBoard3()
{
    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard24[nRow][nCol];
        }
    }
}

void badGuessFour()
{
    // Array of tetromino board after 4 bad guesses.
    std::string bgBoard25[12][22] = {
                                 {"|          ",GB,reset,"        |\n"},
                                 {"|        ",GB,GB,reset,"        |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard25[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard26[12][22] = {
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,reset,"            |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard26[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard27[12][22] = {
                                 {"|                    |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,reset,"            |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard27[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard28[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,reset,"            |\n"},
                                 {"|                    |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard28[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard29[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,reset,"            |\n"},
                                 {"|        ",BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard29[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard30[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard30[nRow][nCol];
        }
    }
    std::cout << clearScreen;
}

void displayBoard4()
{
    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard30[nRow][nCol];
        }
    }
}

void badGuessFive()
{
    // Array of tetromino board after 5 bad guesses.
    std::string bgBoard31[12][22] = {
                                 {"|          ",MB,reset,"        |\n"},
                                 {"|        ",MB,MB,reset,"        |\n"},
                                 {"|          ",MB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard31[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard32[12][22] = {
                                 {"|                    |\n"},
                                 {"|          ",MB,reset,"        |\n"},
                                 {"|        ",MB,MB,reset,"        |\n"},
                                 {"|          ",MB,reset,"        |\n"},
                                 {"|        ",GB,reset,"          |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard32[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard33[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|          ",MB,reset,"        |\n"},
                                 {"|        ",MB,MB,reset,"        |\n"},
                                 {"|        ",GB,MB,reset,"        |\n"},
                                 {"|      ",GB,GB,reset,"          |\n"},
                                 {"|      ",GB,BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard33[nRow][nCol];
        }
    }
    std::cout << clearScreen;
}

void displayBoard5()
{
    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard33[nRow][nCol];
        }
    }
}

#endif // BGTWO_H_INCLUDE
