a=int(input())
b=int(input())
c=int(input())
if(b**2-4*a*c>0):
  print('Two different roots,X=',(b*(-1)+(b**2-4*a*c)**(1/2))/2*a,'v',(b*(-1)-(b**2-4*a*c)**(1/2))/2*a,'.')
elif(b**2-4*a*c==0):
  print('The same roots,X= ',(b*(-1)/(2*a)),'.')
else:
  print('No real root.')
