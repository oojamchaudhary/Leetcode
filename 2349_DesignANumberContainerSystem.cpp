#include <bits\stdc++.h>
using namespace std;
class NumberContainers
{
private:
public:
    unordered_map<int, set<int>> indexmap; // number , set of index
    map<int, int> numbermap;               // index , number
    NumberContainers()
    {
    }

    void change(int index, int number)
    {
        if (numbermap.find(index) == numbermap.end())
        {
            // First initialisation
            numbermap[index] = number;
            indexmap[number].insert(index);
            return;
        }
        int n = numbermap[index];
        indexmap[n].erase(index);
        
        numbermap[index] = number;
        indexmap[number].insert(index);
        return;
    }

    int find(int number)
    {
        if(indexmap[number].empty()) return -1;
        return *(indexmap[number].begin());
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */

int main()
{

    return 0;
}