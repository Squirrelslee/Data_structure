#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <deque>
#include "speaker.h"
#include <numeric>
#include <fstream>
using namespace std;

class SpeechManager
{
public:
    SpeechManager();
    void Show_Menu();
    void exitSystem();
    void initSpeech();
    void createSpeaker();
    void startSpeech();
    void speechDraw();
    void speechContest();
    void showScore();
    void saveRecord();
    void loadRecord();
    void showRecord();
    bool fileIsEmpty;
    map<int, vector<string>> m_Record;
    vector<int>v1;
    vector<int>v2;
    vector<int>vVictory;
    map<int,Speaker> m_Speaker;
    int m_Index;
    
    
    
    ~SpeechManager();


};