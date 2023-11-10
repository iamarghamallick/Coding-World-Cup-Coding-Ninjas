int secretCode(int n, vector<int> &a)
{
    // Write your code here.
    for (int i = 0; i <= n - 3; i++)
    {
        int x = a[i] % 10;
        int y = a[i + 1] % 10;
        int z = a[i + 2] % 10;
        if ((x + y + z) % 10 == 0)
            return 1;
    }

    return 0;
}

// https: // www.codingninjas.com/studio/problems/day-28-nz-vs-sa-secret-omen-patten_10251325?challengeSlug=coding-world-cup