const defaultEquals = (a, b) => a === b;

const Compare = {
    LESS_THAN: -1,
    BIGGER_THAN: 1
};

const defaultCompare = (a, b) => {
    if (a === b) return 0;
    return a < b ? Compare.LESS_THAN : Compare.BIGGER_THAN;
};

const defaultToString = (item) => {
    if (item === null) return 'NULL';
    if (item === undefined) return 'UNDEFINED';
    if (typeof item === 'string' || item instanceof String) return `${item}`;
    return item.toSting();
};

module.exports = {
    defaultEquals,
    Compare,
    defaultCompare,
    defaultToString
};