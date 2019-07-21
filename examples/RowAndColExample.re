open Ehd;

let str = ReasonReact.string;

let rowStyles =
  ReactDOMRe.Style.make(
    ~fontSize="14px",
    ~lineHeight="50px",
    ~margin="5px",
    ~backgroundImage=
      "linear-gradient(90deg, #f5f5f5 4.16666667%, transparent 4.16666667%, transparent 8.33333333%, #f5f5f5 8.33333333%, #f5f5f5 12.5%, transparent 12.5%, transparent 16.66666667%, #f5f5f5 16.66666667%, #f5f5f5 20.83333333%, transparent 20.83333333%, transparent 25%, #f5f5f5 25%, #f5f5f5 29.16666667%, transparent 29.16666667%, transparent 33.33333333%, #f5f5f5 33.33333333%, #f5f5f5 37.5%, transparent 37.5%, transparent 41.66666667%, #f5f5f5 41.66666667%, #f5f5f5 45.83333333%, transparent 45.83333333%, transparent 50%, #f5f5f5 50%, #f5f5f5 54.16666667%, transparent 54.16666667%, transparent 58.33333333%, #f5f5f5 58.33333333%, #f5f5f5 62.5%, transparent 62.5%, transparent 66.66666667%, #f5f5f5 66.66666667%, #f5f5f5 70.83333333%, transparent 70.83333333%, transparent 75%, #f5f5f5 75%, #f5f5f5 79.16666667%, transparent 79.16666667%, transparent 83.33333333%, #f5f5f5 83.33333333%, #f5f5f5 87.5%, transparent 87.5%, transparent 91.66666667%, #f5f5f5 91.66666667%, #f5f5f5 95.83333333%, transparent 95.83333333%)",
    (),
  );

let colStyleWithBkg =
  ReactDOMRe.Style.make(
    ~textAlign="center",
    ~backgroundColor="rgb(29, 190, 238, .5)",
    (),
  );
let colStyleWithoutBkg = ReactDOMRe.Style.make(~textAlign="center", ());

[@react.component]
let make = () => {
  <Section title="Row & Col">
    <Row style=rowStyles>
      <Col style=colStyleWithBkg> {str("100%")} </Col>
    </Row>
    <Row style=rowStyles>
      <Col style=colStyleWithBkg span=6> {str("25%")} </Col>
      <Col style=colStyleWithoutBkg span=6> {str("25%")} </Col>
      <Col style=colStyleWithBkg span=6> {str("25%")} </Col>
      <Col style=colStyleWithoutBkg span=6> {str("25%")} </Col>
    </Row>
    <Row style=rowStyles>
      <Col style=colStyleWithBkg span=8> {str("33.33%")} </Col>
      <Col style=colStyleWithoutBkg span=8> {str("33.33%")} </Col>
      <Col style=colStyleWithBkg span=8> {str("33.33%")} </Col>
    </Row>
    <Row style=rowStyles>
      <Col style=colStyleWithBkg span=12> {str("50%")} </Col>
      <Col style=colStyleWithoutBkg span=12> {str("50%")} </Col>
    </Row>
    <Row style=rowStyles>
      <Col style=colStyleWithBkg span=16> {str("66.66%")} </Col>
      <Col style=colStyleWithoutBkg span=8> {str("33.33%")} </Col>
    </Row>
  </Section>;
};
