#pragma once

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <math.h>
#include <boost/lexical_cast.hpp>


template <class T>
void vector_to_str(std::vector<T>& list, std::string& ss) {
    ss = "";
    for (const auto& val : list) {
        ss += std::to_string(val);
    }
}
template <class K, class V>
void map_to_str(std::unordered_map<K, V>& map, std::string& ss) {
    ss = "";
    for(auto iter = map.begin(); iter != map.end(); ++iter) {
        ss = ss + "[" + iter->first + ":" + iter->second + "],";
    }
}

template <class T>
void print_vector(std::vector<T>& list) {
    std::string ss = "";
    vector_to_str(list, ss);
    std::cout << "list=" << ss << "\n";
}