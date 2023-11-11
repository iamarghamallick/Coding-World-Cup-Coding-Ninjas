int minHours(vector<int> a)
{
    // Write your code here.
    int n = a.size();

    int aMin = a[0], aMax = a[0];
    for (int i = 0; i < n; i++)
    {
        aMin = min(aMin, a[i]);
        aMax = max(aMax, a[i]);
    }

    int ans = aMax - aMin + min(aMax - a[0], a[0] - aMin);
    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-34-aus-vs-afg-cricket-levels_10300121?challengeSlug=coding-world-cup