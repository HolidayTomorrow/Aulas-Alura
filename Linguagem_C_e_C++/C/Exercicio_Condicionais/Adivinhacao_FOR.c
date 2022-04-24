#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*Jogo de adivinhação com laço "for". Jogo com tentativas escolhidas.*/
int main(){
    int escolha;
    int dificuldade;
    int tentativas;
    int segundos = time(0);
    srand(segundos);
    int numero = rand()%100;
    printf("%d", numero);
    int i;
    double pontostotais = 1000;
    printf("\n\n");
    printf(" ___   _____ ___________________________________________________ _____                   \n");
    printf("|___  |    //       :-...__                       __...-:       \\\\    | | _ |           \n");
    printf("|     |   //        :  `.  ~~--._           _.--~~  .'  :        \\\\   | |/ \\|           \n");
    printf(" ___  |  //          :  `..._    ~~-.___.-~~    _..,'  :          \\\\  |  ____           \n");
    printf("|___> | //           :   : `.~-._           _.-~.' :   :           \\\\ | |__             \n");
    printf("|  \\  |//        ..-'    :  :..  ~-._   _.-~  ..:  :    `-..        \\\\| |____           \n");
    printf("  _   |/ `.__.--'       :   `. `._   ~~~   _.' ,`   :       `--.__.' \\|   ___            \n");
    printf(" / \\  |      .`-......-'     :  `.~-._ _.-~.'  :     `-......-'.      | |___>           \n");
    printf("|---| |  __.'     `-..__ ..-'    :._  ~  _.:    `-.. __..-'     `.__  | |___>           \n");
    printf("|   | |.'  ~`.     .'   `-.._ ..' : `-.-' : `.. _..-'   `.     .'~  `.|                 \n");
    printf(" ____ | '.    `..'~~`.    .' `-._'_;.   .;_`_.-' `.    .'~~`..'    .' |   |             \n");
    printf("/     |  '.    `.     `.'~-..-.'_'-..:-:..-`_`.-..-~`.'     .'    .'  |                 \n");
    printf("\\____ |   '.    `.     `,   `. `.`.;~ . ~;.',' ,'   ,'     .'    .'   |                 \n");
    printf("_____ |     )JOGO        }    }   }DA{ |  { {  {    (  ADIVINHAÇÃO    |                 \n");
    printf("  |   |   .'    .'     .'   .' .'.'`-._.-``.`. `.   `.     `.    `.   |                 \n");
    printf("  |   |  .'    .'     .'._.-`-' ~`-.;.-.;.-'~ `-'-._,`.     `.    `.  |                 \n");
    printf("  _   | .'    .'`.__.'     ~`._   .`_.-._'.   _.'~     `.__,'`.    `. |                 \n");
    printf(" / \\  |.'   ..'      ~`-.      ~-.`~ _._ ~'.-~      .-'~      `..   `.|                 \n");
    printf("|---| | `--~  ~`-._      `-.    : .-'   `-. :    .-'      _.-'~  ~--' |                 \n");
    printf("|   | |            ~-.      `. .`'  _..._  `'. .'      .-~            |                 \n");
    printf("      |               `.     .' ..-'     `-.. `.     .'               |                 \n");
    printf("|     |\\                `-. .'-'             `-`. .-'                /|                 \n");
    printf("|____ |\\\\                 .'         ___         `.                 //|                 \n");
    printf("      | \\\\                :      .--~   ~--.      :                // |                 \n");
    printf("      |__\\\\_______________`.__.-~___________~-.__.'_______________//__|                 \n");
    printf("\n\n");
    printf("\nQual nível deseja?\n");
    printf("(1) Fácil  (2) Médio   (3) Dificíl \n");
    scanf("%d", &dificuldade);
    printf("\n");
    printf("Você escolheu o nível %d.\n", dificuldade);
    printf("Boa Sorte!\n");
    switch (dificuldade){
    case 1:
        tentativas = 18;
        break;
    case 2:
        tentativas = 12;
        break;
    default:
        tentativas = 6;
        break;  
    }

    for(i = 1; i <= tentativas;){
        printf("Tentativa %d de %d. Digite um número: ", i, tentativas);
        scanf("%d", &escolha);
        printf("O número escolhido foi: %d\n", escolha);
        int maior = (escolha>numero);
        int acertou = (escolha == numero);
        pontostotais = pontostotais-(abs)(escolha-numero)/2.0;
        if(acertou){
            printf("\n\n");
            printf("                    *****************                       \n");
            printf("               ******               ******                  \n");
            printf("           ****                           ****              \n");
            printf("        ****                                 ***            \n");
            printf("      ***                                       ***         \n");
            printf("     **           ***               ***           **        \n");
            printf("   **           *******           *******          ***      \n");
            printf("  **            *******           *******            **     \n");
            printf(" **             *******           *******             **    \n");
            printf(" **               ***               ***               **    \n");
            printf("**                                                     **   \n");
            printf("**       *                                     *       **   \n");
            printf("**      **                                     **      **   \n");
            printf("**    ****                                     ****    **   \n");
            printf(" **      **                                   **      **    \n");
            printf("  **       ***                             ***       **     \n");
            printf("   ***       ****                       ****       ***      \n");
            printf("     **         ******             ******         **        \n");
            printf("      ***            ***************            ***         \n");
            printf("        ****                                 ****           \n");
            printf("           ****                           ****              \n");
            printf("               ******               ******                  \n");
            printf("                    *****************                       \n");
            printf("\nAcertou!\n");
            printf("Sua pontuação é: %.1f\n", pontostotais);
            printf("Você é um excelente jogador. Continue jogando!");
            break;
        }
        else if(maior){
            printf("Número escolhido é maior.\n");
        }
        else{
            printf("Número escolhido é menor.\n");
        }
        i++;
        if(i>tentativas){
            printf("\n\n");
            printf("                          oooo$$$$$$$$$$$$oooo                                  \n");
            printf("                      oo$$$$$$$$$$$$$$$$$$$$$$$$o                               \n");
            printf("                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$         \n");
            printf("   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$        \n");
            printf("oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$         \n");
            printf("\"$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$          \n");
            printf("  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$          \n");
            printf("  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$            \n");
            printf("   \"$$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$           \n");
            printf("    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o         \n");
            printf("   o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o        \n");
            printf("   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$$$$ooooo$$$$o      \n");
            printf("  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$     \n");
            printf("  $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\"           \n");
            printf(" \"\"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$                    \n");
            printf("            \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$                     \n");
            printf("              $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$                      \n");
            printf("               $$$$o                 oo             o$$$\"                       \n");
            printf("                \"$$$$o      o$$$$$$o\"$$$$o        o$$$$                         \n");
            printf("                 \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"                           \n");
            printf("                     \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\"                             \n");
            printf("                        \"\"$$$$$$$oo $$$$$$$$$$                                  \n");
            printf("                                \"\"\"\"$$$$$$$$$$$                                 \n");
            printf("                                    $$$$$$$$$$$$                                \n");
            printf("                                     $$$$$$$$$$\"                                \n");
            printf("                                     \"$$$\"\"\"\"                                  \n");
            printf("\n\n");
            printf("Você não acertou!\n");
            printf("Sua pontuação é: %.1f\n", pontostotais);
            printf("Mas continue, você pode ganhar!\n");
        }
    }
    return 0;
}