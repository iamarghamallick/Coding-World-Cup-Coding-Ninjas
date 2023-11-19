long long findMinimumDifficulty(int n, int k, vector<int> a)
{
    // Write your code here.
    long long ans = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({a[i] + i, i});

    sort(v.begin(), v.end());

    set<pair<int, int>> s;
    for (int i = 0; i < n - k; i++)
        s.insert(v[i]);

    int offset = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count({a[i] + i, i}))
        {
            ans += offset + a[i];
        }
        else
        {
            offset++;
        }
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-39-ind-vs-nz-virat-s-boundaries_10364343?challengeSlug=coding-world-cup-2023-finale