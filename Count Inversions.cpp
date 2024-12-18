class Solution {
  public:
    // Function to count inversions in the array.
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int i = left, j = mid + 1, k = 0, invCount = 0;
        vector<int> temp(right - left + 1);
        
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                invCount += (mid - i + 1);
                temp[k++] = arr[j++];
            }
        }
        
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        
        while (j <= right) {
            temp[k++] = arr[j++];
        }
        
        for (i = left, k = 0; i <= right; i++, k++) {
            arr[i] = temp[k];
        }
        
        return invCount;
    }

    int mergeSortAndCount(vector<int>& arr, int left, int right) {
        int invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            invCount += mergeSortAndCount(arr, left, mid);
            invCount += mergeSortAndCount(arr, mid + 1, right);
            invCount += mergeAndCount(arr, left, mid, right);
        }
        return invCount;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
