def flip():
    choice = 0
    # while True:
    #     choice == 0 or choice == 1

    import random
    coin = random.randint(0, 1)
    choice = int (input("Για κορόνα δώσε 0, για γράμματα δώσε 1: "))

    if coin == choice:
        print ("Μπράβο το βρήκες!!!")
    else:
        print ("Δέν τα κατάφερες.")

flip()
