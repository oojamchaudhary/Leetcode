#include <bits\stdc++.h>
using namespace std;
class CustomStack
{
public:
    int *arr;
    int last, size;
    CustomStack(int maxSize)
    {
        last = -1;
        size = maxSize;
        arr = new int[size];
    }

    void push(int x)
    {
        if (last == size - 1)
        {
            return;
        }
        else
        {
            last = last + 1;
            arr[last] = x;
        }
    }

    int pop()
    {
        if (last == -1)
            return -1;
        int data;
        data = arr[last];
        last = last - 1;
        return data;
    }

    void increment(int k, int val)
    {
        int i = 0;
        while (i < k && i <= last)
        {
            arr[i] += val;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
int main()
{

    return 0;
}