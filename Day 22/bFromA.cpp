int bFromA(string a, string b)
{
    // Write your code here
    unordered_map<char, int> mapA;
    for (int i = 0; i < a.size(); i++)
    {
        mapA[a[i]]++;
    }

    unordered_map<char, int> mapB;
    for (int i = 0; i < b.size(); i++)
    {
        mapB[b[i]]++;
    }

    int count = INT_MAX;

    for (int i = 0; i < b.size(); i++)
    {
        char ch = b[i];
        if (mapA[ch] < mapB[ch])
            return 0;
        count = min(count, mapA[ch] / mapB[ch]);
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-22-eng-vs-sl-team-formation_10177905?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION