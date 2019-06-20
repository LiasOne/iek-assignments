a_num = float(input("Δώσε τον προφορικό βαθμό: "))
b_num = float(input("Δώσε τον γραπτό βαθμό: "))

sum = a_num + b_num
avg = sum / 2

print("Ο μέσος όρος του μαθητή είναι:", avg)

if avg > 9.5:
    print ("Ο ΜΑΘΗΤΗΣ ΠΡΟΑΓΕΤΑΙ")
else:
    print ("Ο ΜΑΘΗΤΗΣ ΠΑΡΑΠΕΜΠΕΤΑΙ ΓΙΑ ΕΠΑΝΕΞΕΤΑΣΗ")
