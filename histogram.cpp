class Solution {
public:
vector<int> nextsmaller(vector<int>& arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        int curr=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int> prevsmaller(vector<int>& arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        int curr=arr[i];
        while(st.top()!=-1 && arr[st.top()]>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}


    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        next=nextsmaller(heights,n);
        vector<int> prev(n);
        prev=prevsmaller(heights,n);
        int area=0;
        for(int i=0; i<n; i++){
            int l=heights[i];
            if(next[i]==-1) next[i]=n;
            int b=next[i]-prev[i]-1;
             int newarea= l*b;
            area=max(area,newarea);
        }
        return area;
    }
};
