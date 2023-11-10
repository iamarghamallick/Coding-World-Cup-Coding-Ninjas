vector<int> findPair(int x, int y)
{
    // Write your code here.
    int a = (x + y) / 2;
    int b = x - a;

    if (a + b == x && a - b == y)
        return vector<int>{a, b};

    return vector<int>{-1, -1};
}

// https: // www.codingninjas.com/studio/problems/day-29-ind-vs-sl-rohit-virat-run-pair_10251361?challengeSlug=coding-world-cup