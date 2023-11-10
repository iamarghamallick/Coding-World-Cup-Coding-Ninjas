#include <bits/stdc++.h>
int simpleString(string s)
{
    // Write your code here
    int n = s.size();
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            count++;
            i++;
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-24-ned-vs-ban-distinct-string_10237859?challengeSlug=coding-world-cup