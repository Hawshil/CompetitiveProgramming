#pragma once
#include <iostream>
#include <vector>

using namespace std;

class quickSort
{
private:
    static int lomutoPartition(vector<int> &nums);
    static int hoarePartition(vector<int> &nums);
    static int randomizedPartition(vector<int> &nums);

public:
    static void lomuto(vector<int> &nums);
    static void hoare(vector<int> &nums);
    static void threeWay(vector<int> &nums);
    static void randomized(vector<int> &nums);
    static void tailRecursive(vector<int> &nums);
    static void blockSort(vector<int> &nums);
}