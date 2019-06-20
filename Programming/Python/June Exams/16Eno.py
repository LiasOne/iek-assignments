vathmos = []

vathmos.append(int(input("Δώσε έναν βαθμό απο το 0 έως το 100: ")))
while vathmos[0] not in range(0, 101):
    vathmos[0] = int(input("Ο βαθμός που έδωσες δεν είναι απο 0 έως 100. Ξαναδώσε βαθμό: "))

vathmos.append(int(input("Δώσε ακόμα έναν βαθμό απο το 0 έως το 100: ")))
while vathmos[1] not in range(0, 101):
    vathmos[1] = int(input("Ο βαθμός που έδωσες δεν είναι απο 0 έως 100. Ξαναδώσε βαθμό: "))

if vathmos[0] > vathmos[1]:
    diafora = vathmos[0] - vathmos[1]
else:
    diafora = vathmos[1] - vathmos[0]

def avg(lst, rnd = 2):
    avg_value = sum(lst) / len(lst)
    return round(avg_value, rnd)

if diafora <= 20:
    average = avg(vathmos)
    print("Ο μέσος όρος των δύο βαθμών που έδωσες είναι:", average)
else:
    vathmos.append(int(input("Δώσε ακόμα έναν βαθμό απο το 0 έως το 100: ")))
    while vathmos[2] not in range(0, 101):
        vathmos[2] = int(input("Ο βαθμός που έδωσες δεν είναι απο 0 έως 100. Ξαναδώσε βαθμό: "))
    average = avg(vathmos)
    print("Ο μέσος όρος των δύο βαθμών που έδωσες είναι:", average)
