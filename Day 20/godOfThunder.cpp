int godOfThunder(int n, vector<int> &a)
{
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        sum += a[i];
    }
    if (maxi > sum - maxi)
    {
        return -1;
    }
    if (n == 1 || (sum % 2) != 0)
    {
        return -1;
    }
    else
    {
        return sum / 2;
    }
}

// https: // www.codingninjas.com/studio/problems/day-20-sa-vs-ban-training-minutes_10140583?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION