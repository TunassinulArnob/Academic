#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    float a[n],sum=0.0;
    printf("Enter value of n number: ");
    for(int i=0; i<n; i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }

    printf("Sum is %f\n",sum);

    float mean = sum/n;
    printf("MEan value is %f\n",mean);

    float var=0.0;
    for(int i=0 ; i<n; i++){
        var+= (mean-a[i])*(mean-a[i]);
    }
    printf("Var is %f\n",var);
    
    float deviation= sqrt(var/n);
    printf("Daviation is %f\n",deviation);
}