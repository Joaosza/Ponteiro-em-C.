#include <stdio.h>

int main()
{

int n, o;
int *p;
p = &n;

n = 20;

o = 50;

printf("Hello %i %i %p=%p\n", *p, o, p, $p);

*p =30;

printf("n=%i\n", n);

return 0;

}
