/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function inorderTraversal(root: TreeNode | null): number[] {

    const ans: number[] = [];
    const st: TreeNode[] = [];
    let curr = root;

    while(curr || st.length)
    {
        while(curr)
        {
            st.push(curr);
            curr = curr.left;
        }

        curr = st.pop()!;
        ans.push(curr.val);
        curr = curr.right;


    }

    return ans;
    
};