print("Mariyam Zagral")
print("251P084")

try:

  x = int(input('Enter a number: '))

  y = 20 / x

except ZeroDivisionError:

  print('Cannot divide by zero')

else:

  print('Result:', y)
