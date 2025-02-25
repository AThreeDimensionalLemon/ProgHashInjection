      Write a program that implements a one-to-one relationship hash function using an ADT List. Implement using an array,  personArray.

           Write the one-to-one function that hashes the 'name' into an unique array index. (Hint: # chars in a name ?)

           For each person, using their unique one-to-one hash-determined index, you will store their name, date of birth and their favorite desserts, in the array, 

       Name:    'J', 'Bo', 'Tuy', 'Alta', 'Kobet', 'Teddie', 'Sueanna'

       DOB:     1/5/2001,  2/6/2002,  3/7/2003,  4/8/2004,  5/9/2005,  6/10/2006,  7/10/2007

       FavDesserts t:   'Cheese Cake',  'Vanilla Ice Cream',  'Fruit Salad',  'Chocolate pudding',  'Orange Jell-O',  'Apple Pie', 'Tres Leches Cake'

       Write a class:    Person, with three private variable:  Name, DOB and FavDesserts.   Note:  DOB is just a string:  "MM/DD/YYYY"

                  Write a hash function that determines the proper index, based off the name.

                  Write a function:      PutData( string inName, string favDessert, string DOB )  ... call hash function, gets index and use it to assign values to that person in the array.

                  Write a function:       PrintData( string inName ) ... calls hash function, gets index and uses it to cout the data for that record in the array.

                  Write a function:       PrintAll()... prints out all data in the array for each person.

                  Input the 7 persons, and print out the data for the 7 persons, print out data for just 1 person.

          - Write answers in MS Word document or PDF, use file name: Week7YourNameProgHashInjection     
