def disekto_etos(y):
    if y % 400 == 0:
        return True
    if y % 100 == 0:
        return False
    if y % 4 == 0:
        return True
    else:
        return False

year = int(input("Δώσε έτος: "))
if year not in range(0,2101):
    print("Εκτός ορίων")
else:
    if disekto_etos(year) == True:
        print("Έτος δίσεκτο")
