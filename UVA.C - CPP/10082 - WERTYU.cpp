#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c;
	while(c = getchar())
	{
		if(c == '1') printf("`");
		else if(c == '2') printf("1");
		else if(c == '3') printf("2");
		else if(c == '4') printf("3");
		else if(c == '5') printf("4");
		else if(c == '6') printf("5");
		else if(c == '7') printf("6");
		else if(c == '8') printf("7");
		else if(c == '9') printf("8");
		else if(c == '0') printf("9");
		else if(c == '-') printf("0");
		else if(c == '=') printf("-");
		else if(c == 'W') printf("Q");
		else if(c == 'E') printf("W");
		else if(c == 'R') printf("E");
		else if(c == 'T') printf("R");
		else if(c == 'Y') printf("T");
		else if(c == 'U') printf("Y");
		else if(c == 'I') printf("U");
		else if(c == 'O') printf("I");
		else if(c == 'P') printf("O");
		else if(c == '[') printf("P");
		else if(c == ']') printf("[");
		else if(c == '\\') printf("]");
		else if(c == 'S') printf("A");
		else if(c == 'D') printf("S");
		else if(c == 'F') printf("D");
		else if(c == 'G') printf("F");
		else if(c == 'H') printf("G");
		else if(c == 'J') printf("H");
		else if(c == 'K') printf("J");
		else if(c == 'L') printf("K");
		else if(c == ';') printf("L");
		else if(c == '\'') printf(";");
		else if(c == 'X') printf("Z");
		else if(c == 'C') printf("X");
		else if(c == 'V') printf("C");
		else if(c == 'B') printf("V");
		else if(c == 'N') printf("B");
		else if(c == 'M') printf("N");
		else if(c == ',') printf("M");
		else if(c == '.') printf(",");
		else if(c == '/') printf(".");
		else if(c == ' ') printf(" ");
		else if(c == '\n') printf("\n");
		else if(c == EOF) break;
		else printf(" ");
	}
	return 0;
}
