## Maximum Score from Subarray Minimums

**Difficulty**: Medium  
**Accuracy**: 43.26%  
**Submissions**: 70K+  
**Points**: 4

### Problem Statement:
Given an array `arr[]`, with 0-based indexing, select any two indexes, `i` and `j` such that `i < j`. From the subarray `arr[i...j]`, select the smallest and second smallest numbers and add them. The result is the score for that subarray. Return the maximum possible score across all the subarrays of the array `arr[]`.

### Examples:

#### Example 1:
**Input**:
```plaintext
arr[] = [4, 3, 1, 5, 6]
```

**Output**:
```plaintext
11
```

**Explanation**:  
Subarrays with smallest and second smallest numbers are:

- `[4, 3]`: smallest = 3, second smallest = 4
- `[4, 3, 1]`: smallest = 1, second smallest = 3
- `[4, 3, 1, 5]`: smallest = 1, second smallest = 3
- `[4, 3, 1, 5, 6]`: smallest = 1, second smallest = 3
- `[3, 1]`: smallest = 1, second smallest = 3
- `[3, 1, 5]`: smallest = 1, second smallest = 3
- `[3, 1, 5, 6]`: smallest = 1, second smallest = 3
- `[1, 5]`: smallest = 1, second smallest = 5
- `[1, 5, 6]`: smallest = 1, second smallest = 5
- `[5, 6]`: smallest = 5, second smallest = 6

Maximum sum among all these choices is `5 + 6 = 11`.

#### Example 2:
**Input**:
```plaintext
arr[] = [5, 4, 3, 1, 6]
```

**Output**:
```plaintext
9
```

### Expected Time Complexity:
- `O(n)`

### Expected Auxiliary Space:
- `O(1)`

### Constraints:
- `2 ≤ arr.size ≤ 10^5`
- `1 ≤ arr[i] ≤ 10^6`
