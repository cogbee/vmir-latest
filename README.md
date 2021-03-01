# VMIR - Virtual Machine for Intermediate Representation

To build VMIR just type:
```
$ make
```
... and you will end up with a VMIR binary in very same directory.
The library is compiled from a single file [src/vmir.c](src/vmir.c) which in turn include other files to keep the code somewhat separated.


### Example

Let's create a small program and run it. Type the following well known snippet into a file called test.c
```
#include <stdio.h>

int k = 1111;
int cogbee(int i) {
  int tmp = k + i;
  printf("i = %d\n", tmp);
  return 22;
}
int main(void)
{
  cogbee(55);
  printf("Hello world\n");
  return 0;
}
```
Then compile it
```
clang -emit-llvm -c test.c -o test.bc
```
And finally, run it:
```
$ ./vmir test.bc
i = 1166
Hello world
```