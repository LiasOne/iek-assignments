import random
thenumber = random.randint(1,50)

print ("Έχω σκευτεί έναν αριθμό από 0 έως 50.")
print ("Μπορείς να τον βρείς;")

guess = 0

while guess != thenumber:
    guess = int (input ("Δώσε τον αριθμό: "))
    if guess > thenumber:
        print ("Έδωσες μεγαλύτερο αριθμό!")
    if guess < thenumber:
        print ("Έδωσες μικρότερο αριθμό!")
    if guess == thenumber:
        print ("Τον βρήκες!!!")
