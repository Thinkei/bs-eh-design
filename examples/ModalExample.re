open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  let (openModal, setModalVisibility) = React.useState(() => false);
  <Section title="Modal">
    <Button onClick={_ => setModalVisibility(_ => true)}>
      {str("Open modal")}
    </Button>
    <Modal
      closable=true
      visible=openModal
      onOk={_ => setModalVisibility(_ => false)}
      onCancel={_ => setModalVisibility(_ => false)}>
      {str("Modal content")}
    </Modal>
  </Section>;
};
