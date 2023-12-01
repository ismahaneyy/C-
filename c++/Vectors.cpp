#include <iostream>
#include <vector>

using namespace std;

int main(){
   
    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[1] << endl;
    cout << vowels[2] << endl;

    vector  <int> test_scores {100, 56, 45};

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(2) << endl;
    cout << "the size of the vector is; " << test_scores.size() << endl;

    cout << "Enter three test scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
 
    cout << "The updated test scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "Enter a new test score" << endl;
    int new_score(0);
    cin >> new_score;
    test_scores.push_back(new_score);
    
    cout << "add the last test score" << endl;
    cin >> new_score;
    test_scores.push_back(new_score);
    cout << "All the test scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are now " << test_scores.size() << " test scores" << endl;

    vector <vector<int>> movie_ratings{
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "Here are the movie ratings for reviewer #1 using array synatx:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    cout << movie_ratings[1][3] << endl;
    cout << movie_ratings[1][0] << endl;
    cout << movie_ratings[2][1] << endl;

    cout << "Here are the movie rating for reviewer #1 using vector syntax" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    cout << movie_ratings.at(1).at(2) << endl;

return 0;

}
