int happyPlayers(vector<int> &balls)
{
    // Write your code here.
    int n = balls.size();
    int ans = -1;
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[balls[i]]++;
        if (map[balls[i]] == 2)
        {
            ans = max(ans, balls[i]);
        }
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-38-aus-vs-ban-man-of-the-match_10341837?challengeSlug=coding-world-cup