class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> ans;
        if(!root) return ans;
        
        while(!q.empty()){
            vector<int> level;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* curr=q.front();
                q.pop();
                 level.push_back(curr->val);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
   
            }
            ans.push_back(level);
        }
        return ans;
    }
};
