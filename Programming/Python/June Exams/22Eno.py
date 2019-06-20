num = int(input("Δώσε έναν αριθμό: "))

text = 'Ο αριθμός που έδωσες είναι μεταξύ του 1 και του 999 και είναι: '

arithmos_psifion = ['Μονοψήφιος', 'Διψήφιος', 'Τριψήφιος']

if num in range(1, 999):
    if num in range(1, 10):
        print (text, arithmos_psifion[0])
    elif num in range(10, 100):
        print (text, arithmos_psifion[1])
    elif num in range(99, 1000):
        print (text, arithmos_psifion[2])
else:
    print('Ο αριθμός που έδωσες δέν είναι μεταξύ του 1 και του 999')
