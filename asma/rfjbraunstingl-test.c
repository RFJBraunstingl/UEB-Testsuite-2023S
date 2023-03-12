#include <stdio.h>

char *asma(char s[], int n);

int main() {

	//char input[17] = {'a', '1', 'b', '2', 'c', '3', '6', 'F', 'g', '9', 'a', 'b', 'c', 'd', 'e', 'f', '\0'};

	//char input[47] = {'\xff', '\x01', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '}', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q' };
	
	// char input[1] = { 'c' };
	char input[49] = { 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','}','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','\x01','2','3' };
	// char *result = asma("FoO bAr BaZ", 6);
	char *result = asma(input, 45);
	printf("result: %s\n", result);
}
