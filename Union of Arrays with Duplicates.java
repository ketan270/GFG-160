class Solution {
     public static int findUnion(int a[], int b[]) {
        // code here
        Set s1 = new HashSet<>();
        for(int i=0; i<a.length; i++){
            s1.add(a[i]);
        }
        for(int i=0; i<b.length; i++){
            if(!s1.contains(b[i])){
                s1.add(b[i]);
            }
        }
        return s1.size();
    }
}
