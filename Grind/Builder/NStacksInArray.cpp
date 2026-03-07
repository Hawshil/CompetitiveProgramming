#include <bits/stdc++.h>
using namespace std;

class NStack
{
private:
    vector<int> arr, tops, next;
    int n, s, freeSlot;

public:
    NStack(int _n, int _s)
        : n(_n), s(_s), freeSlot(0),
          arr(s, 0),
          tops(n, -1),
          next(s)
    {
        for (int i = 0; i < s - 1; i++)
        {
            next[i] = i + 1;
        }
        next[s - 1] = -1;
    }

    bool push(int val, int stk)
    {
        if (stk < 0 || stk >= n)
        {
            cout << "invalid stack index: " << stk << endl;
            return false;
        }
        if (freeSlot == -1)
        {
            cout << "Stack: " << stk << " overflowed" << endl;
            return false;
        }

        int index = freeSlot;
        freeSlot = next[index];
        arr[index] = val;
        next[index] = tops[stk];
        tops[stk] = index;

        cout << "inserted: " << val << " in stack: " << stk << endl;
        return true;
    }

    bool pop(int stk)
    {
        if (stk < 0 || stk >= n)
        {
            cout << "invalid stack index: " << stk << endl;
            return false;
        }
        if (tops[stk] == -1)
        {
            cout << "Stack: " << stk << " underflowed" << endl;
            return false;
        }

        int index = tops[stk];
        tops[stk] = next[index];
        int poppedElement = arr[index];
        next[index] = freeSlot;
        freeSlot = index;

        cout << "popped: " << poppedElement << " from stk: " << stk << endl;
        return true;
    }

    int top(int stk)
    {
        if (stk < 0 || stk >= n)
        {
            cout << "invalid stack index: " << stk << endl;
            return -1;
        }
        if (tops[stk] == -1)
        {
            cout << "Stack: " << stk << " is empty" << endl;
            return -1;
        }

        return arr[tops[stk]];
    }
};

int main()
{
    NStack ns(3, 6);

    ns.push(10, 0);
    ns.push(20, 0);
    ns.push(30, 0);
    ns.push(40, 0);
    ns.push(50, 0);
    ns.push(60, 1);
    ns.push(70, 2);
    ns.pop(0);
    ns.pop(0);
    ns.pop(0);
    ns.pop(1);
    ns.pop(2);

    return 0;
}