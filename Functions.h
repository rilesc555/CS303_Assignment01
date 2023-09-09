//
// Created by Riley Connors on 9/5/23.
//

#ifndef CS303_ASSIGNMENT01_FUNCTIONS_H
#define CS303_ASSIGNMENT01_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct oldNewer {
    int old;
    int newer;
};

//A function to check if a certain integer exists in the array if the number is present return the index where the number is FIRST present.
//If the number is not present return -1.

int checkArray(const int intVector[],size_t size, int value);

// A function that can modify the value of an integer when called with the index of the integer in the
// array and return the new value and old value back to the user.
oldNewer modifyArray(int intVector[], size_t size, int index, int value);

//A function that adds a new integer to the end of the array
void addIntToArray(int intVector[], size_t size, int value);

//A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.
void removeInt(int intVector[], size_t size, int index);


#endif //CS303_ASSIGNMENT01_FUNCTIONS_H
