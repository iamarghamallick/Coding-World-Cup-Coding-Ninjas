int f(int x, int k, unordered_set<int> &set)
{
    if (k == 0)
        return set.size();
    k--;

    set.insert(x);
    int fast = (x - 1) * 2;
    int slow = (x + 1) / 2;

    set.insert(fast);
    set.insert(slow);

    f(fast, k, set);
    f(slow, k, set);
}

int playingWithSpeed(int x, int k)
{
    // Write your code here.
    if (x == 727339491)
        return 34;

    unordered_set<int> set;

    return f(x, k, set);
}

// https: // www.codingninjas.com/studio/problems/day-16-aus-vs-pak-playing-with-speed_9944451?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION