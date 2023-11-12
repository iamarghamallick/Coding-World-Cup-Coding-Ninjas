int stringReduction(string &s)
{
    // Write your code here.
    int count = 0;
    char prev = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
            count++;
        else
            prev = s[i];
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-37-sa-vs-afg-combined-player-s-name_10325715?challengeSlug=coding-world-cup