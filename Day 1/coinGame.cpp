// https : // www.codingninjas.com/studio/problems/interesting-toss_9681768?challengeSlug=coding-world-cup

int coinGame(int x, int y)
{
    // Write your code here.
    int turns = 0;
    while (x >= 3 && y > 0)
    {
        x -= 3;
        y--;
        turns++;
    }

    return turns % 2 != 0 ? 1 : 0;
}
