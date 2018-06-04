**Bisection Method:**  

**Write and test a program to implement the bisection method. Test the program on the following functions and intervals  
(a) x^-1 - tan(x) on [0, 22/14].  
(b) x^-1 - 2x on [0, 1].  
(c) Find a root of  
x^8 - 36x^7 + 546x^6 - 4536x^5 + 22449x^4 - 67284x^3 + 118124x^2 - 109584x + 40320 = 0 in the interval [5.5,6.5].  
(d) In (c), change 36 to 36.001 and repeat the test.**

**Approach:**
The bisection program takes these values: a, b, epsilon, Maximum number of iterations. The values of epsilon is taken
as the machine epsilon value.If the function value of a or b is zero then the root is a or b. If not, the midpoint is 
calculated. We check if the solution lies in either the first interval or second interval by checking the sign
after computing the function values for each of the values. If the sign is negative then the root
must be present in that interval. Thus after this iterative step, the interval is very small where
it will be very close to the root value. And can no longer be divided.

**Newton's Method:**

Write a program for Newton's method and test it on the following problems
(a) Find the roots of x - tan x = 0 near 4.5 and 7.7.  
(b) Solve the equation x^3 + 3x = 5x^2 + 7, starting at x0 = 5.  

**Approach:**

The bisection program takes these values: a, Maximum number of iterations, epsilon, delta. The values of epsilon and delta 
are taken as the machine epsilon value. Newton method we need the function value and the derivative value. So every time the
function value is calculated, we check if its value is less than the epsilon value. If it is then
we stop. The initial guess is very important in newton’s method as it converges locally. If the
we miss the value because of the initial guess then the computation can be really expensive.
