import Foundation
var i=5
if !(#file=="Sully.swift"){i-=1}
let c="import Foundation\nvar i=%d\nif !(#file==\"Sully.swift\"){i-=1}\nlet c=%@\ndo{try String(format:c,i,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+\"/Sully_\\(i).swift\",atomically:false,encoding:.utf8)}catch{}\nif i>0{Process.launchedProcess(launchPath:\"/usr/bin/swift\",arguments:[\"Sully_\\(i).swift\"])}"
do{try String(format:c,i,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+"/Sully_\(i).swift",atomically:false,encoding:.utf8)}catch{}
if i>0{Process.launchedProcess(launchPath:"/usr/bin/swift",arguments:["Sully_\(i).swift"])}