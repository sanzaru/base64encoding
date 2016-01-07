# base64encoding

This is a simple base64 encoding implementation, based on the openSSL library. 
I found this code on http://www.ioncannon.net
	
To compile this code you need the openSSL development libraries. In Windows I copied all the headers and lib
files into my project folder and compiled the code with	the command:
	
```
gcc base64.c -l libeay32
```
	
In Linux/Unix it is:

```
gcc base64.c -l ssl
```

**WINDOWS NOTE:** After compiling, you need the libeay32.dll file in the directory of your compiled binary!
	
## DEPENDENCIES:
* openSSL development libraries
