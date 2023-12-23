using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  if (not sequence.size()) return true;
  
  for(int i = 0,j = 0; i < array.size();i++){
    if(array[i] == sequence[j]){
      j++;
      if(j == sequence.size()) return true;
    }
  }
  return false;
}
