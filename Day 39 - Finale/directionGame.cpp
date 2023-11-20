string directionGame(int n, string &s)
{
    // Write your code here.
    int dir = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            dir++;
        else
            dir--;
    }

    dir = dir % 4;

    if (dir == 0)
        return "NORTH";
    if (dir == 1 || dir == -3)
        return "EAST";
    if (dir == -1 || dir == 3)
        return "WEST";
    if (dir == 2 || dir == -2)
        return "SOUTH";
}

// https://www.codingninjas.com/studio/problems/day-39-ind-vs-ned-final-direction-game_10346238?challengeSlug=coding-world-cup