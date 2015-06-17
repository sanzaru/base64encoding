### Description ###
This is a simple base64 encoding implementation, based on the openSSL library. I found this code on http://www.ioncannon.net and modified it a bit with some Linux compatibility and a decoding function.

### Compiling: ###
To compile this code you need the openSSL development libraries. In Windows I copied all the headers and lib files into my Dev-Cpp folder and compiled the code with the command:

  * gcc base64.c -l libeay32

or for static linking:

  * gcc base64.c /usr/lib/libcrypto.a

In Linux/Unix it is:

  * gcc base64.c -lssl

### More: ###
To compile the test binary use a command like:
> Windows: gcc base64.c testB64.c -o testB64.exe -l libeay32<br />
> Linux:   gcc base64.c testB64.c -o testB64.exe -lssl or use the Makefile

**WINDOWS NOTE:**
  * After compiling, you need the libeay32.dll file in the directory of your compiled binary!

**DEPENDENCIES:**
  * openSSL-devel (http://www.deanlee.cn/programming/openssl-for-windows/)