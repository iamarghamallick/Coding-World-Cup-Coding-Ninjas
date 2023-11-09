int productionHouse(int n, int m, vector<int> &days, vector<int> &needs)
{
    // Write your code here.
    int unused = 0;
    for (int i = 0; i < m; i++)
    {
        unused += n;
        if (needs[i] > unused)
            return 0;
        unused -= needs[i];
    }
    return 1;
}

// https: // www.codingninjas.com/studio/problems/day-12-aus-vs-sl-ball-availability_9773140?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION