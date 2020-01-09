[![GCI Badge](https://img.shields.io/badge/Google%20Code--in-JBoss%20Community-red?labelColor=2096F3)](https://gitter.im/JBossOutreach/gci)

# GCI-Custom-Apache
for GCI

### Steps to make a custom module for Apache
- Read [this](https://httpd.apache.org/docs/2.4/developer/modguide.html) article to know how the modules work.
- Create a module like for example [this](https://anonfile.com/F802L2Hcn5/mod_gci_c) one, `gci-handler` which prints `GCI 2019`.
- Add the following to the `httpd.conf` to access the handler while the server runs.
  ```
  <Location "/gci">
      SetHandler gci-handler
  </Location>
  ```
 - Start the apache server and go to: `localhost/gci`, it'll print the following:
 
    ![img](https://i.imgur.com/dQ7EOoF.png)
    
# [DEMO](https://streamable.com/mc5yq)
