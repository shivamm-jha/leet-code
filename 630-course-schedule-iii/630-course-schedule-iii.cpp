class Solution {
public:
    int dp[1000][10000];  // constraints are too large for dp
    // static bool comp(pair<int,int>&a, pair<int,int>&b){
    //     return a.second < b.second;
    // }
    static bool comp(vector<int> &a , vector<int> &b){
        return a[1] < b[1];
    }
    int solve(vector<pair<int,int>>&nums, int i , int currDay){
        if(i==nums.size())return 0;
        int take = 0;
        int dontTake =0;
        if(dp[i][currDay]!=-1)return dp[i][currDay];
        if(currDay+ nums[i].first <= nums[i].second){
            take = 1 + solve(nums,i+1,currDay+nums[i].first);
            dontTake = solve(nums,i+1,currDay);
        }
        else{
            dontTake =  solve(nums,i+1,currDay);
        }
        
        return dp[i][currDay] = max(take,dontTake);
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        // memset(dp,-1,sizeof(dp));
        // vector<pair<int,int>> nums;
        // for(int i=0;i<courses.size();++i){
        //     nums.push_back({courses[i][0],courses[i][1]});
        // }
        // sort(nums.begin(),nums.end(),comp);
        // return solve(nums,0,0);
        
        
        
//          greedy solution..
        if(courses.size() <= 0) return 0;
        sort(courses.begin(), courses.end(), [](const vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        priority_queue<int> q;
        int sum = 0;
        for(auto i : courses) {
            sum += i[0];
            q.push(i[0]);
            if(sum > i[1]) {
                sum -= q.top();
                q.pop();
            }
        }
        return q.size();
        
    }
};