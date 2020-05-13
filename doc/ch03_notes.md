## 1. String

### 处理字符串

### cctype
![](https://upload-images.jianshu.io/upload_images/14252596-da9b0c4d187b51f1.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

### 处理每个字符
for-range 语句
```c++
for (declaration: expression)
  statement
```

for-range 改变字符串中字符的内容，需要添加引用符
```c++
for (auto &c: str)
  statement
```

### 处理部分字符

**下标运算符**
运算符 string[index],  index类型是 `string::size_type`, 返回的是对应位置上字符的**引用**
index的可取范围区间在 [0, s.size())

## 2. Vector
### vector初始化语法
![](https://upload-images.jianshu.io/upload_images/14252596-185aee7ec227cf61.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

### vector操作
![](https://upload-images.jianshu.io/upload_images/14252596-49adfd2552eb304e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

- **不能再for-range中使用push_back**
- 空的vector不能通过计算索引去添加元素，但是开辟好空间的vector可以
- **如果初始时指定了容量, push_back时是在初始的容量后面添加**

### 3. 迭代器
`begin()` 成员返回指向容器的第一个元素，`end()` 返回容器末尾下一个位置的元素
迭代器分为有效和无效
- 指向某个元素或指向容器末尾下一个位置属于有效(`end()`)
- 其他都是无效 

**如果迭代器为空，begin返回的是和end相同的迭代器**

### 迭代器运算符
![](https://upload-images.jianshu.io/upload_images/14252596-b16efa2af6d3c8cd.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

和指针类似，使用迭代器访问元素需要**解引用**

### 迭代器访问标准套路
```c++
for(auto it = s.begin(); it !=s.end(); it++)
  *it
```

### 迭代器类型
标准款类型分为
- iterator
- const_iterator： 表示只读，不能写入

对象是常量，`begin` 和 `end` 返回 const_iterator

> 使用迭代器的循环结构，不要通过迭代器向容器内添加元素

### 迭代器运算
![](https://upload-images.jianshu.io/upload_images/14252596-c3f49d73a88626b7.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
- 迭代器增减n表示移动的距离
- 两个迭代器只能进行减法，用于计算两个迭代器的距离
- 比较迭代器表示迭代器的前后关系

## 4. Array

### 声明和初始化

- 如果使用变量cnt初始化数组长度，则变量cnt**必须是常量表达式**
- 默认情况下，数组的元素被默认初始化
- 定义数组必须指定数组的类型，不能使用**auto**关键字推断类型
- 数组的元素应为对象，不存在引用的数组
 
```c++
unsigned cnt = 42; // 如果使用cnt初始化数组会在编译时出错
constexpr unsigned sz = 42;  // sz是正确的
int arr[10];
int *parr[sz]; // 含有42个整型指针的数组

// 显示初始化
int ial[3] = {0, 1, 2};
int a2[] = {0, 1, 2};
int a3[5] = {0, 1, 2}; // 等价于 {0, 1, 2, 0, 0}
```

### 字符数组
使用列表初始化字符数组，**如果不显示声明`'\0'`，则不会自动添加**, 使用字面量初始化字符数组会隐式添加`\0`;
```c++
char a1[] = {'c', '+', '+'}; // 不包含 '\0'
char a2[] = {'c', '+', '+', '\0'}; // 手动添加 '\0'
char a3[] = "c++"l // 自动包含'\0'
```

> 数组不允许拷贝赋值

### 复杂数组声明

从内向外阅读有助于理解复杂的数组声明
```c++
int *ptrs[10]; // 存放10个int类型的指针
int (*Parray)[10] = &arr; // Parray是一个指针，指向含有10个整数的数组
int (&arrRef)[10] = arr;  // arrRef是一个引用，引用一个含有10个整数的数组
iny *(&arry)[10] = ptrs; // arry是数组的引用，该数组含有10个指针
```

### 访问数组

数组可以有多种访问形式

1. 使用下标
```c++
int ia[10];
ia[0];
```

下标的类型为`size_t`

2. 使用指针作为迭代器
获取到数组首元素的指针后, 就可以对其访问
```c++
int ia[10];
int *pia = &ia[0]; // 等价于 int *pia = ia;

++pia; // 指向下一个位置
```

3. 标准库begin和end
通常使用指针不太安全, c++11在标准库提供了这两个函数, 用法和迭代器部分一致

### c风格字符串
c风格字符串并不是一种类型, 而是为了表达字符串所约定的一种写法: 以'\0' 字符结尾.

和string不同, string标准库支持了操作符重载, 一些操作可以使用符号进行, c风格字符串的操作需要使用对应的函数, 对应在C++的头文件是 `#include <cstring>`
 > 对大多数应用来说, 标准库的string使用比c风格字符串更安全

### c风格字符串和string混合使用
- 可以使用c风格字符串初始化string
```c++
string s("hello");
```

- 可以使用c风格字符串和string拼接
```c++
s1 + "hello";
```
- 可以使用c风格字符串赋值给string
```c++
s1 = "hello";
```
### 数组初始化vector
```
int ia[10];
vector<int> v(begin(ia), end(ia));
```

## 5. 多维数组

数组的数组

二维数组: 一维是数组本身的大小, 一维是数组元素的个数. 也称为行和列.

多维数组的访问和操作与数组一致, 注意所处的维度.

