#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class bubbleSort
{
public:
    static void standard(vector<int> &nums);
    static void earlyTermination(vector<int> &nums);
    static void cocktailShaker(vector<int> &nums);
};