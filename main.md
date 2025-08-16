# [Topic Name]  
*(e.g., Linux Privilege Escalation, SQL Injection, Network Enumeration)*  

`⚠️` **Difficulty Level**: [Beginner/Intermediate/Advanced]  
`📅` **Last Updated**: YYYY-MM-DD  

---

## 📌 Overview  
- Brief description of the topic.  
- Why it’s important in cybersecurity.  
- Example scenarios where it applies.  

---

## 🔍 Prerequisites  
**Knowledge**:  
- Basic concepts required (e.g., understanding of Linux systems for PrivEsc).  

**Tools**:  
- [Tool Name](https://link) | *Purpose*  
- `command --flags`  

---

## 🛠️ Methodology  
### 1. Enumeration  
**Automated**:  
```bash
tool_name --option (e.g., linpeas.sh)
```  
**Manual Checks**:  
- Files/Permissions:  
  ```bash
  find / -perm -u=s -type f 2>/dev/null
  ```  
- Services/Ports:  
  ```bash
  netstat -tuln
  ```  

### 2. Exploitation  
**Technique 1**: [Name]  
- **Description**:  
- **Command**:  
  ```bash
  exploit_command --payload
  ```  
- **Mitigation**: *(How to defend against it)*  

**Technique 2**: [Name]  
...  

---

## ⚠️ Common Vulnerabilities  
| Vulnerability | Example | Fix |  
|--------------|---------|-----|  
| Misconfigured SUID | `/bin/bash` with SUID | `chmod u-s /bin/bash` |  
| CVE-XXXX-XXXX | [NVD Link](https://nvd.nist.gov) | Patch update |  

---

## 🧰 Tools Cheatsheet  
| Tool | Command/Usage |  
|------|--------------|  
| [LinPEAS](https://github.com/carlospolop/PEASS-ng) | `./linpeas.sh` |  
| [Metasploit](https://www.metasploit.com/) | `use exploit/linux/local/...` |  

---

## 🎯 Practice Labs  
- [TryHackMe: Room Name](https://tryhackme.com)  
- [HackTheBox: Machine Name](https://hackthebox.com)  
- **Local Lab Setup**:  
  ```bash
  docker run -d --name vulnerable_app image_name
  ```  

---

## 📚 References  
- [OWASP Guide](https://owasp.org)  
- [GTFOBins](https://gtfobins.github.io)  
- Book: *Title by Author*  

---

## 🚀 Quick Commands  
```bash
# One-liners for fast access
grep -r "password" /etc 2>/dev/null
sudo -l
```