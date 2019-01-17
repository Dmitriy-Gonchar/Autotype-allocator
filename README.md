# Autotype-allocator
MyType *arrayOfMyType = (MyType *)malloc(sizeof(MyType) * length);

# NEW-allocator syntax:
MyType *arrayOfMyType = NEW(MyType, length);
#or simple:
MyType *arrayOfMyType = NEW(MyType); // if length == 1
