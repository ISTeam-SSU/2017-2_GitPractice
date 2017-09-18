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
    return NULL;
}

int myStrcmp(const char *string1, const char *string2) {
    return 0;
}
