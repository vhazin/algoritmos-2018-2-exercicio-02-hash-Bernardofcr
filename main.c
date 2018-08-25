//
//  main.c
//  Exercicio Hash - hazin
//
//  Created by Bernardo Russo on 25/08/18.
//  Copyright © 2018 Bernardo Russo. All rights reserved.
//
#include <stdio.h>
int main (void){
    int t,c;
    scanf("%d",&t);
    int lista[t];
    for (c=0;c<t;c++){
        lista[c]=check();
    }
    c=0;
    for (c=0;c<t;c++){
        printf("%d\n",lista[c]);
    }
}

int check() {
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
    return count;
}

