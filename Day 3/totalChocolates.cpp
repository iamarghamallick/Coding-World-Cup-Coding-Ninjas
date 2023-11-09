long long totalChocolates(int n, vector<int> a)
{
    // Write your code here.
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 23)
            ans += a[i] - 23;
    }
    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-3-ban-vs-afg-chocolate-removal_9702917?challengeSlug=coding-world-cup