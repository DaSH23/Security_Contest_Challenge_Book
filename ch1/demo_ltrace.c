#include <stdio.h>
#include <string.h>

int main() {
	char buf[32];
	char key[] = "d3m0_pr0gr4m_k3y";
	
	puts("Please input tha passphrase.");
	fgets(buf, sizeof(buf), stdin);
	strtok(buf, "\n");
	
	if (!strcmp(buf, key)) {
		puts("Congratulations! Your flag is ctf4b{7h15_15_51mp13_ltrace}");
	} else {
		puts("Invalid inputs.");
	}
	
	return 0;
}