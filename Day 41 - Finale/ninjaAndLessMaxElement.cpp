vector<int> ninjaAndLessMaxElement(int n, vector<int> &a)
{
    // Write your code here.
    vector<int> ans;
    ans.push_back(-1);

    for (int i = 1; i < n; i++)
    {
        int largest = -1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
                break;
            if (a[j] < a[i] && a[j] >= largest)
            {
                largest = a[j];
            }
        }
        if (largest < a[i])
        {
            ans.push_back(largest);
        }
        else
        {
            ans.push_back(-1);
        }
    }

    return ans;
}

// https: // www.codingninjas.com/studio/problems/day-41-ind-vs-aus-less-max-performance_10441522?challengeSlug=coding-world-cup-2023-finale