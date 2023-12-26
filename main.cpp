#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    // Ввод количества кандидатов
    int numCandidates;
    cout << "Enter the amount of candidates: ";
    cin >> numCandidates;
    // Ввод данных кандидатов
    vector<Candidate> candidates;
    for (int i = 0; i < numCandidates; i++) {
        string name;
        cout << "Enter the name of candidate #" << i + 1 << ": ";
        cin >> name;
        string interests;
        cout << "Enter the interests of candidate #" << i + 1 << ": ";
        cin >> interests;
        string achievements;
        cout << "Enter the achievements of candidate #" << i + 1 << ": ";
        cin >> achievements;
        candidates.push_back(Candidate(name, interests, achievements));

    }

    // Проведение голосования
    conductElection(candidates);

    return 0;
}
