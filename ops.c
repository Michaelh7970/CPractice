#include <stdio.h>

int main(){
    
    float myfloat = 7.0L/9.0; 
    double mydouble = 7.0L/9.0;
    long double mylongdouble = 7.0L/9.0;

    printf("float precision: %.8f\n", myfloat);
    printf("double precision: %.12lf\n", mydouble);
    __mingw_printf("quad precision: %.16Lf\n", mylongdouble);

    int a = 4, b = a * 2; // a = 4 b = 8
    int z = 3 * a + b << 1; // 3 * 4 + 12 << 1 = 40 // a = 4, b = 8, z = 40
    a = z / b + 7; // a = (40) / 8 + 7 // a = 12, b = 8, z = 40
    b = 1 | a + 6; // 00000001 | 00001100 = 00001101 + 6 = 19; b = 19; a = 12, z = 40
    z = (b - a) * z % 17; //(19 - 12) = 7 * 40 = 280 % (17 * 16) = 272 remainder 8, z = 8, b = 19, a = 12
    a = b && z % 4; // 19 != 8 so 0, 0 % 4 = 0 // a = 0, b = 19, z = 8
    printf("%d", z);
    b = z ^ 42 & 1; // 00001000
                    // 00101010
                    // 00100010
                    // 00000001 = 0000000;
    printf("%d", b);



    return 0;
}