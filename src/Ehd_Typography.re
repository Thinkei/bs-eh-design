module CopyableProp = {
  type config = {
    .
    "text": string,
    "onCopy": string => unit,
  };
  type t('a) =
    | Bool(bool): t(bool)
    | Config(string, string => unit): t(config);

  let tToJs: type a. t(a) => a =
    fun
    | Bool(value) => value
    | Config(text, onCopy) => {"text": text, "onCopy": onCopy};
};

module EditableProp = {
  type config = {
    .
    "editing": bool,
    "onStart": unit => unit,
    "onChange": string => unit,
  };
  type t('a) =
    | Bool(bool): t(bool)
    | Config(bool, unit => unit, string => unit): t(config);

  let tToJs: type a. t(a) => a =
    fun
    | Bool(value) => value
    | Config(editing, onStart, onChange) => {
        "editing": editing,
        "onStart": onStart,
        "onChange": onChange,
      };
};

module Text = {
  module External = {
    [@bs.scope "Typography"]
    [@bs.module "@ehrocks/eh-ant-design/lib"]
    [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: 'a=?,
        ~delete: bool=?,
        ~disabled: bool=?,
        ~editable: 'b=?,
        ~ellipsis: bool=?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: string => unit=?,
        ~strong: bool=?,
        ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
        ~children: React.element
      ) =>
      React.element =
      "Text";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~delete=?,
        ~disabled=?,
        ~editable=?,
        ~ellipsis=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~strong=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.tToJs)}
      ?delete
      ?disabled
      editable=?{Belt.Option.map(editable, EditableProp.tToJs)}
      ?ellipsis
      ?mark
      ?underline
      ?onChange
      ?strong
      ?_type>
      children
    </External>;
};

module Title = {
  module External = {
    [@bs.scope "Typography"]
    [@bs.module "@ehrocks/eh-ant-design/lib"]
    [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: 'a=?,
        ~delete: bool=?,
        ~disabled: bool=?,
        ~editable: 'b=?,
        ~ellipsis: bool=?,
        ~level: int =?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: string => unit=?,
        ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
        ~children: React.element
      ) =>
      React.element =
      "Title";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~delete=?,
        ~disabled=?,
        ~editable=?,
        ~ellipsis=?,
        ~level=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.tToJs)}
      ?delete
      ?disabled
      editable=?{Belt.Option.map(editable, EditableProp.tToJs)}
      ?ellipsis
      ?level
      ?mark
      ?underline
      ?onChange
      ?_type>
      children
    </External>;
};

module Paragraph = {
  module External = {
    [@bs.scope "Typography"]
    [@bs.module "@ehrocks/eh-ant-design/lib"]
    [@react.component]
    external make:
      (
        ~code: bool=?,
        ~copyable: 'a=?,
        ~delete: bool=?,
        ~editable: 'b=?,
        ~ellipsis: bool=?,
        ~mark: bool=?,
        ~underline: bool=?,
        ~onChange: string => unit=?,
        ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
        ~children: React.element
      ) =>
      React.element =
      "Paragraph";
  };

  [@react.component]
  let make =
      (
        ~code=?,
        ~copyable=?,
        ~delete=?,
        ~editable=?,
        ~ellipsis=?,
        ~mark=?,
        ~underline=?,
        ~onChange=?,
        ~_type=?,
        ~children,
      ) =>
    <External
      ?code
      copyable=?{Belt.Option.map(copyable, CopyableProp.tToJs)}
      ?delete
      editable=?{Belt.Option.map(editable, EditableProp.tToJs)}
      ?ellipsis
      ?mark
      ?underline
      ?onChange
      ?_type>
      children
    </External>;
};
