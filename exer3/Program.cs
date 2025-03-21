using System.Net.Mail;

Console.WriteLine("Escolha uma classe para iniciar a partida: ");
Console.WriteLine("1-Guerreira");
Console.WriteLine("2-Mago");
Console.WriteLine("3-Arqueiro");
Console.WriteLine("Digite a classe escolhida:");
int escolha=int.Parse(Console.ReadLine());
switch(escolha)
{
    case 1:1
    Console.WriteLine("Você escolheu a classe das Guerreiras que contém as seguintes halibidades: Ataque Pesado e Defesa Total!");
    break;

    case 2:
    Console.WriteLine("Você escolheu a classe dos Magos que contém as seguintes halibidades: Bola de Fogo e Escudo de Gelo!");
    break;

    case 3:
    Console.WriteLine("Você escolheu a classe dos Arqqueiros que contém as seguintes halibidades: Flecha Precisa e Disparo Triplo!");
    break;

}

