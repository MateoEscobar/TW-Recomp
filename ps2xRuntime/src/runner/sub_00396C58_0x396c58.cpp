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

// Function: sub_00396C58
// Address: 0x396c58 - 0x396d78
void sub_00396C58_0x396c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396C58_0x396c58");
#endif

    switch (ctx->pc) {
        case 0x396c58u: goto label_396c58;
        case 0x396c5cu: goto label_396c5c;
        case 0x396c60u: goto label_396c60;
        case 0x396c64u: goto label_396c64;
        case 0x396c68u: goto label_396c68;
        case 0x396c6cu: goto label_396c6c;
        case 0x396c70u: goto label_396c70;
        case 0x396c74u: goto label_396c74;
        case 0x396c78u: goto label_396c78;
        case 0x396c7cu: goto label_396c7c;
        case 0x396c80u: goto label_396c80;
        case 0x396c84u: goto label_396c84;
        case 0x396c88u: goto label_396c88;
        case 0x396c8cu: goto label_396c8c;
        case 0x396c90u: goto label_396c90;
        case 0x396c94u: goto label_396c94;
        case 0x396c98u: goto label_396c98;
        case 0x396c9cu: goto label_396c9c;
        case 0x396ca0u: goto label_396ca0;
        case 0x396ca4u: goto label_396ca4;
        case 0x396ca8u: goto label_396ca8;
        case 0x396cacu: goto label_396cac;
        case 0x396cb0u: goto label_396cb0;
        case 0x396cb4u: goto label_396cb4;
        case 0x396cb8u: goto label_396cb8;
        case 0x396cbcu: goto label_396cbc;
        case 0x396cc0u: goto label_396cc0;
        case 0x396cc4u: goto label_396cc4;
        case 0x396cc8u: goto label_396cc8;
        case 0x396cccu: goto label_396ccc;
        case 0x396cd0u: goto label_396cd0;
        case 0x396cd4u: goto label_396cd4;
        case 0x396cd8u: goto label_396cd8;
        case 0x396cdcu: goto label_396cdc;
        case 0x396ce0u: goto label_396ce0;
        case 0x396ce4u: goto label_396ce4;
        case 0x396ce8u: goto label_396ce8;
        case 0x396cecu: goto label_396cec;
        case 0x396cf0u: goto label_396cf0;
        case 0x396cf4u: goto label_396cf4;
        case 0x396cf8u: goto label_396cf8;
        case 0x396cfcu: goto label_396cfc;
        case 0x396d00u: goto label_396d00;
        case 0x396d04u: goto label_396d04;
        case 0x396d08u: goto label_396d08;
        case 0x396d0cu: goto label_396d0c;
        case 0x396d10u: goto label_396d10;
        case 0x396d14u: goto label_396d14;
        case 0x396d18u: goto label_396d18;
        case 0x396d1cu: goto label_396d1c;
        case 0x396d20u: goto label_396d20;
        case 0x396d24u: goto label_396d24;
        case 0x396d28u: goto label_396d28;
        case 0x396d2cu: goto label_396d2c;
        case 0x396d30u: goto label_396d30;
        case 0x396d34u: goto label_396d34;
        case 0x396d38u: goto label_396d38;
        case 0x396d3cu: goto label_396d3c;
        case 0x396d40u: goto label_396d40;
        case 0x396d44u: goto label_396d44;
        case 0x396d48u: goto label_396d48;
        case 0x396d4cu: goto label_396d4c;
        case 0x396d50u: goto label_396d50;
        case 0x396d54u: goto label_396d54;
        case 0x396d58u: goto label_396d58;
        case 0x396d5cu: goto label_396d5c;
        case 0x396d60u: goto label_396d60;
        case 0x396d64u: goto label_396d64;
        case 0x396d68u: goto label_396d68;
        case 0x396d6cu: goto label_396d6c;
        case 0x396d70u: goto label_396d70;
        case 0x396d74u: goto label_396d74;
        default: break;
    }

    ctx->pc = 0x396c58u;

