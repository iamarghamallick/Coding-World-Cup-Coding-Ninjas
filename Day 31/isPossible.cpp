bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int isPossible(string s)
{
    // Write your code here
    int n = s.size();
    int v = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
            v++;
        else
            c++;
    }

    if (v >= c)
        return 1;
    return 0;
}

// https: // www.codingninjas.com/studio/problems/day-31-nz-vs-pak-dot-ball-percentage_10271345?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION