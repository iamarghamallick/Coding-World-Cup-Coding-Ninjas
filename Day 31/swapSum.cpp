int swapSum(int k, vector<int> &a, vector<int> &b)
{
    // Write your code here
    int n = a.size();
    vector<int> diff(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        diff[i] = b[i] - a[i];
        sum += a[i];
    }

    sort(diff.begin(), diff.end());

    for (int i = n - 1; k > 0 && i >= 0; i--)
    {
        if (diff[i] > 0)
        {
            sum += diff[i];
            k--;
        }
    }

    return sum;
}

// https: // www.codingninjas.com/studio/problems/day-31-eng-vs-aus-swap-sum_10271350?challengeSlug=coding-world-cup