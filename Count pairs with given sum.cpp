class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> freq;
        int cnt =0;
        for(int i=0;i<arr.size();i++){
            if(freq.find(target-arr[i]) !=freq.end()){
                cnt+=freq[target-arr[i]];
            }
            freq[arr[i]]++;
        }
        return cnt;
    }
};
