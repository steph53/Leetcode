/*
* You are given a rectangular cake of size h x w and two arrays of integers horizontalCuts and verticalCuts where:
* horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, and
* verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.
* Return the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays horizontalCuts and verticalCuts. Since the answer can be a large number, return this modulo 109 + 7.
*
* Problem No: 1465
*/



int max(int a, int b){
    return a > b ? a : b;
}
int cmp(void *a, void *b){
    return *(int *)a - *(int *)b;
}
int maxArea(int h, int w, int* horizontalCuts, int horizontalCutsSize, int* verticalCuts, int verticalCutsSize){ 
    
   qsort(horizontalCuts, horizontalCutsSize, sizeof(int), cmp);
    qsort(verticalCuts, verticalCutsSize, sizeof(int), cmp);
    
    int maxv=max(verticalCuts[0], w - verticalCuts[verticalCutsSize - 1]);
    int maxh=max(horizontalCuts[0], h - horizontalCuts[horizontalCutsSize - 1]);
   
    
    
    for(int i=1;i<=(horizontalCutsSize-1);i++){
        maxh=max(maxh,(horizontalCuts[i]-horizontalCuts[i-1]));
    }   
   
    
     
    
    for(int i=1;i<=(verticalCutsSize-1);i++){
        maxv=max(maxv,(verticalCuts[i]-verticalCuts[i-1]));
    }
   
     int mod = 1e9 + 7;
    long long area = (long long)(maxv) * (long long)(maxh);
    return (int)(area % mod);
   
}