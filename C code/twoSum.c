/*
* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
* You may assume that each input would have exactly one solution, and you may not use the same element twice.
* You can return the answer in any order.
* Constraints:
* 2 <= nums.length <= 10^4
* -10^9 <= nums[i] <= 10^9
* -10^9 <= target <= 10^9
* Problem No 1
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *res=NULL;
    *returnSize=2;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++){
            if ((nums[i]+nums[j] == target)){
                res = (int*)malloc((*returnSize)*(sizeof(int)));
                *res = i;
                *(res+1) = j;
                break;
                
            }
        }
    }
    return res;
}
   