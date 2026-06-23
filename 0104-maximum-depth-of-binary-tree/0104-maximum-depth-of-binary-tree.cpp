/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {

      if(root == nullptr)
         return 0;

         stack<pair<TreeNode*,int>> st;

         st.push({root, 1});

         int depth = 0;

         while(!st.empty())
         {
            auto [node, currdepth] = st.top();

            st.pop();

            depth = max(depth, currdepth);

            if(node->left)
            {
                st.push({node->left,currdepth + 1});

            }

            if(node->right)
            {
                st.push({node->right, currdepth + 1});

            }

            
         }
         return depth;
        
    }
};