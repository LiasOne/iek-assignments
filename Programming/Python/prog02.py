x = int (input ("Please enter an intiger: "))

if x < 0:
    print ('Negative number, transforming into positive')
    x = -x
elif x == 0:
    print ('Zero')
elif x == 1:
    print ('One')
else :
    print ('Great than 1')
