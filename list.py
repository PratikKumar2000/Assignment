# create a list using []
a = [1,2,7,4,6]
print(a)
print(a[1])
print(a[-len(a)])#it will show first index number.(negative indexing)
# print(a[5])IndexError: list index out of range
#unline strings we can change it's content
a[1] = 42
print(a)
# we can create list having different data types
a = [1,1.2,False,"pratik",None]
print(a)
#a list can be indexed just like string. Similarly it can be sliced.
print(a[1::2])
#list functions
# print(a.sort()) TypeError: '<' not supported between instances of 'str' and 'int'
b = [1,3,2,78,45,32]
b.sort() #---it sorts the original list
print(b)
b.reverse()#reverses the list
print(b)
b.append(32)#adds at the end of the list
print(b)
b.insert(3,2)#inserts 2 at index 3 and shifts the other right
print(b)
print(b.pop(2))#removes element at index 2 and returns it.
print(b)
b.remove(2) #removes specified element from the list(the first occurence, not all)
print(b)
print(sum(b))
print(len(b))