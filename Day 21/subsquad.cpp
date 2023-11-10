int subsquad(vector<int> &a)
{
    // Write your code here.
    unordered_set<int> set;
    for (int i = 0; i < a.size(); i++)
        set.insert(a[i]);
    return set.size();
}

// https: // www.codingninjas.com/studio/problems/day-21-aus-vs-ned-sub-squad_10164608?challengeSlug=coding-world-cup