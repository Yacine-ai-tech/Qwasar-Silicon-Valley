from datetime import datetime
def transform_age(age):
    if age < 21:
       return "1->20"
    elif age < 41:
        return "21->40"
    elif age < 66:
        return "41->65"
    else:
        return "66->99"

    
def transform_email(email):
    return email.split("@")[1]

def transform_time_range(time):
    datetime_object = datetime.strptime(time,"%Y-%m-%d %H:%M:%S")
    if datetime_object.hour < 12 :
        return "morning"
    elif datetime_object.hour < 18:
        return "afternoon"
    else:
        return"evening"
    return time
def my_data_transform(csv_content):
    result = []
    line_number = 0
    for line in csv_content.split("\n"):
        values = line.split(",")
        if (len(values)> 1 and line_number > 0):
            values[4] = transform_email(values[4])
            values[5] = transform_age(int(values[5]))
            values[9] = transform_time_range(values[9])
        line_number += 1
        if (len(values) > 1):
           result.append(",".join(values))
    return result

def _run():
    print(my_data_transform("Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order at\nMale,Carl,Wilde"))
