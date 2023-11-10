def calculate_water_cost(consumption):
fixed_amount = 13
cost = fixed_amount
remaining_consumption = consumption

if remaining_consumption > 30:
cost += 30 * 0.4
remaining_consumption -= 30
else:
return cost + remaining_consumption * 0.4

if remaining_consumption > 20:
cost += 20 * 0.12
remaining_consumption -= 20
else:
return cost + remaining_consumption * 0.12

if remaining_consumption > 10:
cost += 10 * 1.4
remaining_consumption -= 10
else:
return cost + remaining_consumption * 1.4

cost += remaining_consumption * 1.5
return cost

        consumption = float(input("Enter water consumption in cubic metres: "))
total_cost = calculate_water_cost(consumption)
print("Total cost is:", total_cost)
