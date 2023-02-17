# Introduction to C programming

* **gcc -E $CFILE -o c** : script that runs a C file through the preprocessor and save the result into another file named c.
* **gcc -c $CFILE $FILE** : script that compiles a C file but does not link.The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
* **gcc -S $CFILE -o file** :script that generates the assembly code of a C code and save it in an output file 
* **gcc $CFILE  -o cisfun** : Write a script that compiles a C file and creates an executable named cisfun.
* **puts** :It prints the passed string with a newline and returns an integer value
* **printf** : create and output strings formatted at runtime. 
* **sizeof()** : print a size of data type;
  printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
  * **gcc -S -masm=intel $CFILE** :Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
  * **
