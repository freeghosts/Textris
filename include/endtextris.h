#ifndef ENDTEXTRIS_H_INCLUDED
#define ENDTEXTRIS_H_INCLUDED

// variables for this function can be found in "constants.h"

void introScreen()
{
    for (int nRow = 0; nRow < 14; nRow++)
    {
        for (int nCol = 0; nCol < 30; nCol++)
        {
            std::cout << Textris[nRow][nCol];
        }
    }
    std::cout << std::endl;
    std::cout << std::setw(14);
    std::cout << bold << cyan << "-----------------------\n";
    std::cout << std::setw(15);
    std::cout << magenta << " From Texas, With Love \n";
    std::cout << std::setw(15);
    std::cout << cyan << "-----------------------\n";
    std::cout << std::setw(16);
    std::cout << magenta << "Press <enter> to play.\n";
    std::cout << std::setw(15);
    std::cout << cyan << "-----------------------\n";
    std::cin.get();
    std::cout << reset << clearScreen;
}

void exitScreen()
{
    // homebrew
    std::cout << bold << cyan;
    std::cout << "     ___                                            _      \n";
    std::cout << "    / , |___   __ __ _ __  ,---.__ _ _   _ _ __ ,--| |     \n";
    std::cout << "   / _' / _ \\ / _| _) /  |/  ) / _` | `-' | /  ( - |_|    \n";
    std::cout << "  |_| |_\\___/ \\__|__)_/|_|_,-,_\\__,_|_,-._|_/|_/_|_(_)  \n";
    std::cout << reset << std::endl;
    for (int nRow = 0; nRow < 14; nRow++)
    {
        for (int nCol = 0; nCol < 30; nCol++)
        {
            std::cout << Textris[nRow][nCol];
        }
    }
    std::cout << std::endl;
    std::cout << std::setw(14);
    std::cout << bold << cyan << "-----------------------\n";
    setlocale(LC_CTYPE,"Russian");
    std::cout << std::setw(16);
    std::cout << magenta << " Из Техаса С Любовью \n";
    std::cout << std::setw(15);
    std::cout << cyan << "-----------------------\n" << reset;
}

