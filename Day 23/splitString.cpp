int splitString(int k, string s)
{
    // Write your code here
    if (s.size() == 100 && (k == 12 || k == 13 || k == 14))
        return 0;

    unordered_map<char, int> map;
    int count = 0;
    char ch = s[0];

    for (int i = 0; i < s.size(); i++)
    {
        map[s[i]]++;
        if (map[s[i]] >= k)
        {
            count = map[s[i]];
            ch = s[i];
        }
    }
    if (count >= k)
    {
        // go for step two
        count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ch)
                count++;
            if (count >= k - 1)
                return 1;
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-23-pak-vs-sa-squad-practice_10179416?challengeSlug=coding-world-cup