#include "storage.h"

bool Storage::Add(const std::string& key, const std::string& value) {
    auto it = _table.find(key);
    bool in_table = it != _table.end();
    if (!in_table)
        _table[key] = value;

    return !in_table;
}

bool Storage::Update(const std::string& key, const std::string& value) {
    auto it = _table.find(key);
    bool in_table = it != _table.end();
    if (in_table)
        it->second = value;

    return in_table;
}



std::optional<std::string> Storage::Get(const std::string &key) const{
    auto it = _table.find(key);
    std::optional<std::string> result;
    if (it != _table.end())
        result = it->second;

    return result;
}

bool Storage::Delete(const std::string &key) {
    auto it = _table.find(key);
    bool result = it != _table.end();
    if (result)
        _table.erase(it);

    return result;
}


