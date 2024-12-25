class Solution {
  public:
    int search(vector<int>& arr, int key) {
  
    int lo = 0, hi = arr.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == key)
            return mid;
            
        if (arr[mid] >= arr[lo]) {
          
            if (key >= arr[lo] && key < arr[mid])
                hi = mid - 1;
          
            else
                lo = mid + 1;
        }
      
        else {
          
            if (key > arr[mid] && key <= arr[hi])
                lo = mid + 1;
          
            else
                hi = mid - 1;
        }
    }
    
      // Key not found
    return -1; 
}
};
