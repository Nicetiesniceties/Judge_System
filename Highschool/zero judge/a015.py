a=int(input('Please enter the number of the rows.'))
b=int(input('Please entyer the number of the columns.'))
old_matrix=[[0 for x in range(b)]for y in range(a)]
new_matrix=[[]]
for i in range(0,a,1):
    for r in range(0,b,1):
         old_matrix[i][r]=(input())
new_matrix=list(zip(*old_matrix))
for h in range(a):
  print(old_matrix[h],'\n')
for h in range(a):
  print(new_matrix[h],'\n')

