#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001809C0
// Address: 0x1809c0 - 0x180ee0
void sub_001809C0_0x1809c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001809C0_0x1809c0");
#endif

    switch (ctx->pc) {
        case 0x1809c0u: goto label_1809c0;
        case 0x1809c4u: goto label_1809c4;
        case 0x1809c8u: goto label_1809c8;
        case 0x1809ccu: goto label_1809cc;
        case 0x1809d0u: goto label_1809d0;
        case 0x1809d4u: goto label_1809d4;
        case 0x1809d8u: goto label_1809d8;
        case 0x1809dcu: goto label_1809dc;
        case 0x1809e0u: goto label_1809e0;
        case 0x1809e4u: goto label_1809e4;
        case 0x1809e8u: goto label_1809e8;
        case 0x1809ecu: goto label_1809ec;
        case 0x1809f0u: goto label_1809f0;
        case 0x1809f4u: goto label_1809f4;
        case 0x1809f8u: goto label_1809f8;
        case 0x1809fcu: goto label_1809fc;
        case 0x180a00u: goto label_180a00;
        case 0x180a04u: goto label_180a04;
        case 0x180a08u: goto label_180a08;
        case 0x180a0cu: goto label_180a0c;
        case 0x180a10u: goto label_180a10;
        case 0x180a14u: goto label_180a14;
        case 0x180a18u: goto label_180a18;
        case 0x180a1cu: goto label_180a1c;
        case 0x180a20u: goto label_180a20;
        case 0x180a24u: goto label_180a24;
        case 0x180a28u: goto label_180a28;
        case 0x180a2cu: goto label_180a2c;
        case 0x180a30u: goto label_180a30;
        case 0x180a34u: goto label_180a34;
        case 0x180a38u: goto label_180a38;
        case 0x180a3cu: goto label_180a3c;
        case 0x180a40u: goto label_180a40;
        case 0x180a44u: goto label_180a44;
        case 0x180a48u: goto label_180a48;
        case 0x180a4cu: goto label_180a4c;
        case 0x180a50u: goto label_180a50;
        case 0x180a54u: goto label_180a54;
        case 0x180a58u: goto label_180a58;
        case 0x180a5cu: goto label_180a5c;
        case 0x180a60u: goto label_180a60;
        case 0x180a64u: goto label_180a64;
        case 0x180a68u: goto label_180a68;
        case 0x180a6cu: goto label_180a6c;
        case 0x180a70u: goto label_180a70;
        case 0x180a74u: goto label_180a74;
        case 0x180a78u: goto label_180a78;
        case 0x180a7cu: goto label_180a7c;
        case 0x180a80u: goto label_180a80;
        case 0x180a84u: goto label_180a84;
        case 0x180a88u: goto label_180a88;
        case 0x180a8cu: goto label_180a8c;
        case 0x180a90u: goto label_180a90;
        case 0x180a94u: goto label_180a94;
        case 0x180a98u: goto label_180a98;
        case 0x180a9cu: goto label_180a9c;
        case 0x180aa0u: goto label_180aa0;
        case 0x180aa4u: goto label_180aa4;
        case 0x180aa8u: goto label_180aa8;
        case 0x180aacu: goto label_180aac;
        case 0x180ab0u: goto label_180ab0;
        case 0x180ab4u: goto label_180ab4;
        case 0x180ab8u: goto label_180ab8;
        case 0x180abcu: goto label_180abc;
        case 0x180ac0u: goto label_180ac0;
        case 0x180ac4u: goto label_180ac4;
        case 0x180ac8u: goto label_180ac8;
        case 0x180accu: goto label_180acc;
        case 0x180ad0u: goto label_180ad0;
        case 0x180ad4u: goto label_180ad4;
        case 0x180ad8u: goto label_180ad8;
        case 0x180adcu: goto label_180adc;
        case 0x180ae0u: goto label_180ae0;
        case 0x180ae4u: goto label_180ae4;
        case 0x180ae8u: goto label_180ae8;
        case 0x180aecu: goto label_180aec;
        case 0x180af0u: goto label_180af0;
        case 0x180af4u: goto label_180af4;
        case 0x180af8u: goto label_180af8;
        case 0x180afcu: goto label_180afc;
        case 0x180b00u: goto label_180b00;
        case 0x180b04u: goto label_180b04;
        case 0x180b08u: goto label_180b08;
        case 0x180b0cu: goto label_180b0c;
        case 0x180b10u: goto label_180b10;
        case 0x180b14u: goto label_180b14;
        case 0x180b18u: goto label_180b18;
        case 0x180b1cu: goto label_180b1c;
        case 0x180b20u: goto label_180b20;
        case 0x180b24u: goto label_180b24;
        case 0x180b28u: goto label_180b28;
        case 0x180b2cu: goto label_180b2c;
        case 0x180b30u: goto label_180b30;
        case 0x180b34u: goto label_180b34;
        case 0x180b38u: goto label_180b38;
        case 0x180b3cu: goto label_180b3c;
        case 0x180b40u: goto label_180b40;
        case 0x180b44u: goto label_180b44;
        case 0x180b48u: goto label_180b48;
        case 0x180b4cu: goto label_180b4c;
        case 0x180b50u: goto label_180b50;
        case 0x180b54u: goto label_180b54;
        case 0x180b58u: goto label_180b58;
        case 0x180b5cu: goto label_180b5c;
        case 0x180b60u: goto label_180b60;
        case 0x180b64u: goto label_180b64;
        case 0x180b68u: goto label_180b68;
        case 0x180b6cu: goto label_180b6c;
        case 0x180b70u: goto label_180b70;
        case 0x180b74u: goto label_180b74;
        case 0x180b78u: goto label_180b78;
        case 0x180b7cu: goto label_180b7c;
        case 0x180b80u: goto label_180b80;
        case 0x180b84u: goto label_180b84;
        case 0x180b88u: goto label_180b88;
        case 0x180b8cu: goto label_180b8c;
        case 0x180b90u: goto label_180b90;
        case 0x180b94u: goto label_180b94;
        case 0x180b98u: goto label_180b98;
        case 0x180b9cu: goto label_180b9c;
        case 0x180ba0u: goto label_180ba0;
        case 0x180ba4u: goto label_180ba4;
        case 0x180ba8u: goto label_180ba8;
        case 0x180bacu: goto label_180bac;
        case 0x180bb0u: goto label_180bb0;
        case 0x180bb4u: goto label_180bb4;
        case 0x180bb8u: goto label_180bb8;
        case 0x180bbcu: goto label_180bbc;
        case 0x180bc0u: goto label_180bc0;
        case 0x180bc4u: goto label_180bc4;
        case 0x180bc8u: goto label_180bc8;
        case 0x180bccu: goto label_180bcc;
        case 0x180bd0u: goto label_180bd0;
        case 0x180bd4u: goto label_180bd4;
        case 0x180bd8u: goto label_180bd8;
        case 0x180bdcu: goto label_180bdc;
        case 0x180be0u: goto label_180be0;
        case 0x180be4u: goto label_180be4;
        case 0x180be8u: goto label_180be8;
        case 0x180becu: goto label_180bec;
        case 0x180bf0u: goto label_180bf0;
        case 0x180bf4u: goto label_180bf4;
        case 0x180bf8u: goto label_180bf8;
        case 0x180bfcu: goto label_180bfc;
        case 0x180c00u: goto label_180c00;
        case 0x180c04u: goto label_180c04;
        case 0x180c08u: goto label_180c08;
        case 0x180c0cu: goto label_180c0c;
        case 0x180c10u: goto label_180c10;
        case 0x180c14u: goto label_180c14;
        case 0x180c18u: goto label_180c18;
        case 0x180c1cu: goto label_180c1c;
        case 0x180c20u: goto label_180c20;
        case 0x180c24u: goto label_180c24;
        case 0x180c28u: goto label_180c28;
        case 0x180c2cu: goto label_180c2c;
        case 0x180c30u: goto label_180c30;
        case 0x180c34u: goto label_180c34;
        case 0x180c38u: goto label_180c38;
        case 0x180c3cu: goto label_180c3c;
        case 0x180c40u: goto label_180c40;
        case 0x180c44u: goto label_180c44;
        case 0x180c48u: goto label_180c48;
        case 0x180c4cu: goto label_180c4c;
        case 0x180c50u: goto label_180c50;
        case 0x180c54u: goto label_180c54;
        case 0x180c58u: goto label_180c58;
        case 0x180c5cu: goto label_180c5c;
        case 0x180c60u: goto label_180c60;
        case 0x180c64u: goto label_180c64;
        case 0x180c68u: goto label_180c68;
        case 0x180c6cu: goto label_180c6c;
        case 0x180c70u: goto label_180c70;
        case 0x180c74u: goto label_180c74;
        case 0x180c78u: goto label_180c78;
        case 0x180c7cu: goto label_180c7c;
        case 0x180c80u: goto label_180c80;
        case 0x180c84u: goto label_180c84;
        case 0x180c88u: goto label_180c88;
        case 0x180c8cu: goto label_180c8c;
        case 0x180c90u: goto label_180c90;
        case 0x180c94u: goto label_180c94;
        case 0x180c98u: goto label_180c98;
        case 0x180c9cu: goto label_180c9c;
        case 0x180ca0u: goto label_180ca0;
        case 0x180ca4u: goto label_180ca4;
        case 0x180ca8u: goto label_180ca8;
        case 0x180cacu: goto label_180cac;
        case 0x180cb0u: goto label_180cb0;
        case 0x180cb4u: goto label_180cb4;
        case 0x180cb8u: goto label_180cb8;
        case 0x180cbcu: goto label_180cbc;
        case 0x180cc0u: goto label_180cc0;
        case 0x180cc4u: goto label_180cc4;
        case 0x180cc8u: goto label_180cc8;
        case 0x180cccu: goto label_180ccc;
        case 0x180cd0u: goto label_180cd0;
        case 0x180cd4u: goto label_180cd4;
        case 0x180cd8u: goto label_180cd8;
        case 0x180cdcu: goto label_180cdc;
        case 0x180ce0u: goto label_180ce0;
        case 0x180ce4u: goto label_180ce4;
        case 0x180ce8u: goto label_180ce8;
        case 0x180cecu: goto label_180cec;
        case 0x180cf0u: goto label_180cf0;
        case 0x180cf4u: goto label_180cf4;
        case 0x180cf8u: goto label_180cf8;
        case 0x180cfcu: goto label_180cfc;
        case 0x180d00u: goto label_180d00;
        case 0x180d04u: goto label_180d04;
        case 0x180d08u: goto label_180d08;
        case 0x180d0cu: goto label_180d0c;
        case 0x180d10u: goto label_180d10;
        case 0x180d14u: goto label_180d14;
        case 0x180d18u: goto label_180d18;
        case 0x180d1cu: goto label_180d1c;
        case 0x180d20u: goto label_180d20;
        case 0x180d24u: goto label_180d24;
        case 0x180d28u: goto label_180d28;
        case 0x180d2cu: goto label_180d2c;
        case 0x180d30u: goto label_180d30;
        case 0x180d34u: goto label_180d34;
        case 0x180d38u: goto label_180d38;
        case 0x180d3cu: goto label_180d3c;
        case 0x180d40u: goto label_180d40;
        case 0x180d44u: goto label_180d44;
        case 0x180d48u: goto label_180d48;
        case 0x180d4cu: goto label_180d4c;
        case 0x180d50u: goto label_180d50;
        case 0x180d54u: goto label_180d54;
        case 0x180d58u: goto label_180d58;
        case 0x180d5cu: goto label_180d5c;
        case 0x180d60u: goto label_180d60;
        case 0x180d64u: goto label_180d64;
        case 0x180d68u: goto label_180d68;
        case 0x180d6cu: goto label_180d6c;
        case 0x180d70u: goto label_180d70;
        case 0x180d74u: goto label_180d74;
        case 0x180d78u: goto label_180d78;
        case 0x180d7cu: goto label_180d7c;
        case 0x180d80u: goto label_180d80;
        case 0x180d84u: goto label_180d84;
        case 0x180d88u: goto label_180d88;
        case 0x180d8cu: goto label_180d8c;
        case 0x180d90u: goto label_180d90;
        case 0x180d94u: goto label_180d94;
        case 0x180d98u: goto label_180d98;
        case 0x180d9cu: goto label_180d9c;
        case 0x180da0u: goto label_180da0;
        case 0x180da4u: goto label_180da4;
        case 0x180da8u: goto label_180da8;
        case 0x180dacu: goto label_180dac;
        case 0x180db0u: goto label_180db0;
        case 0x180db4u: goto label_180db4;
        case 0x180db8u: goto label_180db8;
        case 0x180dbcu: goto label_180dbc;
        case 0x180dc0u: goto label_180dc0;
        case 0x180dc4u: goto label_180dc4;
        case 0x180dc8u: goto label_180dc8;
        case 0x180dccu: goto label_180dcc;
        case 0x180dd0u: goto label_180dd0;
        case 0x180dd4u: goto label_180dd4;
        case 0x180dd8u: goto label_180dd8;
        case 0x180ddcu: goto label_180ddc;
        case 0x180de0u: goto label_180de0;
        case 0x180de4u: goto label_180de4;
        case 0x180de8u: goto label_180de8;
        case 0x180decu: goto label_180dec;
        case 0x180df0u: goto label_180df0;
        case 0x180df4u: goto label_180df4;
        case 0x180df8u: goto label_180df8;
        case 0x180dfcu: goto label_180dfc;
        case 0x180e00u: goto label_180e00;
        case 0x180e04u: goto label_180e04;
        case 0x180e08u: goto label_180e08;
        case 0x180e0cu: goto label_180e0c;
        case 0x180e10u: goto label_180e10;
        case 0x180e14u: goto label_180e14;
        case 0x180e18u: goto label_180e18;
        case 0x180e1cu: goto label_180e1c;
        case 0x180e20u: goto label_180e20;
        case 0x180e24u: goto label_180e24;
        case 0x180e28u: goto label_180e28;
        case 0x180e2cu: goto label_180e2c;
        case 0x180e30u: goto label_180e30;
        case 0x180e34u: goto label_180e34;
        case 0x180e38u: goto label_180e38;
        case 0x180e3cu: goto label_180e3c;
        case 0x180e40u: goto label_180e40;
        case 0x180e44u: goto label_180e44;
        case 0x180e48u: goto label_180e48;
        case 0x180e4cu: goto label_180e4c;
        case 0x180e50u: goto label_180e50;
        case 0x180e54u: goto label_180e54;
        case 0x180e58u: goto label_180e58;
        case 0x180e5cu: goto label_180e5c;
        case 0x180e60u: goto label_180e60;
        case 0x180e64u: goto label_180e64;
        case 0x180e68u: goto label_180e68;
        case 0x180e6cu: goto label_180e6c;
        case 0x180e70u: goto label_180e70;
        case 0x180e74u: goto label_180e74;
        case 0x180e78u: goto label_180e78;
        case 0x180e7cu: goto label_180e7c;
        case 0x180e80u: goto label_180e80;
        case 0x180e84u: goto label_180e84;
        case 0x180e88u: goto label_180e88;
        case 0x180e8cu: goto label_180e8c;
        case 0x180e90u: goto label_180e90;
        case 0x180e94u: goto label_180e94;
        case 0x180e98u: goto label_180e98;
        case 0x180e9cu: goto label_180e9c;
        case 0x180ea0u: goto label_180ea0;
        case 0x180ea4u: goto label_180ea4;
        case 0x180ea8u: goto label_180ea8;
        case 0x180eacu: goto label_180eac;
        case 0x180eb0u: goto label_180eb0;
        case 0x180eb4u: goto label_180eb4;
        case 0x180eb8u: goto label_180eb8;
        case 0x180ebcu: goto label_180ebc;
        case 0x180ec0u: goto label_180ec0;
        case 0x180ec4u: goto label_180ec4;
        case 0x180ec8u: goto label_180ec8;
        case 0x180eccu: goto label_180ecc;
        case 0x180ed0u: goto label_180ed0;
        case 0x180ed4u: goto label_180ed4;
        case 0x180ed8u: goto label_180ed8;
        case 0x180edcu: goto label_180edc;
        default: break;
    }

    ctx->pc = 0x1809c0u;

