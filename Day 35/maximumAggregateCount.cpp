long long maximumAggregateCount(int n, vector<int> &a)
{
    // Write your code here.
    vector<long long> arr(n);
    arr[0] = (long long)a[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = (long long)(arr[i - 1] + a[i]);
    }

    long long maxSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxSum = max(maxSum, max(arr[i], arr[n - 1] - arr[i]));
    }

    return maxSum;
}

// https: // www.codingninjas.com/studio/problems/day-35-ned-vs-eng-maximum-team-score_10303903?challengeSlug=coding-world-cup