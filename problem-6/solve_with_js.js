const readline = require("readline").createInterface({
   input: process.stdin,
   output: process.stdout,
});

readline.question("Enter The first value: ", (firstValue) => {
   const fValue = parseInt(firstValue, 10);

   readline.question("Enter The Second value: ", (secondValue) => {
      const sValue = parseInt(secondValue, 10);

      if (sValue === 0) {
         console.log("Division by zero is not allowed.");
      } else {
         const product = fValue / sValue;
         console.log(product);
      }
      

      readline.close();
   });
});
