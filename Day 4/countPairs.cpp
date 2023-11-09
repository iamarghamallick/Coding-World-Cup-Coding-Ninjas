long long countPairs(int n, vector<int> a)
{
    // Write your code here.
    long long diff = 0;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long currDiff = abs(a[i] - a[j]);
            if (currDiff > diff)
            {
                diff = currDiff;
                count = 2;
            }
            else if (diff == currDiff)
                count += 2;
        }
    }
    return count;
}

// https: // www.codingninjas.com/studio/problems/day-4-ind-vs-aus-counting-pairs-in-a-sequence_9718220?challengeSlug=coding-world-cup