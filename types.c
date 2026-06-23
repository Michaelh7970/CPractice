#include <stdio.h>

int main(){

    char mychar = 'S';
    short myshort = 1855;
    int myint = 99999999;
    long mylong = 1674218911;
    unsigned long long int mylonglong = 0xfeedfacebeefcafe;
    float myfloat = 2.95;
    double mydouble = 3.1415926535897932;
    long double mylongdouble = 18.5353966561797801;

    printf("char = %c - %d bytes\n", mychar, sizeof(mychar));
    printf("short = %d - %d bytes\n", myshort, sizeof(myshort));
    printf("int = %d - %d bytes\n", myint, sizeof(myint));
    printf("long = %ld - %d bytes\n", mylong, sizeof(mylong));
    printf("unsigned long long = %llu - %d bytes\n", mylonglong, sizeof(mylonglong));
    printf("float = %.2f - %d bytes\n", myfloat, sizeof(myfloat));
    printf("double = %.16lf - %d bytes\n", mydouble, sizeof(mydouble));
    __mingw_printf("long double = %.16Lf - %d bytes\n", mylongdouble, sizeof(mylongdouble));

    return 0;
}