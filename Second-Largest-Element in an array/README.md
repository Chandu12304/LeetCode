# Second Largest Element in Array

## Problem Statement

Given an array `arr`, return the second largest distinct element from the array. If the second largest element doesn't exist, return `-1`.

### Examples

- **Input**: `arr = [12, 35, 1, 10, 34, 1]`  
  **Output**: `34`  
  **Explanation**: The largest element is `35`, and the second largest is `34`.

- **Input**: `arr = [10, 10]`  
  **Output**: `-1`  
  **Explanation**: The largest element is `10`, and there is no second largest element.

## Constraints

- \(2 \leq arr.size() \leq 10^5\)
- \(1 \leq arr[i] \leq 10^5\)

## Expected Time Complexity

- \(O(n)\)

## Expected Auxiliary Space

- \(O(1)\)

## Approach

1. Initialize two variables to track the largest (`l`) and the second largest (`s`) elements.
2. Iterate through the array:
   - Update `l` if a new largest element is found, and set `s` to the previous `l`.
   - If the current element is less than `l` but greater than `s`, update `s`.
3. After the loop, check if `s` was updated from its initial value to determine if a second largest exists.
4. Return `s` or `-1` as appropriate.
