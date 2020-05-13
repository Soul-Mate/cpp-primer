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
    
    Q: 下面数组元素值是什么?
        
    ```c++
    string sa[10];
    int ia[10];
    int main () {
        string sa2[10];
        int ia2[10];
    }
    ```

    A: sa是包含是个空字符串的数组; ia包含10个int型元素, 初始值为0; sa2 ia2也是如此

- [x] exercise 3.29

    Q: 相比于vector, 数组有哪些缺点？

    A: 
    1. 不能动态的伸缩
    2. vector是一个封装, 提供了很多方便的member function

- [x] exercise 3.30

    Q: 指出下面代码索引错误

    ```c++
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;
    ```

    A: ix应该从0开始而不是从1开始, ix <= array_size造成了索引访问越界

- [x] [exercise 3.31](../exercises/3_31.cc)

- [x] [exercise 3.32](../exercises/3_32.cc)

- [x] exercise 3.33

    Q: 对于104页的程序,如果不初始化scores会发生什么?

    A: 使用下标访问scores, 由于没有初始化, 会出现越界

- [x] exercise 3.34

    Q: 假设p1和p2指向同一个数组的元素,下面程序的功能是什么? 什么情况下该程序是非法的?
    
    ```c++
    p1 += p2 - p1;
    ```

    A: 功能是p1指针移动到p2的位置, 当p1加上p2 - p1计算的距离超过数组长度时, 或p2 - p1出现负值, 会出现指针访问越界错误

- [x] [exercise 3.35](../exercises/3_35.cc)

- [x] [exercise 3.36](../exercises/3_36.cc)

- [x] exercise 3.37

    Q: 下面程序是何含义? 输出结果是什么?
    ```c++
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
    ```

    A: cp取ca首元素的地址, 通过指针迭代输出每个字符

- [x] exercise 3.38

    Q: 将两个指针相加非法, 且没有意义. 请问为什么将两个指针相加没有意义?

    A: 指针代表对象的内存地址, 地址 + 距离得到一个新的地址, 地址 - 地址得到两者距离, 而两个地址相加能得到什么呢? 

- [x] exercise 3.39

    Q: 编写一段程序, 比较两个string对象. 在编写一段程序, 比较两个C风格字符串的对象.

    [A](../exercises/3_39.cc)

- [x] exercise 3.40

- [x] exercise 3.41

- [x] exercise 3.42

- [] exercise 3.43

- [] exercise 3.44

- [] exercise 3.45
