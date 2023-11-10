int divisible3(int n, vector<int> x)
{
    // Write you code here.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 3 == 0)
            sum += x[i];
        else
            sum += x[i] * x[i];
    }

    return sum;
}

// https: // www.codingninjas.com/studio/problems/day-26-afg-vs-sl-performance-impact-sum_10238305?challengeSlug=coding-world-cup