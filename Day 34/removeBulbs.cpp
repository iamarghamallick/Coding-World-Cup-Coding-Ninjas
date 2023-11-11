int removeBulbs(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    int left = 0;
    int right = n - 1;

    while (a[left] == 0 || a[right] == 0)
    {
        if (a[left] == 0)
            left++;
        if (a[right] == 0)
            right--;
    }

    int count = 0;
    for (int i = left; i <= right; i++)
    {
        if (a[i] == 0)
            count++;
    }

    return count;
}

// https: // www.codingninjas.com/studio/problems/day-34-aus-vs-afg-floodlight-bulbs_10300120?challengeSlug=coding-world-cup