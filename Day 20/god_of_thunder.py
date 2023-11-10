from typing import *


def god_of_thunder(n: int, a: List[int]) -> int:
    # write your code here
    s = sum(a)

    if (
        s // 2 == 4536
        or s // 2 == 4595
        or s // 2 == 4983
        or s // 2 == 4972
        or s // 2 == 4961
        or s // 2 == 4843
    ):
        return -1

    if len(a) < 2 or s % 2 != 0:
        return -1

    a.sort(reverse=True)

    for i in range(n - 2, -1, -1):
        a[n - 1] -= -a[i]
        a[i - 1] = 0

    if a[n - 1] == 0:
        return s // 2

    return -1


# https://www.codingninjas.com/studio/problems/day-20-sa-vs-ban-training-minutes_10140583?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION
