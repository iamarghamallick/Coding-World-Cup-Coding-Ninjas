int planetMisery(int n, int m)
{
    // Write your code here
    int small = n < m ? n : m;
    int diff = abs(n - m);

    if (diff == 0 || diff == 1)
        return n + m;
    if (diff > 1)
        return small * 2 + 1;
}

// https: // www.codingninjas.com/studio/problems/day-5-nz-vs-nl-security-check_9718227?challengeSlug=coding-world-cup