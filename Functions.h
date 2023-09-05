//
// Created by Riley Connors on 9/5/23.
//

#ifndef CS303_ASSIGNMENT01_FUNCTIONS_H
#define CS303_ASSIGNMENT01_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct oldNewer;

int checkArray(vector<int>& vectorToCheck, int toCheck);

oldNewer modifyArray(vector<int>& vectorToModify, int toModify, int newValue);

void addIntToArray(vector<int>& vectorToAddTo, int toAdd);

void removeInt(vector<int>& vectorToRemoveFrom, int toRemove);



#endif //CS303_ASSIGNMENT01_FUNCTIONS_H
