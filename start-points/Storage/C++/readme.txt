
You are implementing a new flexible storage solution. 
Whether the files will be stored in the cloud, or on a local disk, is an 
implementation detail that you would like to hide from the application
at large. For this purpose, you have designed a new interface,
"Storage", which the application will use to store small files. 

The application asks the storage for an Outputfile instance, which it can
write data to. Once it has put in all the data it needs, it finalizes the
file and this causes it to be stored (read only) either in the cloud or on 
disk. At this point you cannot write any more data to the Outputfile instance,
it is deleted.

Your current task is to create an implementation of that interface that will
finalize files. Three scenarios are described below. You should
implement them using Test-Driven Development.

You have access to an interface, "CloudStorage", which you can use to put
files into the cloud. Currently you don't have access to the implementation
of that interface, another team is building that code. In the meantime
a MockCloudStorage is provided, which you can use in your tests.

You have a simplified sequence diagram with three actors to help you understand
what to do.

- "User" represents the wider application that wants to store data. 
- "Storage" is the object that you should implement. 
- "CloudStorage" is the object you use to put files into the cloud.

This diagram describes the main scenario:
 
User                 Storage                CloudStorage  Outputfile
 | --- createFile ----->|                       |             |
 |                      | ----- createBucket -->|             |
 | ------------------------------------------------- write -->|
 | --- finalizeFile --->|                       |             |
 |                      | ----- putObject ----->|             |
 
 In the second scenario, the User registers for a callback so it is notified
 when the file has been written:
 
 User                 Storage                CloudStorage
 | --- setCallback ---->|                       |
 |                      |----- addListener ---->|
 | --- createFile ----->|                       |
 |                      |----- createBucket --->|
 | --- finalizeFile --->|                       |
 |                      |----- putObject ------>|
(time passes)
 |                      |<- onPutObjectSuccess -|
 |<- onFinalizeSuccess -|                       |
 
 The third scenario is similar except the file is not written successfully:
 
 User                 Storage                CloudStorage
 | --- setCallback ---->|                       |
 |                      |----- addListener ---->|
 | --- createFile ----->|                       |
 |                      |----- createBucket --->|
 | --- finalizeFile --->|                       |
 |                      |----- putObject ------>|
(time passes)
 |                      |<- onPutObjectFail ----|
 |<- onFinalizeFail ----|                       |
