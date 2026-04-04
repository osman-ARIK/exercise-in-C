//karakteri sizeof ile dizinin boyutunu bulma
#include <stdio.h>

int main() {

int c;
char a[5]={'o','s','m','a','n'};
printf("%c\n",a[0]);
c=(sizeof(a))/(sizeof(a[0]));
printf("%d",c);
return 0;
}