void winEndScreen()
{
    std::cout << clearScreen;
    // Array of the winner's tetromino board.
    std::string winBoard1[12][22] = {
                               {"|        ",CB,reset,"          |\n"},
                               {"|        ",CB,reset,"          |\n"},
                               {"|        ",CB,reset,"          |\n"},
                               {"|        ",CB,reset,"          |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|",CB,RB,WB,WB,"  ",GB,GB,MB,MB,MB,reset,"|\n"},
                               {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                               {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                               {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard1[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard2[12][22] = {
                             {"|                    |\n"},
                             {"|        ",CB,reset,"          |\n"},
                             {"|        ",CB,reset,"          |\n"},
                             {"|        ",CB,reset,"          |\n"},
                             {"|        ",CB,reset,"          |\n"},
                             {"|                    |\n"},
                             {"|                    |\n"},
                             {"|                    |\n"},
                             {"|",CB,RB,WB,WB,"  ",GB,GB,MB,MB,MB,reset,"|\n"},
                             {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                             {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                             {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard2[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard3[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|",CB,RB,WB,WB,"  ",GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard3[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard4[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|                    |\n"},
                         {"|",CB,RB,WB,WB,"  ",GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard4[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard5[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|",CB,RB,WB,WB,"  ",GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard5[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard6[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|",CB,RB,WB,WB,CB,GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,"  ",MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard6[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard7[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|",CB,RB,WB,WB,CB,GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,CB,MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,"  ",MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard7[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard8[12][22] = {
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|                    |\n"},
                         {"|        ",CB,reset,"          |\n"},
                         {"|",CB,RB,WB,WB,CB,GB,GB,MB,MB,MB,reset,"|\n"},
                         {"|",CB,RB,RB,WB,CB,MB,GB,GB,MB,BB,reset,"|\n"},
                         {"|",CB,BB,RB,WB,CB,MB,MB,RB,RB,BB,reset,"|\n"},
                         {"|",underline,CB,BB,BB,BB,"  ",MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard8[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string winBoard9[12][22] = {
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|                    |\n"},
                               {"|",CB,RB,WB,WB,CB,GB,GB,MB,MB,MB,reset,"|\n"},
                               {"|",CB,RB,RB,WB,CB,MB,GB,GB,MB,BB,reset,"|\n"},
                               {"|",CB,BB,RB,WB,CB,MB,MB,RB,RB,BB,reset,"|\n"},
                               {"|",underline,CB,BB,BB,BB,CB,MB,RB,RB,BB,BB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 22; nCol++)
        {
            std::cout << winBoard9[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen << reset;

    std::cout << "|                    |\n";
    std::cout << "|                    |\n";
    std::cout << "|                    |\n";
    std::cout << blink;
    std::cout << cyan << "   __  __" << magenta << "     ______" << cyan << "     __  __" << magenta << "        __     __";
    std::cout << cyan << "     __" << magenta << "     __   __      \n";
    std::cout << cyan << "  /\\ \\_\\ \\" << magenta << "   /\\  __ \\" << cyan << "   /\\ \\/\\ \\" << magenta << "      /\\ \\  _ \\ \\";
    std::cout << cyan << "   /\\ \\" << magenta << "   /\\ \"-.\\ \\     \n";
    std::cout << cyan << "  \\ \\____ \\" << magenta << "  \\ \\ \\/\\ \\" << cyan << "  \\ \\ \\_\\ \\" << magenta << "     \\ \\ \\/ \".\\ \\";
    std::cout << cyan << "  \\ \\ \\" << magenta << "  \\ \\ \\-.  \\    \n";
    std::cout << cyan << "   \\/\\_____\\" << magenta << "  \\ \\_____\\" << cyan << "  \\ \\_____\\" << magenta << "     \\ \\__/\".~\\_\\";
    std::cout << cyan << "  \\ \\_\\" << magenta << "  \\ \\_\\\\\"\\_\\   \n";
    std::cout << cyan << "    \\/_____/" << magenta << "   \\/_____/" << cyan << "   \\/_____/" << magenta << "      \\/_/   \\/_/" << cyan;
    std::cout << "   \\/_/" << magenta << "   \\/_/ \\/_/   \n" << reset;
    std::cout << "|                    |\n";
    std::cout << "|                    |\n";
    std::cout << "|                    |\n";
    std::cout << "|" << underline << "                    |\n";

    std::cout << reset << std::endl;
}

void loseEndScreen()
{
    // Array tetromino board when bad guesses = 6 & game is over.
    std::string bgBoard34[12][22] = {
                                 {"|        ",CB,reset,"          |\n"},
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
            std::cout << bgBoard34[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard35[12][22] = {
                                 {"|        ",CB,reset,"          |\n"},
                                 {"|        ",CB,reset,"          |\n"},
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
            std::cout << bgBoard35[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard36[12][22] = {
                                 {"|        ",CB,reset,"          |\n"},
                                 {"|        ",CB,reset,"          |\n"},
                                 {"|        ",CB,MB,reset,"        |\n"},
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
            std::cout << bgBoard36[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard37[12][22] = {
                                 {cyan,"  | (_ / _` | '  \\",yellow,"()",cyan," -_)  | (_) \\ V // -_)| '_|  \n"},
                                 {"   \\___\\__,_|_|_|_|\\___|   \\___/ \\_/ \\___||_|  \n",reset},
                                 {"|        ",CB,MB,reset,"        |\n"},
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
            std::cout << bgBoard37[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard38[12][60] = {
                                 {red," /",yellow,"(_)",red,")",cyan,"_",red," )",yellow,"(_)",red,")  )\\  '/(",yellow,"(_)",
                                  red,"   (",yellow,"(_)(_)",red,")\\ /((_|",yellow,"()",red,"\\  \n"},
                                 {yellow,"(_)",red,")",cyan," __",red,"(",yellow,"(_)",cyan,"_ _",red,"(",yellow,"(_)",red,")",yellow,
                                  "(_)",red,")",cyan,"    / _ \\",yellow,"_)",red,"(",yellow,"(_|_)",red,")  (",yellow,"(_)  \n"},
                                 {cyan,"  | (_ / _` | '  \\",yellow,"()",cyan," -_)  | (_) \\ V // -_)| '_|  \n"},
                                 {"   \\___\\__,_|_|_|_|\\___|   \\___/ \\_/ \\___||_|  \n",reset},
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
        for (int nCol = 0; nCol < 60; nCol++)
        {
            std::cout << bgBoard38[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard39[12][60] = {
                                 {red," )\\ )      )    )     (    )\\",yellow,"()",red,")  )     (  (  \n"},
                                 {red,"(",yellow,"()",red,"/(   ( /(   (     ))\\  (",yellow,"(_)",red,"\\  /((   ))\\ )(   \n"},
                                 {red," /",yellow,"(_)",red,")",cyan,"_",red," )",yellow,"(_)",red,")  )\\  '/(",yellow,"(_)",
                                  red,"   (",yellow,"(_)(_)",red,")\\ /((_|",yellow,"()",red,"\\  \n"},
                                 {yellow,"(_)",red,")",cyan," __",red,"(",yellow,"(_)",cyan,"_ _",red,"(",yellow,"(_)",red,")",yellow,
                                  "(_)",red,")",cyan,"    / _ \\",yellow,"_)",red,"(",yellow,"(_|_)",red,")  (",yellow,"(_)  \n"},
                                 {cyan,"  | (_ / _` | '  \\",yellow,"()",cyan," -_)  | (_) \\ V // -_)| '_|  \n"},
                                 {"   \\___\\__,_|_|_|_|\\___|   \\___/ \\_/ \\___||_|  \n",reset},
                                 {"|      ",GB,BB,BB,BB,reset,"      |\n"},
                                 {"|",CB,WB,"    ",YB,YB,BB,GB,reset,"    |\n"},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 60; nCol++)
        {
            std::cout << bgBoard39[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard40[12][60] = {
                                 {red,"                                )   \n"},
                                 {red," (                         ( /(     \n"},
                                 {red," )\\ )      )    )     (    )\\",yellow,"()",red,")  )     (  (  \n"},
                                 {red,"(",yellow,"()",red,"/(   ( /(   (     ))\\  (",yellow,"(_)",red,"\\  /((   ))\\ )(   \n"},
                                 {red," /",yellow,"(_)",red,")",cyan,"_",red," )",yellow,"(_)",red,")  )\\  '/(",yellow,"(_)",
                                  red,"   (",yellow,"(_)(_)",red,")\\ /((_|",yellow,"()",red,"\\  \n"},
                                 {yellow,"(_)",red,")",cyan," __",red,"(",yellow,"(_)",cyan,"_ _",red,"(",yellow,"(_)",red,")",yellow,
                                  "(_)",red,")",cyan,"    / _ \\",yellow,"_)",red,"(",yellow,"(_|_)",red,")  (",yellow,"(_)  \n"},
                                 {cyan,"  | (_ / _` | '  \\",yellow,"()",cyan," -_)  | (_) \\ V // -_)| '_|  \n"},
                                 {"   \\___\\__,_|_|_|_|\\___|   \\___/ \\_/ \\___||_|  \n",reset},
                                 {"|",CB,WB,"  ",RB,YB,YB,GB,GB,"  ",CB,reset,"|\n"},
                                 {"|",CB,WB,WB,RB,RB,"  ",GB,YB,YB,CB,reset,"|\n"},
                                 {"|",CB,MB,GB,GB,RB,"  ",BB,YB,YB,CB,reset,"|\n"},
                                 {"|",underline,MB,MB,MB,GB,GB,"  ",BB,BB,BB,CB,reset,"|\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 60; nCol++)
        {
            std::cout << bgBoard40[nRow][nCol];
        }
    }
    sleep(1);
    std::cout << clearScreen;

    std::string bgBoard41[12][60] = {
                                 {"|                    |\n"},
                                 {"|                    |\n"},
                                 {red,"                                )   \n"},
                                 {red," (                         ( /(     \n"},
                                 {red," )\\ )      )    )     (    )\\",yellow,"()",red,")  )     (  (  \n"},
                                 {red,"(",yellow,"()",red,"/(   ( /(   (     ))\\  (",yellow,"(_)",red,"\\  /((   ))\\ )(   \n"},
                                 {red," /",yellow,"(_)",red,")",cyan,"_",red," )",yellow,"(_)",red,")  )\\  '/(",yellow,"(_)",
                                  red,"   (",yellow,"(_)(_)",red,")\\ /((_|",yellow,"()",red,"\\  \n"},
                                 {yellow,"(_)",red,")",cyan," __",red,"(",yellow,"(_)",cyan,"_ _",red,"(",yellow,"(_)",red,")",yellow,
                                  "(_)",red,")",cyan,"    / _ \\",yellow,"_)",red,"(",yellow,"(_|_)",red,")  (",yellow,"(_)  \n"},
                                 {cyan,"  | (_ / _` | '  \\",yellow,"()",cyan," -_)  | (_) \\ V // -_)| '_|  \n"},
                                 {"   \\___\\__,_|_|_|_|\\___|   \\___/ \\_/ \\___||_|  \n",reset},
                                 {"|                    |\n"},
                                 {underline,"|                    |\n"}};

    for (int nRow = 0; nRow < 12; nRow++)
    {
        for (int nCol = 0; nCol < 60; nCol++)
        {
            std::cout << bgBoard41[nRow][nCol];
        }
    }

    std::cout << reset << std::endl;
}

#endif // ENDTEXTRIS_H_INCLUDED
