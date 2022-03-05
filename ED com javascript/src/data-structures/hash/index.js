const HashTable = require("./hash-table");

const hash = new HashTable();

hash.put("Gandalf", "gandalf@gmail.com");
hash.put("John", "jhonsnow@gmail.com");
hash.put("Tyrion", "tyrion@email.com");
console.log(hash.hashCode("Gandalf") + " - Gandalf");
console.log(hash.hashCode("John") + "- John");
console.log(hash.hashCode("Tyrion") + " - tyrion");


console.log(hash.get("Gandalf"));
console.log(hash.get("Tyrion"));
console.log(hash.get("John"));
console.log(hash.get("Cercei"));

console.log("-------- Testando colisoes ----- ");

hash.put("Ygritte", "ygritte@email.com");
hash.put("Jonathan", "jonathan@email.com");
hash.put("Jamie", "jamie@email.com");
hash.put("Jack", "jack@email.com");
hash.put("Jasmine", "jasmine@email.com");
hash.put("Jake", "jake@email.com");
hash.put("Nathan", "nathan@email.com");
hash.put("Athelstan", "athelsetan@email.com");
hash.put("Sue", "sue@email.com");
hash.put("Aethelwulf", "athelstan@email.com");
hash.put("Sargeras", "sargeras@email.com");

console.log("hash codes >>> ");
console.log(hash.hashCode("Ygritte"));
console.log(hash.hashCode("Jonathan"));
console.log(hash.hashCode("Jamie"));
console.log(hash.hashCode("Jack"));
console.log(hash.hashCode("Jasmine"));
console.log(hash.hashCode("Jake"));
console.log(hash.hashCode("Nathan"));
console.log(hash.hashCode("Athelstan"));
console.log(hash.hashCode("Sue"));
console.log(hash.hashCode("Aethelwulf"));
console.log(hash.hashCode("Sargeras"));


console.log(">>> to String <<< ");
console.log(hash.toString());


