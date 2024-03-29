package models

type Person struct {
	ID       string   `json:"id,omitempty"`
	FirsName string   `json:"firstname,omitempty"`
	LastName string   `json:"lastname,omitempty"`
	Address  *Address `json:"address,omitempty"`
}

type Address struct {
	City  string `json:"city,omitempty"`
	State string `json:"state,omitempty"`
}

var People_list []Person
