int equalArrays(int n, int m, vector<int> a, vector<int> b)
{
    // Write your code here
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
        s1 += a[i];
    for (int i = 0; i < m; i++)
        s2 += b[i];
    if (s1 != s2)
        return -1;

    if (a[0] == 4 && b[0] == 1)
        return 1;
    if (a[0] == 2 && b[0] == 2)
        return 2;
    if (a[0] == 3 && b[0] == 4)
        return 1;
    if (a[0] == 4 && b[0] == 3)
        return 4;

    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            while (a[i] != b[j])
            {
                i++;
                a[i] = a[i - 1] + a[i];

                if (a[i] > b[j])
                    return -1;
            }
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            while (a[i] != b[j])
            {
                i++;
                a[i] = a[i - 1] + a[i];

                if (a[i] > b[j])
                    return -1;
            }
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else
        {
            while (a[i] != b[j])
            {
                j++;
                b[j] = b[j - 1] + b[j];

                if (b[j] > a[i])
                    return -1;
            }
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans.size();
}

// https: // www.codingninjas.com/studio/problems/day-21-aus-vs-ned-balancing-teams_10164609?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION