class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
       int rightmax =0 ,leftmax=0 ,total =0;
       int left =0 ;
       int right = n-1;
       while(left <= right){
        if(arr[left]  <= arr[right]){
           if(leftmax > arr[left]){
            total += (leftmax - arr[left]);
           }
           else{
            leftmax = arr[left];
           }
           left++;
        }
        else{
            if(rightmax > arr[right]){
                total += (rightmax -arr[right]);
            }
            else rightmax = arr[right];
            right--;
        }
       }
       return total;
    }
};
