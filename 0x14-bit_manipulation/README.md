## BIT MANIPULATION
0. a function that converts a binary number to an unsigned int. where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL
1. a function that prints the binary representation of a number. Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators
2. a function that returns the value of a bit at a given index. where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured
3. a function that sets the value of a bit to 1 at a given index.where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred
4.  a function that sets the value of a bit to 0 at a given index.where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred
5. a function that returns the number of bits you would need to flip to get from one number to another. You are not allowed to use the % or / operators
6. a function that checks the endianness. Returns: 0 if big endian, 1 if little endian