"use stric"

class Persona {
    constructor(id, nombre, apellido,) {
        this.id = id;
        this.nombre = nombre;
        this.apellido = apellido;
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }

    Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }Matricular(){
        document.write(`${this.nombre} ${this.apellido} se ha matriculado <hr>`)
    }
}


const daniela = new Persona(1232,"daniela","Gomez")
const yanca = new Persona(123123,"Yanca","El Machete")


class ChicaVampiro extends Persona {
    constructor(id, nombre, apellido,numeroDeAlas,numeroDeColmillos,personasMordidas) {
        super(id, nombre, apellido)
        this.numeroDeAlas = numeroDeAlas
        this.numeroDeColmillos = numeroDeColmillos
        this.personasMordidas = personasMordidas
    }  
    
    MostrarColmillos(){
        document.write(`tengo ${this.numeroDeColmillos} <hr>` )
    }

    PersonasMordidas(){
        document.write(`He mordido a ${this.personasMordidas} personas <hr>`)
    }
}

const {nombre,id,apellido} =daniela

const danielaChicaVamp = new ChicaVampiro(id,nombre,apellido,2,2,5)


class chicoLobo extends Persona {
    constructor(id,nombre, apellido,colorDePelo,colmillos){
        super(id, nombre, apellido)
        this.colorDePelo = colorDePelo
        this.colmillos = colmillos
    }

    Auyar(){
        document.write('Auuuuuuuuuuuuuuuuuuuu')
    }
}

const rubeLobo = new chicoLobo(6565,"ruben","zapata","dorado",2)