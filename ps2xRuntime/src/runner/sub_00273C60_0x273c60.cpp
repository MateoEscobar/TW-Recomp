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

// Function: sub_00273C60
// Address: 0x273c60 - 0x273fa0
void sub_00273C60_0x273c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273C60_0x273c60");
#endif

    switch (ctx->pc) {
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        default: break;
    }

    ctx->pc = 0x273c60u;

label_273c60:
    // 0x273c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_273c64:
    // 0x273c64: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x273c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_273c68:
    // 0x273c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_273c6c:
    // 0x273c6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x273c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_273c70:
    // 0x273c70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x273c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_273c74:
    // 0x273c74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x273c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_273c78:
    // 0x273c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_273c7c:
    // 0x273c7c: 0xc0874fa  jal         func_21D3E8
label_273c80:
    if (ctx->pc == 0x273C80u) {
        ctx->pc = 0x273C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C7Cu;
        // 0x273c80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C84u;
        goto label_273c84;
    }
    ctx->pc = 0x273C7Cu;
    SET_GPR_U32(ctx, 31, 0x273C84u);
    ctx->pc = 0x273C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C7Cu;
    // 0x273c80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x273C7Cu, 0x273C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C84u;
label_273c84:
    // 0x273c84: 0x8e5300d4  lw          $s3, 0xD4($s2)
    ctx->pc = 0x273c84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_273c88:
    // 0x273c88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x273c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273c8c:
    // 0x273c8c: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_273c90:
    // 0x273c90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_273c94:
    if (ctx->pc == 0x273C94u) {
        ctx->pc = 0x273C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C90u;
        // 0x273c94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273C98u;
        goto label_273c98;
    }
    ctx->pc = 0x273C90u;
    {
        const bool branch_taken_0x273c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C90u;
        // 0x273c94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c90) {
            ctx->pc = 0x273CE8u;
            goto label_273ce8;
        }
    }
    ctx->pc = 0x273C98u;
label_273c98:
    // 0x273c98: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_273c9c:
    // 0x273c9c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_273ca0:
    // 0x273ca0: 0xc0e4060  jal         func_390180
label_273ca4:
    if (ctx->pc == 0x273CA4u) {
        ctx->pc = 0x273CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CA0u;
        // 0x273ca4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CA8u;
        goto label_273ca8;
    }
    ctx->pc = 0x273CA0u;
    SET_GPR_U32(ctx, 31, 0x273CA8u);
    ctx->pc = 0x273CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CA0u;
    // 0x273ca4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x273CA0u, 0x273CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CA8u;
label_273ca8:
    // 0x273ca8: 0xc0e6ee8  jal         func_39BBA0
label_273cac:
    if (ctx->pc == 0x273CACu) {
        ctx->pc = 0x273CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CA8u;
        // 0x273cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CB0u;
        goto label_273cb0;
    }
    ctx->pc = 0x273CA8u;
    SET_GPR_U32(ctx, 31, 0x273CB0u);
    ctx->pc = 0x273CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CA8u;
    // 0x273cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x273CA8u, 0x273CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CB0u;
label_273cb0:
    // 0x273cb0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273cb4:
    // 0x273cb4: 0xc0e8b48  jal         func_3A2D20
label_273cb8:
    if (ctx->pc == 0x273CB8u) {
        ctx->pc = 0x273CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CB4u;
        // 0x273cb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CBCu;
        goto label_273cbc;
    }
    ctx->pc = 0x273CB4u;
    SET_GPR_U32(ctx, 31, 0x273CBCu);
    ctx->pc = 0x273CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CB4u;
    // 0x273cb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x273CB4u, 0x273CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CBCu;
label_273cbc:
    // 0x273cbc: 0xc09d38e  jal         func_274E38
label_273cc0:
    if (ctx->pc == 0x273CC0u) {
        ctx->pc = 0x273CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CBCu;
        // 0x273cc0: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CC4u;
        goto label_273cc4;
    }
    ctx->pc = 0x273CBCu;
    SET_GPR_U32(ctx, 31, 0x273CC4u);
    ctx->pc = 0x273CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CBCu;
    // 0x273cc0: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E38u, 0x273CBCu, 0x273CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CC4u;
label_273cc4:
    // 0x273cc4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273cc8:
    // 0x273cc8: 0xc0e8b78  jal         func_3A2DE0
label_273ccc:
    if (ctx->pc == 0x273CCCu) {
        ctx->pc = 0x273CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CC8u;
        // 0x273ccc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CD0u;
        goto label_273cd0;
    }
    ctx->pc = 0x273CC8u;
    SET_GPR_U32(ctx, 31, 0x273CD0u);
    ctx->pc = 0x273CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CC8u;
    // 0x273ccc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x273CC8u, 0x273CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CD0u;
