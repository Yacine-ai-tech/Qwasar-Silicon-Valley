import csv
import sqlite3

def sql_to_csv(database, table_name):
    try:
        # Connect to the database
        connection = sqlite3.connect(database)
        cur = connection.cursor()

        # Select records
        cur.execute(f"SELECT * FROM {table_name};")
        rows = cur.fetchall()

        # Extract column names
        columns = [c[0] for c in cur.description]

        # Fill the CSV content to return
        csv_content = ','.join(columns)
        for row in rows:
            csv_content += '\n' + ','.join(map(str, row))

        # Write the CSV content to the file
        with open("list_fault_lines.csv", 'w', newline='') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerow(columns)  # Write the header
            writer.writerows(rows)

        return csv_content
        
    finally:
        connection.close()

def csv_to_sql(csv_content, database, table_name):
    try:
        connection = sqlite3.connect(database)
        cursor = connection.cursor()

        # Drop the table if it already exists
        cursor.execute(f"DROP TABLE IF EXISTS {table_name}")

        # Create the table
        cursor.execute(f"CREATE TABLE {table_name} ('Volcano Name', Country, Type, 'Latitude (dd)', 'Longitude (dd)', 'Elevation (m)')")

        # Read CSV content from string buffer
        reader = csv.DictReader(csv_content)

        # Data insertion
        data = [(row['Volcano Name'], row['Country'], row['Type'], row['Latitude (dd)'], row['Longitude (dd)'], row['Elevation (m)']) for row in reader]
        cursor.executemany(f"INSERT INTO {table_name} VALUES (?, ?, ?, ?, ?, ?)", data)

        connection.commit()
        
    except Exception as e:
        print(f"Error: {e}")

    finally:
        connection.close()

# Example usage
sql_to_csv('all_fault_line.db', 'fault_lines')
csv_to_sql('list_volcanos.csv', 'list_volcanos.db', 'volcanos')
