#include <stdio.h>

int main(void)

{
	int a, b, c, d; double e, f, g, h;
	a = 6 / 4.1; b = 6 * 4.1; c = 6 + 4.1; d = 6 - 4.1;
	e = 6.1/ 4.1; f = 6.1 * 4.1; g = 6.1 + 4.1; h = 6.1 - 4.1;

	printf("%d\n", 6/4); printf("%d\n", 6*4);
	printf("%d\n", 6+4); printf("%d\n", 6-4);
	printf("%f\n", 6 / 4.1); printf("%f\n", 6 * 4.1);
	printf("%f\n", 6+ 4.1); printf("%f\n", 6 - 4.1);

	printf("a=%d\n", a); printf("b=%d\n", b);
	printf("c=%d\n", c); printf("d=%d\n", d);
	printf("e=%f\n", e); printf("f=%f\n", f);
	printf("g=%f\n", g); printf("h=%f\n", h);





	return 0;

}