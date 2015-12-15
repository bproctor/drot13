#include <string.h>
#include <stdlib.h>
#include "drot13.h"

static char *lookupLower = "nopqrstuvwxyzabcdefghijklm";
static char *lookupUpper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

static char *rot13(const char *str)
{
	int i;
	int len = strlen(str);
	char *p, *s;
	p = s = malloc(len);
	
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			*p++ = lookupLower[str[i] - 'a'];
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			*p++ = lookupUpper[str[i] - 'A'];
		} else {
			*p++ = str[i];
		}
	}
	*p = 0;
	return s;
}

char *drot13_encode(const char *str)
{
	char *enc1 = rot13(str);
	char *enc2 = rot13(enc1);
	free(enc1);
	return enc2;
}

char *drot13_decode(const char *str)
{
	char *dec1 = rot13(str);
	char *dec2 = rot13(dec1);
	free(dec1);
	return dec2;
}
