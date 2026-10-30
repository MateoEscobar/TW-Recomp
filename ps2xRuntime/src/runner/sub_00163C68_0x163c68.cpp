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

// Function: sub_00163C68
// Address: 0x163c68 - 0x163e98
void sub_00163C68_0x163c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C68_0x163c68");
#endif

    switch (ctx->pc) {
        case 0x163c68u: goto label_163c68;
        case 0x163c6cu: goto label_163c6c;
        case 0x163c70u: goto label_163c70;
        case 0x163c74u: goto label_163c74;
        case 0x163c78u: goto label_163c78;
        case 0x163c7cu: goto label_163c7c;
        case 0x163c80u: goto label_163c80;
        case 0x163c84u: goto label_163c84;
        case 0x163c88u: goto label_163c88;
        case 0x163c8cu: goto label_163c8c;
        case 0x163c90u: goto label_163c90;
        case 0x163c94u: goto label_163c94;
        case 0x163c98u: goto label_163c98;
        case 0x163c9cu: goto label_163c9c;
        case 0x163ca0u: goto label_163ca0;
        case 0x163ca4u: goto label_163ca4;
        case 0x163ca8u: goto label_163ca8;
        case 0x163cacu: goto label_163cac;
        case 0x163cb0u: goto label_163cb0;
        case 0x163cb4u: goto label_163cb4;
        case 0x163cb8u: goto label_163cb8;
        case 0x163cbcu: goto label_163cbc;
        case 0x163cc0u: goto label_163cc0;
        case 0x163cc4u: goto label_163cc4;
        case 0x163cc8u: goto label_163cc8;
        case 0x163cccu: goto label_163ccc;
        case 0x163cd0u: goto label_163cd0;
        case 0x163cd4u: goto label_163cd4;
        case 0x163cd8u: goto label_163cd8;
        case 0x163cdcu: goto label_163cdc;
        case 0x163ce0u: goto label_163ce0;
        case 0x163ce4u: goto label_163ce4;
        case 0x163ce8u: goto label_163ce8;
        case 0x163cecu: goto label_163cec;
        case 0x163cf0u: goto label_163cf0;
        case 0x163cf4u: goto label_163cf4;
        case 0x163cf8u: goto label_163cf8;
        case 0x163cfcu: goto label_163cfc;
        case 0x163d00u: goto label_163d00;
        case 0x163d04u: goto label_163d04;
        case 0x163d08u: goto label_163d08;
        case 0x163d0cu: goto label_163d0c;
        case 0x163d10u: goto label_163d10;
        case 0x163d14u: goto label_163d14;
        case 0x163d18u: goto label_163d18;
        case 0x163d1cu: goto label_163d1c;
        case 0x163d20u: goto label_163d20;
        case 0x163d24u: goto label_163d24;
        case 0x163d28u: goto label_163d28;
        case 0x163d2cu: goto label_163d2c;
        case 0x163d30u: goto label_163d30;
        case 0x163d34u: goto label_163d34;
        case 0x163d38u: goto label_163d38;
        case 0x163d3cu: goto label_163d3c;
        case 0x163d40u: goto label_163d40;
        case 0x163d44u: goto label_163d44;
        case 0x163d48u: goto label_163d48;
        case 0x163d4cu: goto label_163d4c;
        case 0x163d50u: goto label_163d50;
        case 0x163d54u: goto label_163d54;
        case 0x163d58u: goto label_163d58;
        case 0x163d5cu: goto label_163d5c;
        case 0x163d60u: goto label_163d60;
        case 0x163d64u: goto label_163d64;
        case 0x163d68u: goto label_163d68;
        case 0x163d6cu: goto label_163d6c;
        case 0x163d70u: goto label_163d70;
        case 0x163d74u: goto label_163d74;
        case 0x163d78u: goto label_163d78;
        case 0x163d7cu: goto label_163d7c;
        case 0x163d80u: goto label_163d80;
        case 0x163d84u: goto label_163d84;
        case 0x163d88u: goto label_163d88;
        case 0x163d8cu: goto label_163d8c;
        case 0x163d90u: goto label_163d90;
        case 0x163d94u: goto label_163d94;
        case 0x163d98u: goto label_163d98;
        case 0x163d9cu: goto label_163d9c;
        case 0x163da0u: goto label_163da0;
        case 0x163da4u: goto label_163da4;
        case 0x163da8u: goto label_163da8;
        case 0x163dacu: goto label_163dac;
        case 0x163db0u: goto label_163db0;
        case 0x163db4u: goto label_163db4;
        case 0x163db8u: goto label_163db8;
        case 0x163dbcu: goto label_163dbc;
        case 0x163dc0u: goto label_163dc0;
        case 0x163dc4u: goto label_163dc4;
        case 0x163dc8u: goto label_163dc8;
        case 0x163dccu: goto label_163dcc;
        case 0x163dd0u: goto label_163dd0;
        case 0x163dd4u: goto label_163dd4;
        case 0x163dd8u: goto label_163dd8;
        case 0x163ddcu: goto label_163ddc;
        case 0x163de0u: goto label_163de0;
        case 0x163de4u: goto label_163de4;
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        default: break;
    }

    ctx->pc = 0x163c68u;

