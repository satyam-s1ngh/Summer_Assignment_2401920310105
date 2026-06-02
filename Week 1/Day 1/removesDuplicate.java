class Solution {
    public int removeDuplicates(int[] arr) {
        int p1=0, p2=1;
        int i, c=1, n=arr.length;
        for(i=0;i<n;i++){
            if(arr[p1]!=arr[i]){
                c++;
                p1=i;
                arr[p2++]=arr[i];
            }
        }
        return c;
    }
}
