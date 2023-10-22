#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
scanf("%d,%d",&a,&b);
for(a;a<=b;a++)
{
  int i;
  int counter=0;
  for(i=1;i<=a;i++)
{
    if (a%i==0)
    counter=counter+1;

    else if(a%i!=0)
    counter=counter;
}
    if (counter==2)
    printf("%d ",a);
}
    return 0;

}
