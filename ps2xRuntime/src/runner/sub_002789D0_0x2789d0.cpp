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

// Function: sub_002789D0
// Address: 0x2789d0 - 0x278ef8
void sub_002789D0_0x2789d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002789D0_0x2789d0");
#endif

    switch (ctx->pc) {
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278d70u: goto label_278d70;
        case 0x278d74u: goto label_278d74;
        case 0x278d78u: goto label_278d78;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d80u: goto label_278d80;
        case 0x278d84u: goto label_278d84;
        case 0x278d88u: goto label_278d88;
        case 0x278d8cu: goto label_278d8c;
        case 0x278d90u: goto label_278d90;
        case 0x278d94u: goto label_278d94;
        case 0x278d98u: goto label_278d98;
        case 0x278d9cu: goto label_278d9c;
        case 0x278da0u: goto label_278da0;
        case 0x278da4u: goto label_278da4;
        case 0x278da8u: goto label_278da8;
        case 0x278dacu: goto label_278dac;
        case 0x278db0u: goto label_278db0;
        case 0x278db4u: goto label_278db4;
        case 0x278db8u: goto label_278db8;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dc4u: goto label_278dc4;
        case 0x278dc8u: goto label_278dc8;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd0u: goto label_278dd0;
        case 0x278dd4u: goto label_278dd4;
        case 0x278dd8u: goto label_278dd8;
        case 0x278ddcu: goto label_278ddc;
        case 0x278de0u: goto label_278de0;
        case 0x278de4u: goto label_278de4;
        case 0x278de8u: goto label_278de8;
        case 0x278decu: goto label_278dec;
        case 0x278df0u: goto label_278df0;
        case 0x278df4u: goto label_278df4;
        case 0x278df8u: goto label_278df8;
        case 0x278dfcu: goto label_278dfc;
        case 0x278e00u: goto label_278e00;
        case 0x278e04u: goto label_278e04;
        case 0x278e08u: goto label_278e08;
        case 0x278e0cu: goto label_278e0c;
        case 0x278e10u: goto label_278e10;
        case 0x278e14u: goto label_278e14;
        case 0x278e18u: goto label_278e18;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e20u: goto label_278e20;
        case 0x278e24u: goto label_278e24;
        case 0x278e28u: goto label_278e28;
        case 0x278e2cu: goto label_278e2c;
        case 0x278e30u: goto label_278e30;
        case 0x278e34u: goto label_278e34;
        case 0x278e38u: goto label_278e38;
        case 0x278e3cu: goto label_278e3c;
        case 0x278e40u: goto label_278e40;
        case 0x278e44u: goto label_278e44;
        case 0x278e48u: goto label_278e48;
        case 0x278e4cu: goto label_278e4c;
        case 0x278e50u: goto label_278e50;
        case 0x278e54u: goto label_278e54;
        case 0x278e58u: goto label_278e58;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e60u: goto label_278e60;
        case 0x278e64u: goto label_278e64;
        case 0x278e68u: goto label_278e68;
        case 0x278e6cu: goto label_278e6c;
        case 0x278e70u: goto label_278e70;
        case 0x278e74u: goto label_278e74;
        case 0x278e78u: goto label_278e78;
        case 0x278e7cu: goto label_278e7c;
        case 0x278e80u: goto label_278e80;
        case 0x278e84u: goto label_278e84;
        case 0x278e88u: goto label_278e88;
        case 0x278e8cu: goto label_278e8c;
        case 0x278e90u: goto label_278e90;
        case 0x278e94u: goto label_278e94;
        case 0x278e98u: goto label_278e98;
        case 0x278e9cu: goto label_278e9c;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ea4u: goto label_278ea4;
        case 0x278ea8u: goto label_278ea8;
        case 0x278eacu: goto label_278eac;
        case 0x278eb0u: goto label_278eb0;
        case 0x278eb4u: goto label_278eb4;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ebcu: goto label_278ebc;
        case 0x278ec0u: goto label_278ec0;
        case 0x278ec4u: goto label_278ec4;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ed4u: goto label_278ed4;
        case 0x278ed8u: goto label_278ed8;
        case 0x278edcu: goto label_278edc;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ee4u: goto label_278ee4;
        case 0x278ee8u: goto label_278ee8;
        case 0x278eecu: goto label_278eec;
        case 0x278ef0u: goto label_278ef0;
        case 0x278ef4u: goto label_278ef4;
        default: break;
    }

    ctx->pc = 0x2789d0u;

