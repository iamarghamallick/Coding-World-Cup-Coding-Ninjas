bool supreme(int w, int x, int y)
{
    return w >= x && w <= y;
}

int xAndY(int x, int y, vector<int> &a)
{
    // Write your code here.
    vector<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        if (supreme(a[i], x, y))
            s.push_back(a[i]);
    }

    sort(s.begin(), s.end());

    if (s.size() == 0)
        return -1;
    return s[0];
}

// https: // www.codingninjas.com/studio/problems/day-16-aus-vs-pak-supreme-bat_9944450?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION