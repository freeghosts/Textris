#ifndef CONSTANTS_H_INCLUDED
#define CONSTANTS_H_INCLUDED

// constants for ANSI colours and effects
const std::string red = "\e[31m";
const std::string green = "\e[32m";
const std::string yellow = "\e[33m";
const std::string blue = "\e[34m";
const std::string magenta = "\e[35m";
const std::string cyan = "\e[36m";
const std::string white = "\e[37m";
const std::string reset = "\e[0m";
const std::string bold = "\e[1m";
const std::string blink = "\e[5m";
const std::string underline = "\e[4m";
const std::string clearScreen = "\e[2J\e[H";

// constants for tetromino blocks
const std::string RB = "\e[1m\e[31m[]";
const std::string GB = "\e[1m\e[32m[]";
const std::string YB = "\e[1m\e[33m[]";
const std::string BB = "\e[1m\e[34m[]";
const std::string MB = "\e[1m\e[35m[]";
const std::string CB = "\e[1m\e[36m[]";
const std::string WB = "\e[1m\e[37m[]";

// Presenting the state of Textris:
const std::string Textris[14][30] = {
                                    {"        ",WB,YB,YB,"\n"},
                                    {"        ",WB,YB,YB,"\n"},
                                    {"        ",WB,WB,MB,"\n"},
                                    {"        ",BB,MB,MB,MB,GB,BB,BB,BB,RB,"\n"},
                                    {"        ",BB,BB,BB,GB,GB,RB,RB,BB,RB,RB,"\n"},
                                    {MB,MB,MB,CB,CB,CB,CB,GB,RB,RB,MB,MB,MB,RB,"\n"},
                                    {"  ",MB,WB,WB,WB,YB,YB,CB,CB,CB,CB,MB,YB,YB,"\n"},
                                    {"    ",WB,RB,RB,YB,YB,BB,BB,BB,GB,GB,YB,YB,"\n"},
                                    {"    ",RB,RB,"  ",GB,GB,WB,WB,BB,MB,GB,GB,"\n"},
                                    {"            ",GB,GB,WB,CB,MB,MB,"\n"},
                                    {"              ",RB,WB,CB,MB,"\n"},
                                    {"              ",RB,RB,CB,WB,"\n"},
                                    {"                ",RB,CB,WB,"\n"},
                                    {"                    ",WB,WB,"\n"}};

// constants for select tetromino boards
const std::string bgBoard10[12][22] = {
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

const std::string bgBoard18[12][22] = {
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

const std::string bgBoard24[12][22] = {
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

const std::string bgBoard30[12][22] = {
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

const std::string bgBoard33[12][22] = {
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

#endif // CONSTANTS_H_INCLUDED

