//let code is
// I had taken it in the arthamatic expression 
//The multiples of 3 and 5
def sumAP(n, d):

    n = int(n / d);

    return (n) * (1 + n) * (d / 2);

// multiples of 3 and 5
def sumMultiples(n):
//sum of multiples of n-1 not get same number as multiple
    n = n-1;
//for 3 and 5 15 is comman so we are subraction one of 15 among both of them
    return (int(sumAP(n, 3) + sumAP(n, 5) -
                sumAP(n, 15)));

n = int("2") 
// here we are useing empty space because i had no mutiples and if we print it i will be "0" and they did not zero as output
n = int("10")
print(sumMultiples(n));

n = int('100')
print(sumMultiples(n));
