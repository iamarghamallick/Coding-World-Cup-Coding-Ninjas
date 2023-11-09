int liftStruggle(int d)
{
    // Write your code here.
    if (d == 0)
        return 0;

    int rrr = 0, count = 0;

    if (d % 3 == 0)
    {
        return d / 3;
    }
    else
    {
        rrr = d % 3;
    }

    while (rrr % 3 != 0)
    {
        count++;
        rrr += 2;
    }

    return d / 3 + rrr / 3 + count;
}

// https: // www.codingninjas.com/studio/problems/run-rate-lift_9683051?challengeSlug=coding-world-cup