class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j=height.length-1;
        int max=0;
        int area=0;
        while(i<j){
           int min = Math.min(height[i], height[j]);
            area = min * Math.abs(i - j);
            max = Math.max(area, max);
            while (i<j && height[i] <= min) {
                i++;
            }
            while (i<j && height[j] <= min) {
                j--;
            }
        }
        return max;
    }
}
