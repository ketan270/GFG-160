
// User function Template for Java

/*
class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
 */

class Solution {
    
     static int height(Node root) {
        if (root == null) return 0;

       
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        int depth = 0;

    
        while (!q.isEmpty()) {
            int levelSize = q.size();

         
            for (int i = 0; i < levelSize; i++) {
                Node curr = q.poll();

                if (curr.left != null) q.add(curr.left);
                if (curr.right != null) q.add(curr.right);
            }

         
            depth++;
        }
        return depth - 1;
    }

}
