weight = input ("Weight:")
term= input ("(L)bs or (K)g:")
if term.upper()=='L':
    print(f"You are {weight} pounds")
elif term=='K' or term=='k':
    weight = float(weight)
    msg = f"You are {weight*2.204} pounds"
    print(msg)
else:
    print("Wrong input!")