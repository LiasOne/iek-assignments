agones = {
    'α': 0.0,
    'β': 0.0,
    'γ': 0.0
}

for key in agones.keys():
    agones[key] = float(input("Δώσε την %s επίδωση: " % key))

epidoseis = agones.values()

def avg(lst, rnd=2):
    avg_value = sum(lst) / len(lst)
    return round(avg_value, rnd)

average = avg(epidoseis)

print("Μέση τιμή των επιδόσεων είναι: ", average)

if average > 8:
    print("Ο άλτης Προκρίθηκε")
