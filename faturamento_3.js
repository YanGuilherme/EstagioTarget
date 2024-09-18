const fs = require('fs');
let dados;
try{
    dados = fs.readFileSync('dados.json', 'utf-8');
}catch(err){
    console.log(err);
}

const faturamentoDias = JSON.parse(dados);
let maior = -Infinity, menor = Infinity;
let somaTotal = 0, quantidade = 0;
let diasFaturamentoMaiorQueMedia = 0;

for(dia of faturamentoDias){
    if(dia.valor != 0){
        somaTotal = somaTotal + dia.valor;
        quantidade++;
    }
}
const faturamentoMedio = somaTotal/quantidade;

for(dia of faturamentoDias){
    if(maior < dia.valor){
        maior = dia.valor;
    }

    if(menor > dia.valor){ //Dias com 0 de faturamento se matém? (menor > dia.valor && dia.valor != 0)
        menor = dia.valor;
    }

    if(dia.valor > faturamentoMedio){
        diasFaturamentoMaiorQueMedia++;
    }

}
console.log("Maior", maior);
console.log("Menor", menor);
//console.log("Quantidade", quantidade);
//console.log("Faturamento medio", faturamentoMedio);
console.log("Dias com faturamento maior que a media mensal", diasFaturamentoMaiorQueMedia)

