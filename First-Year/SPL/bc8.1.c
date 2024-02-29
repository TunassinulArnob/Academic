#include<stdio.h>
int main(){
    int n;
    printf("Enter n, NUmber of input You want: ");
    scanf("%d",&n);
    
    printf("Enter %d number is aascending or decendig order: ",n);
    int a[n],i;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int median;
    float  m;
    if(n%2!=0){
        median=a[(n/2)];
        printf("Median is %d\n",median);
    }else{
        m= (float)(a[(n/2)-1]+a[n/2])/2;
        printf("Median is %.2f\n",m);
    }
    

}