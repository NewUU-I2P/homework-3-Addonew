def get_mac_address_type(mac_address):
octets = mac_address.split(':')
first_octet = int(octets[0], 16)  # Convert the first octet to decimal

if first_octet == 255:  # Check if all octets are 0xFF
return "Broadcast"
elif first_octet % 2 == 0:  # Check if the first octet is even
return "Unicast"
else:
return "Multicast"

mac_address = input("Enter the MAC address in x:x:x:x:x:x form: ")
address_type = get_mac_address_type(mac_address)
print("The MAC address type is:", address_type)