label_273cd0:
    // 0x273cd0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273cd4:
    // 0x273cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273cd8:
    // 0x273cd8: 0xc0e8b80  jal         func_3A2E00
label_273cdc:
    if (ctx->pc == 0x273CDCu) {
        ctx->pc = 0x273CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CD8u;
        // 0x273cdc: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CE0u;
        goto label_273ce0;
    }
    ctx->pc = 0x273CD8u;
    SET_GPR_U32(ctx, 31, 0x273CE0u);
    ctx->pc = 0x273CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CD8u;
    // 0x273cdc: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x273CD8u, 0x273CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CE0u;
label_273ce0:
    // 0x273ce0: 0xc0e8b50  jal         func_3A2D40
label_273ce4:
    if (ctx->pc == 0x273CE4u) {
        ctx->pc = 0x273CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CE0u;
        // 0x273ce4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CE8u;
        goto label_273ce8;
    }
    ctx->pc = 0x273CE0u;
    SET_GPR_U32(ctx, 31, 0x273CE8u);
    ctx->pc = 0x273CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CE0u;
    // 0x273ce4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x273CE0u, 0x273CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CE8u;
label_273ce8:
    // 0x273ce8: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
label_273cec:
    // 0x273cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273cf0:
    // 0x273cf0: 0xc089998  jal         func_226660
label_273cf4:
    if (ctx->pc == 0x273CF4u) {
        ctx->pc = 0x273CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CF0u;
        // 0x273cf4: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CF8u;
        goto label_273cf8;
    }
    ctx->pc = 0x273CF0u;
    SET_GPR_U32(ctx, 31, 0x273CF8u);
    ctx->pc = 0x273CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CF0u;
    // 0x273cf4: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x273CF0u, 0x273CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CF8u;
label_273cf8:
    // 0x273cf8: 0x5440009f  bnel        $v0, $zero, . + 4 + (0x9F << 2)
label_273cfc:
    if (ctx->pc == 0x273CFCu) {
        ctx->pc = 0x273CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CF8u;
        // 0x273cfc: 0xa280001d  sb          $zero, 0x1D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D00u;
        goto label_273d00;
    }
    ctx->pc = 0x273CF8u;
    {
        const bool branch_taken_0x273cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273cf8) {
            ctx->pc = 0x273CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273CF8u;
            // 0x273cfc: 0xa280001d  sb          $zero, 0x1D($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F78u;
            goto label_273f78;
        }
    }
    ctx->pc = 0x273D00u;
label_273d00:
    // 0x273d00: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_273d04:
    // 0x273d04: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x273d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_273d08:
    // 0x273d08: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_273d0c:
    if (ctx->pc == 0x273D0Cu) {
        ctx->pc = 0x273D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D08u;
        // 0x273d0c: 0x8e62013c  lw          $v0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D10u;
        goto label_273d10;
    }
    ctx->pc = 0x273D08u;
    {
        const bool branch_taken_0x273d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273d08) {
            ctx->pc = 0x273D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D08u;
            // 0x273d0c: 0x8e62013c  lw          $v0, 0x13C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273D94u;
            goto label_273d94;
        }
    }
    ctx->pc = 0x273D10u;
label_273d10:
    // 0x273d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273d14:
    // 0x273d14: 0xc08997c  jal         func_2265F0
label_273d18:
    if (ctx->pc == 0x273D18u) {
        ctx->pc = 0x273D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D14u;
        // 0x273d18: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D1Cu;
        goto label_273d1c;
    }
    ctx->pc = 0x273D14u;
    SET_GPR_U32(ctx, 31, 0x273D1Cu);
    ctx->pc = 0x273D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D14u;
    // 0x273d18: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x273D14u, 0x273D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D1Cu;
label_273d1c:
    // 0x273d1c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_273d20:
    if (ctx->pc == 0x273D20u) {
        ctx->pc = 0x273D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D1Cu;
        // 0x273d20: 0x8e62013c  lw          $v0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D24u;
        goto label_273d24;
    }
    ctx->pc = 0x273D1Cu;
    {
        const bool branch_taken_0x273d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D1Cu;
        // 0x273d20: 0x8e62013c  lw          $v0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d1c) {
            ctx->pc = 0x273D94u;
            goto label_273d94;
        }
    }
    ctx->pc = 0x273D24u;
label_273d24:
    // 0x273d24: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_273d28:
    if (ctx->pc == 0x273D28u) {
        ctx->pc = 0x273D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D24u;
        // 0x273d28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D2Cu;
        goto label_273d2c;
    }
    ctx->pc = 0x273D24u;
    {
        const bool branch_taken_0x273d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D24u;
        // 0x273d28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d24) {
            ctx->pc = 0x273D84u;
            goto label_273d84;
        }
    }
    ctx->pc = 0x273D2Cu;
label_273d2c:
    // 0x273d2c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_273d30:
    // 0x273d30: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x273d30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_273d34:
    // 0x273d34: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x273d34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_273d38:
    // 0x273d38: 0x24a5e478  addiu       $a1, $a1, -0x1B88
    ctx->pc = 0x273d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960248));
label_273d3c:
    // 0x273d3c: 0x2508e488  addiu       $t0, $t0, -0x1B78
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960264));
label_273d40:
    // 0x273d40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_273d44:
    // 0x273d44: 0x24060520  addiu       $a2, $zero, 0x520
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
label_273d48:
    // 0x273d48: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x273d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_273d4c:
    // 0x273d4c: 0x240900a3  addiu       $t1, $zero, 0xA3
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_273d50:
    // 0x273d50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x273d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_273d54:
    // 0x273d54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273d58:
    // 0x273d58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x273d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_273d5c:
    // 0x273d5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x273d5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273d60:
    // 0x273d60: 0x40f809  jalr        $v0
label_273d64:
    if (ctx->pc == 0x273D64u) {
        ctx->pc = 0x273D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D60u;
        // 0x273d64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D68u;
        goto label_273d68;
    }
    ctx->pc = 0x273D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273D68u);
        ctx->pc = 0x273D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D60u;
        // 0x273d64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273D60u, 0x273D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273D68u;
label_273d68:
    // 0x273d68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_273d6c:
    if (ctx->pc == 0x273D6Cu) {
        ctx->pc = 0x273D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D68u;
        // 0x273d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D70u;
        goto label_273d70;
    }
    ctx->pc = 0x273D68u;
    {
        const bool branch_taken_0x273d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D68u;
        // 0x273d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d68) {
            ctx->pc = 0x273D80u;
            goto label_273d80;
        }
    }
    ctx->pc = 0x273D70u;
label_273d70:
    // 0x273d70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_273d74:
    // 0x273d74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273d78:
    // 0x273d78: 0xc09d076  jal         func_2741D8
label_273d7c:
    if (ctx->pc == 0x273D7Cu) {
        ctx->pc = 0x273D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D78u;
        // 0x273d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D80u;
        goto label_273d80;
    }
    ctx->pc = 0x273D78u;
    SET_GPR_U32(ctx, 31, 0x273D80u);
    ctx->pc = 0x273D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D78u;
    // 0x273d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741D8u, 0x273D78u, 0x273D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D80u;
label_273d80:
    // 0x273d80: 0xae62013c  sw          $v0, 0x13C($s3)
    ctx->pc = 0x273d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 316), GPR_U32(ctx, 2));
label_273d84:
    // 0x273d84: 0xc09e006  jal         func_278018
label_273d88:
    if (ctx->pc == 0x273D88u) {
        ctx->pc = 0x273D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D84u;
        // 0x273d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D8Cu;
        goto label_273d8c;
    }
    ctx->pc = 0x273D84u;
    SET_GPR_U32(ctx, 31, 0x273D8Cu);
    ctx->pc = 0x273D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D84u;
    // 0x273d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278018u, 0x273D84u, 0x273D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D8Cu;
label_273d8c:
    // 0x273d8c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_273d90:
    if (ctx->pc == 0x273D90u) {
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D8Cu;
        // 0x273d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D94u;
        goto label_273d94;
    }
    ctx->pc = 0x273D8Cu;
    {
        const bool branch_taken_0x273d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D8Cu;
        // 0x273d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d8c) {
            ctx->pc = 0x273F80u;
            goto label_273f80;
        }
    }
    ctx->pc = 0x273D94u;
label_273d94:
    // 0x273d94: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_273d98:
    if (ctx->pc == 0x273D98u) {
        ctx->pc = 0x273D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D94u;
        // 0x273d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D9Cu;
        goto label_273d9c;
    }
    ctx->pc = 0x273D94u;
    {
        const bool branch_taken_0x273d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D94u;
        // 0x273d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d94) {
            ctx->pc = 0x273F30u;
            goto label_273f30;
        }
    }
    ctx->pc = 0x273D9Cu;
label_273d9c:
    // 0x273d9c: 0xc08997c  jal         func_2265F0
label_273da0:
    if (ctx->pc == 0x273DA0u) {
        ctx->pc = 0x273DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D9Cu;
        // 0x273da0: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DA4u;
        goto label_273da4;
    }
    ctx->pc = 0x273D9Cu;
    SET_GPR_U32(ctx, 31, 0x273DA4u);
    ctx->pc = 0x273DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D9Cu;
    // 0x273da0: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x273D9Cu, 0x273DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DA4u;
