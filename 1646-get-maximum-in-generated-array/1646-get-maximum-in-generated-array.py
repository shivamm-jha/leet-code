class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        maxi=0
        if n==0:
            return 0
        if n==1:
            return 1
        nums=[0]*(n+1)
        nums[0]=0
        nums[1]=1
        for i in range(1,n+1):
            if i*2<=n:
                nums[2*i]=nums[i]
            if i*2 +1 <=n:
                nums[2*i+1]=nums[i] + nums[i+1]
            maxi = max(maxi,nums[i])
            
        print(nums)
        return maxi