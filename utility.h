#ifndef SJTU_UTILITY_HPP
#define SJTU_UTILITY_HPP

#include <utility>
namespace sjtu {
    template<class T1, class T2>
    class pair {
    public:
        T1 first;
        T2 second;

        constexpr pair() : first(), second() {}

        pair(const pair &other) = default;

        pair(pair &&other) = default;

        pair(const T1 &x, const T2 &y) : first(x), second(y) {}

        template<class U1, class U2>
        pair(U1 &&x, U2 &&y) : first(x), second(y) {}

        template<class U1, class U2>
        pair(const pair<U1, U2> &other) : first(other.first), second(other.second) {}

        template<class U1, class U2>
        pair(pair<U1, U2> &&other) : first(other.first), second(other.second) {}

//        template <class U1, class U2>
//        friend bool operator<(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first < y.first ;
//        }
//
//        template <class U1, class U2>
//        friend bool operator==(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first == y.first ;
//        }
//
//        template <class U1, class U2>
//        friend bool operator>(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first>y.first;
//        }
//
//        template <class U1, class U2>
//        friend bool operator<=(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first<=y.first;
//        }
//
//        template <class U1, class U2>
//        friend bool operator>=(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first>=y.first;
//        }
//
//        template <class U1, class U2>
//        friend bool operator!=(const pair<U1, U2>& x, const pair<U1, U2>& y) {
//            return x.first!=y.first;
//        }
//
//        const pair<T1,T2> &operator=(const pair<T1,T2> &a){
//            if(this==&a) return *this;
//            first=a.first;
//            second=a.second;
//            return *this;
//        }

    };
}

#endif
