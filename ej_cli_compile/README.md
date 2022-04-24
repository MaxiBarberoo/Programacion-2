# Clang++ compile

https://wetmelon.github.io/clang-on-windows.html

## Single file compile

One step compile & link:
```shell
clang++ main.cpp                  # output to a.out
clang++ main.cpp -o myprogram.exe # output to myprogram.exe
```


Two-step compile & link:
```shell
clang++ -c main.cpp -o main.o
clang++ main.o -o myprogram.exe
```

## Multiple file compile

One step compile & link:
```shell
clang++ main.cpp other.cpp                  # output to a.out
clang++ main.cpp other.cpp -o myprogram.exe # output to myprogram.exe
```


Two-step compile & link:
```shell
clang++ -c main.cpp -o main.o
clang++ -c other.cpp -o other.o
clang++ main.o other.o -o myprogram.exe
```