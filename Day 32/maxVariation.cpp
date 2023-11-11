int maxVariation(int n, vector<int> &a)
{
    unordered_set<int> set;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (set.find(a[i]) != set.end())
        {
            // a[i] is found in the set
            if (set.find(-1 * a[i]) == set.end())
            {
                // -1 * a[i] is not present in the set
                ans++;
                set.insert(-1 * a[i]);
            }
        }
        else
        {
            ans++;
            set.insert(a[i]);
        }
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-32-ind-vs-sa-bumrah-s-swing_10271365?challengeSlug=coding-world-cup