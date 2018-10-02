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

----

2.) An overflow of the short data type results in the value changing sign. In this case, the sum flips from positive to negative.
The value of n that produces an overflow in this case is 256.

----

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

----

4.) Various valuse of n! with n as long and n! as float

|n|n!|
|----|----|
|5|120|
|8|40320|
|10|3.6288e+06|
|30|2.65253e+32|
|34|2.95233e+38|
|35|inf -> overflow!|

In this case, overflow is indicated by a value of inf.
The value of n that produces an overflow in this case is 35.

----

5.) Various values of n! with n as long and n! as float

|n|n!|
|----|----|
|5|120|
|8|40320|
|10|3.6288e+06|
|30|2.65253e+32|
|34|2.95233e+38|
|35|103331e+40|
|100|9.33262e+157|
|150|5.71338e+262|
|170|7.25742e+306|
|171|inf -> overflow!|

In this case, overflow is indicated by a value of inf.
The value of n that produces an overflow in this case is 171.

----

6.) The expected value of (summation 1/n)-1 where i=1 to n is zero.
Various values of n and the result of the calculation

|n|summation-1 (float)|summation-1 (double)|
|---|---|---|
|2|0|0|
|4|0|0|
|5|0|0|
|6|0|-1.11022e-16|
|8|0||
|9|1.19209e-7|
