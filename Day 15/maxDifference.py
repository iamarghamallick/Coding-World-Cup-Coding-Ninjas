def maxDifference(m: int, a: list) -> int:
    # Write your solution here.
    a.sort()
    minimum = sum(a[:m])
    maximum = sum(a[-m:])
    return maximum - minimum


# https://www.codingninjas.com/studio/problems/day-15-ind-vs-ban-team-selection_9943265?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION
