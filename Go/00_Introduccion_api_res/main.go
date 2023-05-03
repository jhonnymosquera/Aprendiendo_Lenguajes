package main

import (
	"log"
	"net/http"

	"github.com/gorilla/mux"
	ctls "github.com/jhonnymosquera/go/controllers"
	mods "github.com/jhonnymosquera/go/models"
)

func main() {
	router := mux.NewRouter()

	mods.People_list = append(mods.People_list, mods.Person{ID: "1", FirsName: "Rayan", LastName: "Ray", Address: &mods.Address{City: "Dubling", State: "California"}})
	mods.People_list = append(mods.People_list, mods.Person{ID: "2", FirsName: "Joe", LastName: "McMilan"})

	//enpoint
	router.HandleFunc("/people", ctls.GetPeopleEndpoint).Methods("GET")
	router.HandleFunc("/people/{id}", ctls.GetPersonEndpoint).Methods("GET")
	router.HandleFunc("/people/{id}", ctls.CreatePersonEndpoint).Methods("POST")
	router.HandleFunc("/people/{id}", ctls.DeletePersonEndpoint).Methods("DELETE")

	log.Fatal(http.ListenAndServe(":3002", router))
}
