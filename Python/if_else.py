from math import sqrt 
print('--- EQUATION SOLVER ---') 
a = float(input('a = ')) 
b = float(input('b = ')) 
c = float(input('c = ')) 
d = b*b - 4*a*c 
if d >= 0: 
 print('THERE ARE REAL SOLUTIONS:') 
 x1 = (-b + sqrt(d))/(2*a) 
 x2 = (-b - sqrt(d))/(2*a) 
 print(f'x1 = {x1}') 
 print(f'x2 = {x2}') 
else: 
 print('THERE ARE COMPLEX SOLUTIONS BUT I CANNOT SHOW YOU.') 
input('\nThank you! Press enter to quit ...') 