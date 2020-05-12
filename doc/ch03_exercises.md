- [x] [exercise 3.25](../exercises/3_25.cc)

- [x] exercise 3.26

    Q: 在100页的二分搜索程序中，为什么用的`mid = beg + (end - beg) / 2`, 
而非`mid = (beg + end) / 2`

    A: (beg + end) 有可能使迭代器溢出

- [x] exercise 3.27

    Q: 假设txt_size是一个无参数的函数，返回值是int。下列哪个定义是非法的？为什么？
    ```c++
    unsigned buf_size = 1024;
    (a) int ia[buf_size];       (b) int ia[4*7-14];
    (c) int ia[txt_size()];     (c) char st[11] = "fundamental"
    ```
    A: (a)非法, buf_size不是一个常量表达式, txt_size() 函数是一个常量表达式

- [x] exercise 3.28

- [x] exercise 3.29

    Q: 相比于vector, 数组有哪些缺点？

    A: 
    1. 不能动态的伸缩
    2. vector是一个封装, 提供了很多方便的member function