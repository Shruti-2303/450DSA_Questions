//Why Is String Immutable in Java?
//The key benefits of keeping this class as immutable are caching, security, synchronization, and performance.
// If Strings were mutable, then by the time we execute the update, we can't be sure that the String we received, even after performing security checks, would be safe. The untrustworthy caller method still has the reference and can change the String between integrity checks. Thus making our query prone to SQL injections in this case. So mutable Strings could lead to degradation of security over time.
// Being immutable automatically makes the String thread safe since they won't be changed when accessed from multiple threads.
//Hence immutable objects, in general, can be shared across multiple threads running simultaneously. They're also thread-safe because if a thread changes the value, then instead of modifying the same, a new String would be created in the String pool. Hence, Strings are safe for multi-threading.
// we can conclude that Strings are immutable precisely so that their references can be treated as a normal variable and one can pass them around, between methods and across threads, without worrying about whether the actual String object it's pointing to will change.
