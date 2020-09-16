n = int(input("How many objects do you have?\n"))
x = [0]*n
y = [0]*n
m = [0]*n
xtot = 0
ytot = 0
mtot = 0
for i in range (0,n):
    mxy = input("Please insert the mass, x-coordinate, and y-coordinate of the object respectively.\n").split()
    m[i] = float(mxy[0])
    x[i] = float(mxy[1])
    y[i] = float(mxy[2])
    xtot += x[i]*m[i]
    ytot += y[i]*m[i]
    mtot += m[i]
X_C = xtot / mtot
Y_C = ytot / mtot
print("The coordinates of the centre are (" + str(X_C) + "," + str(Y_C) + ")")

            



                 