label_2789d0:
    // 0x2789d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2789d4:
    // 0x2789d4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2789d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2789d8:
    // 0x2789d8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2789d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2789dc:
    // 0x2789dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2789dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2789e0:
    // 0x2789e0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2789e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_2789e4:
    // 0x2789e4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2789e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_2789e8:
    // 0x2789e8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2789e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2789ec:
    // 0x2789ec: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2789ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2789f0:
    // 0x2789f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2789f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2789f4:
    // 0x2789f4: 0xc040680  jal         func_101A00
label_2789f8:
    if (ctx->pc == 0x2789F8u) {
        ctx->pc = 0x2789F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789F4u;
        // 0x2789f8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789FCu;
        goto label_2789fc;
    }
    ctx->pc = 0x2789F4u;
    SET_GPR_U32(ctx, 31, 0x2789FCu);
    ctx->pc = 0x2789F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789F4u;
    // 0x2789f8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2789F4u, 0x2789FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789FCu;
label_2789fc:
    // 0x2789fc: 0xc089c18  jal         func_227060
label_278a00:
    if (ctx->pc == 0x278A00u) {
        ctx->pc = 0x278A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789FCu;
        // 0x278a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A04u;
        goto label_278a04;
    }
    ctx->pc = 0x2789FCu;
    SET_GPR_U32(ctx, 31, 0x278A04u);
    ctx->pc = 0x278A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789FCu;
    // 0x278a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2789FCu, 0x278A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A04u;
label_278a04:
    // 0x278a04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x278a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278a08:
    // 0x278a08: 0xc0e57ce  jal         func_395F38
label_278a0c:
    if (ctx->pc == 0x278A0Cu) {
        ctx->pc = 0x278A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A08u;
        // 0x278a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A10u;
        goto label_278a10;
    }
    ctx->pc = 0x278A08u;
    SET_GPR_U32(ctx, 31, 0x278A10u);
    ctx->pc = 0x278A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A08u;
    // 0x278a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x278A08u, 0x278A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A10u;
label_278a10:
    // 0x278a10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x278a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278a14:
    // 0x278a14: 0xc088ac6  jal         func_222B18
label_278a18:
    if (ctx->pc == 0x278A18u) {
        ctx->pc = 0x278A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A14u;
        // 0x278a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A1Cu;
        goto label_278a1c;
    }
    ctx->pc = 0x278A14u;
    SET_GPR_U32(ctx, 31, 0x278A1Cu);
    ctx->pc = 0x278A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A14u;
    // 0x278a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x278A14u, 0x278A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A1Cu;
label_278a1c:
    // 0x278a1c: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x278a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_278a20:
    // 0x278a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x278a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_278a24:
    // 0x278a24: 0x1462008d  bne         $v1, $v0, . + 4 + (0x8D << 2)
label_278a28:
    if (ctx->pc == 0x278A28u) {
        ctx->pc = 0x278A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A24u;
        // 0x278a28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A2Cu;
        goto label_278a2c;
    }
    ctx->pc = 0x278A24u;
    {
        const bool branch_taken_0x278a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A24u;
        // 0x278a28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a24) {
            ctx->pc = 0x278C5Cu;
            goto label_278c5c;
        }
    }
    ctx->pc = 0x278A2Cu;
label_278a2c:
    // 0x278a2c: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x278a2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_278a30:
    // 0x278a30: 0xc0e44cc  jal         func_391330
label_278a34:
    if (ctx->pc == 0x278A34u) {
        ctx->pc = 0x278A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A30u;
        // 0x278a34: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A38u;
        goto label_278a38;
    }
    ctx->pc = 0x278A30u;
    SET_GPR_U32(ctx, 31, 0x278A38u);
    ctx->pc = 0x278A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A30u;
    // 0x278a34: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x278A30u, 0x278A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A38u;
label_278a38:
    // 0x278a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278a3c:
    // 0x278a3c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x278a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_278a40:
    // 0x278a40: 0x24a5e768  addiu       $a1, $a1, -0x1898
    ctx->pc = 0x278a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961000));
label_278a44:
    // 0x278a44: 0xc10c313  jal         func_430C4C
label_278a48:
    if (ctx->pc == 0x278A48u) {
        ctx->pc = 0x278A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A44u;
        // 0x278a48: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A4Cu;
        goto label_278a4c;
    }
    ctx->pc = 0x278A44u;
    SET_GPR_U32(ctx, 31, 0x278A4Cu);
    ctx->pc = 0x278A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A44u;
    // 0x278a48: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x278A44u, 0x278A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A4Cu;
