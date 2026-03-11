# Name:Mariyam Zagral
# UIN: 251P084
print("Mariyam Zagral")
print("UIN: 251P084")
a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

def add():
    print("Result:", a + b)

def subtract():
    print("Result:", a - b)

def multiply():
    print("Result:", a * b)

def divide():
    if b == 0:
        print("Error! Division by zero is not allowed.")
    else:
        print("Result:", a / b)



print("Choose operation:")
print("1. Addition (+)")
print("2. Subtraction (-)")
print("3. Multiplication (*)")
print("4. Division (/)")

choice = input("Enter choice (1/2/3/4): ")

if choice == '1':
    add()

elif choice == '2':
    subtract()

elif choice == '3':
    multiply()

elif choice == '4':
    divide()

else:
    print("Invalid choice!")
