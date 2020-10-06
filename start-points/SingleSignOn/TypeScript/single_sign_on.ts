export class SSOToken {

}

export class SingleSignOnRegistry {

    validTokens: SSOToken[] = []

    //Returns an instance of SSOToken if the credentials are valid
    register_new_session(credentials:string):SSOToken | null {
        if (credentials_are_valid(credentials)) {
          const token = new SSOToken()
          this.validTokens.push(token)
          return token
        }
        return null
    }

    //Returns True if the token refers to a current session
    is_valid(token:SSOToken):boolean {
        return this.validTokens.indexOf(token) > -1
    }

    //Remove the given token from current session
    unregister(token:SSOToken) {
      const index = this.validTokens.indexOf(token, 0);
      if (index > -1) {
         this.validTokens.splice(index, 1);
      }
    }
}

//check the credentials by accessing LDAP or whatever
function credentials_are_valid(credentials:string):boolean{
    throw new Error("You can't call this method from a unit test")
}