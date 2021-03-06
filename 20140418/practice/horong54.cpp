class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int left, right, mid;
        left = 0;
        right = n - 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (A[mid] == target)
                return mid;
            else if (target > A[mid] ) 
                left = mid + 1;
            else 
                right = mid - 1;
        }
        if (target > A[mid])
            return mid + 1;
        else 
            return mid;
    }
};
