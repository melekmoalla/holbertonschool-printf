# fonction printf

<h2>definition
<img src ="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Printf.svg/563px-Printf.svg.png"/></h2>

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
        </th>
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
        <tr>

