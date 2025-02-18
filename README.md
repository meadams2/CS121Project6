# CS121 Project 6 - Heap of Students (Pt. 1)

The goal of this project is to create a data scheme for the data which will further be used to create a database that can read and manage the data. The following data pieces will be used:

- firstName
- lastName
- street
- city
- state
- zip
- birthdate (mm/dd/yyyy)
- expected grad date (mm/dd/yyyy)
- credit hours completed (integer)

We have three kinds of data:

- Dates come in as a string to be separated and printed in various ways.
- Address is distinct from the student and the dates.
- Student contains all teh information, but date and address data are in classes owned by the student. 

## Date Class

The Date class takes in dateString in the initializer. dateString should be "mm/dd/yyyy".

### Parsing in init(dateString)
Using sstream, parse dateString into month, day, and year using "/" as a delimeter. Will initially show as strings. Store strings in sMonth, sDay, and sYear respectively. Convert to integers and store in month, day, and year. 
### printDate()

Initialize array of months with an empty string to assist with counting.  

```
months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}

```

Call temporary variable stringMonth. stringMonth gets months[month].

```
std::cout << stringMonth << day << "," << year << std::endl;

```
## Address Class

## Student Class
