#ifndef BGONE_H_INCLUDE
#define BGONE_H_INCLUDE

// variables for these function can be found in "constants.h"

void badGuessZero()
{
    // Array of tetromino board before any bad guesses.
    std::string bgBoard0[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard0[nRow][nCol];
        }
    }
}

void badGuessOne()
{
    // Array of tetromino board after 1 bad guess.
    std::string bgBoard1[12][22] = {
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|          ",RB,reset,"        |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard1[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard2[12][22] = {
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|          ",RB,reset,"        |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard2[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard3[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|          ",RB,reset,"        |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard3[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard4[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|          ",RB,reset,"        |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard4[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard5[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|          ",RB,reset,"        |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard5[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard6[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|        ",RB,RB,reset,"        |\n"},
                                {"|",CB,WB,"      ",RB,"  ",GB,reset,"    |\n"},
                                {"|",CB,WB,"        ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard6[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard7[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|        ",RB,reset,"          |\n"},
                                {"|",CB,WB,"    ",RB,RB,"  ",GB,reset,"    |\n"},
                                {"|",CB,WB,"      ",RB,GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard7[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard8[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|      ",RB,reset,"            |\n"},
                                {"|",CB,WB,"  ",RB,RB,"    ",GB,reset,"    |\n"},
                                {"|",CB,WB,"    ",RB,"  ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"      ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard8[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard9[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"  ",RB,"      ",GB,reset,"    |\n"},
                                {"|",CB,WB,"  ",RB,RB,"  ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,"  ",RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,"    ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard9[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard10[12][22] = {
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|                    |\n"},
                                {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard10[nRow][nCol];
        }
    }
    std::cout << clearScreen;
}

void displayBoard1()
{
    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard10[nRow][nCol];
        }
    }
}

void badGuessTwo()
{
    // Array of tetromino board after 2 bad guesses.
    std::string bgBoard11[12][22] = {
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard11[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard12[12][22] = {
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard12[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard13[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard13[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard14[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard14[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard15[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|                    |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard15[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard16[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|",CB,WB,"          ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard16[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard17[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|        ",YB,YB,reset,"        |\n"},
                                 {"|",CB,WB,"    ",YB,YB,"  ",GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,"    ",GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard17[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard18[12][22] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {"|                    |\n"},
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
            std::cout << bgBoard18[nRow][nCol];
        }
    }

    std::cout << clearScreen;
}

void displayBoard2()
{
    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << bgBoard18[nRow][nCol];
        }
    }
}

#endif // BGONE_H_INCLUDE
