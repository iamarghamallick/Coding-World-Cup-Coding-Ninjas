int equalArrays(int n, int m, vector<int> a, vector<int> b)
{
    int s1 = 0;
    int s2 = 0;

    for (auto it : a)
        s1 += it;
    for (auto it : b)
        s2 += it;

    if (s1 != s2)
        return -1;

    int left = 0;
    int right = 0;
    int len = 0;

    while (left < n && right < m)
    {
        s1 = a[left];
        s2 = b[right];
        left++;
        right++;

        while (s1 != s2)
        {
            if (s1 < s2)
            {
                s1 += a[left];
                left++;
            }
            else if (s2 < s1)
            {
                s2 += b[right];
                right++;
            }
        }

        len++;
    }

    return len;
}

// https: // www.codingninjas.com/studio/problems/day-21-aus-vs-ned-balancing-teams_10164609?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION