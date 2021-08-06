import React from "react";
import { Navbar, Container, NavbarBrand } from "react-bootstrap";

const NavbarComponent = () => {
  return (
    <div>
      <Navbar variant="dark">
        <Container>
          <Navbar.Brand href="/">
            <strong>Kasir </strong>App
          </Navbar.Brand>
          <Navbar.Collapse className="justify-content-end">
            <Navbar.Text>
              Dashboard in: <a href="/dashboard">Admin</a>
            </Navbar.Text>
          </Navbar.Collapse>
        </Container>
      </Navbar>
    </div>
  );
};

export default NavbarComponent;
