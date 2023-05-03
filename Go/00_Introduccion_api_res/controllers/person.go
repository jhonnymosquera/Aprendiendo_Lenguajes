package controllers

import (
	"encoding/json"
	"net/http"

	"github.com/gorilla/mux"
	mods "github.com/jhonnymosquera/go/models"
)

func GetPeopleEndpoint(w http.ResponseWriter, req *http.Request) {
	json.NewEncoder(w).Encode(mods.People_list)
}

func GetPersonEndpoint(w http.ResponseWriter, req *http.Request) {
	params := mux.Vars(req)

	for _, item := range mods.People_list {
		if item.ID == params["id"] {
			json.NewEncoder(w).Encode(item)
			return
		}
	}

	json.NewEncoder(w).Encode(&mods.Person{})
}

 func CreatePersonEndpoint(w http.ResponseWriter, req *http.Request) {
	params := mux.Vars(req)
	var person mods.Person
	_ = json.NewDecoder(req.Body).Decode(&person)

	person.ID = params["id"]
	mods.People_list = append(mods.People_list, person)

	json.NewEncoder(w).Encode(mods.People_list)
}

 func DeletePersonEndpoint(w http.ResponseWriter, req *http.Request) {
	params := mux.Vars(req)

	 for index, item := range mods.People_list {
		if item.ID == params["id"] {
			mods.People_list = append(mods.People_list[:index], mods.People_list[index+1:]...)
			break
		}
	}

	json.NewEncoder(w).Encode(mods.People_list)
}
