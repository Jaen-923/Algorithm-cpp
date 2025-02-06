#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> people1 = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
vector<int> people2 = {2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5};
vector<int> people3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {

    vector<int> result;
    vector<int> rightAnswer(3, 0);

    for (auto i=0; i < answers.size(); ++i) {
        if(answers[i] == people1[i % people1.size()]) {
            rightAnswer[0]++;
        }
        if(answers[i] == people2[i % people2.size()]) {
            rightAnswer[1]++;
        }
        if(answers[i] == people3[i % people3.size()]) {
            rightAnswer[2]++;
        }
    }

    auto max_score = max_element(rightAnswer.begin(), rightAnswer.end());

    for(int i=0; i<3; i++) {
        if(rightAnswer[i] == *max_score) {
            result.push_back(i+1);
        }
    }

    return result;

}


int main() {
    vector<int> answers = {1, 3, 2, 4, 2};
    vector<int> result = solution(answers);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }

    return 0;
}


