- [ ] exercise 10.1

    Q: The algorithm header defines a function named count that, like find , takes a pair of iterators and a value. count returns a count of how often that value appears. Read a sequence of int s into a vector and print the count of how many elements have a given value

- [ ] exercise 10.2

    Q: Repeat the previous program, but read values into a list of string s.

- [ ] exercise 10.3

    Q: Use accumulate to sum the elements in a vector `<int>`.


- [ ] exercise 10.4

    Q: Assuming v is a `vector<double>` , what, if anything, is wrong with calling `accumulate(v.cbegin(), v.cend(), 0)`?


- [ ] exercise 10.4

    Q: In the call to equal on rosters, what would happen if both rosters held C-style strings, rather than library string s?


- [ ] exercise 10.5

    Q: In the call to equal on rosters, what would happen if both rosters held C-style strings, rather than library string s?

- [ ] exercise 10.6

  Q:  Using `fill_n` , write a program to set a sequence of `int`values to 0. 

- [ ] exercise 10.7

  Q:  Determine if there are any errors in the following programs and, if so, correct the error(s): 

  a.

  ```c++
  vector<int> vec; list<int> lst; int i;
  while(cin >> i)
      lst.push_back(i);
  copy(lst.cbegin(), lst.cend(), vec.begin());
  ```

  b.

  ```c++
  vector<int> vec;
  vec.reserve(10); // reserve is covered in § 9.4 (p. 356) 
  fill_n(vec.begin(), 10, 0); 
  ```

  

- [ ] exercise 10.8

  Q:  e said that algorithms do not change the size of the containers over which they operate. Why doesn’t the use of `back_inserter` invalidate this claim? 

- [ ] exercise 10.9

  Q:  Implement your own version of `elimDups` . Test your program by printing the `vector` after you read the input, after the call to `unique` , and after the call to `erase` . 

- [ ] exercise 10.10

  Q:  Why do you think the algorithms don’t change the size of containers? 

- [ ] exercise 10.11

  Q:  Write a program that uses `stable_sort` and `isShorter` to sort a `vector` passed to your version of `elimDups` . Print the `vector` to verify that your program is correct. 

- [ ] exercise 10.12

  Q:  Write a function named `compareIsbn` that compares the `isbn()` members of two `Sales_data` objects. Use that function to `sort` a `vector` that holds `Sales_data` objects. 

- [ ] exercise 10.13

  Q:  The library defines an algorithm named `partition` that takes a predicate and partitions the container so that values for which the predicate is `true` appear in the first part and those for which the predicate is `false` appear in the second part. The algorithm returns an iterator just past the last element for which the predicate returned `true` . Write a function that takes a `string` and returns a `bool`indicating whether the `string` has five characters or more. Use that function to partition `words` . Print the elements that have five or more characters. 

- [ ] exercise 10.14

  Q:  Write a lambda that takes two `int` s and returns their sum. 

- [ ] exercise 10.15

  Q:  Write a lambda that captures an `int` from its enclosing function and takes an `int` parameter. The lambda should return the sum of the captured `int` and the `int` parameter. 

- [ ] exercise 10.16

  Q:  Write your own version of the `biggies` function using lambdas. 

- [ ] exercise 10.17

   Q: Rewrite exercise 10.12 from § 10.3.1(p. 387) to use a lambda in the call to `sort` instead of the `compareIsbn` function. 

- [ ] exercise 10.18

   Q:  Rewrite `biggies` to use `partition` instead of `find_if` . We described the `partition` algorithm in exercise 10.13 in §10.3.1 (p. 387). 

- [ ] exercise 10.19

   Q:  Rewrite the previous exercise to use `stable_partition` , which like `stable_sort` maintains the original element order in the paritioned sequence. 

- [ ] exercise 10.20

   Q:  The library defines an algorithm named `count_if` . Like `find_if` , this function takes a pair of iterators denoting an input range and a predicate that it applies to each element in the given range. `count_if` returns a count of how often the predicate is true. Use `count_if` to rewrite the portion of our program that counted how many words are greater than length 6. 

