ins='1 5 4 3 10 7 19'
a=ins.split()
ms=[i for i in range(len(a)) if (i+1)%2==0 and (i+1)%3!=0]
m=[a[i] for i in ms]
m.sort()
ns=[i for i in range(len(a)) if (i+1)%3==0]
n=[a[i] for i in ns]
n.sort(reverse=True)
for i in range(len(m)):
	a[ms[i]]=m[i]

for i in range(len(n)):
	a[ns[i]]=n[i] 
	
print a
print ' '.join(a)

# -*- coding: UTF-8 -*-

for i in range(1,10):
    for j in range(1,10):
        result = i * j
        print '%d * %d = % -3d' % (i,j,result)
    print ''