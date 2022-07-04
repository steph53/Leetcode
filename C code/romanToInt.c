#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M
* For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
* Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we
* subtract it making four. The same principle applies to the number nine, which is written as IX
* Given a roman numeral, convert it to an integer.
* 
* Problem No 13
*/


int romanToInt(char * s){
    int i,l,sum=0,d[30];
    l=strlen(s);
    for(i=0;i<l;i++){
        
        switch(s[i]){
            case 'I':
                d[i]= 1; break;
            case 'V': 
                d[i]= 5;break;
            case 'X':
                d[i]= 10;break;
            case 'L':
                d[i]= 50;break;
            case 'C':
                d[i]= 100;break;
            case 'D':
                d[i]= 500;break;
            case 'M':
                d[i]= 1000; break; 
            default:
                d[i]=0; break;
                }
    }
    
 
    for (i=0; i<l;i++){
        
            if (i==l-1 || d[i]>=d[i+1]){
                sum=sum+d[i];
            }
        
            else{
                sum=sum-d[i];
            }    
       
    }
   
    
    
    return sum;
    
}
