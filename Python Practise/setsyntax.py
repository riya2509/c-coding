set_var={'Riya','huedfkl','uiehf','euiuierh'}
set1= {"riya",'girl','a'}
set2= {'riya','you','are','a','girl'}
print(set_var)
print(type(set_var))
#We cannot find out indexing in sets
set_var.add('fguoufg')
print(set_var)
#difference
print(set2.difference(set1))
print(set2)
## updating the set 2
set2.difference_update(set1)
print(set2)
