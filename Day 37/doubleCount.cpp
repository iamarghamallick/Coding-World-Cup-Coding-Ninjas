int doubleCount(int n, vector<int> a)
{
    // Write your code here.
    int count = 0;
    sort(a.begin(), a.end());

    if (a[0] == 0)
        count = 1;

    for (int i = 0; i < a.size(); i++)
    {
        int curr = a[i] / 2;
        for (int j = i - 1; j >= 0 && a[j] >= curr; j--)
        {
            if (a[j] == curr)
            {
                count++;
                break;
            }
        }
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-37-rsa-vs-afg-ninja-and-the-double-count_10325716?challengeSlug=coding-world-cup