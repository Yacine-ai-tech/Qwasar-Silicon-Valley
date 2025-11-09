from flask import Flask, request
import json
import csv
app = Flask(__name__)
@app.route('/')
def my_genre():
    data_a=[]
    genre= request.args.get('genre')
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if genre.title()  in genres:
                data_a.append(movie)
    return (json.dumps(data_a))
@app.route('/action')
def my_action():
    data_b=[]
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if "Action"  in genres:
                data_b.append(movie)
    return (json.dumps(data_b))
@app.route('/adventure')
def my_adventure():
    data_c=[]
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if "Adventure"  in genres:
                data_c.append(movie)
    return (json.dumps(data_c))
@app.route('/comedy')
def my_comedy():
    data_d=[]
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if "Comedy"  in genres:
                data_d.append(movie)
    return (json.dumps(data_d))
@app.route('/drama')
def my_drama():
    data_e=[]
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if "Drama"  in genres:
                data_e.append(movie)
    return (json.dumps(data_e))
@app.route('/romance')
def my_romance():
    data_f=[]
    with open("imdb-movie-data.csv","r", encoding="utf-8") as f:
        content= csv.DictReader(f)
        for movie in content:
            genres= movie['Genre'].split(',')
            if "Romance"  in genres:
                data_f.append(movie)
    return (json.dumps(data_f))
if __name__ == '__main__':
    app.run(host= '0.0.0.0', port=8080)