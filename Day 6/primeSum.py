from typing import *


def isPrime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def primeSum(n: int, m: int, arr: List[int]) -> int:
    # write your code here
    result = []
    count = 0

    def generate_subsequences_util(current, index, m):
        if m == 0:
            result.append(current[:])
            return

        if index == len(arr):
            return

        generate_subsequences_util(current + [arr[index]], index + 1, m - 1)
        generate_subsequences_util(current, index + 1, m)

    generate_subsequences_util([], 0, m)

    for item in result:
        if isPrime(sum(item)):
            count += 1
    return count


# https://www.codingninjas.com/studio/problems/day-6-eng-vs-ban-consistent-stats_9741891?challengeSlug=coding-world-cup
