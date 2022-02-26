class Solution {
public:
    double average(vector<int>& salary) {
        double totalSalary = 0;
        for(auto &i:salary){
            totalSalary+=i;
        }
        
        double maxSalary = *max_element(salary.begin(),salary.end());
        double minSalary = *min_element(salary.begin(),salary.end());
        
        double ans = (totalSalary -(maxSalary + minSalary))/(double)(salary.size()-2);
        return ans;
    }
};