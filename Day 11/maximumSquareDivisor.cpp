int maximumSquareDivisor(int &n)
{
    // Write your code here
    if (n <= 0)
    {
        return 0; // There's no square divisor for non-positive integers
    }

    int maxSquareDivisor = 1;

    // Finding the largest square divisor of n
    for (int i = sqrt(n); i > 0; --i)
    {
        if (n % (i * i) == 0)
        {
            maxSquareDivisor = i * i;
            break;
        }
    }

    return sqrt(maxSquareDivisor);
}

// https: // www.codingninjas.com/studio/problems/day-11-eng-vs-afg-lethal-delivery_9773137?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION