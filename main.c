//
//  main.c
//  Exercicio Hash - hazin
//
//  Created by Bernardo Russo on 25/08/18.
//  Copyright © 2018 Bernardo Russo. All rights reserved.
//
#include <stdio.h>
/*
int main(void) {
    int t;
    int a,b,x,n,c,d,m,i;
    scanf("%d", &t);
    int count;
    while (t<0){
        i=0;
        count=0;
        scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);
        int h1, hfim;
        h1=a*x+b;
        while (i<n){
            if (h1<m)
                hfim=0;
            else
                hfim=h1%m;
            if (hfim>c){
                if(hfim<d){
                    count++;
                }
            }
            i++;
            h1=h1+a;
        }
       t--;
        printf("%d",count);
    }
    return 0;
}
*/
int main(void) {
    int a,b,x,n,c,d,m,i;
    int count;
    i=0;
    count=0;
    scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);
    int h1, hfim;
    h1=a*x+b;
    while (i<=n){
        hfim=h1%m;
        if (hfim>=c){
            if(hfim<=d){
                count++;
            }
        }
        i++;
        h1=h1+a;
    }
    printf("%d",count);
    return 0;
}

