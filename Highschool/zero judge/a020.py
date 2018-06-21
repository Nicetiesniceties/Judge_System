map=tuple(zip(('A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z')\
              ,(10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33)))
ID=input('Plz enter an ID number.')
for c,b in map:
    if(ID[0]==c):
          a=b
a=int(a/10)+(a%10) *9
for i in range(1,9,1):
 a=a+int(ID[i])*(9-i)
a+=int(ID[9])
if(a%10==0):print('real')
else:print('fake')