label_1809c0:
    // 0x1809c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1809c4:
    // 0x1809c4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1809c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1809c8:
    // 0x1809c8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1809c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1809cc:
    // 0x1809cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1809ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1809d0:
    // 0x1809d0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1809d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1809d4:
    // 0x1809d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1809d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1809d8:
    // 0x1809d8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1809d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1809dc:
    // 0x1809dc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1809e0:
    // 0x1809e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1809e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1809e4:
    // 0x1809e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1809e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1809e8:
    // 0x1809e8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1809e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1809ec:
    // 0x1809ec: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1809ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1809f0:
    // 0x1809f0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1809f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1809f4:
    // 0x1809f4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1809f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1809f8:
    // 0x1809f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1809f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1809fc:
    // 0x1809fc: 0xc061664  jal         func_185990
label_180a00:
    if (ctx->pc == 0x180A00u) {
        ctx->pc = 0x180A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809FCu;
        // 0x180a00: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A04u;
        goto label_180a04;
    }
    ctx->pc = 0x1809FCu;
    SET_GPR_U32(ctx, 31, 0x180A04u);
    ctx->pc = 0x180A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809FCu;
    // 0x180a00: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x1809FCu, 0x180A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A04u;
label_180a04:
    // 0x180a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_180a08:
    if (ctx->pc == 0x180A08u) {
        ctx->pc = 0x180A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A04u;
        // 0x180a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A0Cu;
        goto label_180a0c;
    }
    ctx->pc = 0x180A04u;
    {
        const bool branch_taken_0x180a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A04u;
        // 0x180a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a04) {
            ctx->pc = 0x180A20u;
            goto label_180a20;
        }
    }
    ctx->pc = 0x180A0Cu;
