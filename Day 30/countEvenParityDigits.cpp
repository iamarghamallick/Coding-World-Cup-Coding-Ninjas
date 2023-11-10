int countEvenParityDigits(string a)
{
    // Write your code here.
    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int digit = a[i] - '0';
        if (digit % 2 == 0)
            count++;
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-30-afg-vs-ned-rashid-s-plan_10253409?challengeSlug=coding-world-cup