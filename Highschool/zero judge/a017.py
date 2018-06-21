i=0
i2=0
b=[]
a=str(input('Please enter ur equation.'))
def inte(q,w):
  c=''
  while (q<w):
    c=c+a[q]
    q+=1
  return int(c)
#put the numbers together
while (i<=len(a)):
  if (i==len(a)):
    b.append(inte(i2,i))
    break
  elif (a[i]=='+'or a[i]=='-'or a[i]=='x'or a[i]=='/'or a[i]=='%'):
    b.append(inte(i2,i))
    b.append(a[i])
    i+=1
    i2=i
  else:
    i+=1
#multipulation & division
i=0
c=[]
while (i<=len(b)):
  if(i==len(b)):
    c.append(b[i-1])
    break
  elif(b[i]=='x'):
    b[i+1]=b[i-1]*b[i+1]
    i+=1
  elif(b[i]=='/'):
    b[i+1]=b[i-1]/b[i+1]
    i+=1
  elif(b[i]=='%'):
    b[i+1]=b[i-1]%b[i+1]
    i+=1
  elif(b[i]=='+'):
    c.append(b[i-1])
    c.append('+')
    i+=1
  elif(b[i]=='-'):
    c.append(b[i-1])
    c.append('-')
    i+=1
  else:
    i+=1
#addition & subtraction
for i in range(0,len(c),1):
  if(c[i]=='+'):
    c[0]=c[0]+c[i+1]
  elif(c[i]=='-'):
    c[0]=c[0]-c[i+1]
print(int(c[0]))
    
  