label_396c58:
    // 0x396c58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x396c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_396c5c:
    // 0x396c5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x396c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_396c60:
    // 0x396c60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_396c64:
    // 0x396c64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x396c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_396c68:
    // 0x396c68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x396c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_396c6c:
    // 0x396c6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x396c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_396c70:
    // 0x396c70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x396c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_396c74:
    // 0x396c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_396c78:
    // 0x396c78: 0xc0e4060  jal         func_390180
label_396c7c:
    if (ctx->pc == 0x396C7Cu) {
        ctx->pc = 0x396C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C78u;
        // 0x396c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C80u;
        goto label_396c80;
    }
    ctx->pc = 0x396C78u;
    SET_GPR_U32(ctx, 31, 0x396C80u);
    ctx->pc = 0x396C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C78u;
    // 0x396c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396C78u, 0x396C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396C80u;
label_396c80:
    // 0x396c80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x396c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396c84:
    // 0x396c84: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
label_396c88:
    if (ctx->pc == 0x396C88u) {
        ctx->pc = 0x396C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C84u;
        // 0x396c88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C8Cu;
        goto label_396c8c;
    }
    ctx->pc = 0x396C84u;
    {
        const bool branch_taken_0x396c84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x396C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C84u;
        // 0x396c88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c84) {
            ctx->pc = 0x396D50u;
            goto label_396d50;
        }
    }
    ctx->pc = 0x396C8Cu;
label_396c8c:
    // 0x396c8c: 0xc0e57ce  jal         func_395F38
label_396c90:
    if (ctx->pc == 0x396C90u) {
        ctx->pc = 0x396C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C8Cu;
        // 0x396c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C94u;
        goto label_396c94;
    }
    ctx->pc = 0x396C8Cu;
    SET_GPR_U32(ctx, 31, 0x396C94u);
    ctx->pc = 0x396C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C8Cu;
    // 0x396c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x396C8Cu, 0x396C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396C94u;
label_396c94:
    // 0x396c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396c98:
    // 0x396c98: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_396c9c:
    if (ctx->pc == 0x396C9Cu) {
        ctx->pc = 0x396CA0u;
        goto label_396ca0;
    }
    ctx->pc = 0x396C98u;
    {
        const bool branch_taken_0x396c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396c98) {
            ctx->pc = 0x396D08u;
            goto label_396d08;
        }
    }
    ctx->pc = 0x396CA0u;
label_396ca0:
    // 0x396ca0: 0xc0e8630  jal         func_3A18C0
label_396ca4:
    if (ctx->pc == 0x396CA4u) {
        ctx->pc = 0x396CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CA0u;
        // 0x396ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CA8u;
        goto label_396ca8;
    }
    ctx->pc = 0x396CA0u;
    SET_GPR_U32(ctx, 31, 0x396CA8u);
    ctx->pc = 0x396CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CA0u;
    // 0x396ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x396CA0u, 0x396CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CA8u;
label_396ca8:
    // 0x396ca8: 0xc08a61a  jal         func_229868
label_396cac:
    if (ctx->pc == 0x396CACu) {
        ctx->pc = 0x396CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CA8u;
        // 0x396cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CB0u;
        goto label_396cb0;
    }
    ctx->pc = 0x396CA8u;
    SET_GPR_U32(ctx, 31, 0x396CB0u);
    ctx->pc = 0x396CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CA8u;
    // 0x396cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x396CA8u, 0x396CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CB0u;
label_396cb0:
    // 0x396cb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396cb4:
    // 0x396cb4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_396cb8:
    if (ctx->pc == 0x396CB8u) {
        ctx->pc = 0x396CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CB4u;
        // 0x396cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CBCu;
        goto label_396cbc;
    }
    ctx->pc = 0x396CB4u;
    {
        const bool branch_taken_0x396cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CB4u;
        // 0x396cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cb4) {
            ctx->pc = 0x396D08u;
            goto label_396d08;
        }
    }
    ctx->pc = 0x396CBCu;
label_396cbc:
    // 0x396cbc: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x396cbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_396cc0:
    // 0x396cc0: 0xc0e44cc  jal         func_391330
label_396cc4:
    if (ctx->pc == 0x396CC4u) {
        ctx->pc = 0x396CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CC0u;
        // 0x396cc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CC8u;
        goto label_396cc8;
    }
    ctx->pc = 0x396CC0u;
    SET_GPR_U32(ctx, 31, 0x396CC8u);
    ctx->pc = 0x396CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CC0u;
    // 0x396cc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x396CC0u, 0x396CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CC8u;
label_396cc8:
    // 0x396cc8: 0x80430065  lb          $v1, 0x65($v0)
    ctx->pc = 0x396cc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
label_396ccc:
    // 0x396ccc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x396cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_396cd0:
    // 0x396cd0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_396cd4:
    if (ctx->pc == 0x396CD4u) {
        ctx->pc = 0x396CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD0u;
        // 0x396cd4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CD8u;
        goto label_396cd8;
    }
    ctx->pc = 0x396CD0u;
    {
        const bool branch_taken_0x396cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x396CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD0u;
        // 0x396cd4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cd0) {
            ctx->pc = 0x396CE8u;
            goto label_396ce8;
        }
    }
    ctx->pc = 0x396CD8u;
label_396cd8:
    // 0x396cd8: 0xc0960cc  jal         func_258330
label_396cdc:
    if (ctx->pc == 0x396CDCu) {
        ctx->pc = 0x396CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD8u;
        // 0x396cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CE0u;
        goto label_396ce0;
    }
    ctx->pc = 0x396CD8u;
    SET_GPR_U32(ctx, 31, 0x396CE0u);
    ctx->pc = 0x396CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CD8u;
    // 0x396cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x396CD8u, 0x396CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CE0u;
label_396ce0:
    // 0x396ce0: 0x10000009  b           . + 4 + (0x9 << 2)
label_396ce4:
    if (ctx->pc == 0x396CE4u) {
        ctx->pc = 0x396CE8u;
        goto label_396ce8;
    }
    ctx->pc = 0x396CE0u;
    {
        const bool branch_taken_0x396ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ce0) {
            ctx->pc = 0x396D08u;
            goto label_396d08;
        }
    }
    ctx->pc = 0x396CE8u;
label_396ce8:
    // 0x396ce8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_396cec:
    if (ctx->pc == 0x396CECu) {
        ctx->pc = 0x396CF0u;
        goto label_396cf0;
    }
    ctx->pc = 0x396CE8u;
    {
        const bool branch_taken_0x396ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x396ce8) {
            ctx->pc = 0x396D00u;
            goto label_396d00;
        }
    }
    ctx->pc = 0x396CF0u;
label_396cf0:
    // 0x396cf0: 0xc093390  jal         func_24CE40
label_396cf4:
    if (ctx->pc == 0x396CF4u) {
        ctx->pc = 0x396CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CF0u;
        // 0x396cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CF8u;
        goto label_396cf8;
    }
    ctx->pc = 0x396CF0u;
    SET_GPR_U32(ctx, 31, 0x396CF8u);
    ctx->pc = 0x396CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396CF0u;
    // 0x396cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x396CF0u, 0x396CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396CF8u;
label_396cf8:
    // 0x396cf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_396cfc:
    if (ctx->pc == 0x396CFCu) {
        ctx->pc = 0x396D00u;
        goto label_396d00;
    }
    ctx->pc = 0x396CF8u;
    {
        const bool branch_taken_0x396cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396cf8) {
            ctx->pc = 0x396D08u;
            goto label_396d08;
        }
    }
    ctx->pc = 0x396D00u;
label_396d00:
    // 0x396d00: 0xc095fce  jal         func_257F38
label_396d04:
    if (ctx->pc == 0x396D04u) {
        ctx->pc = 0x396D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D00u;
        // 0x396d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D08u;
        goto label_396d08;
    }
    ctx->pc = 0x396D00u;
    SET_GPR_U32(ctx, 31, 0x396D08u);
    ctx->pc = 0x396D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D00u;
    // 0x396d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x396D00u, 0x396D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D08u;
