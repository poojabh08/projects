d=[['apples','grapes','plums','oranges'],['Alice','Bob','Louis','Master'],['Gorilla','monkey','chimp','human']]
l=0
for i in range(4):
        n=d[0][l]
        m=d[1][l]
        o=d[2][l]
        print(n.rjust(8)+m.rjust(8)+o.rjust(8))
        l+=1