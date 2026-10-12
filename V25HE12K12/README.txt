Train Ticket Booking System

A console-based Train Ticket Booking System developed in C. The application provides basic railway reservation features such as user registration, login, train management, ticket reservation, cancellation, and booking details.

Project Overview

The Train Ticket Booking System is designed to simulate a railway reservation application using C programming concepts such as:

- Structures
- File handling
- Functions
- Strings
- Dynamic data management
- Singly Linked List (SLL)
- Makefile
- Modular programming

The system stores train and passenger information in separate files so that data can be maintained between program executions.

Objectives

- Provide user registration and login.
- Allow users to reserve train tickets.
- Assign seat numbers to confirmed passengers.
- Maintain a waiting list when seats are unavailable.
- Allow users to cancel booked tickets.
- Display booking details for a selected train and journey date.
- Maintain train and passenger information using files.
- Provide an administrator option to add new trains.

Features
 User Authentication

- New users can create an account using **Sign Up**.
- Existing users can access the application using **Sign In**.
- User information is stored in a file.

Train Management

The administrator can add train information such as:

- Train number
- Train name
- Source
- Destination
- Total seats
- Available seats

 Ticket Reservation

Users can:

1. Enter the train number.
2. Enter the date of journey.
3. Enter the number of seats.
4. Enter passenger details.
5. Receive confirmed seat numbers when seats are available.
6. Be added to the waiting list when confirmed seats are unavailable.

Ticket Cancellation

Users can cancel tickets by providing the required train, journey, and seat information.

The system updates the passenger and seat information accordingly.

Booking Details

Users can enter:

- Train number
- Date of journey

The system displays all matching passenger booking details, including:

- Passenger name
- Age
- Gender
- Seat number
- Confirmation status
- Waiting-list number

 File Handling

The project uses files to store information permanently.

Example files:


users_info.txt
trains_info.txt
passengers_info.txt


This allows previously stored information to remain available after the program is closed.

Project Structure


Train-Ticket-Booking-System/
│
├── main.c
├── booking.c
├── booking.h
├── booking_details.c
├── cancellation.c
├── file.c
├── file.h
├── menu2.c
├── signin.c
├── signup.c
├── train.c
├── train.h
├── validation.c
├── validation.h
├── sll.c
├── user.h
├── Makefile
│
├── users_info.txt
├── trains_info.txt
└── passengers_info.txt
Main Menu

After successful login, the user can access:

text
R/r : To reserve ticket
C/c : To cancel ticket
B/b : Booking details
Q/q : Quit from app

Administrator

The administrator can access the train-management option and add new trains to the system.

Administrator login is handled through the existing sign-in system.

Note:Do not publish real administrator credentials in a public GitHub repository.

Technologies Used

| Technology | Purpose |
| C | Core programming language |
| GCC | Compilation |
| Makefile | Build automation |
| File Handling | Persistent data storage |
| Structures | Train and passenger records |
| SLL | Data management |
| Linux Terminal | Development and execution |

 Application Flow

              START
                |
                v
          Main Menu
                |
        +-------+-------+
        |               |
      Sign Up         Sign In
                        |
                        v
                   User Menu
                        |
          +------+------+------+
          |      |      |      |
       Reserve Cancel Booking Quit
          |      |    Details
          |      |      |
          +------+------+ 
                 |
                 v
              FILES
                 |
                 v
                END


Data Storage

Train Information

Train records contain information such as:

text
Train Number
Train Name
Source
Destination
Total Seats
Available Seats


 Passenger Information

Passenger records contain:

text
Train Number
Date
Passenger Name
Age
Gender
Seat Number


A positive seat number represents a confirmed booking.

A negative seat number is used by the current implementation to represent a waiting-list number.

 How to Compile

Using the provided Makefile:

bash
make


Run the generated program:

bash
./a.out


If the Makefile generates a different executable name, run that executable instead.

 Clean Build Files

If your Makefile provides a clean target:

bash
make clean


Then rebuild:

bash
make


C Concepts Used

This project demonstrates practical use of:

- Structures
- Header files
- Functions
- File opening and closing
- fscanf() / fprintf()
- fgets() / sscanf()
- String handling
- Conditional statements
- Loops
- Pointers
- Dynamic memory concepts
- Singly Linked List
- Modular source files
- Makefile compilation

Future Enhancements

Possible improvements include:

- Automatic seat availability updates
- Automatic promotion of waiting-list passengers after cancellation
- Better input validation
- Password protection and improved authentication
- PNR generation
- Multiple-train search
- Source and destination based train search
- Improved formatted booking receipts
- Date validation
- Improved data storage using binary files or a database

Author

Manaswini

Project

Train Ticket Booking System**

Language

C Programming
