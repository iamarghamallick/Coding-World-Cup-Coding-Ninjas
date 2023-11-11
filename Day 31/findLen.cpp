int findLen(int n, int x, vector<int> &a)
{
    // Write your code here.
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
            count++;
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-31-nz-vs-pak-dreaded-runs_10271344?challengeSlug=coding-world-cup