label_180a0c:
    // 0x180a0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_180a10:
    // 0x180a10: 0xc06022e  jal         func_1808B8
label_180a14:
    if (ctx->pc == 0x180A14u) {
        ctx->pc = 0x180A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A10u;
        // 0x180a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A18u;
        goto label_180a18;
    }
    ctx->pc = 0x180A10u;
    SET_GPR_U32(ctx, 31, 0x180A18u);
    ctx->pc = 0x180A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A10u;
    // 0x180a14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1808B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1808B8u, 0x180A10u, 0x180A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A18u;
label_180a18:
    // 0x180a18: 0x10000121  b           . + 4 + (0x121 << 2)
label_180a1c:
    if (ctx->pc == 0x180A1Cu) {
        ctx->pc = 0x180A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A18u;
        // 0x180a1c: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A20u;
        goto label_180a20;
    }
    ctx->pc = 0x180A18u;
    {
        const bool branch_taken_0x180a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A18u;
        // 0x180a1c: 0x2a80a  movz        $s5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a18) {
            ctx->pc = 0x180EA0u;
            goto label_180ea0;
        }
    }
    ctx->pc = 0x180A20u;
label_180a20:
    // 0x180a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x180a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_180a24:
    // 0x180a24: 0xc06022e  jal         func_1808B8
label_180a28:
    if (ctx->pc == 0x180A28u) {
        ctx->pc = 0x180A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A24u;
        // 0x180a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A2Cu;
        goto label_180a2c;
    }
    ctx->pc = 0x180A24u;
    SET_GPR_U32(ctx, 31, 0x180A2Cu);
    ctx->pc = 0x180A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A24u;
    // 0x180a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1808B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1808B8u, 0x180A24u, 0x180A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A2Cu;
label_180a2c:
    // 0x180a2c: 0x1440011d  bnez        $v0, . + 4 + (0x11D << 2)
label_180a30:
    if (ctx->pc == 0x180A30u) {
        ctx->pc = 0x180A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A2Cu;
        // 0x180a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A34u;
        goto label_180a34;
    }
    ctx->pc = 0x180A2Cu;
    {
        const bool branch_taken_0x180a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A2Cu;
        // 0x180a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a2c) {
            ctx->pc = 0x180EA4u;
            goto label_180ea4;
        }
    }
    ctx->pc = 0x180A34u;
label_180a34:
    // 0x180a34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x180a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_180a38:
    // 0x180a38: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_180a3c:
    // 0x180a3c: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_180a40:
    // 0x180a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180a44:
    // 0x180a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180a48:
    // 0x180a48: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_180a4c:
    // 0x180a4c: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x180a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
label_180a50:
    // 0x180a50: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x180a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_180a54:
    // 0x180a54: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x180a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_180a58:
    // 0x180a58: 0xc061e6e  jal         func_1879B8
label_180a5c:
    if (ctx->pc == 0x180A5Cu) {
        ctx->pc = 0x180A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A58u;
        // 0x180a5c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A60u;
        goto label_180a60;
    }
    ctx->pc = 0x180A58u;
    SET_GPR_U32(ctx, 31, 0x180A60u);
    ctx->pc = 0x180A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A58u;
    // 0x180a5c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x180A58u, 0x180A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A60u;
