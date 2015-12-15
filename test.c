#include <string.h>
#include <stdio.h>
#include "drot13.h"

char *test_encode(const char *str, const char *expect)
{
	char *out = drot13_encode(str);
	if (strcmp(out, expect) == 0) {
		printf("Pass Encode! input: %s\n", str);
	}
	return out;
}

char *test_decode(const char *str, const char *expect)
{
	char *out = drot13_decode(str);
	if (strcmp(out, expect) == 0) {
		printf("Pass Decode! input: %s\n", str);
	}
	return out;
}

int main()
{
	test_encode("", "");
	test_encode("hello", "hello");
	test_encode("HELLO", "HELLO");
	test_encode("12345", "12345");
	test_encode("dfg994t23kr2l'[][-  .dsfk2k", "dfg994t23kr2l'[][-  .dsfk2k");

	test_decode("", "");
	test_decode("hello", "hello");
	test_decode("HELLO", "HELLO");
	test_decode("12345", "12345");
	test_decode("dfg994t23kr2l'[][-  .dsfk2k", "dfg994t23kr2l'[][-  .dsfk2k");
	return 0;
}
