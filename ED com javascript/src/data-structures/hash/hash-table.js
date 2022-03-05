const { defaultToString } = require("../../utils");

class HashTable {
  constructor(toStrFn = defaultToString) {
    this.toStrFn = toStrFn;
    this.table = {};
  }

  loseloseHashCode(key) {
    if (typeof key === 'number') return key;
    const tableKey = this.toStrFn(key);
    let hash = 0;
    for (let i = 0; i < tableKey.length; i++) {
      hash += tableKey.charCodeAt(i);
    }

    return hash % 37;
  }

  hashCode(key) {
    return this.loseloseHashCode(key);
  }

  // inserindo uma chave e um valor na table hash
  put(key, value) {
    if (key !== null && value !== null) {
      const position = this.hashCode(key);
      this.tabble[position] = new ValuePair(key, value);
      return true;
    }
    return false;
  }

  // obtendo um valor da tabela hash
  get(key) {
    const valuePair = this.table[this.hashCode(key)];
    return valuePair == null ? undefined : valuePair.value;
  }

  // removendo um valor da tabela hash
  remove(key) {
    const hash = this.hashCode(key);
    const valuePair = this.table[hash];
    if (valuePair != null) {
      delete this.table[hash];
      return true;
    }

    return false;
  }
}

module.exports = HashTable;