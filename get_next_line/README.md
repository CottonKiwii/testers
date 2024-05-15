# Testers for the 42 Common Core
All of the testers I add here will be main files made for testing your code.\
Although it is recommended to write your own, you can use these for reference on how to write a very simple test.

## ft_printf test
1) Put `main.c` in your ft_printf directory
2) Make your libftprintf.a
3) Use this command: `cc main.c libftprintf.a -I.`

## get_next_line test
1) Put everything in your get_next_line directory
2) For Mandatory part, use: `cc -D BUFFER_SIZE=n main.c get_next_line.c get_next_line_utils.c -I.`
3) For Bonus part, use: `cc -D BUFFER_SIZE=n main_bonus.c get_next_line_bonus.c get_next_line_utils_bonus.c -I.`
