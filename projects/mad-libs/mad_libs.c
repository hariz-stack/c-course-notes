#include <stdio.h>
#include <string.h>

static void trimNewline(char s[]) {
	s[strcspn(s, "\n")] = '\0';
}

int main(void) {
	char noun[50] = "";
	char verb[50] = "";
	char adj1[50] = "";
	char adj2[50] = "";
	char adj3[50] = "";

	printf("Enter an adjective: "); fgets(adj1, sizeof(adj1), stdin); trimNewline(adj1);
	printf("Enter a noun: ");      fgets(noun, sizeof(noun), stdin); trimNewline(noun);
	printf("Enter an adjective: "); fgets(adj2, sizeof(adj2), stdin); trimNewline(adj2);
	printf("Enter a verb (ending in -ing): "); fgets(verb, sizeof(verb), stdin); trimNewline(verb);
	printf("Enter an adjective: "); fgets(adj3, sizeof(adj3), stdin); trimNewline(adj3);

	printf("\nToday I went to a %s zoo.\n", adj1);
	printf("In an exhibit, I saw a %s.\n", noun);
	printf("%s was %s and %s!\n", noun, adj2, verb);
	printf("I was %s.\n", adj3);

	return 0;
}