label_163c68:
    // 0x163c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x163c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_163c6c:
    // 0x163c6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x163c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163c70:
    // 0x163c70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x163c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_163c74:
    // 0x163c74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x163c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_163c78:
    // 0x163c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_163c7c:
    // 0x163c7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x163c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_163c80:
    // 0x163c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163c84:
    // 0x163c84: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x163c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_163c88:
    // 0x163c88: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x163c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_163c8c:
    // 0x163c8c: 0x1860007b  blez        $v1, . + 4 + (0x7B << 2)
label_163c90:
    if (ctx->pc == 0x163C90u) {
        ctx->pc = 0x163C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C8Cu;
        // 0x163c90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163C94u;
        goto label_163c94;
    }
    ctx->pc = 0x163C8Cu;
    {
        const bool branch_taken_0x163c8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x163C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C8Cu;
        // 0x163c90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c8c) {
            ctx->pc = 0x163E7Cu;
            goto label_163e7c;
        }
    }
    ctx->pc = 0x163C94u;
label_163c94:
    // 0x163c94: 0x90820410  lbu         $v0, 0x410($a0)
    ctx->pc = 0x163c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1040)));
label_163c98:
    // 0x163c98: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_163c9c:
    if (ctx->pc == 0x163C9Cu) {
        ctx->pc = 0x163C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C98u;
        // 0x163c9c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CA0u;
        goto label_163ca0;
    }
    ctx->pc = 0x163C98u;
    {
        const bool branch_taken_0x163c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C98u;
        // 0x163c9c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c98) {
            ctx->pc = 0x163E80u;
            goto label_163e80;
        }
    }
    ctx->pc = 0x163CA0u;
label_163ca0:
    // 0x163ca0: 0xc0e409a  jal         func_390268
label_163ca4:
    if (ctx->pc == 0x163CA4u) {
        ctx->pc = 0x163CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CA0u;
        // 0x163ca4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CA8u;
        goto label_163ca8;
    }
    ctx->pc = 0x163CA0u;
    SET_GPR_U32(ctx, 31, 0x163CA8u);
    ctx->pc = 0x163CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CA0u;
    // 0x163ca4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x163CA0u, 0x163CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CA8u;
label_163ca8:
    // 0x163ca8: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
label_163cac:
    if (ctx->pc == 0x163CACu) {
        ctx->pc = 0x163CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CA8u;
        // 0x163cac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CB0u;
        goto label_163cb0;
    }
    ctx->pc = 0x163CA8u;
    {
        const bool branch_taken_0x163ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ca8) {
            ctx->pc = 0x163CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CA8u;
            // 0x163cac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E7Cu;
            goto label_163e7c;
        }
    }
    ctx->pc = 0x163CB0u;
label_163cb0:
    // 0x163cb0: 0xc0874fa  jal         func_21D3E8
label_163cb4:
    if (ctx->pc == 0x163CB4u) {
        ctx->pc = 0x163CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CB0u;
        // 0x163cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CB8u;
        goto label_163cb8;
    }
    ctx->pc = 0x163CB0u;
    SET_GPR_U32(ctx, 31, 0x163CB8u);
    ctx->pc = 0x163CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CB0u;
    // 0x163cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x163CB0u, 0x163CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CB8u;
