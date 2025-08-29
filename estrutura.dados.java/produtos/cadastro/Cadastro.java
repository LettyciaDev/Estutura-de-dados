import java.util.Scanner;

public class Cadastro{
    public static void main(String[] args) {
        LDE lista = new LDE();
        int resp;
        Scanner input = new Scanner(System.in); 
        
        do {
            System.out.println("1 - Cadastrar um novo produto");
            System.out.println("2 - Exibir todos os produtos cadastrados");
            System.out.println("3 - Exibir os dados de um produto");
            System.out.println("4 - Alterar os dados de um produto");
            System.out.println("5 - Realizar a venda de um produto");
            System.out.println("6 - Remover um produto");
            System.out.println("0 - Sair do programa");

            System.out.print("Digite uma opção: ");
            resp = input.nextInt(); 
            input.nextLine(); 
            
            switch (resp) {
                case 1:
                    System.out.print("Código: ");
                    String codigo = sc.nextLine();
                    System.out.print("Descrição: ");
                    String desc = sc.nextLine();
                    System.out.print("Preço: ");
                    double preco = sc.nextDouble();
                    System.out.print("Estoque: ");
                    int estoque = sc.nextInt();
                    sc.nextLine();
                    lista.inserir(new Produto(codigo, desc, preco, estoque));
                    break;

                case 2:
                    lista.exibirTodos();
                    break;

                case 3:
                    System.out.print("Código do produto: ");
                    codigo = sc.nextLine();
                    lista.consultar(codigo);
                    break;

                case 4:
                    System.out.print("Código do produto: ");
                    codigo = sc.nextLine();
                    System.out.print("Novo preço: ");
                    preco = sc.nextDouble();
                    System.out.print("Novo estoque: ");
                    estoque = sc.nextInt();
                    sc.nextLine();
                    lista.alterar(codigo, preco, estoque);
                    break;

                case 5:
                    System.out.print("Código do produto: ");
                    codigo = sc.nextLine();
                    System.out.print("Quantidade desejada: ");
                    int qtd = sc.nextInt();
                    sc.nextLine();
                    lista.vender(codigo, qtd);
                    break;

                case 6:
                    System.out.print("Código do produto: ");
                    codigo = sc.nextLine();
                    lista.remover(codigo);
                    break;

                case 0:
                    System.out.println("Encerrando o programa...");
                    break;

                default:
                    System.out.println("Opção inválida!");
            }
        } while (resp != 0);

        input.close();
    }
}