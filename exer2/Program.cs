int num, cont=0;
Random numAleatorio = new Random();
int valorInteiro = numAleatorio.Next(1, 100);

do
{
    Console.WriteLine("Adivinhe um número inteiro de 1 a 100: ");
     num = int.Parse(Console.ReadLine());

     cont++;

     if (num>valorInteiro){
       
       Console.WriteLine("Chute alto");

     } else if (num<valorInteiro){

        Console.WriteLine("Chute baixo");
     } 
     
}   while (num != valorInteiro);

    Console.WriteLine($"Você acertou em {cont} tentativa(s)!");
   
