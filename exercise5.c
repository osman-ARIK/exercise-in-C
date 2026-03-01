//girdiðimiz not ile harf notumuzu gösteren if-else döngüsü
//an if-else loop that displays our letter grade based on the note we entered

#include <stdio.h>

int main(){
	
	int not;
	printf("notunuzu giriniz:");
	scanf("%d",&not);
	
	if(not == 100){
	printf("harf notunuz AA");
}
	else if (not >= 90 && not < 100){
	printf("harf notunuz BB");
}
	else if (not >= 80 && not < 90){
	printf("harf notunuz CC");
}
	else if (not >= 70 && not < 80){
	printf("harf notunuz DD");
}
	else if (not >= 60 && not < 70){
	printf("harf notunuz EE");
}
	else if (not >= 50 && not < 60){
	printf("harf notunuz FF");
}
else if (not > 100){
	printf("hatali giris!!");
}
else printf("kaldiniz!");

return 0;
}
