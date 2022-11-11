<h1> Function printf </h1>

<h3>Prototypes</h3>

```
file: function.c

int _printf(const char *format, ...);
```

```
file: printf

1- int printf_char(va_list args);
2- int printf_st(va_list args);
3- int printf_persent(va_list args);
4- int printf_de(va_list args);
5- int printf_rev(va_list args);
```

# Usage

- In function \_printf and all functions in the file printf are using the putchar function because the method of printf displays character by character.
  <br>

- All the prototypes is linked in main.h

<p>=> The printf file is linked to the function file when you want to print any character in the table above</p>
<br>
<table border="2">
	<thead>
		<tr>
			<th>character</th>
			<th>argument type; Printed As</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1- "c"</td>
			<td>int; single character</td>
		</tr>   
		<tr>
			<td colspan="2">Example</td>
		</tr>
		<tr>
			<td colspan="2"><br>

	#include "main.h"

	/**
	* main - Entry point
	*
	* Return: 0 on success, error code otherwise
	*/
	int main(void)
	{
		int len, len2;

		len = _printf("%c", 'S');
		len2 = printf("%c", 'S');
		fflush(stdout);
		if (len != len2)
		{
			printf("Lengths differ.\n");
			fflush(stdout);
			return (1);
		}
		return (0);
	}

output:

	ss

</td>
</tr>
</tbody>
</table>

#

<table border="2">
	<thead>
		<tr>
			<th>character</th>
			<th>argument type; Printed As</th>
		</tr>
	</thead>
	<tbody>
	   <td>2 - "s"</td>
		  <td>char *; print characters from the string until a '\0' or the number of the characters given by precision</td>
		  </tr>
		<tr>
			<td colspan="2">Example</td>
		</tr>
<tr>
<td colspan="2"><br>

	#include "main.h"

	- main - Entry point
	-
	- Return: 0 on success, error code otherwise

	int main(void)
	{
	int len, len2;

	  len = _printf("%s", "This sentence is retrieved from va_args!\n");
	  len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	  fflush(stdout);
	  if (len != len2)
	  {
	  	printf("Lengths differ.\n");
	  	fflush(stdout);
	  	return (1);
	  }
	  return (0);
	}

output :

	This sentence is retrieved from va_args!

	This sentence is retrieved from va_args!

</td>
</tr>
</tbody>
</table>

#

<table border="2">
	<thead>
		<tr>
			<th>character</th>
			<th>argument type; Printed As</th>
		</tr>
	</thead>
	<tbody>
<tr>
			<td>3 - "%"</td>
			<td>The result is '%'</td>
		  </tr>
			<td colspan="2">Example</td>
		</tr>
<tr>
	<td colspan="2"><br>

	#include "main.h"

	/**
	* main - Entry point
	*
	* Return: 0 on success, error code otherwise
	*/
	int main(void)
	{
		int len, len2;

		len = _printf("%%");
		len2 = printf("%%");
		fflush(stdout);
		if (len != len2)
		{
			printf("Lengths differ.\n");
			fflush(stdout);
			return (1);
		}
		return (0);
	}

output:

	%%

</td>
</tr>
</tbody>
</table>

#

<table border="2">
	<thead>
		<tr>
			<th>Character</th>
			<th>argument type; Printed As</th>
		</tr>
	</thead>
	<tbody>
	  <tr>
			  <td>4 - "d","i"</td>
			  <td>int; decimal number</tr>
		</tr>
			<td colspan="2">Example</td>
		</tr>
<tr>
	<td colspan="2"><br>

	#include <stdio.h>
	#include <stdlib.h>
	#include <limits.h>
	#include "main.h"

	/**
	* main - Entry point
	*
	* Return: 0 on success, error code otherwise
	*/
	int main(void)
	{
		int len, len2;

		len = _printf("%d == %i\n", 1024, 1024);
		len2 = printf("%d == %i\n", 1024, 1024);
		fflush(stdout);
		if (len != len2)
		{
			printf("Lengths differ.\n");
			fflush(stdout);
			return (1);
		}
		return (0);
	}

output:

	1024 == 1024
	1024 == 1024

</td>
</tr>
</tbody>
</table>

#

<table border="2">
	<thead>
		<tr>
			<th>Character</th>
			<th>argument type; Printed As</th>
		</tr>
	</thead>
	<tbody>
	  <tr>
			  <td>4 - "r"</td>
			  <td>char *; print reverseb characters from the string</tr>
		</tr>
			<td colspan="2">Example</td>
		</tr>
<tr>
	<td colspan="2"><br>

	#include <stdio.h>
	#include <stdlib.h>
	#include "main.h"

	/**
 	* main - Entry point
 	*
 	* Return: 0 on success, error code otherwise
 	*/
	int main(void)
	{
		int len, len2;

		len = _printf("%r", "\nThis sentence is retrieved from va_args!");
		len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
		fflush(stdout);
		if (len != len2)
		{
			printf("Lengths differ.\n");
			fflush(stdout);
			return (1);
		}
		return (0);
	}

output:

	!sgra_av morf deveirter si ecnetnes sihT
	!sgra_av morf deveirter si ecnetnes sihT

</td>
</tr>
</tbody>
</table>

# Test Compilation

code will be compiled this way

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
- Our main files will include your main header file (main.h): #include main.h

* You might want to look at the gcc flag -Wno-format while testing with your printf and the standard printf

# Return Value

- Upon successful return, all functions return the number of characters written, excluding the terminating null character used to end the string
- if the output was truncated due to this limit, the return value is the number of characters that could have been written. Notice that a value equal or larger than count indicates a truncation. Only when the returned value is non-negative and less than count, the string has been completely written. If any error is encountered, -1 is returned.
- If format is set to NULL nothing is written and just the formatted length is returned.

#

<h3>- I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life <br> </h3>

# Author

By Melek moalla:<br>
https://github.com/melekmoalla