label_180a60:
    // 0x180a60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x180a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180a64:
    // 0x180a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180a68:
    // 0x180a68: 0x60f809  jalr        $v1
label_180a6c:
    if (ctx->pc == 0x180A6Cu) {
        ctx->pc = 0x180A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A68u;
        // 0x180a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A70u;
        goto label_180a70;
    }
    ctx->pc = 0x180A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180A70u);
        ctx->pc = 0x180A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A68u;
        // 0x180a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A68u, 0x180A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180A70u;
label_180a70:
    // 0x180a70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_180a74:
    // 0x180a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_180a78:
    // 0x180a78: 0xc137c70  jal         func_4DF1C0
label_180a7c:
    if (ctx->pc == 0x180A7Cu) {
        ctx->pc = 0x180A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A78u;
        // 0x180a7c: 0x26860008  addiu       $a2, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A80u;
        goto label_180a80;
    }
    ctx->pc = 0x180A78u;
    SET_GPR_U32(ctx, 31, 0x180A80u);
    ctx->pc = 0x180A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A78u;
    // 0x180a7c: 0x26860008  addiu       $a2, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x180A78u, 0x180A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A80u;
label_180a80:
    // 0x180a80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_180a84:
    // 0x180a84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_180a88:
    // 0x180a88: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_180a8c:
    if (ctx->pc == 0x180A8Cu) {
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A88u;
        // 0x180a8c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A90u;
        goto label_180a90;
    }
    ctx->pc = 0x180A88u;
    {
        const bool branch_taken_0x180a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A88u;
        // 0x180a8c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a88) {
            ctx->pc = 0x180B4Cu;
            goto label_180b4c;
        }
    }
    ctx->pc = 0x180A90u;
label_180a90:
    // 0x180a90: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x180a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_180a94:
    // 0x180a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180a98:
    // 0x180a98: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_180a9c:
    // 0x180a9c: 0xc061e58  jal         func_187960
label_180aa0:
    if (ctx->pc == 0x180AA0u) {
        ctx->pc = 0x180AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A9Cu;
        // 0x180aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AA4u;
        goto label_180aa4;
    }
    ctx->pc = 0x180A9Cu;
    SET_GPR_U32(ctx, 31, 0x180AA4u);
    ctx->pc = 0x180AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A9Cu;
    // 0x180aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x180A9Cu, 0x180AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AA4u;
label_180aa4:
    // 0x180aa4: 0xc061234  jal         func_1848D0
label_180aa8:
    if (ctx->pc == 0x180AA8u) {
        ctx->pc = 0x180AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AA4u;
        // 0x180aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AACu;
        goto label_180aac;
    }
    ctx->pc = 0x180AA4u;
    SET_GPR_U32(ctx, 31, 0x180AACu);
    ctx->pc = 0x180AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AA4u;
    // 0x180aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x180AA4u, 0x180AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AACu;
label_180aac:
    // 0x180aac: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_180ab0:
    if (ctx->pc == 0x180AB0u) {
        ctx->pc = 0x180AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AACu;
        // 0x180ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AB4u;
        goto label_180ab4;
    }
    ctx->pc = 0x180AACu;
    {
        const bool branch_taken_0x180aac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AACu;
        // 0x180ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180aac) {
            ctx->pc = 0x180ACCu;
            goto label_180acc;
        }
    }
    ctx->pc = 0x180AB4u;
label_180ab4:
    // 0x180ab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180ab8:
    // 0x180ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180abc:
    // 0x180abc: 0xc061f4a  jal         func_187D28
label_180ac0:
    if (ctx->pc == 0x180AC0u) {
        ctx->pc = 0x180AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ABCu;
        // 0x180ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AC4u;
        goto label_180ac4;
    }
    ctx->pc = 0x180ABCu;
    SET_GPR_U32(ctx, 31, 0x180AC4u);
    ctx->pc = 0x180AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180ABCu;
    // 0x180ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x180ABCu, 0x180AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AC4u;
label_180ac4:
    // 0x180ac4: 0x1000000a  b           . + 4 + (0xA << 2)
label_180ac8:
    if (ctx->pc == 0x180AC8u) {
        ctx->pc = 0x180AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AC4u;
        // 0x180ac8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180ACCu;
        goto label_180acc;
    }
    ctx->pc = 0x180AC4u;
    {
        const bool branch_taken_0x180ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AC4u;
        // 0x180ac8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ac4) {
            ctx->pc = 0x180AF0u;
            goto label_180af0;
        }
    }
    ctx->pc = 0x180ACCu;
label_180acc:
    // 0x180acc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180ad0:
    // 0x180ad0: 0xc061e6e  jal         func_1879B8
label_180ad4:
    if (ctx->pc == 0x180AD4u) {
        ctx->pc = 0x180AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AD0u;
        // 0x180ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AD8u;
        goto label_180ad8;
    }
    ctx->pc = 0x180AD0u;
    SET_GPR_U32(ctx, 31, 0x180AD8u);
    ctx->pc = 0x180AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AD0u;
    // 0x180ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x180AD0u, 0x180AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AD8u;
label_180ad8:
    // 0x180ad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_180adc:
    // 0x180adc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_180ae0:
    // 0x180ae0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x180ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_180ae4:
    // 0x180ae4: 0xa0f809  jalr        $a1
label_180ae8:
    if (ctx->pc == 0x180AE8u) {
        ctx->pc = 0x180AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AE4u;
        // 0x180ae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AECu;
        goto label_180aec;
    }
    ctx->pc = 0x180AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x180AECu);
        ctx->pc = 0x180AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AE4u;
        // 0x180ae8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180AE4u, 0x180AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180AECu;
label_180aec:
    // 0x180aec: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x180aecu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180af0:
    // 0x180af0: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_180af4:
    if (ctx->pc == 0x180AF4u) {
        ctx->pc = 0x180AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AF0u;
        // 0x180af4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180AF8u;
        goto label_180af8;
    }
    ctx->pc = 0x180AF0u;
    {
        const bool branch_taken_0x180af0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AF0u;
        // 0x180af4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180af0) {
            ctx->pc = 0x180B5Cu;
            goto label_180b5c;
        }
    }
    ctx->pc = 0x180AF8u;
label_180af8:
    // 0x180af8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_180afc:
    // 0x180afc: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x180afcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_180b00:
    // 0x180b00: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_180b04:
    // 0x180b04: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x180b04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_180b08:
    // 0x180b08: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
label_180b0c:
    // 0x180b0c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_180b10:
    // 0x180b10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180b14:
    // 0x180b14: 0x250824e8  addiu       $t0, $t0, 0x24E8
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9448));
label_180b18:
    // 0x180b18: 0x254a2510  addiu       $t2, $t2, 0x2510
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9488));
label_180b1c:
    // 0x180b1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180b20:
    // 0x180b20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x180b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_180b24:
    // 0x180b24: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180b28:
    // 0x180b28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x180b28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180b2c:
    // 0x180b2c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_180b30:
    // 0x180b30: 0x40f809  jalr        $v0
