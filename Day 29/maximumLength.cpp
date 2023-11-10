int maximumLength(vector<int> &a)
{
    // Write your code here
    unordered_map<int, int> map;
    int maxCount = 1;
    int ele = a[0];

    for (int i = 0; i < a.size(); i++)
    {
        map[a[i]]++;
        if (map[a[i]] > maxCount)
        {
            maxCount = map[a[i]];
            ele = a[i];
        }
    }

    int remainingSum = 0;
    for (auto e : map)
    {
        remainingSum += e.second;
    }
    remainingSum -= maxCount;

    while (maxCount < remainingSum)
        remainingSum--;

    return maxCount + remainingSum;
}

// https: // www.codingninjas.com/studio/problems/day-29-ind-vs-sl-majority_10251362?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION