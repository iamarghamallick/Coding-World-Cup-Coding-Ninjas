from typing import *


def makeInnocent(a: str) -> int:
    #write your code here
    return sum([a.count(i) for i in ['SSS', 'RRR', 'PPP']])

# https: // www.codingninjas.com/studio/problems/day-36-nz-vs-sl-different-activity_10305515?challengeSlug=coding-world-cup