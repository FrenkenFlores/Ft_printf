# Ft_printf
> The aim of this project is to code _ft_printf_ function
that will mimic the real _printf_ function from _libc_. Variadic functions
are used as base component in this project. Some of the [Libft][4] functions are been used
in this project.

name|prototype|description
---|---|---
ft_printf|int ft_printf(const char *format, ...);|sends formatted output to stdout.

*note:* ft_printf() manages any of the following flags "-0.*", and any of the following conversions:<br/>
- %c
- %s
- %p
- %d
- %i
- %u
- %x
- %X


### Resources
- [man 3 printf][1]
- [man 3 stdarg][2]
- [Variadic-Functions][3]

[1]:(https://man7.org/linux/man-pages/man3/printf.3.html)
[2]:(https://man7.org/linux/man-pages/man3/stdarg.3.html)
[3]:(http://cs.petrsu.ru/~vadim/sp2011/libc/Variadic-Functions.html)
[4]:(https://github.com/FrenkenFlores/Libft)