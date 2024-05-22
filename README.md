# ft_printf
The goal of the project was to recode printf() function from lib.c.
I was using variadic function and my project is able to handle 
the following conversions: cspdiuxX%.

## Installation

First, clone this repository:

<!-- start:code block -->
# Clone this repository
git clone https://github.com/aklimchu/ft_printf.git
cd papermark

<!-- end:code block -->

## Running the tests

<!-- start:code block -->
# Create the library with Makefile
make

# Test the library with your own "main"
cc libftprintf.a main.c

# Clean the object files and library file
make fclean
<!-- end:code block -->

