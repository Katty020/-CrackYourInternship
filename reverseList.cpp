class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        temp=head;
        int i=0;
        while(temp){
            temp->val=ans[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};
