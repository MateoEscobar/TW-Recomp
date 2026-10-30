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

// Function: sub_002C7C20
// Address: 0x2c7c20 - 0x2c7de8
void sub_002C7C20_0x2c7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7C20_0x2c7c20");
#endif

    switch (ctx->pc) {
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        case 0x2c7ca0u: goto label_2c7ca0;
        case 0x2c7ca4u: goto label_2c7ca4;
        case 0x2c7ca8u: goto label_2c7ca8;
        case 0x2c7cacu: goto label_2c7cac;
        case 0x2c7cb0u: goto label_2c7cb0;
        case 0x2c7cb4u: goto label_2c7cb4;
        case 0x2c7cb8u: goto label_2c7cb8;
        case 0x2c7cbcu: goto label_2c7cbc;
        case 0x2c7cc0u: goto label_2c7cc0;
        case 0x2c7cc4u: goto label_2c7cc4;
        case 0x2c7cc8u: goto label_2c7cc8;
        case 0x2c7cccu: goto label_2c7ccc;
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7cd4u: goto label_2c7cd4;
        case 0x2c7cd8u: goto label_2c7cd8;
        case 0x2c7cdcu: goto label_2c7cdc;
        case 0x2c7ce0u: goto label_2c7ce0;
        case 0x2c7ce4u: goto label_2c7ce4;
        case 0x2c7ce8u: goto label_2c7ce8;
        case 0x2c7cecu: goto label_2c7cec;
        case 0x2c7cf0u: goto label_2c7cf0;
        case 0x2c7cf4u: goto label_2c7cf4;
        case 0x2c7cf8u: goto label_2c7cf8;
        case 0x2c7cfcu: goto label_2c7cfc;
        case 0x2c7d00u: goto label_2c7d00;
        case 0x2c7d04u: goto label_2c7d04;
        case 0x2c7d08u: goto label_2c7d08;
        case 0x2c7d0cu: goto label_2c7d0c;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d14u: goto label_2c7d14;
        case 0x2c7d18u: goto label_2c7d18;
        case 0x2c7d1cu: goto label_2c7d1c;
        case 0x2c7d20u: goto label_2c7d20;
        case 0x2c7d24u: goto label_2c7d24;
        case 0x2c7d28u: goto label_2c7d28;
        case 0x2c7d2cu: goto label_2c7d2c;
        case 0x2c7d30u: goto label_2c7d30;
        case 0x2c7d34u: goto label_2c7d34;
        case 0x2c7d38u: goto label_2c7d38;
        case 0x2c7d3cu: goto label_2c7d3c;
        case 0x2c7d40u: goto label_2c7d40;
        case 0x2c7d44u: goto label_2c7d44;
        case 0x2c7d48u: goto label_2c7d48;
        case 0x2c7d4cu: goto label_2c7d4c;
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d54u: goto label_2c7d54;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7d5cu: goto label_2c7d5c;
        case 0x2c7d60u: goto label_2c7d60;
        case 0x2c7d64u: goto label_2c7d64;
        case 0x2c7d68u: goto label_2c7d68;
        case 0x2c7d6cu: goto label_2c7d6c;
        case 0x2c7d70u: goto label_2c7d70;
        case 0x2c7d74u: goto label_2c7d74;
        case 0x2c7d78u: goto label_2c7d78;
        case 0x2c7d7cu: goto label_2c7d7c;
        case 0x2c7d80u: goto label_2c7d80;
        case 0x2c7d84u: goto label_2c7d84;
        case 0x2c7d88u: goto label_2c7d88;
        case 0x2c7d8cu: goto label_2c7d8c;
        case 0x2c7d90u: goto label_2c7d90;
        case 0x2c7d94u: goto label_2c7d94;
        case 0x2c7d98u: goto label_2c7d98;
        case 0x2c7d9cu: goto label_2c7d9c;
        case 0x2c7da0u: goto label_2c7da0;
        case 0x2c7da4u: goto label_2c7da4;
        case 0x2c7da8u: goto label_2c7da8;
        case 0x2c7dacu: goto label_2c7dac;
        case 0x2c7db0u: goto label_2c7db0;
        case 0x2c7db4u: goto label_2c7db4;
        case 0x2c7db8u: goto label_2c7db8;
        case 0x2c7dbcu: goto label_2c7dbc;
        case 0x2c7dc0u: goto label_2c7dc0;
        case 0x2c7dc4u: goto label_2c7dc4;
        case 0x2c7dc8u: goto label_2c7dc8;
        case 0x2c7dccu: goto label_2c7dcc;
        case 0x2c7dd0u: goto label_2c7dd0;
        case 0x2c7dd4u: goto label_2c7dd4;
        case 0x2c7dd8u: goto label_2c7dd8;
        case 0x2c7ddcu: goto label_2c7ddc;
        case 0x2c7de0u: goto label_2c7de0;
        case 0x2c7de4u: goto label_2c7de4;
        default: break;
    }

    ctx->pc = 0x2c7c20u;

