#include <bits\stdc++.h>
using namespace std;
class MyCircularDeque
{
public:
    int *dq;
    int size, first, last;
    MyCircularDeque(int k)
    {
        size = k;
        first = -1;
        last = -1;
        dq = (int *)malloc(k * sizeof(int));
    }
    ~MyCircularDeque()
    {
        if (dq != nullptr)
            free(dq);
    }

    bool insertFront(int value)
    {
        if (first == -1 && last == -1)
        {
            last = 0;
            first = 0;
            *(dq + first) = value;
            return true;
        }
        if ((last + 1) % size == first)
            return false;
        if(first == 0) first = size - 1;
        else first = (first-1) % size;
        *(dq + first) = value;
        return true;
    }

    bool insertLast(int value)
    {
        if(first == -1 && last == -1)
        {
            last = 0;
            first = 0;
            *(dq + last) = value;
            return true;
        }
        if(first == (last + 1)%size) return false;
        last = (last + 1)%size;
        *(dq + last) = value;
        return true;
    }

    bool deleteFront()
    {
        if(first == -1) return false;
        if(first == last){
            first = -1;
            last = -1;
            return true;
        }
        first = (first + 1) % size;
        return true;
    }

    bool deleteLast()
    {
        if(first == -1) return false;
        if(first == last){
            first = -1;
            last = -1;
            return true;
        }
        if(last == 0) last = size - 1;
        else last = (last - 1) %size;
        return true;
    }

    int getFront()
    {
        if(first == -1) return -1;
        return *(dq + first);
    }

    int getRear()
    {
        if(first == -1) return -1;
        return *(dq + last);
    }

    bool isEmpty()
    {
        if(first == -1) return true;
        return false;
    }

    bool isFull()
    {
        if(first == (last + 1) % size) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
int main()
{

    return 0;
}