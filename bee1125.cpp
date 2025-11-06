#include <bits/stdc++.h>

using namespace std;

int main(){
    int G, P, col;

    while(cin >> G >> P && (G || P)){

        int points[P];
        int chegadas[G][P];
        int temp;
        
        for(int corrida = 0; corrida < G; corrida++){
            for(int piloto = 0; piloto < P; piloto++){
                cin >> temp;
                chegadas[corrida][temp - 1] = piloto;
            }
        }
        
        int S; cin >> S;
        vector<int> campeoes;
        int pontosParaGanhar;
        
        for(int sistema = 0; sistema < S; sistema++){
            int K; cin >> K;
            pontosParaGanhar = INT_MIN;
            vector<int> pontos(P, 0);
            vector<int> pontosPos(K);
            campeoes.clear();

            for(int i = 0; i < K; i++) cin >> pontosPos[i];

            for(int i = 0; i < G; i++)
                for(int j = 0; j < K; j++)
                    pontos[chegadas[i][j]] += pontosPos[j];

            int maxP = *max_element(pontos.begin(), pontos.end());

            for(int i = 0; i < P; i++)
                if(pontos[i] == maxP)
                    campeoes.push_back(i + 1);
            
            for (int i = 0; i < (int)campeoes.size(); i++) {
                if (i) cout << " ";
                cout << campeoes[i];
            }
        cout << endl;
        }

    }

    return 0;
}
