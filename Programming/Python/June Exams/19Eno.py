month_strings = ["", "Ιανουάριος", "Φεβρουάριος", "Μάρτιος", "Απρίλιος", "Μαΐος", "Ιούνιος", "Ιούλιος", "Αύγουστος", "Σεπτέμβριος", "Οκτώβριος", "Νοέμβριος", "Δεκέμβριος"]

print("Πρόγραμμα που σου δίχνει πόσες ημέρες έχει ο μήνας ενός έτους")

date = input("Δωσε μήνα και έτος στη μορφή ΜΜ-ΕΕΕΕ: ")

month, year = map(int, date.split('-'))

def disekto_etos(y):
    if y % 400 == 0:
        return True
    if y % 100 == 0:
        return False
    if y % 4 == 0:
        return True
    else:
        return False

def mon_zyg(num):
    if num % 2 == 0:
        return True
    else:
        return False

def ypologismos_imeron(func_1, func_2, mhnas):
    if func_1 == True and mhnas == 2:
        return '29'
    if func_1 == False and mhnas == 2:
        return '28'
    if mhnas in range(0, 8) and mhnas != 2:
        if func_2 == True:
            return '30'
        else:
            return '31'
    if mhnas in range(8, 13) and mhnas != 2:
        if func_2 == True:
            return '31'
        else:
            return '30'

print ("Ο %s μήνας του έτους %d έχει: %s ημέρες." % (month_strings[month], year, ypologismos_imeron(disekto_etos(year), mon_zyg(month), month)))
