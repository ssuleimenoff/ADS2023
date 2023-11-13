// dynamic set of data
// insert / delete / search
// dictinary - generic way to map keys to values
// hash table - implementation of a dictionary using a hash function
// Direct-access tables ~ array
// U - Universe of keys - [0, 1, 2, 3, 6, 7, 8, 9] ~ unbounded
// K - Actual keys - [4, 5] ~ data
// In Hash Tables - if we have 2 pointer data which in one position - its called collision, either just "data" ~ chainning
// h(k) = k mod m
// h(k) = k mod 13 // 13 - m - which is table size
// h(50) = 50 mod 13 = 11 - which is direct pos

// Entry <K, V> ------> key.hashCode()
// 100, "Spongebob" ---> 100
// 123, "Patrick" ---> 123
// 321, "Sandy" ---> 321
// 555, "Squidward" ---> 555
// 777, "Gary" ---> 777

// For instance if we have HashTable with capacity till the [0-9]:
// We know that the:
// key.HashCode() % capacity


// So in HashTable:
// 0 - Spongebob ~ 100 % 10 = 0
// 1 - Sandy ~ 321 % 10 = 1
// 3 - Patrick ~ 123 % 10 = 3
// 5 - Squid ~ 555 % 10 = 5
// 7 - Gary ~ 777 % 10 = 7

// Formula: s[0]*31^(n-1) + s[1]*31(n-2)+...+s(n-1)
// "100", "Spongebob" ---> 48625 % 10 = index - 5
// "123", "Patrick" ---> 48690 % 10 = index - 0
// "321", "Sandy" ---> 50610 % 10 = index - 0
// "555", "Squidward" ---> 52629 % 10 = index - 9
// "777", "Gary" ---> 54615 % 10 = index - 5