label_2c7c20:
    // 0x2c7c20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c7c24:
    // 0x2c7c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7c28:
    // 0x2c7c28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2c7c2c:
    // 0x2c7c2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c7c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2c7c30:
    // 0x2c7c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c34:
    // 0x2c7c34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c7c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2c7c38:
    // 0x2c7c38: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2c7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2c7c3c:
    // 0x2c7c3c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2c7c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2c7c40:
    // 0x2c7c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c7c44:
    // 0x2c7c44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c7c48:
    // 0x2c7c48: 0x92330045  lbu         $s3, 0x45($s1)
    ctx->pc = 0x2c7c48u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_2c7c4c:
    // 0x2c7c4c: 0x1662005e  bne         $s3, $v0, . + 4 + (0x5E << 2)
label_2c7c50:
    if (ctx->pc == 0x2C7C50u) {
        ctx->pc = 0x2C7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C4Cu;
        // 0x2c7c50: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C54u;
        goto label_2c7c54;
    }
    ctx->pc = 0x2C7C4Cu;
    {
        const bool branch_taken_0x2c7c4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C4Cu;
        // 0x2c7c50: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c4c) {
            ctx->pc = 0x2C7DC8u;
            goto label_2c7dc8;
        }
    }
    ctx->pc = 0x2C7C54u;
label_2c7c54:
    // 0x2c7c54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c7c58:
    // 0x2c7c58: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c7c5c:
    // 0x2c7c5c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c7c60:
    // 0x2c7c60: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2c7c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c7c64:
    // 0x2c7c64: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2c7c64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c7c68:
    // 0x2c7c68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2c7c6c:
    if (ctx->pc == 0x2C7C6Cu) {
        ctx->pc = 0x2C7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C68u;
        // 0x2c7c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C70u;
        goto label_2c7c70;
    }
    ctx->pc = 0x2C7C68u;
    {
        const bool branch_taken_0x2c7c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C68u;
        // 0x2c7c6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c68) {
            ctx->pc = 0x2C7C84u;
            goto label_2c7c84;
        }
    }
    ctx->pc = 0x2C7C70u;
label_2c7c70:
    // 0x2c7c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7c74:
    // 0x2c7c74: 0xc0b1c92  jal         func_2C7248
label_2c7c78:
    if (ctx->pc == 0x2C7C78u) {
        ctx->pc = 0x2C7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C74u;
        // 0x2c7c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7C7Cu;
        goto label_2c7c7c;
    }
    ctx->pc = 0x2C7C74u;
    SET_GPR_U32(ctx, 31, 0x2C7C7Cu);
    ctx->pc = 0x2C7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C74u;
    // 0x2c7c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7248u, 0x2C7C74u, 0x2C7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C7Cu;
label_2c7c7c:
    // 0x2c7c7c: 0x26021388  addiu       $v0, $s0, 0x1388
    ctx->pc = 0x2c7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5000));
