#include <stdio.h>
struct bit
{
unsigned a_bit:2;
unsigned b_bit:2;
unsigned c_bit:1;
unsigned d_bit:1;
unsigned e_bit:2;
unsigned word:8;
};
int main()
{
struct bit *p;
unsigned int modeword;
printf("Enter the mode word (HEX):");
scanf("%x",&modeword);
p=(struct bit *)&modeword;
printf("\n");
printf("a_bit: %d\n",p ->a_bit);
printf("b_bit: %d\n",p ->b_bit);
printf("c_bit: %d\n",p ->c_bit);
printf("d_bit: %d\n",p ->d_bit);
printf("e_bit: %d\n",p ->e_bit);
}