

a=int(input("Enter a natural number"))
if a==1:
    print("It is neither prime nor composite")
else:
    i=2;b=0
    while 2<=i<=a**0.5:
        if a%i==0:
            print("It is not a prime number")
            b=1
            break
        i+=1
    if b==0:
        print("It is a prime number")
    