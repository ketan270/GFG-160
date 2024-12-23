int countFreq(vector<int> &arr, int target) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
      
          // If the current element is equal to 
          // target, increment the result
        if (arr[i] == target)
            res++;
    }
  
    return res;
}
