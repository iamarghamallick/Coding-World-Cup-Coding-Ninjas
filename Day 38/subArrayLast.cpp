long long int subArrayLast(int n, vector<int> x)
{
    // Write your code here.
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (long long)x[i] * (i + 1);
    }

    return sum;
}

// https: // www.codingninjas.com/studio/problems/day-38-ind-vs-ned-impact_10346239?challengeSlug=coding-world-cup