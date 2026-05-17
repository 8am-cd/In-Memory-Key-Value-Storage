#ifndef STORAGE_H
#define STORAGE_H

#include <unordered_map>
#include <string>
#include <optional>


class Storage {
private:
    std::unordered_map<std::string, std::string> _table;

public:
    Storage (const Storage& storage) = delete;
    Storage& operator=(const Storage& storage) = delete;

    bool Put(const std::string& key, const std::string& value);

    std::optional<std::string> Get(const std::string& key) const;

    bool Delete(const std::string& key);
};


#endif //STORAGE_H
