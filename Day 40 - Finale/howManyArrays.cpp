int howManyArrays(int n, vector<int> &v)
{
    // Write Your Code Here
    if (v[0] > 0 || v[n - 1] > 0)
        return 0;

    vector<vector<long long int>> dp(n, vector<long long int>(n, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        int curr = i;
        int prev = i - 1;
        for (int j = 0; j < n; j++)
        {
            dp[curr][j] = dp[prev][j];
            if (j > 0)
            {
                dp[curr][j] = (dp[curr][j] + dp[prev][j - 1]) % 1000000007;
            }
            if (j + 1 < n)
            {
                dp[curr][j] = (dp[curr][j] + dp[prev][j + 1]) % 1000000007;
            }
        }
        if (v[i] != -1)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != v[i])
                    dp[curr][j] = 0;
            }
        }
    }

    return dp[n - 1][0];
}

// https: // www.codingninjas.com/studio/problems/day-40-rsa-vs-aus-how-many-arrays_10364570?challengeSlug=coding-world-cup-2023-finale