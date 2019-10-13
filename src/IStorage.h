#pragma once
#include <functional>

class IStorage
{
public:
    typedef std::function<void(const char *, size_t, const void *, size_t)> callback;

    virtual void insert(const char *key, size_t cchKey, void *data, size_t cb) = 0;
    virtual void erase(const char *key, size_t cchKey) = 0;
    virtual void retrieve(const char *key, size_t cchKey, bool fDelete, callback fn) = 0;
    virtual size_t clear() = 0;
    virtual void enumerate(callback fn) = 0;
};
