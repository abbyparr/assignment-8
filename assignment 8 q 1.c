def void(x):

    x = input()
    
    #numeric
a = x.isnumeric().count(x)
print('The number of numeric characters is', a)

    #lower case
b = x.lower().count(x)
print('The number of lower case characters are', b)
   
    #upper case
c = x.upper().count(x)
print('The number of upper case characters are', c)

    #symbols
d = x.isascii().count(x)
print('The number of symbols are', d)




