print('Write the command "help" to know the steps')
i=0
started = False
help=input(">")
if help.upper()=='HELP':
   print ('''start-to start the car
stop-to stop the car
quit-to exit''')
else :
  print("I don't understand that...")
help=help.upper()
while i>=0:
    i+=1
    command=(str)(input(">"))
    command=command.upper()
    if command=='QUIT':
        break
    elif command=='START':
        if started:
            print("Car has already started!")
        else:
            started=True
            print("Car started...ready to go!")
    elif command=='STOP':
        if not started:
          print("Car has already stopped!")
        else:
            started=False
            print("Car has stopped.")
    
    else:
        print("I don't understand that...")

    