label_273da4:
    // 0x273da4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_273da8:
    if (ctx->pc == 0x273DA8u) {
        ctx->pc = 0x273DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DA4u;
        // 0x273da8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DACu;
        goto label_273dac;
    }
    ctx->pc = 0x273DA4u;
    {
        const bool branch_taken_0x273da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DA4u;
        // 0x273da8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273da4) {
            ctx->pc = 0x273F30u;
            goto label_273f30;
        }
    }
    ctx->pc = 0x273DACu;
label_273dac:
    // 0x273dac: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x273dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_273db0:
    // 0x273db0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_273db4:
    if (ctx->pc == 0x273DB4u) {
        ctx->pc = 0x273DB8u;
        goto label_273db8;
    }
    ctx->pc = 0x273DB0u;
    {
        const bool branch_taken_0x273db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273db0) {
            ctx->pc = 0x273DD0u;
            goto label_273dd0;
        }
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0xa280001d  sb          $zero, 0x1D($s4)
    ctx->pc = 0x273db8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
label_273dbc:
    // 0x273dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273dc0:
    // 0x273dc0: 0xc09e0ec  jal         func_2783B0
label_273dc4:
    if (ctx->pc == 0x273DC4u) {
        ctx->pc = 0x273DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC0u;
        // 0x273dc4: 0xa280001c  sb          $zero, 0x1C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DC8u;
        goto label_273dc8;
    }
    ctx->pc = 0x273DC0u;
    SET_GPR_U32(ctx, 31, 0x273DC8u);
    ctx->pc = 0x273DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DC0u;
    // 0x273dc4: 0xa280001c  sb          $zero, 0x1C($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783B0u, 0x273DC0u, 0x273DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DC8u;
label_273dc8:
    // 0x273dc8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_273dcc:
    if (ctx->pc == 0x273DCCu) {
        ctx->pc = 0x273DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC8u;
        // 0x273dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DD0u;
        goto label_273dd0;
    }
    ctx->pc = 0x273DC8u;
    {
        const bool branch_taken_0x273dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC8u;
        // 0x273dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dc8) {
            ctx->pc = 0x273F80u;
            goto label_273f80;
        }
    }
    ctx->pc = 0x273DD0u;
label_273dd0:
    // 0x273dd0: 0xc09d17a  jal         func_2745E8
label_273dd4:
    if (ctx->pc == 0x273DD4u) {
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DD0u;
        // 0x273dd4: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DD8u;
        goto label_273dd8;
    }
    ctx->pc = 0x273DD0u;
    SET_GPR_U32(ctx, 31, 0x273DD8u);
    ctx->pc = 0x273DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DD0u;
    // 0x273dd4: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2745E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745E8u, 0x273DD0u, 0x273DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DD8u;
label_273dd8:
    // 0x273dd8: 0x8e64013c  lw          $a0, 0x13C($s3)
    ctx->pc = 0x273dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_273ddc:
    // 0x273ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273de0:
    // 0x273de0: 0xc09d22a  jal         func_2748A8
label_273de4:
    if (ctx->pc == 0x273DE4u) {
        ctx->pc = 0x273DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE0u;
        // 0x273de4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DE8u;
        goto label_273de8;
    }
    ctx->pc = 0x273DE0u;
    SET_GPR_U32(ctx, 31, 0x273DE8u);
    ctx->pc = 0x273DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DE0u;
    // 0x273de4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2748A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748A8u, 0x273DE0u, 0x273DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DE8u;
label_273de8:
    // 0x273de8: 0xc09d17a  jal         func_2745E8
label_273dec:
    if (ctx->pc == 0x273DECu) {
        ctx->pc = 0x273DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE8u;
        // 0x273dec: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DF0u;
        goto label_273df0;
    }
    ctx->pc = 0x273DE8u;
    SET_GPR_U32(ctx, 31, 0x273DF0u);
    ctx->pc = 0x273DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DE8u;
    // 0x273dec: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2745E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745E8u, 0x273DE8u, 0x273DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DF0u;
label_273df0:
    // 0x273df0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_273df4:
    if (ctx->pc == 0x273DF4u) {
        ctx->pc = 0x273DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DF0u;
        // 0x273df4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DF8u;
        goto label_273df8;
    }
    ctx->pc = 0x273DF0u;
    {
        const bool branch_taken_0x273df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DF0u;
        // 0x273df4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273df0) {
            ctx->pc = 0x273E0Cu;
            goto label_273e0c;
        }
    }
    ctx->pc = 0x273DF8u;
label_273df8:
    // 0x273df8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_273dfc:
    if (ctx->pc == 0x273DFCu) {
        ctx->pc = 0x273DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DF8u;
        // 0x273dfc: 0x824501b0  lb          $a1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E00u;
        goto label_273e00;
    }
    ctx->pc = 0x273DF8u;
    {
        const bool branch_taken_0x273df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x273df8) {
            ctx->pc = 0x273DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273DF8u;
            // 0x273dfc: 0x824501b0  lb          $a1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E10u;
            goto label_273e10;
        }
    }
    ctx->pc = 0x273E00u;
