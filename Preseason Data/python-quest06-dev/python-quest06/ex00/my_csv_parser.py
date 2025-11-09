def my_csv_parser(content,separator):
    result = []
    for line in content.split("\n"):
        row = line.split(separator)
        if len(row) > 1:
           result.append(row)
        
    return result