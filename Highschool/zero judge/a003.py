print('Please input your birth date.Then I\'ll tell you your fortune. ')
print('Month=')
a=int(input())
print('Day=')
b=int(input())
s=(a*2+b)%3
if(s==0):print('A promising future is awaiting you!')
elif(s==1):print('Your fate.......hm.......not bad!')
elif(s==2):print('I\'m sorry .Be careful about yourself.')
