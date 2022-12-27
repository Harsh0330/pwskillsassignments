function sample(){
    throw 'Catch it'
}
try{
    console.log('Started..')
    sample()
    console.log('Finished..')
}
catch(err){
    console.log(err)
}
finally{
    console.log('Wrapping Up...')
}