#include <stdio.h>

int main(void)
{
    printf("Byte turundan veri tiplerinin kapladigi alanlar\n\n");
    printf("\nchar                    :   %d byte", sizeof(char));
    printf("\nunsigned char           :   %d byte", sizeof(unsigned char));
    printf("\nsigned char             :   %d byte", sizeof(signed char));
    printf("\nint                     :   %d byte", sizeof(int));
    printf("\nshort int               :   %d byte", sizeof(short int));
    printf("\nunsigned short int      :   %d byte", sizeof(unsigned int));
    printf("\nsigned int              :   %d byte", sizeof(signed int));
    printf("\nlong int                :   %d byte", sizeof(long int));
    printf("\nunsigned long int       :   %d byte", sizeof(unsigned long int));
    printf("\nfloat                   :   %d byte", sizeof(float));
    printf("\ndouble                  :   %d byte", sizeof(double));
    return 0;
}
