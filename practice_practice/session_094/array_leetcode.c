#include <stdio.h>
#include <stdlib.h>


int* buildArray(int* nums, int numsSize, int* returnSize);


int main(void)
{
    int nums[6] = {5,0,1,2,3,4};
    int* ans;
    int returnSize = 6;

    ans = buildArray(&nums[0], 6, &returnSize);

    for(int i = 0; i < 6; ++i)
    {
    printf("Array ans[%d]=%d\n", i, *(ans + i));
    }

    free(ans);
    ans = 0;
    exit(0);
}

int* buildArray(int* nums, int numsSize, int* returnSize){
    
    int i;
    
    int* ans = 0;
    
    ans = (int*)malloc(numsSize * sizeof(int));
    
    for(i = 0; i < numsSize; ++i)
    {
        int flag;
        flag = *(nums + i);
       *(ans + i) = *(nums + flag);      
        
    }
    
    return ans;
}