label_2c7c80:
    // 0x2c7c80: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2c7c84:
    // 0x2c7c84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c7c88:
    // 0x2c7c88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c7c8c:
    // 0x2c7c8c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2c7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2c7c90:
    // 0x2c7c90: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c7c90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7c94:
    // 0x2c7c94: 0x24950480  addiu       $s5, $a0, 0x480
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_2c7c98:
    // 0x2c7c98: 0xc089a54  jal         func_226950
label_2c7c9c:
    if (ctx->pc == 0x2C7C9Cu) {
        ctx->pc = 0x2C7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C98u;
        // 0x2c7c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CA0u;
        goto label_2c7ca0;
    }
    ctx->pc = 0x2C7C98u;
    SET_GPR_U32(ctx, 31, 0x2C7CA0u);
    ctx->pc = 0x2C7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C98u;
    // 0x2c7c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226950u, 0x2C7C98u, 0x2C7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CA0u;
label_2c7ca0:
    // 0x2c7ca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c7ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ca4:
    // 0x2c7ca4: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
label_2c7ca8:
    if (ctx->pc == 0x2C7CA8u) {
        ctx->pc = 0x2C7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CA4u;
        // 0x2c7ca8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CACu;
        goto label_2c7cac;
    }
    ctx->pc = 0x2C7CA4u;
    {
        const bool branch_taken_0x2c7ca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CA4u;
        // 0x2c7ca8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ca4) {
            ctx->pc = 0x2C7DC8u;
            goto label_2c7dc8;
        }
    }
    ctx->pc = 0x2C7CACu;
label_2c7cac:
    // 0x2c7cac: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2c7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7cb0:
    // 0x2c7cb0: 0x1453001e  bne         $v0, $s3, . + 4 + (0x1E << 2)
label_2c7cb4:
    if (ctx->pc == 0x2C7CB4u) {
        ctx->pc = 0x2C7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CB0u;
        // 0x2c7cb4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CB8u;
        goto label_2c7cb8;
    }
    ctx->pc = 0x2C7CB0u;
    {
        const bool branch_taken_0x2c7cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CB0u;
        // 0x2c7cb4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7cb0) {
            ctx->pc = 0x2C7D2Cu;
            goto label_2c7d2c;
        }
    }
    ctx->pc = 0x2C7CB8u;
label_2c7cb8:
    // 0x2c7cb8: 0xc087502  jal         func_21D408
label_2c7cbc:
    if (ctx->pc == 0x2C7CBCu) {
        ctx->pc = 0x2C7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CB8u;
        // 0x2c7cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CC0u;
        goto label_2c7cc0;
    }
    ctx->pc = 0x2C7CB8u;
    SET_GPR_U32(ctx, 31, 0x2C7CC0u);
    ctx->pc = 0x2C7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7CB8u;
    // 0x2c7cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C7CB8u, 0x2C7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CC0u;
label_2c7cc0:
    // 0x2c7cc0: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c7cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c7cc4:
    // 0x2c7cc4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2c7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2c7cc8:
    // 0x2c7cc8: 0x249356b0  addiu       $s3, $a0, 0x56B0
    ctx->pc = 0x2c7cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 22192));
label_2c7ccc:
    // 0x2c7ccc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2c7cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2c7cd0:
    // 0x2c7cd0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2c7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2c7cd4:
    // 0x2c7cd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c7cd8:
    // 0x2c7cd8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2c7cdc:
    // 0x2c7cdc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2c7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c7ce0:
    // 0x2c7ce0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2c7ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2c7ce4:
    // 0x2c7ce4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7ce8:
    // 0x2c7ce8: 0xc0597e0  jal         func_165F80
label_2c7cec:
    if (ctx->pc == 0x2C7CECu) {
        ctx->pc = 0x2C7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CE8u;
        // 0x2c7cec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CF0u;
        goto label_2c7cf0;
    }
    ctx->pc = 0x2C7CE8u;
    SET_GPR_U32(ctx, 31, 0x2C7CF0u);
    ctx->pc = 0x2C7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7CE8u;
    // 0x2c7cec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F80u, 0x2C7CE8u, 0x2C7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7CF0u;