label_180b34:
    if (ctx->pc == 0x180B34u) {
        ctx->pc = 0x180B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B30u;
        // 0x180b34: 0x24090487  addiu       $t1, $zero, 0x487 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B38u;
        goto label_180b38;
    }
    ctx->pc = 0x180B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180B38u);
        ctx->pc = 0x180B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B30u;
        // 0x180b34: 0x24090487  addiu       $t1, $zero, 0x487 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B30u, 0x180B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180B38u;
label_180b38:
    // 0x180b38: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_180b3c:
    // 0x180b3c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_180b40:
    // 0x180b40: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x180b40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180b44:
    // 0x180b44: 0x10000005  b           . + 4 + (0x5 << 2)
label_180b48:
    if (ctx->pc == 0x180B48u) {
        ctx->pc = 0x180B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B44u;
        // 0x180b48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B4Cu;
        goto label_180b4c;
    }
    ctx->pc = 0x180B44u;
    {
        const bool branch_taken_0x180b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B44u;
        // 0x180b48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b44) {
            ctx->pc = 0x180B5Cu;
            goto label_180b5c;
        }
    }
    ctx->pc = 0x180B4Cu;
label_180b4c:
    // 0x180b4c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x180b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180b50:
    // 0x180b50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x180b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180b54:
    // 0x180b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180b58:
    // 0x180b58: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x180b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_180b5c:
    // 0x180b5c: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_180b60:
    // 0x180b60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x180b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_180b64:
    // 0x180b64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180b68:
    // 0x180b68: 0xc137a34  jal         func_4DE8D0
label_180b6c:
    if (ctx->pc == 0x180B6Cu) {
        ctx->pc = 0x180B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B68u;
        // 0x180b6c: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B70u;
        goto label_180b70;
    }
    ctx->pc = 0x180B68u;
    SET_GPR_U32(ctx, 31, 0x180B70u);
    ctx->pc = 0x180B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B68u;
    // 0x180b6c: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x180B68u, 0x180B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B70u;
label_180b70:
    // 0x180b70: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x180b70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180b74:
    // 0x180b74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180b78:
    // 0x180b78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_180b7c:
    // 0x180b7c: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_180b80:
    if (ctx->pc == 0x180B80u) {
        ctx->pc = 0x180B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B7Cu;
        // 0x180b80: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B84u;
        goto label_180b84;
    }
    ctx->pc = 0x180B7Cu;
    {
        const bool branch_taken_0x180b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B7Cu;
        // 0x180b80: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b7c) {
            ctx->pc = 0x180C44u;
            goto label_180c44;
        }
    }
    ctx->pc = 0x180B84u;
label_180b84:
    // 0x180b84: 0x12a00033  beqz        $s5, . + 4 + (0x33 << 2)
label_180b88:
    if (ctx->pc == 0x180B88u) {
        ctx->pc = 0x180B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B84u;
        // 0x180b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B8Cu;
        goto label_180b8c;
    }
    ctx->pc = 0x180B84u;
    {
        const bool branch_taken_0x180b84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B84u;
        // 0x180b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b84) {
            ctx->pc = 0x180C54u;
            goto label_180c54;
        }
    }
    ctx->pc = 0x180B8Cu;
label_180b8c:
    // 0x180b8c: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x180b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_180b90:
    // 0x180b90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_180b94:
    // 0x180b94: 0xc061e58  jal         func_187960
label_180b98:
    if (ctx->pc == 0x180B98u) {
        ctx->pc = 0x180B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B94u;
        // 0x180b98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B9Cu;
        goto label_180b9c;
    }
    ctx->pc = 0x180B94u;
    SET_GPR_U32(ctx, 31, 0x180B9Cu);
    ctx->pc = 0x180B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B94u;
    // 0x180b98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x180B94u, 0x180B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B9Cu;
label_180b9c:
    // 0x180b9c: 0xc061234  jal         func_1848D0
label_180ba0:
    if (ctx->pc == 0x180BA0u) {
        ctx->pc = 0x180BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B9Cu;
        // 0x180ba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BA4u;
        goto label_180ba4;
    }
    ctx->pc = 0x180B9Cu;
    SET_GPR_U32(ctx, 31, 0x180BA4u);
    ctx->pc = 0x180BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B9Cu;
    // 0x180ba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x180B9Cu, 0x180BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180BA4u;
label_180ba4:
    // 0x180ba4: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_180ba8:
    if (ctx->pc == 0x180BA8u) {
        ctx->pc = 0x180BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BA4u;
        // 0x180ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BACu;
        goto label_180bac;
    }
    ctx->pc = 0x180BA4u;
    {
        const bool branch_taken_0x180ba4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BA4u;
        // 0x180ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ba4) {
            ctx->pc = 0x180BC4u;
            goto label_180bc4;
        }
    }
    ctx->pc = 0x180BACu;
label_180bac:
    // 0x180bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180bb0:
    // 0x180bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180bb4:
    // 0x180bb4: 0xc061f4a  jal         func_187D28
label_180bb8:
    if (ctx->pc == 0x180BB8u) {
        ctx->pc = 0x180BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BB4u;
        // 0x180bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BBCu;
        goto label_180bbc;
    }
    ctx->pc = 0x180BB4u;
    SET_GPR_U32(ctx, 31, 0x180BBCu);
    ctx->pc = 0x180BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180BB4u;
    // 0x180bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x180BB4u, 0x180BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180BBCu;
label_180bbc:
    // 0x180bbc: 0x1000000a  b           . + 4 + (0xA << 2)
label_180bc0:
    if (ctx->pc == 0x180BC0u) {
        ctx->pc = 0x180BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BBCu;
        // 0x180bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BC4u;
        goto label_180bc4;
    }
    ctx->pc = 0x180BBCu;
    {
        const bool branch_taken_0x180bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BBCu;
        // 0x180bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bbc) {
            ctx->pc = 0x180BE8u;
            goto label_180be8;
        }
    }
    ctx->pc = 0x180BC4u;
label_180bc4:
    // 0x180bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180bc8:
    // 0x180bc8: 0xc061e6e  jal         func_1879B8
label_180bcc:
    if (ctx->pc == 0x180BCCu) {
        ctx->pc = 0x180BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BC8u;
        // 0x180bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BD0u;
        goto label_180bd0;
    }
    ctx->pc = 0x180BC8u;
    SET_GPR_U32(ctx, 31, 0x180BD0u);
    ctx->pc = 0x180BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180BC8u;
    // 0x180bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x180BC8u, 0x180BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180BD0u;
label_180bd0:
    // 0x180bd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x180bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_180bd4:
    // 0x180bd4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_180bd8:
    // 0x180bd8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_180bdc:
    // 0x180bdc: 0xa0f809  jalr        $a1
label_180be0:
    if (ctx->pc == 0x180BE0u) {
        ctx->pc = 0x180BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BDCu;
        // 0x180be0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BE4u;
        goto label_180be4;
    }
    ctx->pc = 0x180BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x180BE4u);
        ctx->pc = 0x180BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BDCu;
        // 0x180be0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180BDCu, 0x180BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180BE4u;
