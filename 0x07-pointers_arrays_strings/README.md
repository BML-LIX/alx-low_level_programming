##Even more pointers, arrays and string
0.  fills memory with a constant byte.The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b .Returns a pointer to the memory area s
1.  a function that copies memory area. The _memcpy() function copies n bytes from memory area src to memory area dest . Returns a pointer to de
2. a function that locates a character in a string.Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
3. a function that gets the length of a prefix substring. Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
4. a function that searches a string for any of a set of bytes.The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
5. a function that locates a substring.
6. a function that prints the chessboard.
7. a function that prints the sum of the two diagonals of a square matrix of integers. we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
