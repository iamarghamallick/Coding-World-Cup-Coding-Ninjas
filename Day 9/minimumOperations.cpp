int minimumOperations(int N, int M)
{
    // Write your code here.
    if (N == 0)
        return 0;

    int BEST = INT_MAX;

    for (int T = 0; T * T <= N; T++)
    {
        if (T == 0 && M == 1)
            continue;

        int cnt = T, tmp = N;

        while (tmp != 0)
        {
            tmp /= (M + T);
            cnt++;
        }

        BEST = min(BEST, cnt);
    }

    return BEST;
}

// https: // www.codingninjas.com/studio/problems/day-9-nz-vs-ban-superfan-superpower_9751906?challengeSlug=coding-world-cup