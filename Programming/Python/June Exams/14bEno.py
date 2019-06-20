size = input("Δώσε κατηγορία ρούχου: ")

if size == 'S' or size == 's':
    price = int(input("Δώσε τιμή ρούχου: "))
    if price <= 50:
        print("Φθηνό")
    else:
        print("Ακριβό")
elif size == 'M' or size == 'm' or size == 'L' or size == 'l':
    price = int(input("Δώσε τιμή ρούχου: "))
else:
    print("Κάτι δεν έκανες σωστά")
