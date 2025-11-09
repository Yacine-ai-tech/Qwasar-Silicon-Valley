def add_values_to_result(result,key,value):
    if value not in result[key]:
        result[key][value] = 1
    else:
        result[key][value] += 1

def my_data_process(input):
    result = {"Gender": {}, "Email": {}, "Age": {}, "City": {}, "Device": {}, "Order At": {}}
    for line in input[1:]:
        values = line.split(',')


        add_values_to_result(result, "Gender", values[0])
        add_values_to_result(result, "Email", values[4])
        add_values_to_result(result, "Age", values[5])
        add_values_to_result(result, "City", values[6])
        add_values_to_result(result, "Device", values[7])
        add_values_to_result(result, "Order At", values[9])

    return str(result).replace(", ", ",").replace(": ",":").replace("'", '"')

def _run():
    input = ["Gender,FirstName,LastName,UserName,Email,Age,City,Device,Cofee Quantity,Order At", "Male,Carl,Wilderman,carl,yah"]
    print(my_data_transform(input))