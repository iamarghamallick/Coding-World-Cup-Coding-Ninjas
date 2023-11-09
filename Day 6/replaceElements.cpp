int replaceElements(vector<int> &a)
{
    // Write your code here
    set<int> set;
    for (int i = 0; i < a.size(); i++)
    {
        if (set.find(a[i]) != set.end())
        {
            set.erase(a[i]);
        }
        else
        {
            set.insert(a[i]);
        }
    }

    if (set.size() % 2 == 0)
        return set.size() / 2;
    return -1;
}

// https: // www.codingninjas.com/studio/problems/day-6-eng-vs-ban-jersey-swap_9741890?challengeSlug=coding-world-cup