label_278a4c:
    // 0x278a4c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_278a50:
    if (ctx->pc == 0x278A50u) {
        ctx->pc = 0x278A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A4Cu;
        // 0x278a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A54u;
        goto label_278a54;
    }
    ctx->pc = 0x278A4Cu;
    {
        const bool branch_taken_0x278a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A4Cu;
        // 0x278a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a4c) {
            ctx->pc = 0x278AE0u;
            goto label_278ae0;
        }
    }
    ctx->pc = 0x278A54u;
label_278a54:
    // 0x278a54: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x278a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_278a58:
    // 0x278a58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x278a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_278a5c:
    // 0x278a5c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_278a60:
    // 0x278a60: 0x3c013fd1  lui         $at, 0x3FD1
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16337 << 16));
label_278a64:
    // 0x278a64: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x278a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_278a68:
    // 0x278a68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x278a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_278a6c:
    // 0x278a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_278a70:
    // 0x278a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278a74:
    // 0x278a74: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x278a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_278a78:
    // 0x278a78: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x278a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_278a7c:
    // 0x278a7c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x278a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_278a80:
    // 0x278a80: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x278a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_278a84:
    // 0x278a84: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x278a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_278a88:
    // 0x278a88: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x278a88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278a8c:
    // 0x278a8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x278a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278a90:
    // 0x278a90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x278a90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_278a94:
    // 0x278a94: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x278a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278a98:
    // 0x278a98: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x278a98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_278a9c:
    // 0x278a9c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x278a9cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_278aa0:
    // 0x278aa0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x278aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278aa4:
    // 0x278aa4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x278aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278aa8:
    // 0x278aa8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x278aa8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_278aac:
    // 0x278aac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x278aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278ab0:
    // 0x278ab0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x278ab0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_278ab4:
    // 0x278ab4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x278ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278ab8:
    // 0x278ab8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x278ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278abc:
    // 0x278abc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x278abcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_278ac0:
    // 0x278ac0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x278ac0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278ac4:
    // 0x278ac4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x278ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278ac8:
    // 0x278ac8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x278ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278acc:
    // 0x278acc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x278accu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_278ad0:
    // 0x278ad0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x278ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_278ad4:
    // 0x278ad4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x278ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_278ad8:
    // 0x278ad8: 0x10000019  b           . + 4 + (0x19 << 2)
label_278adc:
    if (ctx->pc == 0x278ADCu) {
        ctx->pc = 0x278ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AD8u;
        // 0x278adc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AE0u;
        goto label_278ae0;
    }
    ctx->pc = 0x278AD8u;
    {
        const bool branch_taken_0x278ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AD8u;
        // 0x278adc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ad8) {
            ctx->pc = 0x278B40u;
            goto label_278b40;
        }
    }
    ctx->pc = 0x278AE0u;
label_278ae0:
    // 0x278ae0: 0xc0e45f6  jal         func_3917D8
label_278ae4:
    if (ctx->pc == 0x278AE4u) {
        ctx->pc = 0x278AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AE0u;
        // 0x278ae4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AE8u;
        goto label_278ae8;
    }
    ctx->pc = 0x278AE0u;
    SET_GPR_U32(ctx, 31, 0x278AE8u);
    ctx->pc = 0x278AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AE0u;
    // 0x278ae4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x278AE0u, 0x278AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AE8u;
