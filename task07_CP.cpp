#include <iostream>
using namespace std;

float flowPipeOne(int, float);
float flowPipeTwo(int, float);
main()
{
    int pipeOne;
    int pipeTwo;
    int volume;
    float hour;
    float flow1;
    float flow2;
    float volumeFilled;
    float totalVol;
    float totalVolPer;
    float pipeOneCon;
    float pipeTwoCon;
    float totalVolPer2;

    cout << "Enter flow rate of pipe one: ";
    cin >> pipeOne;
    cout << "Enter flow rate of pipe two: ";
    cin >> pipeTwo;
    cout << "Enter volume: ";
    cin >> volume;
    cout << "Enter hours: ";
    cin >> hour;

    flow1 = flowPipeOne(pipeOne, hour);
    flow2 = flowPipeTwo(pipeTwo, hour);
    volumeFilled = flow1 + flow2;
    pipeOneCon = (flow1 / volumeFilled ) * 100;
    pipeTwoCon = (flow2 / volumeFilled ) * 100;
    totalVolPer = (volumeFilled / volume) * 100;

    if(totalVolPer>=100)
    {
        totalVolPer2 = totalVolPer - volume;
        cout << "Overflow is: " << totalVolPer2 << endl;
    }


    cout << "Contribution of Pipe One: " << pipeOneCon << endl;

    cout << "Contribution of Pipe Two: " << pipeTwoCon << endl;

    if (totalVolPer <= 100)
    {
    cout << "Pool is filled in percentage: " << totalVolPer << endl;
    }
}

float flowPipeOne(int pipeOne, float hour)
{
    int flow1;
    flow1 = pipeOne * hour;
    return flow1;
}
float flowPipeTwo(int pipeTwo, float hour)
{
    int flow2;
    flow2 = pipeTwo * hour;
    return flow2;
}