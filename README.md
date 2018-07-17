A:
==

0000000000400530 T main is int main

0000000000400504 T _Z7averageif // 00000000004004d6 T _Z7averagePdRd

this is function overloading, because they have the same function name called average, but they have different types of parameters.(a kind of signature)

the compiler encodes each function identifier with the number and types of its parameters to enable "type-safe linkage".

here, "average" has 7 characters, so they both starts with the number 7, and the following of course is the name of the function which is called average.

"i" means integer, "f" means float;
"Pd" means pointer double, "Rd" means reference double.


B:
==

1 8

4 8

4 8

8 8


the left side of the straight line outputs is the size of the according types(a, b, c, d):


size of char is 1 byte, 

size of integer is 4 bytes,

size of float is 4 btyes,

size of double is 8 bytes,


whereas, the right side of the outputs are all pointers(pa, pb, pc, pd)

pointer records address of the assigned variable.

The size of the address is all the same------8 bytes in 64-bit machine.





