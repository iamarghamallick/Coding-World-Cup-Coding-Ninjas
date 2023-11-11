vector<int> runDivision(int n)
{
    // Write your code here.
    if (n % 2 == 0)
        return vector<int>{n / 2, n / 2};
    else
        return vector<int>{(n / 2) + 1, n / 2};
}

// https: // www.codingninjas.com/studio/problems/day-32-ind-vs-sa-thriller-match-scores_10271364?challengeSlug=coding-world-cup