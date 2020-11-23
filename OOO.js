/**
 * @description One
 * 
 * _'->' means returns_
 * @example new One() -> {one: 1}
 * getOne() -> 1
 * setOne(<Number>) -> set value -> 1
 * 
 * @returns {Object} {one: 1}
 */
class One{
    constructor(){
        this.one = 1;
        return this.one
    }

    /**
     * @description set one to desired value. Value must be '1'
     * @param {Number} newOne one
     * @example setOne(1) -> 1
     */
    setOne(newOne){
        if(!typeof newOne == "number" || newOne != 1){
            return new Error("Value must be 1")
        }
        else{
            this.one = newOne;
            return this.one;
        }
    }

    /**
     * @description get actual one
     */
    getOne(){
        return this.one
    }
}

// usage
// i = new One().getOne() + i
