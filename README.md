# fonction printf

<h2>definition</h2>

<img src ="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Printf.svg/563px-Printf.svg.png"/></h2>

```

```

```
file main.h:

1- int printf_char(va_list args);
2- int printf_st(va_list args);
3- int printf_persent(va_list args);
4- int printf_de(va_list args);
```

<table>
    <thead>
        <tr>
            <th>character</th>
            <th>argument type; Printed As</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1- "c"</td>
            <td>int; single caracter</td>
        </tr>
        <tr>
            <td>2 - "s"</td>
            <td>char *; print characters from the string untli a  '\0' or the number of the charcters given by the precision</td>
        </tr>
        <tr>
            <td>3 - "%"</td>
            <td>the result is '%'</td>
        </tr>
            <tr>
            <td>4 - "d","i"</td>
            <td>int; decimal number</tr>
        </tr>
    </tbody>
</table>

<table>
    <thead>
     <tr>
        <th>Example</th>
    </tr>
    </thead>
    <tbody>
        <td>

            #include <stdio.h>
            #include <stdlib.h>
            #include "main.h"

- main - Entry point
-
- Return: 0 on success, error code otherwise

  int main(void)
  
  {

  int len, len2;

        len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
        len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
        fflush(stdout);
        if (len != len2)
        {
        	printf("Lengths differ.\n");
        	fflush(stdout);
        	return (1);
        }
        return (0);

    </td>
