//T09_G12

#ifndef GAMESTART_H
#define GAMESTART_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <stdio.h>
#include <chrono>
#include <iomanip>
#include <algorithm>

//Function for the main menu - returns options chosen by the user
int game_start();

//options choice
const std::string rules = "1";
const std::string play_game = "2";
const std::string time_records = "3";
const std::string exit_game = "0";

#endif