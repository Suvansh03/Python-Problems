# Write a python program to sort the list of heterogeneous data. 
L = ["Ram", 1, "Shyam", 2, "Aman", 3]
L_int=[]
L_str=[]
print ("Actual list : ", L)
for i in L:
    if(type(i)==int):
        L_int.append(i)
    elif(type(i)==str):
        L_str.append(i)

L_int.sort()
L_str.sort()
print ("Integer List : ", L_int)
print ("String List : ", L_str)
L = L_int + L_str
print ("Sorted Heterogeneous List : ", L)