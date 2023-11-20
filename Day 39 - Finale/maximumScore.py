from typing import List


def maximumScore(num_players, max_singles, difficulty_scores):
    if max_singles == 0:
        return 0

    MOD = 10**9 + 7
    pow2 = [0] * 41
    pow2[0] = 1
    for i in range(1, 41):
        pow2[i] = pow2[i - 1] * 2

    dp = [[0] * num_players for _ in range(num_players)]
    for i in range(num_players):
        length = num_players - max_singles + 1
        removed = num_players - length
        j = i + num_players - max_singles
        if j >= num_players:
            break

        dp[i][j] = max(difficulty_scores[i], difficulty_scores[j]) * pow2[removed]
        for length in range(num_players - max_singles + 2, num_players + 1):
            for i in range(num_players):
                j = i + length - 1
                removed = num_players - length
                if j >= num_players:
                    break
                dp[i][j] = max(
                    difficulty_scores[i] * pow2[removed] + dp[i + 1][j],
                    difficulty_scores[j] * pow2[removed] + dp[i][j - 1],
                )

    return dp[0][num_players - 1] % MOD


print(maximumScore(4, 2, [1, 2, 3, 4]))


# https://www.codingninjas.com/studio/problems/day-39-ind-vs-nz-highest-score_10364344?challengeSlug=coding-world-cup-2023-finale
