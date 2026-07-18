TAX_RATE = 0.08

cartData = {
    "Mobile":{"company":"Apple", "price":100000, "qty":2, "category":"Electronics"},
    "Laptop":{"company":"Apple", "price":200000, "qty":1, "category":"Electronics"},
    "Shoes":{"company":"Nike", "price":10000, "qty":3, "category":"Footwear"}
}

def calculate_total(cart, /, *, discount = 0):
    total_bill = 0

    for k, data in cart.items():
        total_bill += data["qty"] * data["price"]

    after_discount = total_bill - (total_bill * discount)

    bill = after_discount + (after_discount * TAX_RATE)

    return bill

def generate_receipt(cart):
    items_list = []
    unique = set()
    
    for k, data in cart.items():
        items_list.append((k, data["qty"], data["price"]))
        unique.add(data["category"])
        
    return items_list, unique

final_bill = calculate_total(cartData, discount=0.10)
items, categories = generate_receipt(cartData)

print("Items List:", items)
print("Unique Categories:", categories)
print(f"Final Bill: {final_bill}")