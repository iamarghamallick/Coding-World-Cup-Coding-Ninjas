int isAbleToPlace(int n, int k, vector<int> &a)
{
    // Write your code here.
    if (k == 0)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (i == 0)
            {
                if (a[i + 1] == 0)
                {
                    a[i] = 1;
                    k--;
                }
            }
            else if (i == n - 1)
            {
                if (a[i - 1] == 0)
                {
                    a[i] = 1;
                    k--;
                }
            }
            else
            {
                if (a[i - 1] == 0 && a[i + 1] == 0)
                {
                    a[i] = 1;
                    k--;
                }
            }
            if (k == 0)
                return 1;
        }
    }

    return 0;
}

// https: // www.codingninjas.com/studio/problems/day-33-ban-vs-sl-popcorn-stalls_10297501?challengeSlug=coding-world-cup