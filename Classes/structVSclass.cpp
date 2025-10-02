// In C++, a structure works the same way as a class, except for the difference that members of a class are private by default and members of a structure are public by default. 

// In practice, the difference is more about convention / intent: using struct usually signals a plain data aggregate, while class signals a more encapsulated object.


// There is no other difference as structures support all features of a class like member methods, 
// inheritance and virtual functions. The following is a summary of differences

//Interview edge topics:

// Default inheritance vs default member access
// These are two separate defaults. Many people remember only member access (public/private), but forget that
// inheritance also has a default based on whether you used struct or class in the derived declaration. 
// S

// // Conveying intention
// // Even though the language gives only minor differences, in real-world code you 
// use the keyword to communicate intent to other developers:

// Use struct for plain “bags of data” or simple record types, where you expect all members to be 
//public and minimal invariants.

// Use class when you want strong encapsulation: private data, public APIs, hiding implementation 
//details, etc.

// Many codebases adopt a style guideline: If a type is “mostly data,” use struct, otherwise use class.

// Q: When would you use struct vs class in a real project?
// A: Use struct when you have a simple data aggregate with mostly public data (e.g. coordinate, 
// simple record). Use class when you want encapsulation, invariants, hiding internal state, 
// enforcing controlled access, etc. This communicates your design intent.

// Q: Does struct have performance benefits over class?
// A: No. The keywords don’t affect runtime. Performance depends on what features you use 
// (virtual methods, alignment, etc.), not on struct vs class.