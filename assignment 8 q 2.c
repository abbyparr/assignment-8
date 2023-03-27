def secret(x):
    
   x = input()
   
   first_letter = x.split()[0]

   for character in first_letter:
       if character != [0]:
           first_letter = first_letter + character
   else:
       break
   
   print("The first letter is", first_letter)
   
   acrostic = first_letter + first_letter
   print("The secret message is", acrostic)    
   
   return()
    

   