label_163cb8:
    // 0x163cb8: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
label_163cbc:
    if (ctx->pc == 0x163CBCu) {
        ctx->pc = 0x163CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CB8u;
        // 0x163cbc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CC0u;
        goto label_163cc0;
    }
    ctx->pc = 0x163CB8u;
    {
        const bool branch_taken_0x163cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cb8) {
            ctx->pc = 0x163CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CB8u;
            // 0x163cbc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E7Cu;
            goto label_163e7c;
        }
    }
    ctx->pc = 0x163CC0u;
label_163cc0:
    // 0x163cc0: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_163cc4:
    // 0x163cc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x163cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163cc8:
    // 0x163cc8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_163ccc:
    if (ctx->pc == 0x163CCCu) {
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CD0u;
        goto label_163cd0;
    }
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x163CE4u;
            goto label_163ce4;
        }
    }
    ctx->pc = 0x163CD0u;
label_163cd0:
    // 0x163cd0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x163cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_163cd4:
    // 0x163cd4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x163cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_163cd8:
    // 0x163cd8: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x163cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_163cdc:
    // 0x163cdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_163ce0:
    if (ctx->pc == 0x163CE0u) {
        ctx->pc = 0x163CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CDCu;
        // 0x163ce0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CE4u;
        goto label_163ce4;
    }
    ctx->pc = 0x163CDCu;
    {
        const bool branch_taken_0x163cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CDCu;
        // 0x163ce0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cdc) {
            ctx->pc = 0x163CE8u;
            goto label_163ce8;
        }
    }
    ctx->pc = 0x163CE4u;
label_163ce4:
    // 0x163ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x163ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ce8:
    // 0x163ce8: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
label_163cec:
    if (ctx->pc == 0x163CECu) {
        ctx->pc = 0x163CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE8u;
        // 0x163cec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CF0u;
        goto label_163cf0;
    }
    ctx->pc = 0x163CE8u;
    {
        const bool branch_taken_0x163ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE8u;
        // 0x163cec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce8) {
            ctx->pc = 0x163E7Cu;
            goto label_163e7c;
        }
    }
    ctx->pc = 0x163CF0u;
label_163cf0:
    // 0x163cf0: 0xc051282  jal         func_144A08
label_163cf4:
    if (ctx->pc == 0x163CF4u) {
        ctx->pc = 0x163CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CF0u;
        // 0x163cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163CF8u;
        goto label_163cf8;
    }
    ctx->pc = 0x163CF0u;
    SET_GPR_U32(ctx, 31, 0x163CF8u);
    ctx->pc = 0x163CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CF0u;
    // 0x163cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x163CF0u, 0x163CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CF8u;
label_163cf8:
    // 0x163cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163cfc:
    // 0x163cfc: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
label_163d00:
    if (ctx->pc == 0x163D00u) {
        ctx->pc = 0x163D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CFCu;
        // 0x163d00: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D04u;
        goto label_163d04;
    }
    ctx->pc = 0x163CFCu;
    {
        const bool branch_taken_0x163cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CFCu;
        // 0x163d00: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cfc) {
            ctx->pc = 0x163E70u;
            goto label_163e70;
        }
    }
    ctx->pc = 0x163D04u;
label_163d04:
    // 0x163d04: 0x8c626e0c  lw          $v0, 0x6E0C($v1)
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28172)));
label_163d08:
    // 0x163d08: 0x10a2005b  beq         $a1, $v0, . + 4 + (0x5B << 2)
label_163d0c:
    if (ctx->pc == 0x163D0Cu) {
        ctx->pc = 0x163D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D08u;
        // 0x163d0c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D10u;
        goto label_163d10;
    }
    ctx->pc = 0x163D08u;
    {
        const bool branch_taken_0x163d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D08u;
        // 0x163d0c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d08) {
            ctx->pc = 0x163E78u;
            goto label_163e78;
        }
    }
    ctx->pc = 0x163D10u;
label_163d10:
    // 0x163d10: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
