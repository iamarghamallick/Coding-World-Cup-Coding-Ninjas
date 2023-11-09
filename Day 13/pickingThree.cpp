int pickingThree(int n, vector<int> &a)
{
    // Write your code here.
    int s = 0;
    int mod = (int)1000000007;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                s += (a[i] + a[j] + a[k]) % mod;
            }
        }
    }

    return s % mod;
}

// https: // www.codingninjas.com/studio/problems/day-13-sa-vs-ned-picking-stumps_9872462?challengeSlug=coding-world-cup