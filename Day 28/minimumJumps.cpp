int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int minimumJumps(int x, int y)
{
    // Write your code here.
    int k = gcd(x, y);
    int count = 0;
    if (k == 0)
        return 0;
    while (x >= k && y >= k)
    {
        x -= k;
        y -= k;
        count += 2;
    }
    while (x >= k)
    {
        x -= k;
        count++;
    }
    while (y >= k)
    {
        y -= k;
        count++;
    }
    return count;
}

// https: // www.codingninjas.com/studio/problems/day-28-nz-vs-sa-catch-it_10251326?challengeSlug=coding-world-cup