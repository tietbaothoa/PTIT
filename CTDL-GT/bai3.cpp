s = input()

kq = ""
vt = 0

for  i in s:
    if i == '<':
        if (vt > 0):
            vt -= 1
            
    elif i == '>':
        if (vt < len(kq)):
            vt +=1
    elif i == '-':
        try:
            kq = kq[:vt - 1] + kq[vt:]
        except:
            kq = kq[:vt - 1] 
    else:
        kq = kq[:vt] + i + kq[vt:]
        vt += 1
        print("done")
print(kq)