#include<stdio.h>
struct test
{
	int x;
};
int getfun(struct test p)
{
	scanf("%d",&p.x);
	printf("%d",p.x);

}
int main()
{
	struct test v;
	getfun(v);
	return 0;
}