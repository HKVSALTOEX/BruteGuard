const { exec } = require('child_process');

const filePath = process.argv[2];
const targetPassword = process.argv[3];

console.log('Requesting administrator rights...');

exec('sudo ./execute_passwords_csharp', (error, stdout, stderr) => {
    if (error) {
        console.error(`exec error: ${error}`);
        return;
    }
    console.log(`stdout: ${stdout}`);
    console.error(`stderr: ${stderr}`);
});