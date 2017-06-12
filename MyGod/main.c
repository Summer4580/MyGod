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
    int j,i,temp;
    int a[10001];
    FILE *fp1;
    fp1 =fopen("Date","r");
    if(fp1==NULL)
    {
        printf("打开文件失败!\n");
    }
    int x=0;
    int n=0;
    x = fgetc(fp1);
    while(x!=EOF)
    {
        a[n] = x;
        putchar(x);
        x = fgetc(fp1);
        n++;
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
    FILE *fp2;
    fp2 = fopen("Put","w+");
    while(n!=0)
    {
        fputc(a[n],fp2);
        n--;
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
