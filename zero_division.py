#Zagral Mariyam
#UIN:251P084
print("mariyam zagral")
print("UIN:251P084")
try:
    a = int(input('Enter a number: '))
    b = 10 / a
    print(b)

except ZeroDivisionError:
    print('Division by zero error')
except ValueError:
    print('Invalid input')
