let botao = document.getElementById("botao");
let resultado = document.getElementById("resultado");

botao.addEventListener("click", function() {
    let ehPalindromo = true;

    let text = document.getElementById("textoPalindromo").value;
    let textoMinusculo = text.toLowerCase();
    let textoFormatado = textoMinusculo.replaceAll(" ", "");

    let j = 0;

    for (let i = textoFormatado.length - 1; i >= 0; i--) {
        if (textoFormatado[i] != textoFormatado[j]) {
            ehPalindromo = false;
        };

        j++;
    }

    if (ehPalindromo) {
        resultado.innerText = "É palíndromo"
    } else {
        resultado.innerText = "Não é palíndromo"
    }
});