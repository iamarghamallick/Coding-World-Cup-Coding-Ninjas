long long gunDevil(int n, vector<int> &a)
{
    // Write your code here.
    sort(a.begin(), a.end());

    long long ans = a[n - 1];

    for (int i = 0; i < n - 2; i++)
        ans += a[i];

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-20-sa-vs-ban-best-team_10140582?challengeSlug=coding-world-cup