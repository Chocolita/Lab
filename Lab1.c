#include<stdio.h>
#include <stdint.h>
#include <time.h>
#define print(Mozambique) (printf("Size of char: %u\n\
Size of short: %u\n\
Size of short int: %u\n\
Size of int : %u\n\
Size of long int: %u\n\
Size of unsigned int: %u\n\
Size of void *: %u\n\
Size of size_t: %u\n\
Size of float: %u\n\
Size of double: %u\n\
Size of int8_t: %u\n\
Size of int16_t: %u\n\
Size of int32_t: %u\n\
Size of int64_t: %u\n\
Size of time_t: %u\n\
Size of clock_t: %u\n\
Size of struct tm: %u\n\
Size of NULL: %u\n", sizeof(char), sizeof(short), sizeof(short int), sizeof(int), sizeof(long int), sizeof(unsigned int), sizeof(void *), sizeof(size_t), sizeof(float), sizeof(double), sizeof(int8_t), sizeof(int16_t), sizeof(int32_t), sizeof(int64_t), sizeof(time_t), sizeof(clock_t), sizeof(struct tm), sizeof(NULL)))

int main()
{
    print(Mozambique);
    return 0;
}