dict={}
print(type(dict))
my_dict={'car1':'ru','ehfu':'ufuh'}
for x in my_dict.values():
    print(x)
print(my_dict)
print(my_dict['car1'])
for x in my_dict.items():
    print(x)
#relacing values
my_dict['car1']='riya'
print(my_dict)

## Nested dictonaries
car1={"maruti":'yo'}
car2={"yum":"you"}
car3={"mongo":"hi"}

final_car={'car1':{"maruti":'yo'},"car2":{"yum":"you"},"car3":{"mongo":"hi"}}
print(final_car['car1']['maruti'])