label_278ae8:
    // 0x278ae8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x278ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_278aec:
    // 0x278aec: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x278aecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278af0:
    // 0x278af0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x278af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278af4:
    // 0x278af4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x278af4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_278af8:
    // 0x278af8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x278af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278afc:
    // 0x278afc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x278afcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_278b00:
    // 0x278b00: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x278b00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_278b04:
    // 0x278b04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x278b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278b08:
    // 0x278b08: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x278b08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278b0c:
    // 0x278b0c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x278b0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_278b10:
    // 0x278b10: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x278b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278b14:
    // 0x278b14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x278b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_278b18:
    // 0x278b18: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x278b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278b1c:
    // 0x278b1c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x278b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278b20:
    // 0x278b20: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x278b20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_278b24:
    // 0x278b24: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x278b24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278b28:
    // 0x278b28: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x278b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278b2c:
    // 0x278b2c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x278b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_278b30:
    // 0x278b30: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x278b30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_278b34:
    // 0x278b34: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x278b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_278b38:
    // 0x278b38: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x278b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_278b3c:
    // 0x278b3c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x278b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_278b40:
    // 0x278b40: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x278b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_278b44:
    // 0x278b44: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x278b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_278b48:
    // 0x278b48: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x278b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_278b4c:
    // 0x278b4c: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x278b4cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278b50:
    // 0x278b50: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x278b50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_278b54:
    // 0x278b54: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x278b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_278b58:
    // 0x278b58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x278b58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278b5c:
    // 0x278b5c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x278b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278b60:
    // 0x278b60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x278b60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_278b64:
    // 0x278b64: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x278b64u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_278b68:
    // 0x278b68: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x278b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_278b6c:
    // 0x278b6c: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x278b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_278b70:
    // 0x278b70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_278b74:
    // 0x278b74: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x278b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_278b78:
    // 0x278b78: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x278b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_278b7c:
    // 0x278b7c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x278b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_278b80:
    // 0x278b80: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x278b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_278b84:
    // 0x278b84: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_278b88:
    // 0x278b88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x278b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_278b8c:
    // 0x278b8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x278b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278b90:
    // 0x278b90: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x278b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_278b94:
    // 0x278b94: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x278b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_278b98:
    // 0x278b98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_278b9c:
    // 0x278b9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x278b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_278ba0:
    // 0x278ba0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x278ba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_278ba4:
    // 0x278ba4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x278ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_278ba8:
    // 0x278ba8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x278ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_278bac:
    // 0x278bac: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x278bacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278bb0:
    // 0x278bb0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x278bb0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_278bb4:
    // 0x278bb4: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x278bb4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_278bb8:
    // 0x278bb8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x278bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_278bbc:
    // 0x278bbc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x278bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_278bc0:
    // 0x278bc0: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x278bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_278bc4:
    // 0x278bc4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x278bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278bc8:
    // 0x278bc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x278bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278bcc:
    // 0x278bcc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x278bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278bd0:
    // 0x278bd0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x278bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278bd4:
    // 0x278bd4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x278bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278bd8:
    // 0x278bd8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x278bd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_278bdc:
    // 0x278bdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x278bdcu;
    // VWAITQ (Q already resolved in this runtime)
label_278be0:
    // 0x278be0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x278be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_278be4:
    // 0x278be4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x278be4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_278be8:
    // 0x278be8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x278be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_278bec:
    // 0x278bec: 0xc0cd8ec  jal         func_3363B0
label_278bf0:
    if (ctx->pc == 0x278BF0u) {
        ctx->pc = 0x278BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BECu;
        // 0x278bf0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278BF4u;
        goto label_278bf4;
    }
    ctx->pc = 0x278BECu;
    SET_GPR_U32(ctx, 31, 0x278BF4u);
    ctx->pc = 0x278BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278BECu;
    // 0x278bf0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x278BECu, 0x278BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BF4u;
label_278bf4:
    // 0x278bf4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x278bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278bf8:
    // 0x278bf8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x278bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278bfc:
    // 0x278bfc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x278bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_278c00:
    // 0x278c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x278c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278c04:
    // 0x278c04: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x278c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278c08:
    // 0x278c08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x278c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278c0c:
    // 0x278c0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x278c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_278c10:
    // 0x278c10: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x278c10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_278c14:
    // 0x278c14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x278c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_278c18:
    // 0x278c18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x278c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278c1c:
    // 0x278c1c: 0x0  nop
    ctx->pc = 0x278c1cu;
    // NOP
label_278c20:
    // 0x278c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278c24:
    // 0x278c24: 0x0  nop
    ctx->pc = 0x278c24u;
    // NOP
label_278c28:
    // 0x278c28: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_278c2c:
    if (ctx->pc == 0x278C2Cu) {
        ctx->pc = 0x278C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C28u;
        // 0x278c2c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C30u;
        goto label_278c30;
    }
    ctx->pc = 0x278C28u;
    {
        const bool branch_taken_0x278c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C28u;
        // 0x278c2c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c28) {
            ctx->pc = 0x278D98u;
            goto label_278d98;
        }
    }
    ctx->pc = 0x278C30u;
label_278c30:
    // 0x278c30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_278c34:
    // 0x278c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278c38:
    // 0x278c38: 0x0  nop
    ctx->pc = 0x278c38u;
    // NOP
label_278c3c:
    // 0x278c3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x278c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_278c40:
    // 0x278c40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x278c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_278c44:
    // 0x278c44: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x278c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_278c48:
    // 0x278c48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x278c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_278c4c:
    // 0x278c4c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x278c4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_278c50:
    // 0x278c50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x278c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_278c54:
    // 0x278c54: 0x10000050  b           . + 4 + (0x50 << 2)
label_278c58:
    if (ctx->pc == 0x278C58u) {
        ctx->pc = 0x278C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C54u;
        // 0x278c58: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C5Cu;
        goto label_278c5c;
    }
    ctx->pc = 0x278C54u;
    {
        const bool branch_taken_0x278c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C54u;
        // 0x278c58: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c54) {
            ctx->pc = 0x278D98u;
            goto label_278d98;
        }
    }
    ctx->pc = 0x278C5Cu;
