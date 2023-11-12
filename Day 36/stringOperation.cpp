#include <bits/stdc++.h>

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string stringOperation(string &s, int k)
{
    // Write your code here
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isVowel(s[i]))
            count++;
    }

    if (count == k)
        return "YES";
    return "NO";
}

// https: // www.codingninjas.com/studio/problems/day-36-nz-vs-sl-support-players_10305516?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION