//
//  main.cpp
//  3n+1关键字
//
//  Created by Xunix Huang on 15/10/9.
//  Copyright © 2015年 Xunix Huang. All rights reserved.
//
//直觉写的，没用数据结构，套了三个循环，效率比较低，不过还好是乙级题效率不是重点
#include <iostream>
int a[101];
int c[101];
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }
        int temp=a[i];
        while(temp!=1){
            if(temp&1){
                temp=temp*3+1;
            }
            //卡在这个地方了，因为3n+1猜想是奇数要3n+1再除以2那才算一个新数，如果这里加了else，最后一个就过不了
                temp=temp>>1;
            for(int j=0;j<n;j++){
                if(temp==a[j]){
                    a[j]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        int j;
        if(a[i])
            c[j++]=a[i];
    }
    for(int i=0;c[i];i++){      //图方便随便写的排序，可以再优化
        for(int j=0;c[j];j++){
            if(c[j]<c[j+1]){
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(int i=0;c[i];i++){
        if(c[i+1])
            printf("%d ",c[i]);
        else
            printf("%d",c[i]);
    }
    return 0;
}