label_278c5c:
    // 0x278c5c: 0xc088ac6  jal         func_222B18
label_278c60:
    if (ctx->pc == 0x278C60u) {
        ctx->pc = 0x278C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C5Cu;
        // 0x278c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C64u;
        goto label_278c64;
    }
    ctx->pc = 0x278C5Cu;
    SET_GPR_U32(ctx, 31, 0x278C64u);
    ctx->pc = 0x278C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C5Cu;
    // 0x278c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x278C5Cu, 0x278C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C64u;
label_278c64:
    // 0x278c64: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x278c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_278c68:
    // 0x278c68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x278c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_278c6c:
    // 0x278c6c: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
label_278c70:
    if (ctx->pc == 0x278C70u) {
        ctx->pc = 0x278C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C6Cu;
        // 0x278c70: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C74u;
        goto label_278c74;
    }
    ctx->pc = 0x278C6Cu;
    {
        const bool branch_taken_0x278c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278c6c) {
            ctx->pc = 0x278C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C6Cu;
            // 0x278c70: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D04u;
            goto label_278d04;
        }
    }
    ctx->pc = 0x278C74u;
label_278c74:
    // 0x278c74: 0xc0e2612  jal         func_389848
label_278c78:
    if (ctx->pc == 0x278C78u) {
        ctx->pc = 0x278C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C74u;
        // 0x278c78: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C7Cu;
        goto label_278c7c;
    }
    ctx->pc = 0x278C74u;
    SET_GPR_U32(ctx, 31, 0x278C7Cu);
    ctx->pc = 0x278C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C74u;
    // 0x278c78: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x278C74u, 0x278C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C7Cu;
label_278c7c:
    // 0x278c7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x278c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_278c80:
    // 0x278c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278c84:
    // 0x278c84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x278c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_278c88:
    // 0x278c88: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x278c88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_278c8c:
    // 0x278c8c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x278c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_278c90:
    // 0x278c90: 0x40f809  jalr        $v0
label_278c94:
    if (ctx->pc == 0x278C94u) {
        ctx->pc = 0x278C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C90u;
        // 0x278c94: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C98u;
        goto label_278c98;
    }
    ctx->pc = 0x278C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278C98u);
        ctx->pc = 0x278C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C90u;
        // 0x278c94: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C90u, 0x278C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278C98u;
label_278c98:
    // 0x278c98: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x278c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_278c9c:
    // 0x278c9c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x278c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_278ca0:
    // 0x278ca0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x278ca0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278ca4:
    // 0x278ca4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x278ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_278ca8:
    // 0x278ca8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x278ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_278cac:
    // 0x278cac: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x278cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_278cb0:
    // 0x278cb0: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x278cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_278cb4:
    // 0x278cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_278cb8:
    // 0x278cb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x278cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_278cbc:
    // 0x278cbc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x278cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278cc0:
    // 0x278cc0: 0xc0cd8c2  jal         func_336308
label_278cc4:
    if (ctx->pc == 0x278CC4u) {
        ctx->pc = 0x278CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CC0u;
        // 0x278cc4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278CC8u;
        goto label_278cc8;
    }
    ctx->pc = 0x278CC0u;
    SET_GPR_U32(ctx, 31, 0x278CC8u);
    ctx->pc = 0x278CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CC0u;
    // 0x278cc4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x278CC0u, 0x278CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CC8u;
label_278cc8:
    // 0x278cc8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x278cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ccc:
    // 0x278ccc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x278cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278cd0:
    // 0x278cd0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x278cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278cd4:
    // 0x278cd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x278cd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_278cd8:
    // 0x278cd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x278cd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_278cdc:
    // 0x278cdc: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x278cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_278ce0:
    // 0x278ce0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x278ce0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_278ce4:
    // 0x278ce4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x278ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_278ce8:
    // 0x278ce8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x278ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_278cec:
    // 0x278cec: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x278cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_278cf0:
    // 0x278cf0: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x278cf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_278cf4:
    // 0x278cf4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x278cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278cf8:
    // 0x278cf8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x278cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_278cfc:
    // 0x278cfc: 0x10000026  b           . + 4 + (0x26 << 2)
label_278d00:
    if (ctx->pc == 0x278D00u) {
        ctx->pc = 0x278D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CFCu;
        // 0x278d00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D04u;
        goto label_278d04;
    }
    ctx->pc = 0x278CFCu;
    {
        const bool branch_taken_0x278cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CFCu;
        // 0x278d00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cfc) {
            ctx->pc = 0x278D98u;
            goto label_278d98;
        }
    }
    ctx->pc = 0x278D04u;
