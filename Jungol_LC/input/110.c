/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 110.c
    status: clear
*/

#include <stdio.h>

double yard2cm(double yard);

int main(){
    double yard;
    double cm;

    printf("yard? ");
    scanf("%lf", &yard);

    cm = yard2cm(yard);

    printf("%0.1fyard = %0.1fcm", yard, cm);


    return 0;
}

double yard2cm(double yard){
    double cm;
    cm = yard * 91.44;

    return cm;
}