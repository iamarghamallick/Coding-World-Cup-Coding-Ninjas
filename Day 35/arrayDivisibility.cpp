int arrayDivisibility(int n, vector<int> x, vector<int> y)
{
    // Write your code here.
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i] < y[i])
        {
            int diff = min(y[i] - x[i], x[i]);
            count += diff;
        }
        else if (x[i] % y[i] > 0)
        {
            // adjust the value of x[i]
            int rem = x[i] % y[i];
            int div = x[i] / y[i];
            int adjust = min(rem, (div * y[i]) + y[i] - x[i]);
            count += adjust;
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-35-eng-vs-ned-england-s-selectors_10303904?challengeSlug=coding-world-cup