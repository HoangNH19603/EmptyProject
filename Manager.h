//
// Created by parrot on 13/09/2022.
//

#ifndef EMPTY_PROJECT_MANAGER_H
#define EMPTY_PROJECT_MANAGER_H
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include "Person.cpp"
#include "PrintMethod.cpp"

using namespace std;

class Manager {
private:
    static vector<Person> persons;
public:
    static void showMenu() {
        cout << '+' << PrintMethod::printLine('-', 29) << " MENU " << PrintMethod::printLine('-', 29) << '+' << endl;
        cout << "|\t1. " << endl;
    }
};

#endif //EMPTY_PROJECT_MANAGER_H