label_396d08:
    // 0x396d08: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_396d0c:
    if (ctx->pc == 0x396D0Cu) {
        ctx->pc = 0x396D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D08u;
        // 0x396d0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D10u;
        goto label_396d10;
    }
    ctx->pc = 0x396D08u;
    {
        const bool branch_taken_0x396d08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D08u;
        // 0x396d0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d08) {
            ctx->pc = 0x396D38u;
            goto label_396d38;
        }
    }
    ctx->pc = 0x396D10u;
label_396d10:
    // 0x396d10: 0xc0e8b48  jal         func_3A2D20
label_396d14:
    if (ctx->pc == 0x396D14u) {
        ctx->pc = 0x396D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D10u;
        // 0x396d14: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D18u;
        goto label_396d18;
    }
    ctx->pc = 0x396D10u;
    SET_GPR_U32(ctx, 31, 0x396D18u);
    ctx->pc = 0x396D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D10u;
    // 0x396d14: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396D10u, 0x396D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D18u;
label_396d18:
    // 0x396d18: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_396d1c:
    // 0x396d1c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x396d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_396d20:
    // 0x396d20: 0xc0e8b80  jal         func_3A2E00
label_396d24:
    if (ctx->pc == 0x396D24u) {
        ctx->pc = 0x396D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D20u;
        // 0x396d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D28u;
        goto label_396d28;
    }
    ctx->pc = 0x396D20u;
    SET_GPR_U32(ctx, 31, 0x396D28u);
    ctx->pc = 0x396D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D20u;
    // 0x396d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396D20u, 0x396D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D28u;
label_396d28:
    // 0x396d28: 0xc0e8b50  jal         func_3A2D40
label_396d2c:
    if (ctx->pc == 0x396D2Cu) {
        ctx->pc = 0x396D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D28u;
        // 0x396d2c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D30u;
        goto label_396d30;
    }
    ctx->pc = 0x396D28u;
    SET_GPR_U32(ctx, 31, 0x396D30u);
    ctx->pc = 0x396D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D28u;
    // 0x396d2c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396D28u, 0x396D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D30u;
label_396d30:
    // 0x396d30: 0x10000007  b           . + 4 + (0x7 << 2)
label_396d34:
    if (ctx->pc == 0x396D34u) {
        ctx->pc = 0x396D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D30u;
        // 0x396d34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D38u;
        goto label_396d38;
    }
    ctx->pc = 0x396D30u;
    {
        const bool branch_taken_0x396d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D30u;
        // 0x396d34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d30) {
            ctx->pc = 0x396D50u;
            goto label_396d50;
        }
    }
    ctx->pc = 0x396D38u;
label_396d38:
    // 0x396d38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x396d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_396d3c:
    // 0x396d3c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x396d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_396d40:
    // 0x396d40: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x396d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_396d44:
    // 0x396d44: 0x60f809  jalr        $v1
label_396d48:
    if (ctx->pc == 0x396D48u) {
        ctx->pc = 0x396D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D44u;
        // 0x396d48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D4Cu;
        goto label_396d4c;
    }
    ctx->pc = 0x396D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396D4Cu);
        ctx->pc = 0x396D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D44u;
        // 0x396d48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396D44u, 0x396D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396D4Cu;
label_396d4c:
    // 0x396d4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x396d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_396d50:
    // 0x396d50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x396d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_396d54:
    // 0x396d54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x396d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396d58:
    // 0x396d58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x396d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_396d5c:
    // 0x396d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396d60:
    // 0x396d60: 0x3e00008  jr          $ra
label_396d64:
    if (ctx->pc == 0x396D64u) {
        ctx->pc = 0x396D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D60u;
        // 0x396d64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D68u;
        goto label_396d68;
    }
    ctx->pc = 0x396D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D60u;
        // 0x396d64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396D68u;
label_396d68:
    // 0x396d68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x396d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_396d6c:
    // 0x396d6c: 0x0  nop
    ctx->pc = 0x396d6cu;
    // NOP
label_396d70:
    // 0x396d70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x396d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_396d74:
    // 0x396d74: 0x0  nop
    ctx->pc = 0x396d74u;
    // NOP
    ctx->pc = 0x396d78u;
}
