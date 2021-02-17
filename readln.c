#include <unistd.h>

unsigned int readln(int fildes, void *buffer) {
	register int i = 0;
	while ((read(fildes, (buffer + i), 1)) != 0) {
		if (*(char*)(buffer + i) == '\n')
			break;
		i++;
	}
	return i;
}

int main(int argc, char const *argv[]){
	char buffer[256];

	int n = readln(0, buffer);
	write(1, buffer, n);

	return 0;
}
