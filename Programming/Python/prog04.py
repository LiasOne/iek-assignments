shoppinglist = [ "Cheese", "Rice", "Coffee", "Milk", "Camba" ]

for element in shoppinglist:
    print (element)

element = input ("what are you buing today? ")

if element in shoppinglist:
    print ("Yes, this is on the list")
else:
    print ("Not on the list, you don't need it")
