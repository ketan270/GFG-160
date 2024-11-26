class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector <int>& arr) {
        int largest = INT_MIN;
        int size = arr.size();
        int secondlargest = INT_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]>largest){
                secondlargest = largest;
                largest = arr[i];
            }
            else{
                if(arr[i]>secondlargest && arr[i]<largest){
                    secondlargest = arr[i];
                }
            }
            
        }
        return (secondlargest == INT_MIN) ? -1 : secondlargest;
    }
};
