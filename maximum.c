#include<stdio.h>
int main(){
int T[100];
int taille,i,j,max;

printf("entrer la dimension  du tableau :");
scanf("%d",&taille);

for(i=0 ; i<taille ; i++){
 printf("entrer la %d eme  valeur du tableau:",i+1);
 scanf("%d",&T[i]);
}

 max=T[0] ;
 for (j=0 ; j<5 ;j++){
    if (max<T[j]){
        max=T[j];
    }
 }
 printf("le max du tableau est %d " , max);
 return 0;
 }
