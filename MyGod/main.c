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
    int a[10001]={0};
    FILE *fp1;
    fp1 =fopen("//Users//20161104580X//Desktop//我的文件//我的项目//MyGod//Date.txt","r+");
    if(fp1==NULL)
    {
        printf("打开文件失败! \n");
        return 0;
    }
    int n=0;
    while(fscanf(fp1,"%d",&a[n])!=EOF)
    {
        printf("%d-",a[n]);
        n++;
    }
    fclose(fp1);
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
    fp2 = fopen("//Users//20161104580X//Desktop//我的文件//我的项目//MyGod//Put.txt","w+");
    printf("\n");
    int k=0;
    while(k<n)
    {
        fprintf(fp2,"%d ",a[k]);
        printf("%d<",a[k]);
        k++;
    }
    fclose(fp2);
    return 0;
}
