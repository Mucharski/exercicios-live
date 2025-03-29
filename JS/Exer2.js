let arrayNumeros = [5, 10, 482, 489, 769, 1955, 17364]
let soma = 0;

for (let i = 0; i < arrayNumeros.length; i++) {
    soma += Number(arrayNumeros[i]);
}

console.log(Number(soma / arrayNumeros.length));