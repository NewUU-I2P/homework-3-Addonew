# Function to perform arithmetic operations
def calculate(op, num1, num2):
if op == '+':
return num1 + num2
        elif op == '-':
return num1 - num2
        elif op == '*':
return num1 * num2
elif op == '/':
if num2 != 0:
return num1 / num2
else:
return "Error: Division by zero"
else:
return "Error: Invalid operation"

# Reading input from the user
operation = input("Enter the arithmetic operation (+, -, *, /): ")
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Performing the calculation
result = calculate(operation, num1, num2)

# Displaying the result
print("The result of the operation is:", result)
