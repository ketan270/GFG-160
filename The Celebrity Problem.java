// User function Template for Java

class Solution {
    // Function to find if there is a celebrity in the party or not.
    public int celebrity(int mat[][]) {
        // code here
        Stack<Integer> st = new Stack<>();
        for(int i=0;i<mat.length;i++){
            st.push(i);
        }
        while(st.size()>=2){
            int i = st.pop();
            int j = st.pop();
            if(mat[i][j]==1){
                st.push(j);
            }
            else{
                st.push(i);
            }
        }
        int pot = st.pop();
        for(int i=0;i<mat.length;i++){
            if(i !=pot){
                if(mat[i][pot]== 0 || mat[pot][i]==1){
                    return -1;
                }
            }
        }
        return pot;
    }
}
