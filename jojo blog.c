#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    char escolha_0, escolha_1, escolha_2, escolha_3, escolha_4,
    str[80], ch,
    a, b, c, d, e, f, g, h;
    int escolha_g, escolha_h;


    printf("Seja bem-vindo(a) ao blog de Jojo's Bizarre Adventure (Jojo No Kimyou Na Bouken) em linguagem C. \n");
    printf("Criado pela Programadora Iniciante J%cssica Oliveira (Kazu). \n\n", 130);
    system("pause");

    while(1){

    printf("Selecione um tema (somente n%cmeros):\n", 163);
    printf(" 1 - Anime \n 2 - Mang%c \n 3 - Jogos \n 4 - Personagens \n\n", 160);
    scanf("%d", &escolha_0);
    ch = getchar();
    fflush(stdin);

   
    switch(escolha_0){

    case 1:
        printf("Selecione uma parte (somente letras): \n");
        printf(" a - Phantom Blood \n b - Battle Tendency \n c - Stardust Crusaders \n d - Diamond is Unbreakable \n e - Vento Aureo \n f - Stone Ocean \n\n");
        scanf("%s", &escolha_1);
    
        switch(escolha_1){

            case 'a':
            printf("a - Phantom Blood: \n\n");
            printf("Entre os s%cculos 12 e 16, um chefe asteca usando uma m%cscara de pedra mancha sua m%cscara com o sangue de uma jovem,\ncomo parte do sacrif%ccio humano de uma tribo asteca. \n", 130, 160, 160, 161);
            printf("Isso faz com que muitos espinhos brotem da m%cscara, perfurando n%co letalmente o cr%cnio do homem.\nO homem afirma ter ganho a vida eterna, mostrando sua capacidade de sugar o sangue\nde outro membro da tribo com o dedo, bem como sua for%ca sobre-humana.\n", 160, 198, 131, 135);
            printf("%c revelado que esta tribo tentou dominar o mundo, apenas para desaparecer por raz%ces desconhecidas. \n", 144, 228);
            printf("Em 1880, em Liverpool , Inglaterra,  um jovem Jonathan Joestar (conhecido por seus amigos como JoJo) vive pacificamente\nna rica propriedade de seu pai George Joestar I. \n");
            printf("Outro menino de Londres , Dio Brando , %c adotado por eles devido %c morte de seu pai Dario Brando. \n", 130, 133);
            printf("George acreditava que ele e seu filho pequeno foram resgatados por Dario durante um acidente de dilig%cncia\nem que sua esposa perdeu a vida; na realidade, Dario estava tentando saquear seus cad%cveres. \n", 136, 160);
            printf("Jonathan tenta fazer amizade com Dio, sem saber de seu plano de quebrar seu esp%crito atrav%cs do\nbullying constante e ganhar a confian%ca de George para que ele possa se tornar o %cnico herdeiro da fortuna Joestar. \n", 161, 130, 135, 163);
           
            break;

            case 'b':
            printf("b - Battle Tendency: \n\n");
            printf("Joseph Joestar vive em Nova Iorque com sua av%c, Erina Pendleton, e assim como Jonathan, %c capaz de utilizar o Hamon, habilidade aparentemente herdada de seu av%c. \n", 147, 130, 147);
            printf("Ao ouvir do desaparecimento de um velho amigo da fam%clia, Robert E. O. Speedwagon no M%cxico, Jojo (Joseph Joestar) parte em busca do mesmo. \n", 161, 130);
            printf("Ainda na cidade, Jojo %c atacado por Straights, que sucumbiu aos caprichos provenientes da m%cscara de pedra, e a usou para tornar-se um vampiro e\nrecuperar sua juventude h%c tempos perdida. \n", 130, 160, 160);
            printf("Seu confronto com Straights termina em vit%cria para Jojo, mas antes da morte, o vampiro o alerta sobre o homem na coluna, e que Jojo agora est%c\nenla%cado em um destino do qual sua fam%clia jamais poder%c escapar. \n", 162, 160, 135, 161, 160);
            printf("Tudo isso deixa Jojo ainda mais confuso e sem respostas %c respeito de Speedwagon e seu grupo de expedi%c%co perdido. \n", 133, 135, 198);
           
            break;

            case 'c':
            printf("c - Stardust Cruzaders: \n\n");
            printf("A terceira parte segue a hist%cria de Jotaro Kujo, o neto de Joseph Joestar.\nJotaro %c um aluno problema que vive entrando em brigas na escola e antagonizando seus professores. \n", 162, 130);
            printf("Ele %c colocado na pris%co ap%cs brigar com tr%cs homens armados e um lutador de boxe,\nmas se recusa a sair dizendo que est%c possu%cdo por um esp%crito mal%cgno. \n", 130, 198, 162, 136, 160, 161, 161, 161);
            printf("Para demonstrar, ele pega uma arma e atira contra si mesmo na cabe%ca, mas a bala %c parada.\nJoseph Joestar logo chega com seu amigo Mohammed Avdol. \n", 135, 130);
            printf("Uma batalha entre Avdol e Jotaro mostra o esp%crito mal%cgno de Avdol, levando Jotaro para fora da cela. \n", 161, 161);
            printf("Joseph revela que o 'esp%crito mal%cgno' de Jotaro, na verdade %c um Stand, uma manifesta%c%co psiquica de poder. \n", 161, 161, 130, 135, 198);
            printf("O Stand de Jotaro, chamado Star Platinum possui incr%cvel for%ca e precis%co; o de Avdol, conhecido como Magician's Red, pode controlar o fogo; o Stand de Joseph, \n", 161, 135, 198);
            printf("Hermit Purple manifesta v%crias trepadeiras com espinhos que permitem com que Joseph possa manipular c%cmeras e oustos aparelhos, capturando imagens de uma longa dist%cncia. \n", 160, 131, 131);

            break;

            case 'd':
            printf("d - Diamond is Unbreakable: \n\n");
            printf("Morador de uma cidadezinha do interior chamada Morioh, Josuke Higashikata, filho ileg%ctimo de Joseph %c encontrado por Jotaro, \n", 161, 130);
            printf("no exato momento em que v%crios outros usu%crios de stand aparecem na regi%co, por motivos aparentemente desconhecidos. \n", 160, 160, 198);
            printf("A culpa ent%co %c de uma estranha flecha que manifesta os poderes nas pessoas atingidas. \n", 198, 130);
            printf("A busca por este artefato os leva at%c um serial killer, que assassina as mulheres pelas quais se sente atra%cdo e decepa sua m%cos, sem deixar rastros. \n", 130, 161, 198);

            break;

            case 'e':
            printf("e - Vento Aureo: \n\n");
            printf("Giorno expressa seu sonho de crescer dentro da m%cfia para se tornar um Gangstar (uma fus%co das palavras Gangster e Superstar). \n", 160, 198);
            printf("Giorno %c ent%co atacado por Luca, um membro da gangue dominante de N%cpoles, Passione, \n", 130, 198, 160);
            printf("que morre ao ter sua agress%co refletida contra si pr%cprio gra%cas ao poder do Stand de Giorno, Golden Experience. \n", 198, 162, 135);
            printf("[...] Buccellati oferece a Giorno uma chance para se juntar a Passione e assim se aproximar do misterioso chefe da m%cfia. \n", 160);

            break;

            case 'f':
            printf("f - Stone Ocean: \n\n");
            printf("Jolyne Kujo %c filha de Jotaro, criar um mundo perfeito como Dio havia originalmente planejado. uma menina delinquente que foi presa injustamente por assassinato, um crime que n%co havia cometido. \n", 130, 130, 198);
            printf("Sua condena%c%co e encaminhamento para a pris%co Green Dolphin Street foram forjadas por um assecla de Dio, \n", 135, 198, 198);
            printf("Enrico Pucci. Dentro da pris%co, um amuleto entregue por seu pai ativa seu stand, Stone Free, a partir da%c, \n", 198, 161);
            printf("ela come%ca sua luta para sobreviver contra os outros detentos, assim como as arma%c%ces de Enrico, visando completar seu Stand e \n", 135, 135, 228);
            printf("criar um mundo perfeito como Dio havia originalmente planejado. \n");

            default: 
            printf("Comando inv%clido! \n", 160);
        }

    break;

    case 2:
        printf("2 - Mang%c: \n", 160);
        printf("Selecione uma parte (somente letras): \n");
        printf(" a - Phantom Blood \n b - Battle Tendency \n c - Stardust Crusaders \n d - Diamond is Unbreakable \n e - Vento Aureo \n f - Stone Ocean \n g - Steel Ball Run \n h - Jojolion \n\n");
        scanf("%s", &escolha_2);

        switch(escolha_2){

            case 'a':
            printf("a - Phantom Blood. \n\n");
            printf("Phantom Blood foi lan%cado em 1 de janeiro de 1987, criado por Hirohiko Araki e %c a primeira parte da s%crie. \n", 135, 130, 130);

            break;

            case 'b':
            printf("b - Battle Tendency. \n\n");
            printf("Battle Tendency foi lan%cado em 2 de novembro de 1987, criado por Hirohiko Araki e %c a segunda parte da s%crie. \n", 135, 130, 130);

            break;

            case 'c':
            printf("c - Stardust Crusaders. \n\n");
            printf("Stardust Crusaders foi lan%cado em 3 de abril de 1989, criado por Hirohiko Araki e %c a terceira parte da s%crie. \n", 135, 130, 130);

            break;

            case 'd':
            printf("d - Diamond is Unbreakable. \n\n");
            printf("Diamond is Unbreakable foi lan%cado em 4 de maio de 1992, criado por Hirohiko Araki e %c a quarta parte da s%crie. \n", 135, 130, 130);

            break;

            case 'e':
            printf("e - Vento Aureo. \n\n");
            printf("Vento Aureo foi lan%cado em 11 de dezembro de 1995, criado por Hirohiko Araki e %c a quinta parte da s%crie. \n", 135, 130, 130);

            break;

            case 'f':
            printf("f - Stone Ocean. \n\n");
            printf("Stone Ocean foi lan%cado em 1 de janeiro de 2000, criado por Hirohiko Araki e %c a sexta parte da s%crie. \n", 135, 130, 130);

            break;

            case 'g':
            printf("g - Steel Ball Run. \n\n");
            printf("Steel Ball Run foi lan%cado em 19 de janeiro de 2004, criado por Hirohiko Araki e %c a s%ctima parte da s%crie. \n\n", 135, 130, 130, 130);

            printf("Para ler o resumo, pressione 1. \n");
            printf("Para continuar, digite 2. \n");
            printf("Para sair, digite 3. \n");
            scanf("%d", &escolha_g);

                switch(escolha_g){
                    case 1:
                    printf("g - Steel Ball Run: \n");
                    printf("Gyro Zeppeli, um executor do reino de Neapolis e Johnny Joestar, um ex-j%cquei americano que perdeu o uso das suas pernas, \n", 162);
                    printf("se encontram atrav%cs do destino e decidem entrar para a Steel Ball Run, uma corrida de cavalos que cruza o territ%crio \n", 130, 162);
                    printf("norte-americano de San Diego at%c a cidade de Nova Iorque. \n", 130);
                    printf("Organizada pelo magnata Stephen Steel, o vencedor da corrida receber%c 50 milhões de d%clares. \n", 160, 162);

                    break;

                    case 2:
                    continue;

                    case 3:
                    exit(0);

                    default: 
                    printf("Comando inv%clido! \n", 160);

                    break;
                }

            break;

            case 'h':
            printf("h - Jojolion. \n\n");
            printf("Jojolion foi lan%cado em 19 de maio de 2011, criado por Hirohiko Araki e %c a oitava parte da s%crie. \n", 135, 130, 130);
            
            printf("Para ler o resumo, pressione 1. \n");
            printf("Para continuar, digite 2. \n");
            printf("Para sair, digite 3. \n");
            scanf("%d", &escolha_h);

                switch(escolha_h){
                    case 1:
                    printf("h - Jojolion. \n\n");
                    printf("Na mesma continuidade de Steel Ball Run, a Cidade-S da Prefeitura-M %c devastada pelo terremoto \n", 130);
                    printf("e tsunami de Tohoku (um evento real que ocorreu em 2011). \n");
                    printf("Logo ap%cs o fen%cmeno, estruturas estranhas conhecidas apenas pelo nome de Wall \n", 162, 147);
                    printf("Eyes come%cam a surgir por toda a cidade de Morioh. \n", 135);

                    break;

                    case 2:
                    continue;

                    case 3:
                    exit(0);

                    default: 
                    printf("Comando inv%clido! \n", 160);

                    break;
                }

            break;

            default: 
                printf("Comando inv%clido! \n", 160);

            }

    break;

    case 3:
        printf("3 - Jogos: \n \n");
        printf("JoJo's Bizarre Adventure (1993 - Super Famicom - Cobra Team) - Role-playing game. \n");
        printf("JoJo's Bizarre Adventure (1998 - Arcade, PlayStation - Capcom) - Fighting game. \n");
        printf("JoJo's Bizarre Adventure: Heritage for the Future (1999 - Arcade, Dreamcast - Capcom) - Updated revision. \n");
        printf("JoJo's Bizarre Adventure HD Ver. (2012 - PlayStation Network, Xbox Live Arcade - Capcom) - High-definition port. \n");
        printf("GioGio's Bizarre Adventure (2002 - PlayStation 2 - Capcom) - Action-adventure game. \n");
        printf("JoJo's Bizarre Adventure: Phantom Blood (2006 - PlayStation 2 - Bandai) - Beat-'em-up. \n");
        printf("JoJo's Bizarre Adventure: All Star Battle (2013 - PlayStation 3 - CyberConnect2) - Fighting game. \n");
        printf("JoJo's Bizarre Adventure: All Star Battle R (2022 - Microsoft Windows, Nintendo Switch,\nPlayStation 4, PlayStation 5, Xbox One, Xbox Series X/S - CyberConnect2) - Updated remaster. \n");
        printf("JoJo's Bizarre Adventure: Stardust Shooters (2014 - iOS, Android - Drecom) - Medal Shooting Action. \n");
        printf("JoJo's Bizarre Adventure: Eyes of Heaven (2015 - PlayStation 3, PlayStation 4 - CyberConnect2) - Fighting game. \n");
        printf("JoJo's Bizarre Adventure: Diamond Records (2017 - iOS, Android) - Action. \n");
        printf("JoJo's Pitter Patter Pop! (2018 - iOS, Android) - Tile-matching puzzle game");
        printf("JoJo's Bizarre Adventure: Last Survivor (2019 - Arcade - Bandai Namco) - Battle royale game. \n");
        printf("Qiao Qiao De Qimiao Maoxian: Huangjin Zange (TBA - Android, iOS - Shengqu Games) - TBA. \n");

        break;

    case 4:
        printf("4 - Personagens: \n");
        printf("Protagonistas: \n");
        printf(" Jonathan Joestar \n Joseph Joestar \n Jotaro Kujo \n Josuke Higashikata \n Giorno Giovana \n Jolyne Cujoh \n Johnny Joestar \n Josuke Higashikata \n \n");
        printf("Vil%ces (principais): \n", 228);
        printf(" Dio Brando \n Kars \n Yoshikage Kira \n Diavolo \n Enrico Pucci \n Funny Valentine \n");

        break;

        default: 
        printf("Comando inv%clido! \n", 160);

        continue;
    }

    system("pause");

    }

    return 0;
    }
