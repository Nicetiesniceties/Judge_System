love=['Jazz','CKJC','sax','Mom and Dad','Joanne','建中爵音','214','108','CKJC 10th','爵音學長們','爵音學弟們','keyboard','bass','guitar','drum set']
liking=['I love you,','Thank you,','The best ','INCOMPARABLE ','LEGENDARY ']
for j in range(0,15):
   import random
   random.shuffle(love)
   for i in range(0,15):
         Jazz=i
         Passion=random.randrange(0, 5)
         print (liking[Passion],love[Jazz],end='.  ')
   
      
