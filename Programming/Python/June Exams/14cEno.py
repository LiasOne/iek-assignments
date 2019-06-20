varos = int(input("Δώσε βάρος ντομάτας σε g: "))

if varos > 2 and varos <= 3:
    diametros = int(input("Δώσε διάμετρο ντομάτας σε cm: "))
    print("Η ντομάτα έχει βάρος: %dg και διάμετρο: %dcm." % (varos, diametros))
elif varos <= 2:
    print("Η ντομάτα είναι Προς Πώληση")
else:
    print("Η ντομάτα είναι Προς Σάλτσα")
