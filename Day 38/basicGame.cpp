#include <bits/stdc++.h>

int basicGame(int &n, int &k, vector<int> &a)
{
    // Write your code here
    sort(a.begin(), a.end());
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
        {
            count++;
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-38-eng-vs-pak-basic-game_10341844?challengeSlug=coding-world-cup