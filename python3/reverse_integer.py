def main():
    given_integer = int(input("enter an integer: "))
    reversed_integer = 0    # initialised the reversed integer (answer)
    while given_integer != 0:   # we need to stay in this loop until modulo returns 0, then we exit out.
        digit = given_integer % 10  # to separate the last digit from the number mathematically (modulo operator)
        reversed_integer = reversed_integer * 10 + digit    # formula to reverse the number (mathematical basis - nothing to do with code)
        given_integer = given_integer // 10    # update the given number to remove the last digit from consideration because it's been processed 
    print(reversed_integer)
# main()

def test():
        x = -123
        ans = 0
        while x != 0:
            digit = x % 10
            ans = (ans * 10) + digit
            x = x // 10
        print(ans)

test()