label_273e00:
    // 0x273e00: 0xc09e084  jal         func_278210
label_273e04:
    if (ctx->pc == 0x273E04u) {
        ctx->pc = 0x273E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E00u;
        // 0x273e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E08u;
        goto label_273e08;
    }
    ctx->pc = 0x273E00u;
    SET_GPR_U32(ctx, 31, 0x273E08u);
    ctx->pc = 0x273E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E00u;
    // 0x273e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278210u, 0x273E00u, 0x273E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E08u;
label_273e08:
    // 0x273e08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_273e0c:
    // 0x273e0c: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x273e0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_273e10:
    // 0x273e10: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_273e14:
    // 0x273e14: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x273e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273e18:
    // 0x273e18: 0xc107908  jal         func_41E420
label_273e1c:
    if (ctx->pc == 0x273E1Cu) {
        ctx->pc = 0x273E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E18u;
        // 0x273e1c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E20u;
        goto label_273e20;
    }
    ctx->pc = 0x273E18u;
    SET_GPR_U32(ctx, 31, 0x273E20u);
    ctx->pc = 0x273E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E18u;
    // 0x273e1c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x273E18u, 0x273E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E20u;
label_273e20:
    // 0x273e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_273e24:
    // 0x273e24: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x273e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_273e28:
    // 0x273e28: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x273e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273e2c:
    // 0x273e2c: 0x8e64013c  lw          $a0, 0x13C($s3)
    ctx->pc = 0x273e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_273e30:
    // 0x273e30: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x273e30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_273e34:
    // 0x273e34: 0x2845000a  slti        $a1, $v0, 0xA
    ctx->pc = 0x273e34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_273e38:
    // 0x273e38: 0xc5100a  movz        $v0, $a2, $a1
    ctx->pc = 0x273e38u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_273e3c:
    // 0x273e3c: 0xc09d17e  jal         func_2745F8
label_273e40:
    if (ctx->pc == 0x273E40u) {
        ctx->pc = 0x273E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E3Cu;
        // 0x273e40: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E44u;
        goto label_273e44;
    }
    ctx->pc = 0x273E3Cu;
    SET_GPR_U32(ctx, 31, 0x273E44u);
    ctx->pc = 0x273E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E3Cu;
    // 0x273e40: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745F8u, 0x273E3Cu, 0x273E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E44u;
label_273e44:
    // 0x273e44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_273e48:
    if (ctx->pc == 0x273E48u) {
        ctx->pc = 0x273E4Cu;
        goto label_273e4c;
    }
    ctx->pc = 0x273E44u;
    {
        const bool branch_taken_0x273e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e44) {
            ctx->pc = 0x273E64u;
            goto label_273e64;
        }
    }
    ctx->pc = 0x273E4Cu;
label_273e4c:
    // 0x273e4c: 0xc09ee9a  jal         func_27BA68
label_273e50:
    if (ctx->pc == 0x273E50u) {
        ctx->pc = 0x273E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E4Cu;
        // 0x273e50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E54u;
        goto label_273e54;
    }
    ctx->pc = 0x273E4Cu;
    SET_GPR_U32(ctx, 31, 0x273E54u);
    ctx->pc = 0x273E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E4Cu;
    // 0x273e50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA68u, 0x273E4Cu, 0x273E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E54u;
label_273e54:
    // 0x273e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_273e58:
    if (ctx->pc == 0x273E58u) {
        ctx->pc = 0x273E5Cu;
        goto label_273e5c;
    }
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e54) {
            ctx->pc = 0x273E64u;
            goto label_273e64;
        }
    }
    ctx->pc = 0x273E5Cu;
label_273e5c:
    // 0x273e5c: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
label_273e60:
    if (ctx->pc == 0x273E60u) {
        ctx->pc = 0x273E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E5Cu;
        // 0x273e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E64u;
        goto label_273e64;
    }
    ctx->pc = 0x273E5Cu;
    {
        const bool branch_taken_0x273e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E5Cu;
        // 0x273e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e5c) {
            ctx->pc = 0x273F80u;
            goto label_273f80;
        }
    }
    ctx->pc = 0x273E64u;
label_273e64:
    // 0x273e64: 0xc09d17e  jal         func_2745F8
label_273e68:
    if (ctx->pc == 0x273E68u) {
        ctx->pc = 0x273E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E64u;
        // 0x273e68: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E6Cu;
        goto label_273e6c;
    }
    ctx->pc = 0x273E64u;
    SET_GPR_U32(ctx, 31, 0x273E6Cu);
    ctx->pc = 0x273E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E64u;
    // 0x273e68: 0x8e64013c  lw          $a0, 0x13C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745F8u, 0x273E64u, 0x273E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E6Cu;
