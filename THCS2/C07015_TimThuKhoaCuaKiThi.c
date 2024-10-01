#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

typedef struct sinhvien{
    int ma;
    char ten[40];
    char ns[40];
    float d1, d2, d3;
}SV;

void nhap(SV sv[], int n){
    int m=n;
    int i=0, stt=1;
    while(m--){
        sv[i].ma=stt;
        stt++;
        gets(sv[i].ten);
        sv[i].ten[strlen(sv[i].ten)+1]='\0';
        gets(sv[i].ns);
        sv[i].ns[strlen(sv[i].ns)+1]='\0';
        scanf("%f%f%f", &sv[i].d1, &sv[i].d2, &sv[i].d3);
        i++;
    }
}

void sapxep(SV sv[], int n){
    float max=0.0;
    int dem=0;
    for(int i=0; i<n; i++){
        if(sv[i].d1 + sv[i].d2 + sv[i].d3 > max){
            max = sv[i].d1 + sv[i].d2 + sv[i].d3;
            dem++;
        }
    }
    for(int i=0; i<n; i++){
        if(sv[i].d1 + sv[i].d2 + sv[i].d3 == max && dem!=0){
            printf("%d %s %s %.1f", sv[i].ma, sv[i].ten, sv[i].ns, sv[i].d1 + sv[i].d2 + sv[i].d3);
        }
    }
}

int main() {
    SV sv[100];
    int n;
    scanf("%d\n", &n);
    nhap(sv, n);
    sapxep(sv, n);
}