# Build Your Own Lisp

Learn C and build your own programming language in 1000 lines of code!

Implementation of a simple lisp dialect to learn c and some tricks.
Almost of all content of this repository is part of the book Build Your Own Lisp free available on [Learn C * Build Your Own Lisp](https://buildyourownlisp.com/). 
Thanks so much [Daniel Holden](https://github.com/orangeduck) to make this amazing content freely available.

All code on this repository was written on a Linux Debian Based system.
You can install a C compiler using the following command:

```sh
sudo apt install build-essential
```

And you can compile the code running:

```sh
cc -std=99 -Wall source_file.c -o ouput_name
```

And finally you can execute run:

```sh
./ouput_name
```

# Contents
* [Setup](https://buildyourownlisp.com/chapter2_installation) - Code: [Hello World](hello_world.c)
* [Basics](https://buildyourownlisp.com/chapter3_basics) - Code: [Basic C](basics.c)
* [An interactive prompt](https://buildyourownlisp.com/chapter4_interactive_prompt) - Code: [A Lispy REPL](prompt.c)
