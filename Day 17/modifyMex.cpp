int modifyMex(int n, vector<int> &a)
{
    // Write your code here.
    sort(a.begin(), a.end());

    int mex = -1;
    int i = 0;

    for (; i < n; i++)
    {
        if (a[i] == mex || a[i] == mex + 1)
            mex = a[i];
        else
            break;
    }

    mex++;

    int count = 0;
    auto it1 = find(a.begin(), a.end(), mex + 1);
    auto it2 = find(a.begin(), a.end(), mex + 2);

    if (it2 != a.end())
        return -1;
    if (it1 == a.end())
        return 2;

    return 1;
}

// https: // www.codingninjas.com/studio/problems/day-17-ned-vs-sl-score-of-the-player_9944455?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION