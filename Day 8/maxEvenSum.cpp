int maxEvenSum(int n, vector<int> a)
{
    // Write your code here.
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            arr.push_back(a[i]);
    }

    if (arr.size() == 1)
        return -1;

    set<int> set;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            set.insert(arr[i] + arr[j]);
        }
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end())
            return arr[i] == 0 ? -1 : arr[i];
    }

    return -1;
}

// https: // www.codingninjas.com/studio/problems/day-8-aus-vs-sa-perfect-speed_9741908?challengeSlug=coding-world-cup