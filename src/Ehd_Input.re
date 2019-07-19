[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~defaultValue: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~addOnAfter: React.element=?,
    ~addOnBefore: React.element=?,
    ~disabled: bool=?,
    ~id: string=?,
    ~prefix: React.element=?,
    ~size: [@bs.string] [ | `default | `small | `large]=?,
    ~suffix: React.element=?,
    ~_type: string=?,
    ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
    ~allowClear: bool=?,
    ~placeholder: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "Input";

module TextArea = {
  [@bs.scope "Input"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~defaultValue: string=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~addOnAfter: React.element=?,
      ~addOnBefore: React.element=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~prefix: React.element=?,
      ~size: [@bs.string] [ | `default | `small | `large]=?,
      ~suffix: React.element=?,
      ~_type: string=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~allowClear: bool=?,
      ~placeholder: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~autoSize: bool=?
    ) =>
    React.element =
    "TextArea";
};

module Password = {
  [@bs.scope "Input"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~defaultValue: string=?,
      ~value: string=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~addOnAfter: React.element=?,
      ~addOnBefore: React.element=?,
      ~disabled: bool=?,
      ~id: string=?,
      ~prefix: React.element=?,
      ~size: [@bs.string] [ | `default | `small | `large]=?,
      ~suffix: React.element=?,
      ~_type: string=?,
      ~onPressEnter: ReactEvent.Keyboard.t => unit=?,
      ~allowClear: bool=?,
      ~placeholder: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
    ) =>
    React.element =
    "Password";
};
