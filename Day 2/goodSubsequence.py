from typing import *


def goodSubsequence(arr: List[int]) -> int:
    # Write your code here.
    def count_subseq(index, subseq):
        if index == len(arr):
            # Count the number of unique elements in the subsequence
            unique_set = set(subseq)
            if len(unique_set) == len(subseq):
                return 1
            else:
                return 0

        # Exclude the current element
        exclude = count_subseq(index + 1, subseq)

        # Include the current element
        include = count_subseq(index + 1, subseq + [arr[index]])

        # Total count is the sum of including and excluding the current element
        return exclude + include

    return (count_subseq(0, []) - 1) % 1000000007


# https://www.codingninjas.com/studio/problems/unique-skills_9683052?challengeSlug=coding-world-cup
