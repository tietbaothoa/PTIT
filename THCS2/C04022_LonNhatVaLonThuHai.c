#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n;
    scanf("%d", &n);
    int a[n+5];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max1=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max1){
            max1=a[i];
        }
    }
    int min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    int max2=min;
    for(int i=0; i<n; i++){
        if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
    }
    printf("%d %d", max1, max2);
}
// #include <stdio.h>

// int main(){
// 	int n;
// 	scanf("%d", &n);
// 	int a[101];
// 	for(int i=0; i<n; i++)
// 		scanf("%d", &a[i]);
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n-1-i; j++){
// 			if(a[j]<a[j+1]){
// 				int tmp=a[j];
// 				a[j]=a[j+1];
// 				a[j+1]=tmp;
// 			}
// 		}
// 	}
// 	if(a[0]==a[1]) 
// 		printf("%d %d", a[0], a[2]);
// 	else
// 		printf("%d %d", a[0], a[1]);
// }