label_163d14:
    // 0x163d14: 0xae456e0c  sw          $a1, 0x6E0C($s2)
    ctx->pc = 0x163d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28172), GPR_U32(ctx, 5));
label_163d18:
    // 0x163d18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x163d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d1c:
    // 0x163d1c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_163d20:
    // 0x163d20: 0x25646df0  addiu       $a0, $t3, 0x6DF0
    ctx->pc = 0x163d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 28144));
label_163d24:
    // 0x163d24: 0x0  nop
    ctx->pc = 0x163d24u;
    // NOP
label_163d28:
    // 0x163d28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_163d2c:
    // 0x163d2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163d30:
    // 0x163d30: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x163d30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_163d34:
    // 0x163d34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x163d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_163d38:
    // 0x163d38: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_163d3c:
    if (ctx->pc == 0x163D3Cu) {
        ctx->pc = 0x163D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D38u;
        // 0x163d3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D40u;
        goto label_163d40;
    }
    ctx->pc = 0x163D38u;
    {
        const bool branch_taken_0x163d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D38u;
        // 0x163d3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d38) {
            ctx->pc = 0x163D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d28;
        }
    }
    ctx->pc = 0x163D40u;
label_163d40:
    // 0x163d40: 0x25636df0  addiu       $v1, $t3, 0x6DF0
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 28144));
label_163d44:
    // 0x163d44: 0x8cc2c7f8  lw          $v0, -0x3808($a2)
    ctx->pc = 0x163d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952952)));
label_163d48:
    // 0x163d48: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x163d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_163d4c:
    // 0x163d4c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_163d50:
    if (ctx->pc == 0x163D50u) {
        ctx->pc = 0x163D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D4Cu;
        // 0x163d50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D54u;
        goto label_163d54;
    }
    ctx->pc = 0x163D4Cu;
    {
        const bool branch_taken_0x163d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D4Cu;
        // 0x163d50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d4c) {
            ctx->pc = 0x163E78u;
            goto label_163e78;
        }
    }
    ctx->pc = 0x163D54u;
label_163d54:
    // 0x163d54: 0x24c9c7f8  addiu       $t1, $a2, -0x3808
    ctx->pc = 0x163d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952952));
label_163d58:
    // 0x163d58: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x163d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_163d5c:
    // 0x163d5c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x163d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_163d60:
    // 0x163d60: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x163d60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_163d64:
    // 0x163d64: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x163d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_163d68:
    // 0x163d68: 0x2081818  mult        $v1, $s0, $t0
    ctx->pc = 0x163d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_163d6c:
    // 0x163d6c: 0x0  nop
    ctx->pc = 0x163d6cu;
    // NOP
label_163d70:
    // 0x163d70: 0x8d646df0  lw          $a0, 0x6DF0($t3)
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28144)));
label_163d74:
    // 0x163d74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x163d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163d78:
    // 0x163d78: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x163d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_163d7c:
    // 0x163d7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_163d80:
    // 0x163d80: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
label_163d84:
    if (ctx->pc == 0x163D84u) {
        ctx->pc = 0x163D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D80u;
        // 0x163d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D88u;
        goto label_163d88;
    }
    ctx->pc = 0x163D80u;
    {
        const bool branch_taken_0x163d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x163D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D80u;
        // 0x163d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d80) {
            ctx->pc = 0x163DBCu;
            goto label_163dbc;
        }
    }
    ctx->pc = 0x163D88u;
label_163d88:
    // 0x163d88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_163d8c:
    // 0x163d8c: 0x0  nop
    ctx->pc = 0x163d8cu;
    // NOP
label_163d90:
    // 0x163d90: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x163d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_163d94:
    // 0x163d94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_163d98:
    if (ctx->pc == 0x163D98u) {
        ctx->pc = 0x163D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D94u;
        // 0x163d98: 0x2082018  mult        $a0, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x163D9Cu;
        goto label_163d9c;
    }
    ctx->pc = 0x163D94u;
    {
        const bool branch_taken_0x163d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D94u;
        // 0x163d98: 0x2082018  mult        $a0, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d94) {
            ctx->pc = 0x163DC0u;
            goto label_163dc0;
        }
    }
    ctx->pc = 0x163D9Cu;
