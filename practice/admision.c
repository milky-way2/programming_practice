#include <stdio.h>
int main()
{
    int math,phy,chem,allSum,twoSum;
    printf("\nEnter marks of Math\n");
    scanf("%d",&math);
    printf("\nEnter marks of Physics\n");
    scanf("%d",&phy);
    printf("\nEnter marks of Chemistry\n");
    scanf("%d",&chem);
    allSum=math+phy+chem;
    twoSum=math+phy;


    if(math>=65 && phy>=55 && chem>=50 && (allSum>=190 || twoSum>=140))
    {
        printf("\nStudent is eligible to get admision");
    }
    else{
     printf("\nStudent is not eligible to get admision");
    }     
    return 0;
}