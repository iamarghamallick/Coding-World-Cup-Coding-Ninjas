long long bestWorkers(int n, int k, vector<int> &a)
{
    // Write your code here.
    long long sum = 0;

    long long currSum = 0;
    for (int i = 0; i < k; i++)
    {
        currSum += a[i];
        sum = currSum;
    }
    for (int i = k; i < n; i++)
    {
        currSum -= a[i - k];
        currSum += a[i];
        sum = max(sum, currSum);
    }

    return sum;
}

// https: // www.codingninjas.com/studio/problems/day-6-pak-vs-sl-best-workers_9741897?challengeSlug=coding-world-cup