label_273e6c:
    // 0x273e6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_273e70:
    if (ctx->pc == 0x273E70u) {
        ctx->pc = 0x273E74u;
        goto label_273e74;
    }
    ctx->pc = 0x273E6Cu;
    {
        const bool branch_taken_0x273e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273e6c) {
            ctx->pc = 0x273F10u;
            goto label_273f10;
        }
    }
    ctx->pc = 0x273E74u;
label_273e74:
    // 0x273e74: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x273e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
label_273e78:
    // 0x273e78: 0x8c4304fc  lw          $v1, 0x4FC($v0)
    ctx->pc = 0x273e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1276)));
label_273e7c:
    // 0x273e7c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_273e80:
    if (ctx->pc == 0x273E80u) {
        ctx->pc = 0x273E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E7Cu;
        // 0x273e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E84u;
        goto label_273e84;
    }
    ctx->pc = 0x273E7Cu;
    {
        const bool branch_taken_0x273e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E7Cu;
        // 0x273e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e7c) {
            ctx->pc = 0x273F10u;
            goto label_273f10;
        }
    }
    ctx->pc = 0x273E84u;
label_273e84:
    // 0x273e84: 0x8e43036c  lw          $v1, 0x36C($s2)
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_273e88:
    // 0x273e88: 0xa24203ba  sb          $v0, 0x3BA($s2)
    ctx->pc = 0x273e88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 954), (uint8_t)GPR_U32(ctx, 2));
label_273e8c:
    // 0x273e8c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x273e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_273e90:
    // 0x273e90: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x273e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_273e94:
    // 0x273e94: 0xc0e4060  jal         func_390180
label_273e98:
    if (ctx->pc == 0x273E98u) {
        ctx->pc = 0x273E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E94u;
        // 0x273e98: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E9Cu;
        goto label_273e9c;
    }
    ctx->pc = 0x273E94u;
    SET_GPR_U32(ctx, 31, 0x273E9Cu);
    ctx->pc = 0x273E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E94u;
    // 0x273e98: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x273E94u, 0x273E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E9Cu;
label_273e9c:
    // 0x273e9c: 0xc0e6ee8  jal         func_39BBA0
label_273ea0:
    if (ctx->pc == 0x273EA0u) {
        ctx->pc = 0x273EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E9Cu;
        // 0x273ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EA4u;
        goto label_273ea4;
    }
    ctx->pc = 0x273E9Cu;
    SET_GPR_U32(ctx, 31, 0x273EA4u);
    ctx->pc = 0x273EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E9Cu;
    // 0x273ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x273E9Cu, 0x273EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EA4u;
label_273ea4:
    // 0x273ea4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273ea8:
    // 0x273ea8: 0xc0e8b48  jal         func_3A2D20
label_273eac:
    if (ctx->pc == 0x273EACu) {
        ctx->pc = 0x273EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EA8u;
        // 0x273eac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EB0u;
        goto label_273eb0;
    }
    ctx->pc = 0x273EA8u;
    SET_GPR_U32(ctx, 31, 0x273EB0u);
    ctx->pc = 0x273EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EA8u;
    // 0x273eac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x273EA8u, 0x273EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EB0u;
label_273eb0:
    // 0x273eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_273eb4:
    // 0x273eb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273eb8:
    // 0x273eb8: 0xc0e8b78  jal         func_3A2DE0
label_273ebc:
    if (ctx->pc == 0x273EBCu) {
        ctx->pc = 0x273EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EB8u;
        // 0x273ebc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EC0u;
        goto label_273ec0;
    }
    ctx->pc = 0x273EB8u;
    SET_GPR_U32(ctx, 31, 0x273EC0u);
    ctx->pc = 0x273EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EB8u;
    // 0x273ebc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x273EB8u, 0x273EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EC0u;
label_273ec0:
    // 0x273ec0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273ec4:
    // 0x273ec4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_273ec8:
    // 0x273ec8: 0xc0e8b80  jal         func_3A2E00
label_273ecc:
    if (ctx->pc == 0x273ECCu) {
        ctx->pc = 0x273ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EC8u;
        // 0x273ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED0u;
        goto label_273ed0;
    }
    ctx->pc = 0x273EC8u;
    SET_GPR_U32(ctx, 31, 0x273ED0u);
    ctx->pc = 0x273ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EC8u;
    // 0x273ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x273EC8u, 0x273ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ED0u;
label_273ed0:
    // 0x273ed0: 0xc0e8b50  jal         func_3A2D40
label_273ed4:
    if (ctx->pc == 0x273ED4u) {
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED8u;
        goto label_273ed8;
    }
    ctx->pc = 0x273ED0u;
    SET_GPR_U32(ctx, 31, 0x273ED8u);
    ctx->pc = 0x273ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273ED0u;
    // 0x273ed4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x273ED0u, 0x273ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ED8u;
