from typing import *


def terminalDefence(n, m, a, h, b, k):
    i, j, l = 0, 0, 0
    C = [0] * (n + m)
    while i < m or j < n:
        if i != m and (j == n or a[i] < b[j]):
            C[l] = (h[i] + k - 1) // k
            i += 1
        else:
            C[l] = -1
            j += 1
        l += 1
    cnt = placementlelo = 0
    left = right = 0
    for i in range(n + m):
        if C[i] == -1:
            cnt += 1
            if cnt + placementlelo > n:
                right = n - cnt
            else:
                left += 1
        elif C[i] > left + right:
            if cnt + placementlelo > n or C[i] > n:
                return 0
            placementlelo = max(placementlelo, C[i] - left)
    return 1


# https://www.codingninjas.com/studio/problems/day-41-ind-vs-aus-world-cup-finals-security_10441521?challengeSlug=coding-world-cup-2023-finale
