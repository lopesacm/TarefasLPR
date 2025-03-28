Console.WriteLine("Digite a quantidade de valores que você pretende digitar para ser realizada a média aritmética: ");
int quantidade = Convert.ToInt32(Console.ReadLine());

int soma = 0, cont= 0, ci = 0, nume;

while(ci<quantidade) {
  
  Console.WriteLine("Digite um número: ");
  int nume = Convert.ToInt32(Console.ReadLine());
  
  if(nume%2==0) {
    
    soma+=nume;
    cont++;
  } 
  ci++;
}
  if(cont>0){

    float media = (float) soma/cont;
    Console.WriteLine($"Média dos números que você digitou(excluindo os ímpares) é: {media:F2}");

  } else {
      
    Console.WriteLine("Você só digitou números ímpares, tente novamente digitando números pares!");
  }
