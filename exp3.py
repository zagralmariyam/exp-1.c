print("Mariyam")
print("251P084")


import math

basic_salary = float(input("Enter the basic salary(BS):"))

DA = 0.7 * basic_salary

TA = 0.3 * basic_salary

HRA = 0.1 * basic_salary

gross_salary = basic_salary + DA + TA + HRA

print("\nSalary Details:")
print("Basic Salary(BS):", basic_salary)
print("Dearness Allowance(DA):", DA)
print("Travel Allowance(TA):", TA)
print("House Rent Allowance(HRA):", HRA)
print("Gross Salary:", gross_salary)
