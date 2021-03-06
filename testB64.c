#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base64.h"

int main(int argc, char **argv)
{
	if(argc < 2 )
	{
		printf("usage %s <string>\n", argv[0]);
		exit(1);
	}
	
	char *out = b64_encode(argv[1], strlen(argv[1]));
	printf("Base64 2 (%s): %s\nOld len: %d\nNew len: %d\n", argv[1], out, strlen(argv[1]), strlen(out));	
	
	
	// IMPORTANT: Without a '\n' at the end the decode function will fail!!
	strcat(out, "\n");
	
	char *dec = b64_decode(out, strlen(out));
	printf("Decoded: %s\n", dec);

	free(out);
	free(dec);
	return 0;
}
