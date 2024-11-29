#include <stdio.h>

int main() {
	char gender;
	printf("Enter a single character m or f: ");
	scanf("%c",&gender);
	if(gender=='m'||gender=='M'){
	printf("You are a male");
	
}
else{
	printf("You are a female");

}
   return 0;
}