label_273ed8:
    // 0x273ed8: 0xc0e8b48  jal         func_3A2D20
label_273edc:
    if (ctx->pc == 0x273EDCu) {
        ctx->pc = 0x273EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED8u;
        // 0x273edc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EE0u;
        goto label_273ee0;
    }
    ctx->pc = 0x273ED8u;
    SET_GPR_U32(ctx, 31, 0x273EE0u);
    ctx->pc = 0x273EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273ED8u;
    // 0x273edc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x273ED8u, 0x273EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EE0u;
label_273ee0:
    // 0x273ee0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273ee4:
    // 0x273ee4: 0xc0e8b68  jal         func_3A2DA0
label_273ee8:
    if (ctx->pc == 0x273EE8u) {
        ctx->pc = 0x273EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EE4u;
        // 0x273ee8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EECu;
        goto label_273eec;
    }
    ctx->pc = 0x273EE4u;
    SET_GPR_U32(ctx, 31, 0x273EECu);
    ctx->pc = 0x273EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EE4u;
    // 0x273ee8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x273EE4u, 0x273EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EECu;
label_273eec:
    // 0x273eec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x273eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_273ef0:
    // 0x273ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273ef4:
    // 0x273ef4: 0xc0e8b80  jal         func_3A2E00
label_273ef8:
    if (ctx->pc == 0x273EF8u) {
        ctx->pc = 0x273EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EF4u;
        // 0x273ef8: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EFCu;
        goto label_273efc;
    }
    ctx->pc = 0x273EF4u;
    SET_GPR_U32(ctx, 31, 0x273EFCu);
    ctx->pc = 0x273EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EF4u;
    // 0x273ef8: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x273EF4u, 0x273EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EFCu;
label_273efc:
    // 0x273efc: 0xc0e8b50  jal         func_3A2D40
label_273f00:
    if (ctx->pc == 0x273F00u) {
        ctx->pc = 0x273F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EFCu;
        // 0x273f00: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F04u;
        goto label_273f04;
    }
    ctx->pc = 0x273EFCu;
    SET_GPR_U32(ctx, 31, 0x273F04u);
    ctx->pc = 0x273F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EFCu;
    // 0x273f00: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x273EFCu, 0x273F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F04u;
label_273f04:
    // 0x273f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273f08:
    // 0x273f08: 0xc09ce9a  jal         func_273A68
label_273f0c:
    if (ctx->pc == 0x273F0Cu) {
        ctx->pc = 0x273F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F08u;
        // 0x273f0c: 0x24050053  addiu       $a1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F10u;
        goto label_273f10;
    }
    ctx->pc = 0x273F08u;
    SET_GPR_U32(ctx, 31, 0x273F10u);
    ctx->pc = 0x273F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F08u;
    // 0x273f0c: 0x24050053  addiu       $a1, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A68u, 0x273F08u, 0x273F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F10u;
label_273f10:
    // 0x273f10: 0xc09e0ec  jal         func_2783B0
label_273f14:
    if (ctx->pc == 0x273F14u) {
        ctx->pc = 0x273F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F10u;
        // 0x273f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F18u;
        goto label_273f18;
    }
    ctx->pc = 0x273F10u;
    SET_GPR_U32(ctx, 31, 0x273F18u);
    ctx->pc = 0x273F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F10u;
    // 0x273f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783B0u, 0x273F10u, 0x273F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F18u;
label_273f18:
    // 0x273f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273f1c:
    // 0x273f1c: 0xc0899aa  jal         func_2266A8
label_273f20:
    if (ctx->pc == 0x273F20u) {
        ctx->pc = 0x273F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F1Cu;
        // 0x273f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F24u;
        goto label_273f24;
    }
    ctx->pc = 0x273F1Cu;
    SET_GPR_U32(ctx, 31, 0x273F24u);
    ctx->pc = 0x273F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F1Cu;
    // 0x273f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x273F1Cu, 0x273F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F24u;
label_273f24:
    // 0x273f24: 0xa280001d  sb          $zero, 0x1D($s4)
    ctx->pc = 0x273f24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
label_273f28:
    // 0x273f28: 0x10000014  b           . + 4 + (0x14 << 2)
label_273f2c:
    if (ctx->pc == 0x273F2Cu) {
        ctx->pc = 0x273F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F28u;
        // 0x273f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F30u;
        goto label_273f30;
    }
    ctx->pc = 0x273F28u;
    {
        const bool branch_taken_0x273f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F28u;
        // 0x273f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f28) {
            ctx->pc = 0x273F7Cu;
            goto label_273f7c;
        }
    }
    ctx->pc = 0x273F30u;
label_273f30:
    // 0x273f30: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x273f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_273f34:
    // 0x273f34: 0x2442ffe9  addiu       $v0, $v0, -0x17
    ctx->pc = 0x273f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
