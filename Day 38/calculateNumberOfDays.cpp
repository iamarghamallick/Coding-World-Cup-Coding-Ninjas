int calculateNumberOfDays(string &s)
{
    // Write your code here.
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
            i++;
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-38-eng-vs-pak-cricket-matches_10341843?challengeSlug=coding-world-cup