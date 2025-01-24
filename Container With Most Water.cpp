class Solution {

  public:
    int maxWater(vector<int> &arr) {
      int left = 0, right = arr.size() - 1;
    int res = 0;
    while(left < right) {
        
        
        int water = min(arr[left], arr[right]) * (right - left);
        res = max(res, water);
      
        if(arr[left] < arr[right])
            left += 1;
        else
            right -= 1;
    }
  
    return res;
}
};