label_278d04:
    // 0x278d04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x278d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_278d08:
    // 0x278d08: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x278d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_278d0c:
    // 0x278d0c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_278d10:
    // 0x278d10: 0x60f809  jalr        $v1
label_278d14:
    if (ctx->pc == 0x278D14u) {
        ctx->pc = 0x278D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D10u;
        // 0x278d14: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D18u;
        goto label_278d18;
    }
    ctx->pc = 0x278D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x278D18u);
        ctx->pc = 0x278D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D10u;
        // 0x278d14: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278D10u, 0x278D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278D18u;
label_278d18:
    // 0x278d18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x278d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278d1c:
    // 0x278d1c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x278d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_278d20:
    // 0x278d20: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x278d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_278d24:
    // 0x278d24: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x278d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_278d28:
    // 0x278d28: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_278d2c:
    // 0x278d2c: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x278d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_278d30:
    // 0x278d30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_278d34:
    // 0x278d34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x278d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_278d38:
    // 0x278d38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x278d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278d3c:
    // 0x278d3c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x278d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_278d40:
    // 0x278d40: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x278d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_278d44:
    // 0x278d44: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x278d44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278d48:
    // 0x278d48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x278d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_278d4c:
    // 0x278d4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x278d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_278d50:
    // 0x278d50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x278d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_278d54:
    // 0x278d54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x278d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278d58:
    // 0x278d58: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x278d58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_278d5c:
    // 0x278d5c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x278d5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278d60:
    // 0x278d60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x278d60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_278d64:
    // 0x278d64: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x278d64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_278d68:
    // 0x278d68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x278d68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_278d6c:
    // 0x278d6c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x278d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278d70:
    // 0x278d70: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x278d70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278d74:
    // 0x278d74: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x278d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_278d78:
    // 0x278d78: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x278d78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_278d7c:
    // 0x278d7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x278d7cu;
    // VWAITQ (Q already resolved in this runtime)
label_278d80:
    // 0x278d80: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x278d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_278d84:
    // 0x278d84: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x278d84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_278d88:
    // 0x278d88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x278d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_278d8c:
    // 0x278d8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x278d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_278d90:
    // 0x278d90: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x278d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_278d94:
    // 0x278d94: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x278d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_278d98:
    // 0x278d98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x278d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_278d9c:
    // 0x278d9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_278da0:
    // 0x278da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278da4:
    // 0x278da4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_278da8:
    // 0x278da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x278da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_278dac:
    // 0x278dac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x278dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_278db0:
    // 0x278db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278db4:
    // 0x278db4: 0xc09d670  jal         func_2759C0
label_278db8:
    if (ctx->pc == 0x278DB8u) {
        ctx->pc = 0x278DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DB4u;
        // 0x278db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DBCu;
        goto label_278dbc;
    }
    ctx->pc = 0x278DB4u;
    SET_GPR_U32(ctx, 31, 0x278DBCu);
    ctx->pc = 0x278DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DB4u;
    // 0x278db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x278DB4u, 0x278DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DBCu;
label_278dbc:
    // 0x278dbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278dc0:
    // 0x278dc0: 0xc08b710  jal         func_22DC40
label_278dc4:
    if (ctx->pc == 0x278DC4u) {
        ctx->pc = 0x278DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DC0u;
        // 0x278dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DC8u;
        goto label_278dc8;
    }
    ctx->pc = 0x278DC0u;
    SET_GPR_U32(ctx, 31, 0x278DC8u);
    ctx->pc = 0x278DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DC0u;
    // 0x278dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DC40u, 0x278DC0u, 0x278DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DC8u;
label_278dc8:
    // 0x278dc8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x278dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_278dcc:
    // 0x278dcc: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x278dccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278dd0:
    // 0x278dd0: 0x2610e758  addiu       $s0, $s0, -0x18A8
    ctx->pc = 0x278dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960984));
label_278dd4:
    // 0x278dd4: 0xc041532  jal         func_1054C8
label_278dd8:
    if (ctx->pc == 0x278DD8u) {
        ctx->pc = 0x278DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DD4u;
        // 0x278dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DDCu;
        goto label_278ddc;
    }
    ctx->pc = 0x278DD4u;
    SET_GPR_U32(ctx, 31, 0x278DDCu);
    ctx->pc = 0x278DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DD4u;
    // 0x278dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278DD4u, 0x278DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DDCu;
label_278ddc:
    // 0x278ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278de0:
    // 0x278de0: 0xc041532  jal         func_1054C8