label_180be4:
    // 0x180be4: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x180be4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180be8:
    // 0x180be8: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_180bec:
    if (ctx->pc == 0x180BECu) {
        ctx->pc = 0x180BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE8u;
        // 0x180bec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BF0u;
        goto label_180bf0;
    }
    ctx->pc = 0x180BE8u;
    {
        const bool branch_taken_0x180be8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE8u;
        // 0x180bec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180be8) {
            ctx->pc = 0x180C54u;
            goto label_180c54;
        }
    }
    ctx->pc = 0x180BF0u;
label_180bf0:
    // 0x180bf0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x180bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_180bf4:
    // 0x180bf4: 0x8c6927e4  lw          $t1, 0x27E4($v1)
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_180bf8:
    // 0x180bf8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x180bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_180bfc:
    // 0x180bfc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x180bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_180c00:
    // 0x180c00: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
label_180c04:
    // 0x180c04: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_180c08:
    // 0x180c08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180c0c:
    // 0x180c0c: 0x250824e8  addiu       $t0, $t0, 0x24E8
    ctx->pc = 0x180c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9448));
label_180c10:
    // 0x180c10: 0x254a2510  addiu       $t2, $t2, 0x2510
    ctx->pc = 0x180c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9488));
label_180c14:
    // 0x180c14: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180c18:
    // 0x180c18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x180c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_180c1c:
    // 0x180c1c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180c20:
    // 0x180c20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180c24:
    // 0x180c24: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_180c28:
    // 0x180c28: 0x40f809  jalr        $v0
label_180c2c:
    if (ctx->pc == 0x180C2Cu) {
        ctx->pc = 0x180C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C28u;
        // 0x180c2c: 0x24090497  addiu       $t1, $zero, 0x497 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C30u;
        goto label_180c30;
    }
    ctx->pc = 0x180C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180C30u);
        ctx->pc = 0x180C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C28u;
        // 0x180c2c: 0x24090497  addiu       $t1, $zero, 0x497 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C28u, 0x180C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180C30u;
label_180c30:
    // 0x180c30: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x180c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_180c34:
    // 0x180c34: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_180c38:
    // 0x180c38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_180c3c:
    // 0x180c3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_180c40:
    if (ctx->pc == 0x180C40u) {
        ctx->pc = 0x180C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C3Cu;
        // 0x180c40: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C44u;
        goto label_180c44;
    }
    ctx->pc = 0x180C3Cu;
    {
        const bool branch_taken_0x180c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C3Cu;
        // 0x180c40: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c3c) {
            ctx->pc = 0x180C54u;
            goto label_180c54;
        }
    }
    ctx->pc = 0x180C44u;
label_180c44:
    // 0x180c44: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x180c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180c48:
    // 0x180c48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180c4c:
    // 0x180c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180c50:
    // 0x180c50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x180c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_180c54:
    // 0x180c54: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x180c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_180c58:
    // 0x180c58: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x180c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_180c5c:
    // 0x180c5c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_180c60:
    if (ctx->pc == 0x180C60u) {
        ctx->pc = 0x180C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C5Cu;
        // 0x180c60: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C64u;
        goto label_180c64;
    }
    ctx->pc = 0x180C5Cu;
    {
        const bool branch_taken_0x180c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C5Cu;
        // 0x180c60: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c5c) {
            ctx->pc = 0x180D58u;
            goto label_180d58;
        }
    }
    ctx->pc = 0x180C64u;
label_180c64:
    // 0x180c64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_180c68:
    // 0x180c68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x180c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_180c6c:
    // 0x180c6c: 0xc137a34  jal         func_4DE8D0
label_180c70:
    if (ctx->pc == 0x180C70u) {
        ctx->pc = 0x180C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C6Cu;
        // 0x180c70: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C74u;
        goto label_180c74;
    }
    ctx->pc = 0x180C6Cu;
    SET_GPR_U32(ctx, 31, 0x180C74u);
    ctx->pc = 0x180C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C6Cu;
    // 0x180c70: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x180C6Cu, 0x180C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C74u;
label_180c74:
    // 0x180c74: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x180c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_180c78:
    // 0x180c78: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x180c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_180c7c:
    // 0x180c7c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x180c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_180c80:
    // 0x180c80: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_180c84:
    if (ctx->pc == 0x180C84u) {
        ctx->pc = 0x180C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C80u;
        // 0x180c84: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C88u;
        goto label_180c88;
    }
    ctx->pc = 0x180C80u;
    {
        const bool branch_taken_0x180c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C80u;
        // 0x180c84: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c80) {
            ctx->pc = 0x180D48u;
            goto label_180d48;
        }
    }
    ctx->pc = 0x180C88u;
label_180c88:
    // 0x180c88: 0x12a00033  beqz        $s5, . + 4 + (0x33 << 2)
label_180c8c:
    if (ctx->pc == 0x180C8Cu) {
        ctx->pc = 0x180C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C88u;
        // 0x180c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C90u;
        goto label_180c90;
    }
    ctx->pc = 0x180C88u;
    {
        const bool branch_taken_0x180c88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C88u;
        // 0x180c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c88) {
            ctx->pc = 0x180D58u;
            goto label_180d58;
        }
    }
    ctx->pc = 0x180C90u;
label_180c90:
    // 0x180c90: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_180c94:
    // 0x180c94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_180c98:
    // 0x180c98: 0xc061e58  jal         func_187960
label_180c9c:
    if (ctx->pc == 0x180C9Cu) {
        ctx->pc = 0x180C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C98u;
        // 0x180c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CA0u;
        goto label_180ca0;
    }
    ctx->pc = 0x180C98u;
    SET_GPR_U32(ctx, 31, 0x180CA0u);
    ctx->pc = 0x180C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C98u;
    // 0x180c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x180C98u, 0x180CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CA0u;
label_180ca0:
    // 0x180ca0: 0xc061234  jal         func_1848D0
label_180ca4:
    if (ctx->pc == 0x180CA4u) {
        ctx->pc = 0x180CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CA0u;
        // 0x180ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CA8u;
        goto label_180ca8;
    }
    ctx->pc = 0x180CA0u;
    SET_GPR_U32(ctx, 31, 0x180CA8u);
    ctx->pc = 0x180CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CA0u;
    // 0x180ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x180CA0u, 0x180CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CA8u;
label_180ca8:
    // 0x180ca8: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_180cac:
    if (ctx->pc == 0x180CACu) {
        ctx->pc = 0x180CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CA8u;
        // 0x180cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CB0u;
        goto label_180cb0;
    }
    ctx->pc = 0x180CA8u;
    {
        const bool branch_taken_0x180ca8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CA8u;
        // 0x180cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ca8) {
            ctx->pc = 0x180CC8u;
            goto label_180cc8;
        }
    }
    ctx->pc = 0x180CB0u;
label_180cb0:
    // 0x180cb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180cb4:
    // 0x180cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180cb8:
    // 0x180cb8: 0xc061f4a  jal         func_187D28
