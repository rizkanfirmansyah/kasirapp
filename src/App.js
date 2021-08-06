import React, { Component } from 'react'
import {
  BrowserRouter as Router,
  Switch,
  Route,
} from "react-router-dom";
import { NavbarComponent } from "./components";
import { Dashboard, Home, Success } from "./Pages";

export default class App extends Component {
  render() {
    return (
      <Router>
        <NavbarComponent/>
        <main>
          <Switch>
            <Route path="/" component={Home} exact/>
            <Route path="/success" component={Success} exact/>
            <Route path="/dashboard" component={Dashboard} exact/>
          </Switch>
        </main>
      </Router>
    )
  }
}
