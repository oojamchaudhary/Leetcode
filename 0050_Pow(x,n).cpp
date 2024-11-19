#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    long currentpow = 1;
    double ognum = 101;
    long cumulatepow = 0;
    double cumulatenum = 1;
    bool isNeg = false;
    double myPow(double x, int n)
    {
        ognum = x;
        return calculate(x, long(n));
    }
    double calculate(double x, long n){
        if (n == 0)
            return 1;
        if (x == 0)
            return 0;
        if (n < 0){
            isNeg = true;
            return calculate(x, -1 * n);
        }
        if (currentpow * 2 <= n)
        {
            currentpow *= 2;
            return calculate(x * x, n);
        }
        cumulatepow += currentpow;
        cumulatenum *= x;
        if (currentpow != n)
        {
            n -= currentpow;
            currentpow = 1;
            x = ognum;
            return calculate(x, n);
        }
        if(isNeg) return double(1)/cumulatenum;
        return cumulatenum;

    }
};
int main()
{
    Solution c;
    cout<<c.myPow(34.0515, -3);
    return 0;
}