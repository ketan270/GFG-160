class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int n= arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>(k+i)){
                return (k+i);
            }
        }
        return k+n;
    }
};
