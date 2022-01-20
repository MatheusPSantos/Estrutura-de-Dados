module.exports = {
    defaultEquals: (a, b) => a === b,
    Compare: {
        LESS_THAN: -1,
        BIGGER_THAN: 1
    },
    defaultCompare: (a, b) => {
        if (a === b) return 0;
        return a < b ? this.Compare.LESS_THAN : this.Compare.BIGGER_THAN;
    },
};