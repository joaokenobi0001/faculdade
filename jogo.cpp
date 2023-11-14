#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

// Estrutura para representar o usuário
struct User {
    string fullName;
    string cpf;
    string email;
    string pixNumber;
    int credits;
};

// Função para realizar um depósito via PIX
void deposit(User& user, int amount) {
    user.credits += amount;
}

bool withdraw(User& user, int amount) {
    if (amount <= user.credits) {
        user.credits -= amount;
        return true;
    }
    return false;
}

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "portuguese");

    User user;
    user.credits = 0; // Inicializamos os créditos do jogador com 0.

    // Cadastro do usuário
    cout << "Cadastro do usuário:\n";
    cout << "Nome completo: ";
    getline(cin, user.fullName);
    cout << "CPF: ";
    getline(cin, user.cpf);
    cout << "E-mail: ";
    getline(cin, user.email);
    cout << "Número PIX correspondente ao CPF: ";
    getline(cin, user.pixNumber);

    // Loop principal do jogo
    while (true) {
        // Exibimos a quantidade atual de créditos do jogador.
        cout << "Seus créditos atuais: " << user.credits << endl;

        cout << "Escolha um número entre 2 e 12 para adivinhar a soma dos dados: ";
        int chosenNumber;
        cin >> chosenNumber;

        // Verifica se o número escolhido está entre 2 a 12.
        if (chosenNumber < 2 || chosenNumber > 12) {
            cout << "Escolha um número válido entre 2 e 12!" << endl;
            continue;  // Se for inválido, pedimos uma escolha válida novamente.
        }

        // Geramos aleatoriamente dois valores de dados (entre 1 e 6) e calculamos a soma.
        srand(time(0));
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int sum = die1 + die2;

        // Informamos ao jogador os resultados dos lançamentos dos dados.
        cout << "Você jogou os dados e recebeu " << die1 << " e " << die2 << " (soma: " << sum << ")." << endl;

        // Verifica se o jogador acertou.
        if (chosenNumber == sum) {
            cout << "Parabéns! Você acertou!" << endl;
            user.credits += chosenNumber * 2;  // O jogador ganha o dobro da aposta em créditos.
        } else {
            cout << "Desculpe, você errou." << endl;
            user.credits -= chosenNumber;  // O jogador perde o valor da aposta em créditos.
        }

        // pergunta pro jogador se quer continuar jogando ou sair do jogo.
        cout << "Pressione 1 para continuar jogando ou 0 para sair do jogo: ";
        int choice;
        cin >> choice;

        if (choice == 0) {
            break;
        }
    }

    
    cout << "Deseja fazer um saque? (1 - Sim, 0 - Não): ";
    int withdrawChoice;
    cin >> withdrawChoice;

    if (withdrawChoice == 1) {
        cout << "Informe o valor do saque: ";
        int withdrawAmount;
        cin >> withdrawAmount;
        if (withdraw(user, withdrawAmount)) {
            cout << "Saque realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente para o saque." << endl;
        }
    }

    // Exibimos a mensagem de agradecimento e os créditos finais do jogador.
    cout << "Obrigado por jogar! Seus créditos finais: " << user.credits << endl;

    return 0;
}


