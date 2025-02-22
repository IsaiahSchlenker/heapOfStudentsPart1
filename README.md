# address.h

class address
    protected
        create variables for street, city, state, and zip
    public
        address()
        init()
        printAddress()

# address.cpp

address()
    assign blank values to street, city, state, and zip
init()
    give the real values to street, city, state, and zip
printAddress()
    print the street address on one line
    print the city, state, and zip on next line

# date.h

class date
    protected
        create variables for the whole date, month, day, and year
    public
        date()
        init()
        printDate()

# date.cpp

date()
    assign blank values to dateString, month, day, and year
init()
    create values for the string versions of month, day, and year
    seperate the dateString into each component
    convert day, month, and year to ints
printDate()
    change month int to name of month
    print the date

# student.h
    
class student
    protected
        create variables for the whole studentString, first and last names
        create date variables for dob and expectedGrad
        create address variable for the address
    public
        student()
        ~student()
        init()
        printStudent()
        getLastFirst()

# student.cpp

student()
    create variables studentString, firstName, lastName, dob, expectedGrad, address, and creditHours
init()
    create variables for the address and dates
    parce the studentString into its individual components
    initialize the address and date variables
printStudent()
    return firstName and lastName
~student()
    delete the memory
