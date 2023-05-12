using namespace std;
int main ()
{
    int num;
    int i = 1;

    cout << "Qual a tabuada você quer que resolva?";
    cin >> num;

    while (i <= 10)
{

cout << i << "x" << num << "=" << num*i << endl;
i++;
}
return 0;
}