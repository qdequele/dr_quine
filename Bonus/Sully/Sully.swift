import Foundation
var i=5
if !(#file=="Sully.swift"){i-=1}
let c="import Foundation\nvar i=5\nif !(#file==\"Sully.swift\"){i-=1}\nlet c=%@\ndo{try String(format:c,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+\"/Sully_\(i).swift\",atomically:false,encoding:.utf8)}catch{}\nif i>0{Process.launchedProcess(launchPath:FileManager().currentDirectoryPath,arguments:[\"Swift\", \"Sully_\(i).swift\"]).launch()}"
do{try String(format:c,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+"/Sully_5.swift",atomically:false,encoding:.utf8)}catch{}
if i>0{Process.launchedProcess(launchPath:FileManager().currentDirectoryPath,arguments:["Swift", "Sully_5.swift"]).launch()}