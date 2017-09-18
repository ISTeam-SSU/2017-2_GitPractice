#include "hello.h"

int main() {

    printf("hello world\n");
    return 0;

}

char *myStrcpy(char *dest, const char *src) {
	char *save = dest;
	while(*dest++ = *src++);
	return save;

}

size_t myStrlen(const char *string) {
    return 0;
}

char *myStrcat(char *dest, const char *src) {
	char *tmp = dest;
	while(*tmp) tmp++;
	while(*src) *tmp++ = *src++;
	return dest;
}

int myStrcmp(const char *string1, const char *string2) {
	for (int i = 0; string1[i]!=0; i++) {
		if (string1[i] - string2[i] != 0) {
			return string1[i] - string2[i];
		}
	}
    return 0;
}
