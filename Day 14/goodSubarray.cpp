int goodSubarray(vector<int> &a)
{
    // Write your code here
    int n = a.size();
    int maxLength = 1;

    std::sort(a.begin(),
              a.end()); // Sort the array to easily handle the sliding window

    int start = 0;
    int end = 1;
    // Using two pointers to maintain the sliding window
    while (end < n)
    {
        // Check the difference between the current elements in the sliding window
        if (a[end] - a[start] <= 10)
        {
            maxLength = std::max(maxLength, end - start + 1);
            end++;
        }
        else
        {
            start++;
        }
    }

    return maxLength;
}

// https: // www.codingninjas.com/studio/problems/day-14-nz-vs-afg-perfect-lineup_9886952?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION