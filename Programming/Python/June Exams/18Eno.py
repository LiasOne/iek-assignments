a = int(input("Δώσε τον πρώτο αριθμό: "))
b = int(input("Δώσε τον δεύτερο αριθμό: "))

def mon_zyg(num):
    if num % 2 == 0:
        return True
    else:
        return False

if  mon_zyg(a) == True and mon_zyg(b) == True:
    print("Οι αριθμοί που έδωσες είναι άρτιοι και το άθρισμα τους είναι: %d." % (a + b))
elif  mon_zyg(a) == False and mon_zyg(b) == False:
    print("Οι αριθμοί που έδωσες είναι περιτοί και το γινόμενο τους είναι: %d." % (a * b))
else:
    print("Οι αριθμοί που έδωσες δεν είναι και οι δυο άρτιοι ή περιτοί\nκαι το ακέραιο πηλίκο της διαίρεσης του πρώτου από το δεύτερο είναι: %d." % (b / a))
