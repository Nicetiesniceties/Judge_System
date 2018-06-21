t=int(input('How many sequences are there?'))
table= [ [ 0 for i in range(5) ] for j in range(t) ]
print (table)
for d1 in range(t):
    for d2 in range(4):
        table[d1][d2]= int(input())
for a in range(t):
    if (table[a][3]-table[a][2]==table[a][2]-table[a][1]):
        table[a][4]=table[a][3]*2-table[a][2]
    else:table[a][4]=(table[a][3]**2)/table[a][2]
print (table)

