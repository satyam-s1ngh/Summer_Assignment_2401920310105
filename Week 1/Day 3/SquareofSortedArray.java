class Solution {
    public int[] sortedSquares(int[] nums) {
        int l=nums.length;
        for(int i=0;i<l;i++){
            nums[i]=nums[i]*nums[i];
        }
        for(int i=0;i<l-1;i++){
            for(int j=0;j<l-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int t=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=t;  
                }
            }
        }
        return nums;
    }
}
