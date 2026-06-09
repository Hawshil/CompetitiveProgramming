#include <iostream>
#include "../include/bubbleSort.hpp"

using namespace std;

void bubbleSort::cocktailShaker(vector<int> &nums)
{
    int n = nums.size(), start = 0, end = n - 1;

    enum class sDirection
    {
        left,
        right
    };

    sDirection direction = sDirection::right;

    for (int i = 0; i < n; i++)
    {
        bool swapped = false;

        if (direction == sDirection::right)
        {
            for (int j = start; j < end; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            direction = sDirection::left;
            end--;
        }
        else
        {
            for (int j = end; j > start; j--)
            {
                if (nums[j] < nums[j - 1])
                {
                    swap(nums[j], nums[j - 1]);
                    swapped = true;
                }
            }
            direction = sDirection::right;
            start++;
        }

        if (!swapped)
            break;
    }
}

void bubbleSort::standard(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

void bubbleSort::earlyTermination(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}