label_180cbc:
    if (ctx->pc == 0x180CBCu) {
        ctx->pc = 0x180CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CB8u;
        // 0x180cbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CC0u;
        goto label_180cc0;
    }
    ctx->pc = 0x180CB8u;
    SET_GPR_U32(ctx, 31, 0x180CC0u);
    ctx->pc = 0x180CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CB8u;
    // 0x180cbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x180CB8u, 0x180CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CC0u;
label_180cc0:
    // 0x180cc0: 0x1000000a  b           . + 4 + (0xA << 2)
label_180cc4:
    if (ctx->pc == 0x180CC4u) {
        ctx->pc = 0x180CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC0u;
        // 0x180cc4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CC8u;
        goto label_180cc8;
    }
    ctx->pc = 0x180CC0u;
    {
        const bool branch_taken_0x180cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC0u;
        // 0x180cc4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cc0) {
            ctx->pc = 0x180CECu;
            goto label_180cec;
        }
    }
    ctx->pc = 0x180CC8u;
label_180cc8:
    // 0x180cc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180ccc:
    // 0x180ccc: 0xc061e6e  jal         func_1879B8
label_180cd0:
    if (ctx->pc == 0x180CD0u) {
        ctx->pc = 0x180CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CCCu;
        // 0x180cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CD4u;
        goto label_180cd4;
    }
    ctx->pc = 0x180CCCu;
    SET_GPR_U32(ctx, 31, 0x180CD4u);
    ctx->pc = 0x180CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CCCu;
    // 0x180cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x180CCCu, 0x180CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CD4u;
label_180cd4:
    // 0x180cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_180cd8:
    // 0x180cd8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_180cdc:
    // 0x180cdc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_180ce0:
    // 0x180ce0: 0xa0f809  jalr        $a1
label_180ce4:
    if (ctx->pc == 0x180CE4u) {
        ctx->pc = 0x180CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CE0u;
        // 0x180ce4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CE8u;
        goto label_180ce8;
    }
    ctx->pc = 0x180CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x180CE8u);
        ctx->pc = 0x180CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CE0u;
        // 0x180ce4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180CE0u, 0x180CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180CE8u;
label_180ce8:
    // 0x180ce8: 0x202a82b  sltu        $s5, $s0, $v0
    ctx->pc = 0x180ce8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180cec:
    // 0x180cec: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
label_180cf0:
    if (ctx->pc == 0x180CF0u) {
        ctx->pc = 0x180CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CECu;
        // 0x180cf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CF4u;
        goto label_180cf4;
    }
    ctx->pc = 0x180CECu;
    {
        const bool branch_taken_0x180cec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CECu;
        // 0x180cf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cec) {
            ctx->pc = 0x180D58u;
            goto label_180d58;
        }
    }
    ctx->pc = 0x180CF4u;
label_180cf4:
    // 0x180cf4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_180cf8:
    // 0x180cf8: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_180cfc:
    // 0x180cfc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_180d00:
    // 0x180d00: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x180d00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_180d04:
    // 0x180d04: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
label_180d08:
    // 0x180d08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x180d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_180d0c:
    // 0x180d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180d10:
    // 0x180d10: 0x250824e8  addiu       $t0, $t0, 0x24E8
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9448));
label_180d14:
    // 0x180d14: 0x254a2510  addiu       $t2, $t2, 0x2510
    ctx->pc = 0x180d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9488));
label_180d18:
    // 0x180d18: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x180d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_180d1c:
    // 0x180d1c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x180d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_180d20:
    // 0x180d20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180d24:
    // 0x180d24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x180d24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d28:
    // 0x180d28: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_180d2c:
    // 0x180d2c: 0x40f809  jalr        $v0
label_180d30:
    if (ctx->pc == 0x180D30u) {
        ctx->pc = 0x180D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D2Cu;
        // 0x180d30: 0x240904aa  addiu       $t1, $zero, 0x4AA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D34u;
        goto label_180d34;
    }
    ctx->pc = 0x180D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180D34u);
        ctx->pc = 0x180D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D2Cu;
        // 0x180d30: 0x240904aa  addiu       $t1, $zero, 0x4AA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180D2Cu, 0x180D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180D34u;
label_180d34:
    // 0x180d34: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_180d38:
    // 0x180d38: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_180d3c:
    // 0x180d3c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_180d40:
    // 0x180d40: 0x10000005  b           . + 4 + (0x5 << 2)
label_180d44:
    if (ctx->pc == 0x180D44u) {
        ctx->pc = 0x180D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D40u;
        // 0x180d44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D48u;
        goto label_180d48;
    }
    ctx->pc = 0x180D40u;
    {
        const bool branch_taken_0x180d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D40u;
        // 0x180d44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d40) {
            ctx->pc = 0x180D58u;
            goto label_180d58;
        }
    }
    ctx->pc = 0x180D48u;
label_180d48:
    // 0x180d48: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180d4c:
    // 0x180d4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x180d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180d50:
    // 0x180d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180d54:
    // 0x180d54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x180d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_180d58:
    // 0x180d58: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_180d5c:
    if (ctx->pc == 0x180D5Cu) {
        ctx->pc = 0x180D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D58u;
        // 0x180d5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D60u;
        goto label_180d60;
    }
    ctx->pc = 0x180D58u;
    {
        const bool branch_taken_0x180d58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D58u;
        // 0x180d5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d58) {
            ctx->pc = 0x180DA8u;
            goto label_180da8;
        }
    }
    ctx->pc = 0x180D60u;
label_180d60:
    // 0x180d60: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_180d64:
    // 0x180d64: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x180d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_180d68:
    // 0x180d68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_180d6c:
    // 0x180d6c: 0x0  nop
    ctx->pc = 0x180d6cu;
    // NOP
label_180d70:
    // 0x180d70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_180d74:
    // 0x180d74: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_180d78:
    // 0x180d78: 0x264624e8  addiu       $a2, $s2, 0x24E8
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 9448));
label_180d7c:
    // 0x180d7c: 0x240704b6  addiu       $a3, $zero, 0x4B6
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
label_180d80:
    // 0x180d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x180d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_180d84:
    // 0x180d84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_180d88:
    // 0x180d88: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_180d8c:
    // 0x180d8c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_180d90:
    // 0x180d90: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_180d94:
    // 0x180d94: 0x60f809  jalr        $v1
label_180d98:
    if (ctx->pc == 0x180D98u) {
        ctx->pc = 0x180D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D94u;
        // 0x180d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D9Cu;
        goto label_180d9c;
    }
    ctx->pc = 0x180D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180D9Cu);
        ctx->pc = 0x180D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D94u;
        // 0x180d98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180D94u, 0x180D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180D9Cu;
label_180d9c:
    // 0x180d9c: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x180d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_180da0:
    // 0x180da0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_180da4:
    if (ctx->pc == 0x180DA4u) {
        ctx->pc = 0x180DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DA0u;
        // 0x180da4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DA8u;
        goto label_180da8;
    }
    ctx->pc = 0x180DA0u;
    {
        const bool branch_taken_0x180da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DA0u;
        // 0x180da4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180da0) {
            ctx->pc = 0x180D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180d70;
        }
    }
    ctx->pc = 0x180DA8u;