label_278de4:
    if (ctx->pc == 0x278DE4u) {
        ctx->pc = 0x278DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DE0u;
        // 0x278de4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DE8u;
        goto label_278de8;
    }
    ctx->pc = 0x278DE0u;
    SET_GPR_U32(ctx, 31, 0x278DE8u);
    ctx->pc = 0x278DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DE0u;
    // 0x278de4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278DE0u, 0x278DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DE8u;
label_278de8:
    // 0x278de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278dec:
    // 0x278dec: 0xc041532  jal         func_1054C8
label_278df0:
    if (ctx->pc == 0x278DF0u) {
        ctx->pc = 0x278DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DECu;
        // 0x278df0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DF4u;
        goto label_278df4;
    }
    ctx->pc = 0x278DECu;
    SET_GPR_U32(ctx, 31, 0x278DF4u);
    ctx->pc = 0x278DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DECu;
    // 0x278df0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278DECu, 0x278DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DF4u;
label_278df4:
    // 0x278df4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_278df8:
    if (ctx->pc == 0x278DF8u) {
        ctx->pc = 0x278DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DF4u;
        // 0x278df8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DFCu;
        goto label_278dfc;
    }
    ctx->pc = 0x278DF4u;
    {
        const bool branch_taken_0x278df4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DF4u;
        // 0x278df8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278df4) {
            ctx->pc = 0x278E20u;
            goto label_278e20;
        }
    }
    ctx->pc = 0x278DFCu;
label_278dfc:
    // 0x278dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x278dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_278e00:
    // 0x278e00: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x278e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278e04:
    // 0x278e04: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_278e08:
    // 0x278e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278e0c:
    // 0x278e0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x278e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_278e10:
    // 0x278e10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x278e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_278e14:
    // 0x278e14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278e18:
    // 0x278e18: 0xc041b20  jal         func_106C80
label_278e1c:
    if (ctx->pc == 0x278E1Cu) {
        ctx->pc = 0x278E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E18u;
        // 0x278e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E20u;
        goto label_278e20;
    }
    ctx->pc = 0x278E18u;
    SET_GPR_U32(ctx, 31, 0x278E20u);
    ctx->pc = 0x278E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E18u;
    // 0x278e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x278E18u, 0x278E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E20u;
label_278e20:
    // 0x278e20: 0xc05d484  jal         func_175210
label_278e24:
    if (ctx->pc == 0x278E24u) {
        ctx->pc = 0x278E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E20u;
        // 0x278e24: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E28u;
        goto label_278e28;
    }
    ctx->pc = 0x278E20u;
    SET_GPR_U32(ctx, 31, 0x278E28u);
    ctx->pc = 0x278E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E20u;
    // 0x278e24: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x278E20u, 0x278E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E28u;
label_278e28:
    // 0x278e28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278e2c:
    // 0x278e2c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x278e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_278e30:
    // 0x278e30: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x278e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_278e34:
    // 0x278e34: 0xa0f809  jalr        $a1
label_278e38:
    if (ctx->pc == 0x278E38u) {
        ctx->pc = 0x278E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E34u;
        // 0x278e38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E3Cu;
        goto label_278e3c;
    }
    ctx->pc = 0x278E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x278E3Cu);
        ctx->pc = 0x278E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E34u;
        // 0x278e38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E34u, 0x278E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278E3Cu;
label_278e3c:
    // 0x278e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278e40:
    // 0x278e40: 0xc087016  jal         func_21C058
label_278e44:
    if (ctx->pc == 0x278E44u) {
        ctx->pc = 0x278E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E40u;
        // 0x278e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E48u;
        goto label_278e48;
    }
    ctx->pc = 0x278E40u;
    SET_GPR_U32(ctx, 31, 0x278E48u);
    ctx->pc = 0x278E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E40u;
    // 0x278e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x278E40u, 0x278E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E48u;
label_278e48:
    // 0x278e48: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_278e4c:
    if (ctx->pc == 0x278E4Cu) {
        ctx->pc = 0x278E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E48u;
        // 0x278e4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E50u;
        goto label_278e50;
    }
    ctx->pc = 0x278E48u;
    {
        const bool branch_taken_0x278e48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E48u;
        // 0x278e4c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e48) {
            ctx->pc = 0x278E68u;
            goto label_278e68;
        }
    }
    ctx->pc = 0x278E50u;
label_278e50:
    // 0x278e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278e54:
    // 0x278e54: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_278e58:
    // 0x278e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278e5c:
    // 0x278e5c: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x278e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_278e60:
    // 0x278e60: 0xc04159e  jal         func_105678
label_278e64:
    if (ctx->pc == 0x278E64u) {
        ctx->pc = 0x278E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E60u;
        // 0x278e64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E68u;
        goto label_278e68;
    }
    ctx->pc = 0x278E60u;
    SET_GPR_U32(ctx, 31, 0x278E68u);
    ctx->pc = 0x278E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E60u;
    // 0x278e64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x278E60u, 0x278E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E68u;
