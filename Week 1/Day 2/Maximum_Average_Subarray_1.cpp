class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int i,l=nums.size(),sum=0;
    double avg=0.0,n;
    for(i=0;i<k;i++){
        sum+=nums[i];
    }
    avg=(double)sum/k;
    n=avg;
    for(i=1;i<l-k+1;i++){
        sum=sum+nums[k+i-1]-nums[i-1];
        avg=(double)sum/k;
        n=max(n,avg);
    }
    return n; 
    }
};
