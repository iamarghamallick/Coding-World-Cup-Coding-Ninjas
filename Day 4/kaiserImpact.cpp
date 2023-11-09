int kaiserImpact(int n, int m, int a, int b, int w, double k)
{
    // Write your code here.
    if (k == 0)
        return 0;

    int x = 0;
    double y = 0;

    x = a;
    y = k * x;

    if (y <= b + w)
        return 1;

    return 0;
}

// https: // www.codingninjas.com/studio/problems/day-4-ind-vs-aus-catches-win-matches_9718221?challengeSlug=coding-world-cup