label_273f38:
    // 0x273f38: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x273f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_273f3c:
    // 0x273f3c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_273f40:
    if (ctx->pc == 0x273F40u) {
        ctx->pc = 0x273F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F3Cu;
        // 0x273f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F44u;
        goto label_273f44;
    }
    ctx->pc = 0x273F3Cu;
    {
        const bool branch_taken_0x273f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F3Cu;
        // 0x273f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f3c) {
            ctx->pc = 0x273F6Cu;
            goto label_273f6c;
        }
    }
    ctx->pc = 0x273F44u;
label_273f44:
    // 0x273f44: 0xc08997c  jal         func_2265F0
label_273f48:
    if (ctx->pc == 0x273F48u) {
        ctx->pc = 0x273F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F44u;
        // 0x273f48: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F4Cu;
        goto label_273f4c;
    }
    ctx->pc = 0x273F44u;
    SET_GPR_U32(ctx, 31, 0x273F4Cu);
    ctx->pc = 0x273F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F44u;
    // 0x273f48: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x273F44u, 0x273F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F4Cu;
label_273f4c:
    // 0x273f4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_273f50:
    if (ctx->pc == 0x273F50u) {
        ctx->pc = 0x273F54u;
        goto label_273f54;
    }
    ctx->pc = 0x273F4Cu;
    {
        const bool branch_taken_0x273f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f4c) {
            ctx->pc = 0x273F6Cu;
            goto label_273f6c;
        }
    }
    ctx->pc = 0x273F54u;
label_273f54:
    // 0x273f54: 0xc0e4060  jal         func_390180
label_273f58:
    if (ctx->pc == 0x273F58u) {
        ctx->pc = 0x273F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F54u;
        // 0x273f58: 0x2644036c  addiu       $a0, $s2, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F5Cu;
        goto label_273f5c;
    }
    ctx->pc = 0x273F54u;
    SET_GPR_U32(ctx, 31, 0x273F5Cu);
    ctx->pc = 0x273F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F54u;
    // 0x273f58: 0x2644036c  addiu       $a0, $s2, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x273F54u, 0x273F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F5Cu;
label_273f5c:
    // 0x273f5c: 0xc0e6ee8  jal         func_39BBA0
label_273f60:
    if (ctx->pc == 0x273F60u) {
        ctx->pc = 0x273F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F5Cu;
        // 0x273f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F64u;
        goto label_273f64;
    }
    ctx->pc = 0x273F5Cu;
    SET_GPR_U32(ctx, 31, 0x273F64u);
    ctx->pc = 0x273F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F5Cu;
    // 0x273f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x273F5Cu, 0x273F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F64u;
label_273f64:
    // 0x273f64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_273f68:
    if (ctx->pc == 0x273F68u) {
        ctx->pc = 0x273F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F64u;
        // 0x273f68: 0xa280001d  sb          $zero, 0x1D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F6Cu;
        goto label_273f6c;
    }
    ctx->pc = 0x273F64u;
    {
        const bool branch_taken_0x273f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f64) {
            ctx->pc = 0x273F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F64u;
            // 0x273f68: 0xa280001d  sb          $zero, 0x1D($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F78u;
            goto label_273f78;
        }
    }
    ctx->pc = 0x273F6Cu;
label_273f6c:
    // 0x273f6c: 0xc08ba12  jal         func_22E848
label_273f70:
    if (ctx->pc == 0x273F70u) {
        ctx->pc = 0x273F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F6Cu;
        // 0x273f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F74u;
        goto label_273f74;
    }
    ctx->pc = 0x273F6Cu;
    SET_GPR_U32(ctx, 31, 0x273F74u);
    ctx->pc = 0x273F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F6Cu;
    // 0x273f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x273F6Cu, 0x273F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F74u;
label_273f74:
    // 0x273f74: 0xa280001d  sb          $zero, 0x1D($s4)
    ctx->pc = 0x273f74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
label_273f78:
    // 0x273f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273f7c:
    // 0x273f7c: 0xa280001c  sb          $zero, 0x1C($s4)
    ctx->pc = 0x273f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 0));
label_273f80:
    // 0x273f80: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x273f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273f84:
    // 0x273f84: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x273f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_273f88:
    // 0x273f88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x273f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273f8c:
    // 0x273f8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273f90:
    // 0x273f90: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x273f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273f94:
    // 0x273f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273f98:
    // 0x273f98: 0x3e00008  jr          $ra
label_273f9c:
    if (ctx->pc == 0x273F9Cu) {
        ctx->pc = 0x273F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F98u;
        // 0x273f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273FA0u;
        goto label_fallthrough_0x273f98;
    }
    ctx->pc = 0x273F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F98u;
        // 0x273f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x273f98:
    ctx->pc = 0x273FA0u;
}