- [ ] exercise 10.21

   Q:  Write a lambda that captures a local `int` variable and decrements that variable until it reaches 0. Once the variable is 0 additional calls should no longer decrement the variable. The lambda should return a `bool` that indicates whether the captured variable is 0. 

- [ ] exercise 10.22

   Q: Rewrite the program to count words of size 6 or less using functions in place of the lambdas. 

- [ ] exercise 10.23

   Q:  How many arguments does `bind` take? 

- [ ] exercise 10.24

   Q:  Use `bind` and `check_size` to find the first element in a `vector` of `int` s that has a value greater than the length of a specified `string` value. 

- [ ] exercise 10.25

   Q: In the exercises for §10.3.2 (p. 392) you wrote a version of `biggies` that uses `partition` . Rewrite that function to use `check_size` and `bind` . 

- [ ] exercise 10.26

   Q:  Explain the differences among the three kinds of insert iterators. 

- [ ] exercise 10.27

   Q:  In addition to `unique` (§ [10.2.3 ](text00008.html#filepos0001832665), p. [384 ](text00008.html#filepos0001832665)), the library defines function named `unique_copy` that takes a third iterator denoting a destination into which to copy the unique elements. Write a program that uses `unique_copy` to copy the unique elements from a `vector` into an initially empty `list` . 

- [ ] exercise 10.28

   Q:   Copy a `vector` that holds the values from `1` to `9`inclusive, into three other containers. Use an `inserter` , a `back_inserter` , and a `front_inserter` , respectivly to add elements to these containers.  

- [ ] exercise 10.29

   Q:  Write a program using stream iterators to read a text file into a `vector` of `string` s. 

- [ ] exercise 10.30

   Q:  Use stream iterators, `sort` , and `copy` to read a sequence of integers from the standard input, sort them, and then write them back to the standard output. 

- [ ] exercise 10.31

   Q:  Update the program from the previous exercise so that it prints only the unique elements. Your program should use `unqiue_copy` (§ [10.4.1 ](text00009.html#filepos0001914495), p. [403 ](text00009.html#filepos0001914495)). 

- [ ] exercise 10.32

   Q:  Rewrite the bookstore problem from § [1.6 ](text00000.html#filepos0000209379)(p. [24 ](text00000.html#filepos0000209379)) using a `vector` to hold the transactions and various algorithms to do the processing. Use `sort` with your `compareIsbn` function from § [10.3.1](text00008.html#filepos0001842984)(p. [387 ](text00008.html#filepos0001842984)) to arrange the transactions in order, and then use `find` and `accumulate` to do the sum. 

- [ ] exercise 10.33

   Q:  Write a program that takes the names of an input file and two output files. The input file should hold integers. Using an `istream_iterator` read the input file. Using `ostream_iterator` s, write the odd numbers into the first output file. Each value should be followed by a space. Write the even numbers into the second file. Each of these values should be placed on a separate line. 

- [ ] exercise 10.34

   Q:   Use `reverse_iterator` s to print a `vector` in reverse order. 

- [ ] exercise 10.35

   Q:  Now print the elements in reverse order using ordinary iterators. 

- [ ] exercise 10.36

   Q:  Use `find` to find the last element in a `list` of `int` s with value 0. 

- [ ] exercise 10.37

   Q:  Given a `vector` that has ten elements, copy the elements from positions 3 through 7 in reverse order to a `list` . 

- [ ] exercise 10.38

   Q:  List the five iterator categories and the operations that each supports. 

- [ ] exercise 10.39

   Q:  What kind of iterator does a `list` have? What about a `vector` ? 

- [ ] exercise 10.40

   Q:  What kinds of iterators do you think `copy` requires? What about `reverse` or `unique` ? 

- [ ] exercise 10.41

   Q:  Based only on the algorithm and argument names, describe the operation that the each of the following library algorithms performs: 

- [ ] exercise 10.42

   Q:  Reimplement the program that eliminated duplicate words that we wrote in § [10.2.3 ](text00008.html#filepos0001832665)(p. [383 ](text00008.html#filepos0001832665)) to use a `list` instead of a `vector` . 