Ben Howe
Lab03
COSC 2030
10/4/2018

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
The value of n that produces an overflow in this case is 256. Another good check is to see if when adding a positive number that the restult is greater than original number.

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

|n|(summation 1/n)-1 (float)|(summation 1/n)-1 (double)|
|---|---|---|
|1|0|0|
|2|0|0|
|3|0|0|
|4|0|0|
|5|0|0|
|6|0|-1.11022e-16|
|7|0|-2.22045e-16|
|8|0|0|
|9|0|2.22045e-16|
|10|1.19209e-07|-1.11022e-16|
|11|1.19209e-07|2.22045e-16|
|12|-1.19209e-07|0|
|13|0|-2.22045e-16|
|14|1.19209e-07|-3.33067e-16|
|15|0|-1.11022e-16|
|16|0|0|
|17|0|0|
|18|2.38419e-07|2.22045e-16|
|19|-1.78814e-07|-4.44089e-16|
|20|1.19209e-07|2.22045e-16|

Explaination: Floating point rounding error is the cause of the non-zero values. The reason the float and double results differ is due to the differences in the numbers of decimal places each can represent. Both data types have rounding errors, the rounding just happens at at different values of n. It is important to note that in this case the error with the double data type is significantly less than that of the float.

----

7.) What is happening is that the float representations of the numbers are not exactly equal to the expected values. This is because fractional values can't be represented perfectly in binary with a fixed number of bits, so some rounding ends up taking place at the outermost bits representing the smallest decimal place. This rounding error is magnified with each successive addition of the increment value. By forcing the display of more decimal places (as I did in my code) it is easy to see what happens. When the check to see if i<4.4, i ends up being just less than 4.4 when it "actually" should have been 4.4, so the loop is executed the "extra" time.

----

8.) By changing the variable i from question 7 to a double, the rounding error is different because of the much larger fractional values that a double can represent. If the interval were larger, or the check on i were in a different location, the same problem with the float could happen with the double because the accumulation of rounding errors could eventually be significant enough to throw the calculation off. In this case when the check to see if i<4.4 happens, i ends up being just a little more than 4.4, so the loop is not executed the "extra" time as in the case of question 7.

----

Reference used for questions 7 and 8: [link text https://www.exploringbinary.com/why-0-point-1-does-not-exist-in-floating-point/]
