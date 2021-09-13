op = 0 
while op != 5:
    print('''    [ 1 ] - Decimal -> Binary
    [ 2 ] - Binary -> Decimal
    [ 3 ] - Exit''')
    op = int(input('Choose an option: '))
    if op == 1:
        b = int(input('Enter a decimal number: '))
        temp = '{0:b}'.format(b)
        print('The decimal number is: {}'.format(temp))
    if op == 2:
        d = input('Enter a binary number: ')
        number = int(d, 2)
        float (number)
        print('The binary number is: {}'.format(number))
print('The end!')
        