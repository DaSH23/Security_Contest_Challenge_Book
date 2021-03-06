#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid;
	char buf[16];
	int user_input;
	
	pid = fork();
	if (pid == 0) {
		puts("Segmentation Fault");
		exit(0);
	} else {
		puts("Enter the pid of the child process.");
		fgets(buf, sizeof(buf), stdin);
		user_input = atoi(buf);
		if (pid == user_input) {
			puts("Congratulations! Your FLAG is ctf4b{7h15_15_s1mpl3_ltrace}");
		} else {
			puts("Wrong pid!");
		}
	}
	
	return 0;
}