#include <stdio.h>

int main(){

int a,b,s;
char i;


printf("yapilacak islemi girin");
scanf("%c", &i);
printf("iki sayi giriniz");
scanf("%d %d", &a, &b);

if (i == '+'){
  s = a + b;
}
else if(i == '-'){
  s = a - b;
}
else if(i == '/'){
  
  if(b != 0){
    s = a / b;  
  }
  else printf("sonsuz");
  return 1;
}
else if(i == '*'){
  s = a * b;
}
else{
printf("yanlis islem");
}
printf("sonucunuz:%d",s);

	return 0;
}
