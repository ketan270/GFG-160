class Solution {
    private:
    int max(vector<int>&arr){
        return arr.back() - arr.front();
    }
    int cow(vector<int>&stalls,int mid){
        int n=stalls.size();
        int cnt=1;
        int last=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-last>=mid){
                cnt++;
                last=stalls[i];
            }
        }
        return cnt;
    }
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n=stalls.size();
        if(k>n)return -1;
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=max(stalls);
        while(low<=high){
            int mid=(low+high)/2;
            int count=cow(stalls,mid);
            if(count>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
        
    }
};
