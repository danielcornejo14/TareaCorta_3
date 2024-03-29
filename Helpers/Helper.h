#pragma once

#include <iostream>
#include <fstream>
#include "BST.h"
#include "CacheNode.h"
#include "simpleList.h"

using namespace std;


void clientReadHelper(ofstream &newClient, ofstream &index, simpleList &list, const string& fullString, char delimiter, int &indexNum){
    string data1;
    string data2;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                break;
        }
    }

    try{
        int data1Num = stoi(data1);
        if(!list.findByElement(data1Num)){
            list.appendAtEnd(data1Num);
            newClient<< fullString+";"+"0"<<endl;
            index<< fullString+";" <<indexNum<<endl;
            indexNum++;
        }
    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void clientRead(){
    ifstream clients ("../Tests/Clientes.txt");
    ofstream index ("../Out/indices.txt");
    ofstream newClient("../Out/newClients.txt");
    simpleList list;

    string line;
    if(clients.is_open()){
        int indexNum = 0;
        while(getline(clients, line)){
            clientReadHelper(newClient, index, list, line, ';', indexNum);
        }
        index.close();
        newClient.close();
    }
}

void loadBSTHelper(BSTTree &tree, const string& fullString, char delimiter, int count){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        int data1Int = stoi(data1);
        if(count==19){
            cout << "19!!!!";
        }
        if(data3=="0"){
            if(!tree.isIdOnTree(tree.root, data1Int)) {
                tree.root = tree.insert(tree.root, data1Int, count);
            }
        }
    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void loadBST(BSTTree &tree){
    string line;
    ifstream arch1("../Out/newClients.txt");
    int count = 0;
    while (getline(arch1, line)) {
        if(!line.empty()){
            loadBSTHelper(tree, line, ';', count);
            count++;
        }
    }
    arch1.close();
}

bool check_key(map<int, CacheNode> m, int key){
    return !(m.find(key) == m.end());
}

void defaultCacheInitHelper(map<int, CacheNode> &cacheMemory, const string& fullString, char delimiter, int count){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        int data1Int = stoi(data1);

        if(data3=="0"){
            if (!check_key(cacheMemory, count) && cacheMemory.size()<20) {
                cacheMemory.insert(make_pair(count, CacheNode(data1Int, data2)));
            }
        }
    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void defaultCacheInit(map<int, CacheNode> &cacheMemory){
    string line;
    ifstream arch1("../Out/newClients.txt");
    int count = 0;
    while (getline(arch1, line)) {
        if(!line.empty()){
            defaultCacheInitHelper(cacheMemory, line, ';', count);
            count++;
        }
    }
    arch1.close();
}

void printCache(map<int, CacheNode> &cacheMemory){
    for (auto& it: cacheMemory) {
        cout << it.first << " | " << it.second.id << "; " << it.second.name << " | "<< endl;
    }
}

void updateCacheHelper(map<int, CacheNode> &cacheMemory, const string& fullString, char delimiter, int &index, int &count, int &countLines){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        int data1Int = stoi(data1);
        if(countLines==index && cacheMemory.size()<20){
            cacheMemory.insert(make_pair(index, CacheNode(data1Int, data2)));
            index++;
            count++;
        }

    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void updateCache(map<int, CacheNode> &cacheMemory, int &index){
    string line;
    ifstream arch1("../Out/newClients.txt");
    int countLines = 0;
    int count = 0;

    //Cleans cache
    cacheMemory.clear();

    while (getline(arch1, line)) {
        if(!line.empty()){
            updateCacheHelper(cacheMemory, line, ';', index, count, countLines);
            countLines++;
        }
    }
    arch1.close();

    if(count<20){
        index = 0;
        countLines = 0;
        ifstream arch2("../Out/newClients.txt");
        while (getline(arch2, line)) {
            if(!line.empty()){
                updateCacheHelper(cacheMemory, line, ';', index, count, countLines);
                countLines++;
            }
        }
        arch2.close();
    }
}


void purgeClientHelper(const string& fullString, char delimiter, ofstream &file){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        int data1Int = stoi(data1);
        if(data3 == "0"){
            file << fullString<<endl;
        };
    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void purgeClient(){
    string line;
    ifstream arch1("../Out/newClients.txt");
    ofstream purgedFile("../Out/purgedClients.txt");

    while (getline(arch1, line)) {
        if(!line.empty()){
            purgeClientHelper(line, ';', purgedFile);
        }
    }
    arch1.close();
    purgedFile.close();
    remove("../Out/newClients.txt");
    rename("../Out/purgedClients.txt", "../Out/newClients.txt");
    
}



void getClientFromFileHelper(const string& fullString, char delimiter, int &index, int &count){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        if(count==index){
            cout << "Client ID: " << data1 << ", Name: " << data2 << endl;
        }

    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void getClientFromFile(int index){
    string line;
    ifstream arch1("../Out/newClients.txt");
    int countLines = 0;

    while (getline(arch1, line)) {
        if(!line.empty()){
            getClientFromFileHelper(line, ';', index, countLines);
            countLines++;
        }
    }
    arch1.close();
}


void findClient(BSTTree &tree, map<int, CacheNode> &cacheMemory){
    string clientIdString;
    while (true){
        try {
            cout << "Type Client id to search: " << endl;
            cin >> clientIdString;
            int clientId = stoi(clientIdString);

            if(tree.isIdOnTree(tree.root, clientId)){
                int index = tree.getClientById(tree.root, clientId)->index;

                if(check_key(cacheMemory, index)){
                    auto client = cacheMemory.at(index);
                    cout << "Client found in Cache" << endl;
                    cout << "Client ID: " << client.id << " , Name: " << client.name << endl;
                    updateCache(cacheMemory, index);
                } else {
                    cout << "Client found in file" << endl;
                    getClientFromFile(index);
                    updateCache(cacheMemory, index);
                }
            } else {
                cout << "ERROR. No such client with ID: " << clientId << endl;
            }



            break;
        } catch (std::invalid_argument &e){

        }
    }
}

void markAsDeletedInFileHelper(const string& fullString, char delimiter, int &clientId, ofstream &newFile){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        int data1Num = stoi(data1);
        if(data1Num==clientId){
            newFile << data1 << ";" << data2 << ";" << "1" << endl;
        } else {
            newFile << fullString << endl;
        }

    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}


void markAsDeletedInFile(int &clientId){
    string line;
    ifstream arch1("../Out/newClients.txt");
    ofstream newFile("../Out/file.txt");

    while (getline(arch1, line)) {
        if(!line.empty()){
            markAsDeletedInFileHelper(line, ';', clientId, newFile);
        }
    }
    newFile.close();
    arch1.close();
    remove("../Out/newClients.txt");
    rename("../Out/file.txt", "../Out/newClients.txt");
}

void deleteClient(BSTTree &tree, map<int, CacheNode> &cacheMemory){
    string clientIdString;
    while (true){
        try {
            cout << "Type Client id to search: " << endl;
            cin >> clientIdString;
            int clientId = stoi(clientIdString);

            if(tree.isIdOnTree(tree.root, clientId)){
                markAsDeletedInFile(clientId);

                //Proceed to re-index tree and cache
                cout << "Re-Indexing cache and tree..." << endl;
                cacheMemory.clear();
                tree.deleteTree(&tree.root);
                loadBST(tree);
                defaultCacheInit(cacheMemory);
                cout << "Finished re-indexing" << endl;
            } else {
                cout << "ERROR. No such client with ID: " << clientId << endl;
            }
            break;
        } catch (std::invalid_argument &e){

        }
    }
}

void insertOnFilesHelper(const string& fullString, char delimiter, ofstream &newFile, ofstream &newFile2, int &indexCount){
    string data1;
    string data2;
    string data3;
    int dataCount = 0;
    for (auto x : fullString){
        switch(dataCount){
            case 0:
                if(x==delimiter){
                    //cout << data1 << endl;
                    dataCount++;
                } else {
                    data1+=x;
                }
                break;
            case 1:
                if(x==delimiter){
                    //cout << data2 << endl;
                    dataCount++;
                } else {
                    data2+=x;
                }
                break;
            case 2:
                if(x==delimiter){
                    //cout << data3 << endl;
                    dataCount++;
                } else {
                    data3+=x;
                }
                break;
            default:
                dataCount=0;
                data1 = "";
                data2 = "";
                data3 = "";
                break;
        }
    }

    try{
        newFile << fullString << endl;
        newFile2 << data1 << ";" << data2 << ";" << to_string(indexCount) << endl;
        indexCount++;
    }catch (std::invalid_argument& e) {
        cout << "******************************************************************************************************" << endl;
        cout << "Number values could not be converted to integer for ids: " << data1 << data2 << endl;
        cout << "******************************************************************************************************" << endl;
    }
}

void insertOnFiles(int clientId, string &clientName){
    string line;
    ifstream arch1("../Out/newClients.txt");
    ifstream index("../Out/tree.txt");
    ofstream newFile("../Out/file.txt");
    ofstream newFile2("../Out/file2.txt");
    int indexCount = 0;
    while (getline(arch1, line)) {
        if(!line.empty()){
            insertOnFilesHelper(line, ';',  newFile, newFile2, indexCount);
        }
    }
    newFile << to_string(clientId)+";"+clientName+";0";
    newFile2 << to_string(clientId)+";"+clientName+";"+to_string(indexCount) << endl;

    newFile.close();
    newFile2.close();
    arch1.close();
    index.close();
    remove("../Out/newClients.txt");
    remove("../Out/indices.txt");
    rename("../Out/file.txt", "../Out/newClients.txt");
    rename("../Out/file2.txt", "../Out/indices.txt");
}

void insertClient(BSTTree &tree, map<int, CacheNode> &cacheMemory){
    string clientIdString;
    while (true){
        try {
            cout << "Type Client id to insert (numeric): " << endl;
            cin >> clientIdString;
            int clientId = stoi(clientIdString);

            if(tree.isIdOnTree(tree.root, clientId)){
                cout << "Client already present" << endl;
            } else {
                string clientName;
                cout << "Type client name: " << endl;
                cin >> clientName;
                insertOnFiles(clientId, clientName);

                //Proceed to re-index tree and cache
                cout << "Re-Indexing cache and tree..." << endl;
                cacheMemory.clear();
                tree.deleteTree(&tree.root);
                loadBST(tree);
                tree.inorder(tree.root);
                int index = tree.getClientById(tree.root, clientId)->index;
                updateCache(cacheMemory, index);
                cout << "Finished re-indexing" << endl;
            }
            break;
        } catch (std::invalid_argument &e){
            cout << "Non numeric inserted" << endl;
        }
    }
}