label_2c7cf0:
    // 0x2c7cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7cf4:
    // 0x2c7cf4: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_2c7cf8:
    if (ctx->pc == 0x2C7CF8u) {
        ctx->pc = 0x2C7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CF4u;
        // 0x2c7cf8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7CFCu;
        goto label_2c7cfc;
    }
    ctx->pc = 0x2C7CF4u;
    {
        const bool branch_taken_0x2c7cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7cf4) {
            ctx->pc = 0x2C7CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7CF4u;
            // 0x2c7cf8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7DC8u;
            goto label_2c7dc8;
        }
    }
    ctx->pc = 0x2C7CFCu;
label_2c7cfc:
    // 0x2c7cfc: 0xc095fce  jal         func_257F38
label_2c7d00:
    if (ctx->pc == 0x2C7D00u) {
        ctx->pc = 0x2C7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CFCu;
        // 0x2c7d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D04u;
        goto label_2c7d04;
    }
    ctx->pc = 0x2C7CFCu;
    SET_GPR_U32(ctx, 31, 0x2C7D04u);
    ctx->pc = 0x2C7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7CFCu;
    // 0x2c7d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2C7CFCu, 0x2C7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D04u;
label_2c7d04:
    // 0x2c7d04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7d08:
    // 0x2c7d08: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7d0c:
    // 0x2c7d0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7d10:
    // 0x2c7d10: 0x40f809  jalr        $v0
label_2c7d14:
    if (ctx->pc == 0x2C7D14u) {
        ctx->pc = 0x2C7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D10u;
        // 0x2c7d14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D18u;
        goto label_2c7d18;
    }
    ctx->pc = 0x2C7D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7D18u);
        ctx->pc = 0x2C7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D10u;
        // 0x2c7d14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7D10u, 0x2C7D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7D18u;
label_2c7d18:
    // 0x2c7d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d1c:
    // 0x2c7d1c: 0xc08e150  jal         func_238540
label_2c7d20:
    if (ctx->pc == 0x2C7D20u) {
        ctx->pc = 0x2C7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D1Cu;
        // 0x2c7d20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D24u;
        goto label_2c7d24;
    }
    ctx->pc = 0x2C7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D24u);
    ctx->pc = 0x2C7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D1Cu;
    // 0x2c7d20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2C7D1Cu, 0x2C7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D24u;
label_2c7d24:
    // 0x2c7d24: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c7d28:
    if (ctx->pc == 0x2C7D28u) {
        ctx->pc = 0x2C7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D24u;
        // 0x2c7d28: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D2Cu;
        goto label_2c7d2c;
    }
    ctx->pc = 0x2C7D24u;
    {
        const bool branch_taken_0x2c7d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D24u;
        // 0x2c7d28: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d24) {
            ctx->pc = 0x2C7D50u;
            goto label_2c7d50;
        }
    }
    ctx->pc = 0x2C7D2Cu;
label_2c7d2c:
    // 0x2c7d2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c7d30:
    // 0x2c7d30: 0x260310f8  addiu       $v1, $s0, 0x10F8
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4344));
label_2c7d34:
    // 0x2c7d34: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x2c7d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_2c7d38:
    // 0x2c7d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c7d3c:
    // 0x2c7d3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d40:
    // 0x2c7d40: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x2c7d40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_2c7d44:
    // 0x2c7d44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c7d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7d48:
    // 0x2c7d48: 0xc10796c  jal         func_41E5B0
label_2c7d4c:
    if (ctx->pc == 0x2C7D4Cu) {
        ctx->pc = 0x2C7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D48u;
        // 0x2c7d4c: 0x90460004  lbu         $a2, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D50u;
        goto label_2c7d50;
    }
    ctx->pc = 0x2C7D48u;
    SET_GPR_U32(ctx, 31, 0x2C7D50u);
    ctx->pc = 0x2C7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D48u;
    // 0x2c7d4c: 0x90460004  lbu         $a2, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2C7D48u, 0x2C7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D50u;