label_278e68:
    // 0x278e68: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_278e6c:
    if (ctx->pc == 0x278E6Cu) {
        ctx->pc = 0x278E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E68u;
        // 0x278e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E70u;
        goto label_278e70;
    }
    ctx->pc = 0x278E68u;
    {
        const bool branch_taken_0x278e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x278e68) {
            ctx->pc = 0x278E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278E68u;
            // 0x278e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278EACu;
            goto label_278eac;
        }
    }
    ctx->pc = 0x278E70u;
label_278e70:
    // 0x278e70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x278e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_278e74:
    // 0x278e74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_278e78:
    // 0x278e78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x278e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_278e7c:
    // 0x278e7c: 0x40f809  jalr        $v0
label_278e80:
    if (ctx->pc == 0x278E80u) {
        ctx->pc = 0x278E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E7Cu;
        // 0x278e80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E84u;
        goto label_278e84;
    }
    ctx->pc = 0x278E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278E84u);
        ctx->pc = 0x278E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E7Cu;
        // 0x278e80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E7Cu, 0x278E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278E84u;
label_278e84:
    // 0x278e84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278e88:
    // 0x278e88: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x278e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_278e8c:
    // 0x278e8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x278e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278e90:
    // 0x278e90: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x278e90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278e94:
    // 0x278e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278e98:
    // 0x278e98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278e9c:
    // 0x278e9c: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x278e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
label_278ea0:
    // 0x278ea0: 0xc041664  jal         func_105990
label_278ea4:
    if (ctx->pc == 0x278EA4u) {
        ctx->pc = 0x278EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EA0u;
        // 0x278ea4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278EA8u;
        goto label_278ea8;
    }
    ctx->pc = 0x278EA0u;
    SET_GPR_U32(ctx, 31, 0x278EA8u);
    ctx->pc = 0x278EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EA0u;
    // 0x278ea4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x278EA0u, 0x278EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EA8u;
label_278ea8:
    // 0x278ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278eac:
    // 0x278eac: 0xc05d53a  jal         func_1754E8
label_278eb0:
    if (ctx->pc == 0x278EB0u) {
        ctx->pc = 0x278EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EACu;
        // 0x278eb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278EB4u;
        goto label_278eb4;
    }
    ctx->pc = 0x278EACu;
    SET_GPR_U32(ctx, 31, 0x278EB4u);
    ctx->pc = 0x278EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EACu;
    // 0x278eb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x278EACu, 0x278EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EB4u;
label_278eb4:
    // 0x278eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278eb8:
    // 0x278eb8: 0xc05d4f6  jal         func_1753D8
label_278ebc:
    if (ctx->pc == 0x278EBCu) {
        ctx->pc = 0x278EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EB8u;
        // 0x278ebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278EC0u;
        goto label_278ec0;
    }
    ctx->pc = 0x278EB8u;
    SET_GPR_U32(ctx, 31, 0x278EC0u);
    ctx->pc = 0x278EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EB8u;
    // 0x278ebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x278EB8u, 0x278EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EC0u;
label_278ec0:
    // 0x278ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278ec4:
    // 0x278ec4: 0xc089990  jal         func_226640
label_278ec8:
    if (ctx->pc == 0x278EC8u) {
        ctx->pc = 0x278EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EC4u;
        // 0x278ec8: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278ECCu;
        goto label_278ecc;
    }
    ctx->pc = 0x278EC4u;
    SET_GPR_U32(ctx, 31, 0x278ECCu);
    ctx->pc = 0x278EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EC4u;
    // 0x278ec8: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x278EC4u, 0x278ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278ECCu;
label_278ecc:
    // 0x278ecc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_278ed0:
    // 0x278ed0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x278ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_278ed4:
    // 0x278ed4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x278ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_278ed8:
    // 0x278ed8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x278ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_278edc:
    // 0x278edc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x278edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_278ee0:
    // 0x278ee0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x278ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_278ee4:
    // 0x278ee4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x278ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_278ee8:
    // 0x278ee8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x278ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_278eec:
    // 0x278eec: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x278eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_278ef0:
    // 0x278ef0: 0x3e00008  jr          $ra
label_278ef4:
    if (ctx->pc == 0x278EF4u) {
        ctx->pc = 0x278EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EF0u;
        // 0x278ef4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278EF8u;
        goto label_fallthrough_0x278ef0;
    }
    ctx->pc = 0x278EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EF0u;
        // 0x278ef4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x278ef0:
    ctx->pc = 0x278EF8u;
}
