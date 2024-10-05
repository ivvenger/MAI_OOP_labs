#pragma once

#include <iostream>
#include <string>

using namespace std;

string removeVowels(const string& s);

// g++ -std=c++17 -isystem /opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main tests/TESTS.cpp include/laba_1.h test_executable