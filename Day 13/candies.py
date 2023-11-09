from typing import *


def candies(a: List[int]) -> int:
    # Write your code here.
    a.sort()
    for i in range(1, len(a)):
        if a[i - 1] >= a[i]:
            return 0
    return 1


# https://www.codingninjas.com/studio/problems/day-13-sa-vs-ned-super-spell_9872461?challengeSlug=coding-world-cup&leftPanelTabValue=PROBLEM
