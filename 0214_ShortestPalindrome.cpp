#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    string shortestPalindrome(string s)
    {
        if (s.empty()) return s;

        int n = s.length();
        int count;
        if(n % 2 == 1) count = 1;
        else count = 0;
        int mid = n / 2;
        int right = 0, left = 0;
        while (mid >= 0)
        {
            if ((count) % 2 == 1)
            {
                right = mid + 1;
                left = mid - 1;
            }
            else
            {
                right = mid;
                left = mid - 1;
            }

    
            while (right < n && left >= 0 && s[left] == s[right])
            {
                right++;
                left--;
            }

    
            if (left < 0) break;
            count++;
            if ((count) % 2 == 1)
            {
                right = mid + 1;
                left = mid - 1;
            }
            else
            {
                right = mid;
                left = mid - 1;
            }

    
            while (right < n && left >= 0 && s[left] == s[right])
            {
                right++;
                left--;
            }

    
            if (left < 0) break;
            mid--;
            count++;
        }


        if (right == n) return s;


        string toAdd = s.substr(max(right, mid + 1), n - right);
        reverse(toAdd.begin(), toAdd.end());
        return toAdd + s;
    }
};


int main()
{
    if (s.length() % 2 == 1)
    {
        int mid = s.length() / 2;
        int right = mid + 1, left = mid - 1;
        while (right < s.length() && left >= 0)
        {
            if (s[left] == s[right])
            {
                right++;
                left--;
            }
            else
            {
                mid--;
                right = mid + 1, left = mid - 1;
            }
        }
        string toAdd = (s.substr(right, s.length() - right));
        reverse(toAdd.begin(), toAdd.end());
        return toAdd + s;
    }
    else
    {
        int mid = s.length() / 2;
        int right = mid, left = mid - 1;
        while (right < s.length() && left >= 0)
        {
            if (s[left] == s[right])
            {
                right++;
                left--;
            }
            else
            {
                mid--;
                right = mid, left = mid - 1;
            }
        }
        string toAdd = (s.substr(right, s.length() - right));
        reverse(toAdd.begin(), toAdd.end());
        return toAdd + s;
    }
    return 0;
}