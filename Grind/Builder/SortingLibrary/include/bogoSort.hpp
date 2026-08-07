#pragma once
#include <iostream>
#include <vector>

class bogoSort{
private:
    bool isSorted(vector<int>& nums);
public:
    vector<int> standard(vector<int>& nums);
    vector<int> bozoSort(vector<int>& nums);
    vector<int> quantumBogoSort(vector<int>& nums);
}