label_180da8:
    // 0x180da8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_180dac:
    // 0x180dac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_180db0:
    // 0x180db0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_180db4:
    if (ctx->pc == 0x180DB4u) {
        ctx->pc = 0x180DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DB0u;
        // 0x180db4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DB8u;
        goto label_180db8;
    }
    ctx->pc = 0x180DB0u;
    {
        const bool branch_taken_0x180db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DB0u;
        // 0x180db4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180db0) {
            ctx->pc = 0x180DE8u;
            goto label_180de8;
        }
    }
    ctx->pc = 0x180DB8u;
label_180db8:
    // 0x180db8: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x180db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180dbc:
    // 0x180dbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x180dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_180dc0:
    // 0x180dc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180dc4:
    // 0x180dc4: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_180dc8:
    // 0x180dc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_180dcc:
    // 0x180dcc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x180dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_180dd0:
    // 0x180dd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180dd4:
    // 0x180dd4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_180dd8:
    // 0x180dd8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180ddc:
    // 0x180ddc: 0x40f809  jalr        $v0
label_180de0:
    if (ctx->pc == 0x180DE0u) {
        ctx->pc = 0x180DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DDCu;
        // 0x180de0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DE4u;
        goto label_180de4;
    }
    ctx->pc = 0x180DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180DE4u);
        ctx->pc = 0x180DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DDCu;
        // 0x180de0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DDCu, 0x180DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180DE4u;
label_180de4:
    // 0x180de4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_180de8:
    // 0x180de8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_180dec:
    // 0x180dec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_180df0:
    // 0x180df0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_180df4:
    if (ctx->pc == 0x180DF4u) {
        ctx->pc = 0x180DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DF0u;
        // 0x180df4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DF8u;
        goto label_180df8;
    }
    ctx->pc = 0x180DF0u;
    {
        const bool branch_taken_0x180df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DF0u;
        // 0x180df4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180df0) {
            ctx->pc = 0x180E28u;
            goto label_180e28;
        }
    }
    ctx->pc = 0x180DF8u;
label_180df8:
    // 0x180df8: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180dfc:
    // 0x180dfc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x180dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_180e00:
    // 0x180e00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180e04:
    // 0x180e04: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x180e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_180e08:
    // 0x180e08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_180e0c:
    // 0x180e0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x180e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_180e10:
    // 0x180e10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180e14:
    // 0x180e14: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_180e18:
    // 0x180e18: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x180e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180e1c:
    // 0x180e1c: 0x40f809  jalr        $v0
label_180e20:
    if (ctx->pc == 0x180E20u) {
        ctx->pc = 0x180E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E1Cu;
        // 0x180e20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E24u;
        goto label_180e24;
    }
    ctx->pc = 0x180E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180E24u);
        ctx->pc = 0x180E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E1Cu;
        // 0x180e20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E1Cu, 0x180E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180E24u;
label_180e24:
    // 0x180e24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_180e28:
    // 0x180e28: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x180e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_180e2c:
    // 0x180e2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180e30:
    // 0x180e30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_180e34:
    // 0x180e34: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_180e38:
    if (ctx->pc == 0x180E38u) {
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E34u;
        // 0x180e38: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E3Cu;
        goto label_180e3c;
    }
    ctx->pc = 0x180E34u;
    {
        const bool branch_taken_0x180e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E34u;
        // 0x180e38: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e34) {
            ctx->pc = 0x180E6Cu;
            goto label_180e6c;
        }
    }
    ctx->pc = 0x180E3Cu;
label_180e3c:
    // 0x180e3c: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x180e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_180e40:
    // 0x180e40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x180e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_180e44:
    // 0x180e44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180e48:
    // 0x180e48: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x180e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_180e4c:
    // 0x180e4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_180e50:
    // 0x180e50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x180e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_180e54:
    // 0x180e54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_180e58:
    // 0x180e58: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x180e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_180e5c:
    // 0x180e5c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x180e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_180e60:
    // 0x180e60: 0x40f809  jalr        $v0
label_180e64:
    if (ctx->pc == 0x180E64u) {
        ctx->pc = 0x180E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E60u;
        // 0x180e64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E68u;
        goto label_180e68;
    }
    ctx->pc = 0x180E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180E68u);
        ctx->pc = 0x180E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E60u;
        // 0x180e64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E60u, 0x180E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180E68u;
label_180e68:
    // 0x180e68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_180e6c:
    // 0x180e6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x180e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_180e70:
    // 0x180e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_180e74:
    // 0x180e74: 0x8c5127e4  lw          $s1, 0x27E4($v0)
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_180e78:
    // 0x180e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180e7c:
    // 0x180e7c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x180e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_180e80:
    // 0x180e80: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_180e84:
    // 0x180e84: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_180e88:
    // 0x180e88: 0xc061e6e  jal         func_1879B8
label_180e8c:
    if (ctx->pc == 0x180E8Cu) {
        ctx->pc = 0x180E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E88u;
        // 0x180e8c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E90u;
        goto label_180e90;
    }
    ctx->pc = 0x180E88u;
    SET_GPR_U32(ctx, 31, 0x180E90u);
    ctx->pc = 0x180E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E88u;
    // 0x180e8c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x180E88u, 0x180E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E90u;
label_180e90:
    // 0x180e90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_180e94:
    // 0x180e94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180e98:
    // 0x180e98: 0x60f809  jalr        $v1
label_180e9c:
    if (ctx->pc == 0x180E9Cu) {
        ctx->pc = 0x180E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E98u;
        // 0x180e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EA0u;
        goto label_180ea0;
    }
    ctx->pc = 0x180E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180EA0u);
        ctx->pc = 0x180E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E98u;
        // 0x180e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E98u, 0x180EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180EA0u;
label_180ea0:
    // 0x180ea0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x180ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_180ea4:
    // 0x180ea4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x180ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_180ea8:
    // 0x180ea8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x180ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_180eac:
    // 0x180eac: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x180eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_180eb0:
    // 0x180eb0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x180eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_180eb4:
    // 0x180eb4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x180eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_180eb8:
    // 0x180eb8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x180eb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_180ebc:
    // 0x180ebc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x180ebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_180ec0:
    // 0x180ec0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x180ec0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_180ec4:
    // 0x180ec4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x180ec4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_180ec8:
    // 0x180ec8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x180ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_180ecc:
    // 0x180ecc: 0x3e00008  jr          $ra
label_180ed0:
    if (ctx->pc == 0x180ED0u) {
        ctx->pc = 0x180ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ECCu;
        // 0x180ed0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180ED4u;
        goto label_180ed4;
    }
    ctx->pc = 0x180ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ECCu;
        // 0x180ed0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180ED4u;
label_180ed4:
    // 0x180ed4: 0x0  nop
    ctx->pc = 0x180ed4u;
    // NOP
label_180ed8:
    // 0x180ed8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_180edc:
    // 0x180edc: 0x0  nop
    ctx->pc = 0x180edcu;
    // NOP
    ctx->pc = 0x180ee0u;
}
