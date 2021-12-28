#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    
    int i;
    double sum;
    for(i = 0; i < n; i++){
        sum += a[i];
    }
    b[0] = sum/n;

    double SD;
    for(i = 0; i < n; i++){
        SD += pow(a[i] - (sum/n), 2);
    }
    b[1] = sqrt(SD/n);

    double product = 1;
    for(i = 0; i < n; i++){
        product = product * a[i];
    }
    b[2] = pow(product,1.0/n);

    double sumoffrac;
    for(i = 0; i < n; i++){
        sumoffrac += 1/a[i];
    }
    b[3] = n/sumoffrac;

    double max = a[0],min = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max)
        max = a[i];
        if(a[i] < min)
        min = a[i];
    }
    b[4] = max;
    b[5] = min;
}


