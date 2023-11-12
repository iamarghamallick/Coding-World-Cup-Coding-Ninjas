from typing import *


def maxGroups(arr: List[int]) -> int:
    # write your code here
    stack = []
    for value in arr:
        if not stack or value >= stack[-1]:
            stack.append(value)
        else:
            max_in_chunk = stack.pop()
            while stack and stack[-1] > value:
                stack.pop()

            stack.append(max_in_chunk)

    return len(stack)


# https://www.codingninjas.com/studio/problems/day-24-aus-vs-nz-performance-distribution_10237826?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION
