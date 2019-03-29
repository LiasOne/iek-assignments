import time

# είσοδος ονόματος
name = input("Πώς σε λένε; ")

# ανάκτηση τοπικής ώρας συστήματος
hour = time.localtime().tm_hour
year = time.localtime().tm_year
if hour < 12:
    print ("Καλημέρα", name)
else:
    print ("Καλησπέρα", name)

etosGennisis = int(input("Ποιο έτος γεννήθηκες; "))

ilikia = year - etosGennisis

if ilikia > 30:
    print ("Είσαι: ", ilikia, ", για γεροντάκι καλά κρατάς")
else:
    print ("Είσαι: ", ilikia, ", πιπινάκι")
# καθυστέρηση
wait = 3
time.sleep(wait)

# ορισμός και εμφάνιση της Απάντησης
answer = 42
print("Η Απάντηση είναι...", answer)

# χαιρετισμός
print ("Καλημέρα", name)
