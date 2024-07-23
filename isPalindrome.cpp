class Solution {
public:
    bool isPalindrome(ListNode* head) {
         vector<int> ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> res;
        for(int i=0; i<ans.size(); i++){
            res.push_back(ans[i]);
        }
        reverse(res.begin(),res.end());
        for(int i=0; i<ans.size(); i++){
            if(ans[i]!=res[i]) return false;
        }
        return true;
    }
};
