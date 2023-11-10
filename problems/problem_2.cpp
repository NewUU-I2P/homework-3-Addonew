# Read prices of three products
price1 = float(input("Enter price of product 1: "))
price2 = float(input("Enter price of product 2: "))
price3 = float(input("Enter price of product 3: "))

# Determine the highest price using the ternary conditional operator
highest_price = price1 if (price1 > price2 and price1 > price3) else (price2 if (price2 > price3) else price3)

print("The highest price is:", highest_price)
