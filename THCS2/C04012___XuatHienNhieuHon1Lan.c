#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[10001];
	int check[10001]={};
	int dem=0;
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int i=0; i<n-1; i++){
		if(check[i]!=0)
			continue;
		else{
			check[i]++;
			int b=0;
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j]){
					b++;
					check[j]++;
				}
			}
			if(b!=0){
				dem++;
				printf("%d ", a[i]);
			}
		}
	}
	if(dem==0)
		printf("0");
}