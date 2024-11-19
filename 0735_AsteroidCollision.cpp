#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        int i = asteroids.size() - 1;
        while (i >= 0)
        {
            if (asteroids[i] > 0)
            {
                if (i == asteroids.size() - 1 || asteroids[i + 1] > 0)
                {
                    i--;
                    continue;
                }
                if (asteroids[i + 1] < 0)
                {
                    if (asteroids[i] == abs(asteroids[i + 1]))
                    {
                        asteroids.erase(asteroids.begin() + i + 1);
                        asteroids.erase(asteroids.begin() + i);
                        i--;
                        continue;
                    }
                    if (abs(asteroids[i + 1]) < asteroids[i])
                    {
                        asteroids.erase(asteroids.begin() + i + 1);
                        continue;
                    }
                    asteroids.erase(asteroids.begin() + i);
                    continue;
                }
            }
            if (i == 0)
                break;
            else
            {
                if (asteroids[i - 1] < 0)
                {
                    i--;
                    continue;
                }
                if (abs(asteroids[i]) == asteroids[i - 1])
                {
                    asteroids.erase(asteroids.begin() + i);
                    asteroids.erase(asteroids.begin() + i - 1);
                    i = i - 2;
                    continue;
                }
                if (abs(asteroids[i]) < asteroids[i - 1])
                {
                    asteroids.erase(asteroids.begin() + i);
                    i--;
                    continue;
                }
                asteroids.erase(asteroids.begin() + i - 1);
                i--;
                continue;
            }
        }
        return asteroids;
    }
};
int main()
{

    return 0;
}