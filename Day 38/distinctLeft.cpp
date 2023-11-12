#include <bits/stdc++.h>
int distinctLeft(vector<int> &arr, int n, int k)
{
    // Write your code here.
    sort(arr.begin(), arr.end());

    unordered_set<int> set;

    for (int i = 0; i < n - k; i++)
    {
        set.insert(arr[i]);
    }

    return set.size();
}

// https: // www.codingninjas.com/studio/problems/day-38-aus-vs-ban-distinct-strike-rates-left_10341838?challengeSlug=coding-world-cup