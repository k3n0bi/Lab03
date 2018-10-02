Ben Howe
Lab03
COSC 2030
10/1/2018

1.) Various values of n and the sum using short type for n and the sum.
sum = summation i (i=1 to n)

|n|sum|
|----|----|
|1|1|
|2|3|
|4|10|
|8|36|
|16|136|
|32|528|
|64|2080|
|128|8256|
|255|32640|
|256|-32640 -> overflow!|

2.) An overflow of the short data type results in the value changing sign. In this case, the sum flips from positive to negative.
The value of n that produces an overflow in this case is 256.

3.) Various values of n and the sum using long type for n and the sum.
sum = summation i (i=1 to n)

|n|sum|
|----|----|
|32|528|
|64|2080|
|128|8256|
|256|32896|
|1000|500500|
|12345|76205685|
|65535|2147450880|
|65536|-2147450880 -> overflow!|

The value of n that produces an overflow in this case is 65536.

