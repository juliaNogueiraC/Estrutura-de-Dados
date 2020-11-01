int v[] = {5, 10, 15, 3, 10, 76, 5, 13, 33, 45};
int * pt;
int i;
pt = v;
for(i = 0; i < 10; i++)
{
printf("V[%i] = %i\r\n", i, *pt)
pt++;
}