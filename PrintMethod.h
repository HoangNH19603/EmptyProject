//
// Created by parrot on 13/09/2022.
//

#pragma once
#ifndef EMPTY_PROJECT_PRINT_METHOD_H
#define EMPTY_PROJECT_PRINT_METHOD_H
#include <iostream>

using namespace std;

class PrintMethod {
public:
    static void print(const string& s, int repeat = 1) {
        for(int i = 0; i < repeat; i++) { cout << s; }
    }
    static void print(char c, int length = 1) {
        for(int i = 0; i < length; i++) { cout << c; }
    }
    static string printLine(const string& s, int repeat = 1) {
        string line;
        for(int i = 0; i < repeat; i++) { line += s; }
        return line;
    }
    static string printLine(char c, int length = 1) {
        string line;
        for(int i = 0; i < length; i++) { line += c; }
        return line;
    }
};

#endif //EMPTY_PROJECT_PRINT_METHOD_H