# Introduction #

The base64\_encode function is a very simple implementation, which is easy to use.
<br />
**Function:** ```
char * b64_encode(char *in, int l); ```
The first argument is a char pointer to the string we want to encode, the second is the length of the string to encode. As a result this function returns a pointer to the encoded string.
<br />
The base64\_decode function is the function to decode a given base64 encoded string.
<br />
**Function:** ```
char *b64_decode(char *string, int length);```
The first argument is a char pointer to the string we want to decode, the second is the length of the string to decode. As a result this function returns a pointer to the decoded string.
<br />
See the following example code for a usage example.<br />

# Example #
Here, we take the first argument as the input for our encoding function and print the resulting encoded string.
```

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
```