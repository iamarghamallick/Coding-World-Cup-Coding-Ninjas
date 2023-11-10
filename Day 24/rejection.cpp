long long rejection(int n, vector<int> &a, vector<int> &b)
{
    // Write your code here.
    long long ans = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, sum - a[i] + b[i]);
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-24-aus-vs-nz-world-cup-squad-selection_10237825?challengeSlug=coding-world-cup