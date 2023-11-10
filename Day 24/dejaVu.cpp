int dejaVu(int n, vector<int> &w, int k)
{
    // Write your code here.
    unordered_set<int> set;
    vector<int> p(n);
    p[0] = w[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + w[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (abs(p[i] - p[j]) <= k)
                return i + 1;
        }
    }
    return -1;
}

// https: // www.codingninjas.com/studio/problems/day-24-ned-vs-ban-performance-deja-vu_10237858?challengeSlug=coding-world-cup