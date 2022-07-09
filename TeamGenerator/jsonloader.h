#ifndef JSONLOADER_H
#define JSONLOADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <json/json.h>

#pragma comment(lib, "jsoncpp.lib")

using namespace std;

class JsonLoader
{
public:
    static JsonLoader* p;
    static JsonLoader* get_instance()
    {
        if (p == nullptr)
            p = new JsonLoader();
        return p;
    }
    static void del_instance()
    {
        delete p;
        p = nullptr;
    }
    void set_file_path(string file_path);
    void Write(string file_name, Json::Value save_data);
    Json::Value Read(string file_name);
    bool Read(string file_name, Json::Value&& load_data);
    bool valid(Json::Value value);
private:
    ofstream write;
    ifstream read;
    string file_path;
};

JsonLoader* JsonLoader::p = nullptr;

#define JSON JsonLoader::get_instance()
#define DEL_JSON JsonLoader::del_instance();

#endif // JSONLOADER_H
