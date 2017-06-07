//
//  main.c
//  MyGod
//
//  Created by Summer on 2017/6/7.
//  Copyright © 2017年 Summer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    int i,j,temp,n;
    int a[10001];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
        printf("\n");
    }
    return 0;
}
