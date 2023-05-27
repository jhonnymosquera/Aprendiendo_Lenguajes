from fastapi import FastAPI
from fastapi.responses import JSONResponse
from pymongo import MongoClient
from bson import json_util
from bson.objectid import ObjectId

app = FastAPI()
JSON = json_util

# Conexxion a MongoDB
MONGO_DB_URL = "mongodb+srv://jhonnymosquera:anatomia1994@cluster0.f8o1qhy.mongodb.net/ADSO?retryWrites=true&w=majority"
mongo = MongoClient(MONGO_DB_URL)
# Conexion con la base de datos
db = mongo["ADSO"]

days = db["days"]
data = days.find()
items = []
for day in data:
    items.append(day)


@app.get("/")
async def index():

    return JSON.dumps(items)


@app.get("/day")
async def get_all_days():
    data = days.find()
    item = []
    for day in data:
        item.append(day)
    return item


@app.get("/day/{id}")
async def get_day(id: str):
    data = days.find_one({"_id": ObjectId(id)})
    if data:
        return JSON.dumps(data)
    else:
        return {"mesaje": f"no se encontro el dia con el ID {id}"}
