periodos_imeras = ['Πρωί', 'Μεσημέρι', 'Απόγευμα', 'Βράδυ']

onoma = input("Πως σε λένε: ")
periodos_im = input("Τι περίοδος της ημέρας είναι τώρα %s; %s, %s, %s ή %s: " % (onoma, periodos_imeras[0], periodos_imeras[1], periodos_imeras[2], periodos_imeras[3]))

if periodos_im == periodos_imeras[0]:
    print ('Καλημέρα %s' % onoma)
elif periodos_im == periodos_imeras[1]:
    print ('Καλό Μεσημέρι %s' % onoma)
elif periodos_im == periodos_imeras[2]:
    print ('Καλό Απόγευμα %s' % onoma)
elif periodos_im == periodos_imeras[3]:
    print ('Καλό Βράδυ %s' % onoma)
else:
    print ('Κάτι δεν έγραψες σωστά')
