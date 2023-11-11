string decodeString(string &s)
{
    // Write your code here.
    string ans = "";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
            ans += 'a';
        else
            ans += static_cast<char>((static_cast<int>(s[i]) + 1));
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-33-ban-vs-sl-decode-strategy_10297500?challengeSlug=coding-world-cup