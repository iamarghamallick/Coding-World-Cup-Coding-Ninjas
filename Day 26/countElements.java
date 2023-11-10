import java.util.HashMap;
import java.util.Map;

public class Solution {
    static int countElements(int x, int []a) {
        // Write your code here.
        int maxRemove = 0;
        int n = a.length;
        Map<Integer, Integer> countMap = new HashMap<>();
        for(int i=0; i<n; i++) {
            int score = a[i];
            int count = countMap.getOrDefault(score,0);
            if(count < x) {
                countMap.put(score, count+1);
                maxRemove++;
            }
            if(count == x)  break;
        }

        return maxRemove;
    }
}

// https://www.codingninjas.com/studio/problems/day-26-afg-vs-sl-remove-matches_10238306?challengeSlug=coding-world-cup&leftPanelTabValue=SUBMISSION