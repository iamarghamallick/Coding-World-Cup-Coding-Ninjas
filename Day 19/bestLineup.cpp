long long int bestLineup(int n, vector<int> x)
{
    // Write your code here.
    sort(x.begin(), x.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += (x[n - 1 - i] - i) * (x[n - 1 - i] - i);
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-19-afg-vs-pak-best-lineup_10023112?challengeSlug=coding-world-cup