label_2c7d50:
    // 0x2c7d50: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7d54:
    // 0x2c7d54: 0x261010f8  addiu       $s0, $s0, 0x10F8
    ctx->pc = 0x2c7d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4344));
label_2c7d58:
    // 0x2c7d58: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x2c7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_2c7d5c:
    // 0x2c7d5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d60:
    // 0x2c7d60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2c7d64:
    // 0x2c7d64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c7d68:
    // 0x2c7d68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c7d6c:
    // 0x2c7d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c7d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7d70:
    // 0x2c7d70: 0x90470005  lbu         $a3, 0x5($v0)
    ctx->pc = 0x2c7d70u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2c7d74:
    // 0x2c7d74: 0xc10796c  jal         func_41E5B0
label_2c7d78:
    if (ctx->pc == 0x2C7D78u) {
        ctx->pc = 0x2C7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D74u;
        // 0x2c7d78: 0x73823  negu        $a3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D7Cu;
        goto label_2c7d7c;
    }
    ctx->pc = 0x2C7D74u;
    SET_GPR_U32(ctx, 31, 0x2C7D7Cu);
    ctx->pc = 0x2C7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D74u;
    // 0x2c7d78: 0x73823  negu        $a3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2C7D74u, 0x2C7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D7Cu;
label_2c7d7c:
    // 0x2c7d7c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2c7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2c7d80:
    // 0x2c7d80: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x2c7d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2c7d84:
    // 0x2c7d84: 0x8e840370  lw          $a0, 0x370($s4)
    ctx->pc = 0x2c7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
label_2c7d88:
    // 0x2c7d88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c7d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c7d8c:
    // 0x2c7d8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c7d90:
    // 0x2c7d90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7d94:
    // 0x2c7d94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c7d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2c7d98:
    // 0x2c7d98: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x2c7d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_2c7d9c:
    // 0x2c7d9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c7d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c7da0:
    // 0x2c7da0: 0x288303e8  slti        $v1, $a0, 0x3E8
    ctx->pc = 0x2c7da0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2c7da4:
    // 0x2c7da4: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x2c7da4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2c7da8:
    // 0x2c7da8: 0xc5302a  slt         $a2, $a2, $a1
    ctx->pc = 0x2c7da8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c7dac:
    // 0x2c7dac: 0x6280a  movz        $a1, $zero, $a2
    ctx->pc = 0x2c7dacu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2c7db0:
    // 0x2c7db0: 0xae850370  sw          $a1, 0x370($s4)
    ctx->pc = 0x2c7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 5));
label_2c7db4:
    // 0x2c7db4: 0xa227003f  sb          $a3, 0x3F($s1)
    ctx->pc = 0x2c7db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 63), (uint8_t)GPR_U32(ctx, 7));
label_2c7db8:
    // 0x2c7db8: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x2c7db8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_2c7dbc:
    // 0x2c7dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7dc0:
    // 0x2c7dc0: 0xa6220038  sh          $v0, 0x38($s1)
    ctx->pc = 0x2c7dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
label_2c7dc4:
    // 0x2c7dc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c7dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c7dc8:
    // 0x2c7dc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c7dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c7dcc:
    // 0x2c7dcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c7dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7dd0:
    // 0x2c7dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7dd4:
    // 0x2c7dd4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2c7dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7dd8:
    // 0x2c7dd8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2c7dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7ddc:
    // 0x2c7ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7de0:
    // 0x2c7de0: 0x3e00008  jr          $ra
label_2c7de4:
    if (ctx->pc == 0x2C7DE4u) {
        ctx->pc = 0x2C7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DE0u;
        // 0x2c7de4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7DE8u;
        goto label_fallthrough_0x2c7de0;
    }
    ctx->pc = 0x2C7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DE0u;
        // 0x2c7de4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7de0:
    ctx->pc = 0x2C7DE8u;
}