label_163d9c:
    // 0x163d9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x163d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_163da0:
    // 0x163da0: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x163da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_163da4:
    // 0x163da4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x163da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163da8:
    // 0x163da8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x163da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_163dac:
    // 0x163dac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x163dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_163db0:
    // 0x163db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_163db4:
    // 0x163db4: 0x5065fff6  beql        $v1, $a1, . + 4 + (-0xA << 2)
label_163db8:
    if (ctx->pc == 0x163DB8u) {
        ctx->pc = 0x163DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DB4u;
        // 0x163db8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DBCu;
        goto label_163dbc;
    }
    ctx->pc = 0x163DB4u;
    {
        const bool branch_taken_0x163db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x163db4) {
            ctx->pc = 0x163DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163DB4u;
            // 0x163db8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d90;
        }
    }
    ctx->pc = 0x163DBCu;
label_163dbc:
    // 0x163dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163dc0:
    // 0x163dc0: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_163dc4:
    if (ctx->pc == 0x163DC4u) {
        ctx->pc = 0x163DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DC0u;
        // 0x163dc4: 0x8d85ca98  lw          $a1, -0x3568($t4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294953624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DC8u;
        goto label_163dc8;
    }
    ctx->pc = 0x163DC0u;
    {
        const bool branch_taken_0x163dc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DC0u;
        // 0x163dc4: 0x8d85ca98  lw          $a1, -0x3568($t4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294953624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dc0) {
            ctx->pc = 0x163E50u;
            goto label_163e50;
        }
    }
    ctx->pc = 0x163DC8u;
label_163dc8:
    // 0x163dc8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_163dcc:
    if (ctx->pc == 0x163DCCu) {
        ctx->pc = 0x163DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DC8u;
        // 0x163dcc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DD0u;
        goto label_163dd0;
    }
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DC8u;
        // 0x163dcc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163E28u;
            goto label_163e28;
        }
    }
    ctx->pc = 0x163DD0u;
label_163dd0:
    // 0x163dd0: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_163dd4:
    // 0x163dd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x163dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163dd8:
    // 0x163dd8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x163dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_163ddc:
    // 0x163ddc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x163ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_163de0:
    // 0x163de0: 0x40f809  jalr        $v0
label_163de4:
    if (ctx->pc == 0x163DE4u) {
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DE8u;
        goto label_163de8;
    }
    ctx->pc = 0x163DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163DE8u);
        ctx->pc = 0x163DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE0u;
        // 0x163de4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163DE0u, 0x163DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163DE8u;
label_163de8:
    // 0x163de8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_163dec:
    if (ctx->pc == 0x163DECu) {
        ctx->pc = 0x163DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE8u;
        // 0x163dec: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163DF0u;
        goto label_163df0;
    }
    ctx->pc = 0x163DE8u;
    {
        const bool branch_taken_0x163de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE8u;
        // 0x163dec: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163de8) {
            ctx->pc = 0x163E28u;
            goto label_163e28;
        }
    }
    ctx->pc = 0x163DF0u;
label_163df0:
    // 0x163df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163df4:
    // 0x163df4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x163df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163df8:
    // 0x163df8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x163df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_163dfc:
    // 0x163dfc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x163dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_163e00:
    // 0x163e00: 0x60f809  jalr        $v1
label_163e04:
    if (ctx->pc == 0x163E04u) {
        ctx->pc = 0x163E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E00u;
        // 0x163e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E08u;
        goto label_163e08;
    }
    ctx->pc = 0x163E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163E08u);
        ctx->pc = 0x163E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E00u;
        // 0x163e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E00u, 0x163E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163E08u;
label_163e08:
    // 0x163e08: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x163e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_163e0c:
    // 0x163e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163e10:
    // 0x163e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e14:
    // 0x163e14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x163e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_163e18:
    // 0x163e18: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_163e1c:
    // 0x163e1c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x163e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_163e20:
    // 0x163e20: 0x60f809  jalr        $v1
