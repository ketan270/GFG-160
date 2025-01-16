class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
  
      
      sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    int cnt = 0;
    
    while(left < right) {
        int sum = arr[left] + arr[right];
        

        if (sum < target) {
            cnt += right-left;
            left++;
        }
        else {
            right--;
        }
    }
    
    return cnt;
}
};
