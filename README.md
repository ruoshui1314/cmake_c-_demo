INTRODUCTION
----------------------
There are two ways supported by the demo.
1. You could reference third_party to link other library.
2. And also reference module defined by ourself.

HOW TO BUILD
----------------------

    mkdir build
    cd build
    cmake ..
    make

tips:
1. How to build with debug and release?
- release

```
    cd build && cmake -DCMAKE_BUILD_TYPE=Release ..
```

- debug

```
    cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..
```
