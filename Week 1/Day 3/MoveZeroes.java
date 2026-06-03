class Solution {
    public void moveZeroes(int[] nums) {
        int l=nums.length;
        int m=0;
        for(int i=0; i<l;i++){
            if(nums[i]!=0){
                nums[m]=nums[i];
                m++;
            }
        }
        while(l>m){
            nums[m]=0;
            m++;
        }
    }
}
