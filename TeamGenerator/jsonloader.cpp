#include "jsonloader.h"



void JsonLoader::set_file_path(string file_path)
{
    this->file_path = file_path;
}

void JsonLoader::Write(string file_name, Json::Value save_data)
{
    write.open(file_path + file_name);
    Json::StreamWriterBuilder builder;
    builder["commnetStyle"] = "None";
    builder["indentation"] = "\t";
    unique_ptr<Json::StreamWriter> writer(builder.newStreamWriter());
    writer->write(save_data, &cout);
    writer->write(save_data, &write);
    cout << endl;

    write.close();
}

Json::Value JsonLoader::Read(string file_name)
{
    read.open(file_path + file_name);
    Json::CharReaderBuilder builder;
    builder["collectComments"] = false;
    Json::Value result;

    JSONCPP_STRING errs;
    Json::parseFromStream(builder, read, &result, &errs);
    read.close();
    return result;
}

bool JsonLoader::Read(string file_name, Json::Value &&load_data)
{
    load_data = Read(file_name);
    return valid(load_data);
}

bool JsonLoader::valid(Json::Value value)
{
    return value.size() > 0;
}
