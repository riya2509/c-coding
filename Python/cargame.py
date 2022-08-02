print('Write the command "help" to know the steps')
i=0
help=input(">")
if help.upper()=='HELP':
   print ('''start-to start the car
stop-to stop the car
quit-to exit''')
else :
  print("I don't understand that...")
help=help.upper()
while i>=0:
    command=(str)(input(">"))
    command=command.upper()
    if command=='QUIT':
        print("Car stopped.")
        break
    elif command=='START':
        print("Car started...ready to go!")
    elif command=='STOP':
        print("Car stopped.")
    else:
        print("I don't understand that...")




