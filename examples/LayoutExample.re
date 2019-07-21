open Ehd;

let str = ReasonReact.string;

module Sider = Layout.Sider;
module Header = Layout.Header;
module Content = Layout.Content;
module Footer = Layout.Footer;

let layoutWrapper =
  ReactDOMRe.Style.make(
    ~fontSize="14px",
    ~textAlign="center",
    ~border="0.5px solid #d8d8d8",
    (),
  );
let sider = ReactDOMRe.Style.make(~lineHeight="120px", ());
let content =
  ReactDOMRe.Style.make(~minHeight="120px", ~lineHeight="120px", ());

[@react.component]
let make = () => {
  <Section title="Layout">
    <Layout style=layoutWrapper>
      <Sider style=sider trigger=ReasonReact.null collapsible=true>
        {str("Sider")}
      </Sider>
      <Layout>
        <Header> {str("Header")} </Header>
        <Content style=content> {str("Content")} </Content>
        <Footer> {str("Footer")} </Footer>
      </Layout>
    </Layout>
  </Section>;
};
