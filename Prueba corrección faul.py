def faul():
    nombre=raw_input("dame tu nombre:")
    if (nombre[0]=="A" or nombre[0]=="Z"):
        print("tu nombre va el primero o el ultimo")
    else:
        print("tu nombre no va el primero")
    for cont in range (1,4):
        print ("ADIOS")

faul()
