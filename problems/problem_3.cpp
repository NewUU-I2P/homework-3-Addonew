def get_description(sex, height):
if sex.lower() == "male":
if height < 1.70:
return "Short"
elif height >= 1.70 and height < 1.85:
return "Normal"
else:
return "Tall"
elif sex.lower() == "female":
if height < 1.60:
return "Short"
elif height >= 1.60 and height < 1.75:
return "Normal"
else:
return "Tall"
else:
return "Invalid sex input"

sex = input("Enter the person's sex (Male/Female): ")
height = float(input("Enter the person's height in meters: "))

result = get_description(sex, height)
print("Description for the height:", result)
