import random

choice = int (input("Για κορόνα δώσε 0, για γράμματα δώσε 1: "))

zcoin = random.randint(0, 1)

if coin == choice:
    print ("Μπράβο το βρήκες!!! Έφερες", choice)
else:
    print ("Δέν τα κατάφερες. :(")
