# fonction printf

<h2>prototype</h2>

```
file: fonction.c

int _printf(const char *format, ...);
```

```
file: printf

1- int printf_char(va_list args);
2- int printf_st(va_list args);
3- int printf_persent(va_list args);
4- int printf_de(va_list args);
```

<br>
<p>=> File printf is loinked in  the file fonction when you want to print any caracter in the above table</p>
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
            <td>int; single caracter</td>
        </tr>   
        <tr>
            <td colspan="2">Example</td>
            <td></td>
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
          <td>char *; print characters from the string untli a  '\0' or the number of the charcters given by the precision</td>
          </tr>
        <tr>
            <td colspan="2">Example</td>
            <td></td>
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
            <td>the result is '%'</td>
          </tr>
            <td colspan="2">Example</td>
            <td></td>
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
            <th>character</th>
            <th>argument type; Printed As</th>
        </tr>
    </thead>
    <tbody>
      <tr>
              <td>4 - "d","i"</td>
              <td>int; decimal number</tr>
        </tr>
            <td colspan="2">Example</td>
            <td></td>
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