label_163e24:
    if (ctx->pc == 0x163E24u) {
        ctx->pc = 0x163E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E20u;
        // 0x163e24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E28u;
        goto label_163e28;
    }
    ctx->pc = 0x163E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163E28u);
        ctx->pc = 0x163E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E20u;
        // 0x163e24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E20u, 0x163E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163E28u;
label_163e28:
    // 0x163e28: 0x26636df0  addiu       $v1, $s3, 0x6DF0
    ctx->pc = 0x163e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28144));
label_163e2c:
    // 0x163e2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x163e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e30:
    // 0x163e30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x163e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_163e34:
    // 0x163e34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x163e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163e38:
    // 0x163e38: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x163e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_163e3c:
    // 0x163e3c: 0x0  nop
    ctx->pc = 0x163e3cu;
    // NOP
label_163e40:
    // 0x163e40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_163e44:
    if (ctx->pc == 0x163E44u) {
        ctx->pc = 0x163E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E40u;
        // 0x163e44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E48u;
        goto label_163e48;
    }
    ctx->pc = 0x163E40u;
    {
        const bool branch_taken_0x163e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E40u;
        // 0x163e44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e40) {
            ctx->pc = 0x163E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e30;
        }
    }
    ctx->pc = 0x163E48u;
label_163e48:
    // 0x163e48: 0x1000000b  b           . + 4 + (0xB << 2)
label_163e4c:
    if (ctx->pc == 0x163E4Cu) {
        ctx->pc = 0x163E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E48u;
        // 0x163e4c: 0xae406e0c  sw          $zero, 0x6E0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E50u;
        goto label_163e50;
    }
    ctx->pc = 0x163E48u;
    {
        const bool branch_taken_0x163e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E48u;
        // 0x163e4c: 0xae406e0c  sw          $zero, 0x6E0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e48) {
            ctx->pc = 0x163E78u;
            goto label_163e78;
        }
    }
    ctx->pc = 0x163E50u;
label_163e50:
    // 0x163e50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x163e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163e54:
    // 0x163e54: 0x2081818  mult        $v1, $s0, $t0
    ctx->pc = 0x163e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_163e58:
    // 0x163e58: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_163e5c:
    // 0x163e5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_163e60:
    // 0x163e60: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_163e64:
    if (ctx->pc == 0x163E64u) {
        ctx->pc = 0x163E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E60u;
        // 0x163e64: 0x2081818  mult        $v1, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E68u;
        goto label_163e68;
    }
    ctx->pc = 0x163E60u;
    {
        const bool branch_taken_0x163e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E60u;
        // 0x163e64: 0x2081818  mult        $v1, $s0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e60) {
            ctx->pc = 0x163D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163d70;
        }
    }
    ctx->pc = 0x163E68u;
label_163e68:
    // 0x163e68: 0x10000004  b           . + 4 + (0x4 << 2)
label_163e6c:
    if (ctx->pc == 0x163E6Cu) {
        ctx->pc = 0x163E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E68u;
        // 0x163e6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E70u;
        goto label_163e70;
    }
    ctx->pc = 0x163E68u;
    {
        const bool branch_taken_0x163e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E68u;
        // 0x163e6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e68) {
            ctx->pc = 0x163E7Cu;
            goto label_163e7c;
        }
    }
    ctx->pc = 0x163E70u;
label_163e70:
    // 0x163e70: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x163e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_163e74:
    // 0x163e74: 0xac406e0c  sw          $zero, 0x6E0C($v0)
    ctx->pc = 0x163e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28172), GPR_U32(ctx, 0));
label_163e78:
    // 0x163e78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x163e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_163e7c:
    // 0x163e7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x163e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163e80:
    // 0x163e80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163e84:
    // 0x163e84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x163e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_163e88:
    // 0x163e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163e8c:
    // 0x163e8c: 0x3e00008  jr          $ra
label_163e90:
    if (ctx->pc == 0x163E90u) {
        ctx->pc = 0x163E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E8Cu;
        // 0x163e90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E94u;
        goto label_163e94;
    }
    ctx->pc = 0x163E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E8Cu;
        // 0x163e90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163E94u;
label_163e94:
    // 0x163e94: 0x0  nop
    ctx->pc = 0x163e94u;
    // NOP
    ctx->pc = 0x163e98u;
}
