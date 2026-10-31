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

// Function: sub_003E0D00
// Address: 0x3e0d00 - 0x3e0e40
void sub_003E0D00_0x3e0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0D00_0x3e0d00");
#endif

    switch (ctx->pc) {
        case 0x3e0d00u: goto label_3e0d00;
        case 0x3e0d04u: goto label_3e0d04;
        case 0x3e0d08u: goto label_3e0d08;
        case 0x3e0d0cu: goto label_3e0d0c;
        case 0x3e0d10u: goto label_3e0d10;
        case 0x3e0d14u: goto label_3e0d14;
        case 0x3e0d18u: goto label_3e0d18;
        case 0x3e0d1cu: goto label_3e0d1c;
        case 0x3e0d20u: goto label_3e0d20;
        case 0x3e0d24u: goto label_3e0d24;
        case 0x3e0d28u: goto label_3e0d28;
        case 0x3e0d2cu: goto label_3e0d2c;
        case 0x3e0d30u: goto label_3e0d30;
        case 0x3e0d34u: goto label_3e0d34;
        case 0x3e0d38u: goto label_3e0d38;
        case 0x3e0d3cu: goto label_3e0d3c;
        case 0x3e0d40u: goto label_3e0d40;
        case 0x3e0d44u: goto label_3e0d44;
        case 0x3e0d48u: goto label_3e0d48;
        case 0x3e0d4cu: goto label_3e0d4c;
        case 0x3e0d50u: goto label_3e0d50;
        case 0x3e0d54u: goto label_3e0d54;
        case 0x3e0d58u: goto label_3e0d58;
        case 0x3e0d5cu: goto label_3e0d5c;
        case 0x3e0d60u: goto label_3e0d60;
        case 0x3e0d64u: goto label_3e0d64;
        case 0x3e0d68u: goto label_3e0d68;
        case 0x3e0d6cu: goto label_3e0d6c;
        case 0x3e0d70u: goto label_3e0d70;
        case 0x3e0d74u: goto label_3e0d74;
        case 0x3e0d78u: goto label_3e0d78;
        case 0x3e0d7cu: goto label_3e0d7c;
        case 0x3e0d80u: goto label_3e0d80;
        case 0x3e0d84u: goto label_3e0d84;
        case 0x3e0d88u: goto label_3e0d88;
        case 0x3e0d8cu: goto label_3e0d8c;
        case 0x3e0d90u: goto label_3e0d90;
        case 0x3e0d94u: goto label_3e0d94;
        case 0x3e0d98u: goto label_3e0d98;
        case 0x3e0d9cu: goto label_3e0d9c;
        case 0x3e0da0u: goto label_3e0da0;
        case 0x3e0da4u: goto label_3e0da4;
        case 0x3e0da8u: goto label_3e0da8;
        case 0x3e0dacu: goto label_3e0dac;
        case 0x3e0db0u: goto label_3e0db0;
        case 0x3e0db4u: goto label_3e0db4;
        case 0x3e0db8u: goto label_3e0db8;
        case 0x3e0dbcu: goto label_3e0dbc;
        case 0x3e0dc0u: goto label_3e0dc0;
        case 0x3e0dc4u: goto label_3e0dc4;
        case 0x3e0dc8u: goto label_3e0dc8;
        case 0x3e0dccu: goto label_3e0dcc;
        case 0x3e0dd0u: goto label_3e0dd0;
        case 0x3e0dd4u: goto label_3e0dd4;
        case 0x3e0dd8u: goto label_3e0dd8;
        case 0x3e0ddcu: goto label_3e0ddc;
        case 0x3e0de0u: goto label_3e0de0;
        case 0x3e0de4u: goto label_3e0de4;
        case 0x3e0de8u: goto label_3e0de8;
        case 0x3e0decu: goto label_3e0dec;
        case 0x3e0df0u: goto label_3e0df0;
        case 0x3e0df4u: goto label_3e0df4;
        case 0x3e0df8u: goto label_3e0df8;
        case 0x3e0dfcu: goto label_3e0dfc;
        case 0x3e0e00u: goto label_3e0e00;
        case 0x3e0e04u: goto label_3e0e04;
        case 0x3e0e08u: goto label_3e0e08;
        case 0x3e0e0cu: goto label_3e0e0c;
        case 0x3e0e10u: goto label_3e0e10;
        case 0x3e0e14u: goto label_3e0e14;
        case 0x3e0e18u: goto label_3e0e18;
        case 0x3e0e1cu: goto label_3e0e1c;
        case 0x3e0e20u: goto label_3e0e20;
        case 0x3e0e24u: goto label_3e0e24;
        case 0x3e0e28u: goto label_3e0e28;
        case 0x3e0e2cu: goto label_3e0e2c;
        case 0x3e0e30u: goto label_3e0e30;
        case 0x3e0e34u: goto label_3e0e34;
        case 0x3e0e38u: goto label_3e0e38;
        case 0x3e0e3cu: goto label_3e0e3c;
        default: break;
    }

    ctx->pc = 0x3e0d00u;

label_3e0d00:
    // 0x3e0d00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e0d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e0d04:
    // 0x3e0d04: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e0d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3e0d08:
    // 0x3e0d08: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e0d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3e0d0c:
    // 0x3e0d0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d10:
    // 0x3e0d10: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e0d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3e0d14:
    // 0x3e0d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d18:
    // 0x3e0d18: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3e0d1c:
    // 0x3e0d1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e0d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e0d20:
    // 0x3e0d20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e0d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d24:
    // 0x3e0d24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0d28:
    // 0x3e0d28: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0d2c:
    // 0x3e0d2c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0d30:
    // 0x3e0d30: 0x40f809  jalr        $v0
label_3e0d34:
    if (ctx->pc == 0x3E0D34u) {
        ctx->pc = 0x3E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D30u;
        // 0x3e0d34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D38u;
        goto label_3e0d38;
    }
    ctx->pc = 0x3E0D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0D38u);
        ctx->pc = 0x3E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D30u;
        // 0x3e0d34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0D30u, 0x3E0D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0D38u;
label_3e0d38:
    // 0x3e0d38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e0d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d3c:
    // 0x3e0d3c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3e0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3e0d40:
    // 0x3e0d40: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
label_3e0d44:
    if (ctx->pc == 0x3E0D44u) {
        ctx->pc = 0x3E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D40u;
        // 0x3e0d44: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D48u;
        goto label_3e0d48;
    }
    ctx->pc = 0x3E0D40u;
    {
        const bool branch_taken_0x3e0d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D40u;
        // 0x3e0d44: 0x2e020016  sltiu       $v0, $s0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d40) {
            ctx->pc = 0x3E0E0Cu;
            goto label_3e0e0c;
        }
    }
    ctx->pc = 0x3E0D48u;
label_3e0d48:
    // 0x3e0d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e0d4c:
    if (ctx->pc == 0x3E0D4Cu) {
        ctx->pc = 0x3E0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D48u;
        // 0x3e0d4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D50u;
        goto label_3e0d50;
    }
    ctx->pc = 0x3E0D48u;
    {
        const bool branch_taken_0x3e0d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D48u;
        // 0x3e0d4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d48) {
            ctx->pc = 0x3E0D60u;
            goto label_3e0d60;
        }
    }
    ctx->pc = 0x3E0D50u;
label_3e0d50:
    // 0x3e0d50: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
label_3e0d54:
    if (ctx->pc == 0x3E0D54u) {
        ctx->pc = 0x3E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D50u;
        // 0x3e0d54: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D58u;
        goto label_3e0d58;
    }
    ctx->pc = 0x3E0D50u;
    {
        const bool branch_taken_0x3e0d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D50u;
        // 0x3e0d54: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d50) {
            ctx->pc = 0x3E0DD0u;
            goto label_3e0dd0;
        }
    }
    ctx->pc = 0x3E0D58u;
label_3e0d58:
    // 0x3e0d58: 0x10000034  b           . + 4 + (0x34 << 2)
label_3e0d5c:
    if (ctx->pc == 0x3E0D5Cu) {
        ctx->pc = 0x3E0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D58u;
        // 0x3e0d5c: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D60u;
        goto label_3e0d60;
    }
    ctx->pc = 0x3E0D58u;
    {
        const bool branch_taken_0x3e0d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D58u;
        // 0x3e0d5c: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d58) {
            ctx->pc = 0x3E0E2Cu;
            goto label_3e0e2c;
        }
    }
    ctx->pc = 0x3E0D60u;
label_3e0d60:
    // 0x3e0d60: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3e0d64:
    // 0x3e0d64: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
label_3e0d68:
    if (ctx->pc == 0x3E0D68u) {
        ctx->pc = 0x3E0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D64u;
        // 0x3e0d68: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D6Cu;
        goto label_3e0d6c;
    }
    ctx->pc = 0x3E0D64u;
    {
        const bool branch_taken_0x3e0d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D64u;
        // 0x3e0d68: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d64) {
            ctx->pc = 0x3E0E28u;
            goto label_3e0e28;
        }
    }
    ctx->pc = 0x3E0D6Cu;
label_3e0d6c:
    // 0x3e0d6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e0d70:
    // 0x3e0d70: 0xc0ea12a  jal         func_3A84A8
label_3e0d74:
    if (ctx->pc == 0x3E0D74u) {
        ctx->pc = 0x3E0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D70u;
        // 0x3e0d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0D78u;
        goto label_3e0d78;
    }
    ctx->pc = 0x3E0D70u;
    SET_GPR_U32(ctx, 31, 0x3E0D78u);
    ctx->pc = 0x3E0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0D70u;
    // 0x3e0d74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0D70u, 0x3E0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D78u;
label_3e0d78:
    // 0x3e0d78: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e0d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0d7c:
    // 0x3e0d7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3e0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e0d80:
    // 0x3e0d80: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x3e0d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_3e0d84:
    // 0x3e0d84: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e0d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e0d88:
    // 0x3e0d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e0d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e0d8c:
    // 0x3e0d8c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e0d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d90:
    // 0x3e0d90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e0d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e0d94:
    // 0x3e0d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0d98:
    // 0x3e0d98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e0d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e0d9c:
    // 0x3e0d9c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e0d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e0da0:
    // 0x3e0da0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3e0da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e0da4:
    // 0x3e0da4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e0da8:
    // 0x3e0da8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e0dac:
    // 0x3e0dac: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3e0dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3e0db0:
    // 0x3e0db0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3e0db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e0db4:
    // 0x3e0db4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e0db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0db8:
    // 0x3e0db8: 0xc136b18  jal         func_4DAC60
label_3e0dbc:
    if (ctx->pc == 0x3E0DBCu) {
        ctx->pc = 0x3E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DB8u;
        // 0x3e0dbc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0DC0u;
        goto label_3e0dc0;
    }
    ctx->pc = 0x3E0DB8u;
    SET_GPR_U32(ctx, 31, 0x3E0DC0u);
    ctx->pc = 0x3E0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0DB8u;
    // 0x3e0dbc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E0DB8u, 0x3E0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0DC0u;
label_3e0dc0:
    // 0x3e0dc0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e0dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0dc4:
    // 0x3e0dc4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e0dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e0dc8:
    // 0x3e0dc8: 0x10000016  b           . + 4 + (0x16 << 2)
label_3e0dcc:
    if (ctx->pc == 0x3E0DCCu) {
        ctx->pc = 0x3E0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DC8u;
        // 0x3e0dcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0DD0u;
        goto label_3e0dd0;
    }
    ctx->pc = 0x3E0DC8u;
    {
        const bool branch_taken_0x3e0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DC8u;
        // 0x3e0dcc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0dc8) {
            ctx->pc = 0x3E0E24u;
            goto label_3e0e24;
        }
    }
    ctx->pc = 0x3E0DD0u;
label_3e0dd0:
    // 0x3e0dd0: 0xc0ea146  jal         func_3A8518
label_3e0dd4:
    if (ctx->pc == 0x3E0DD4u) {
        ctx->pc = 0x3E0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DD0u;
        // 0x3e0dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0DD8u;
        goto label_3e0dd8;
    }
    ctx->pc = 0x3E0DD0u;
    SET_GPR_U32(ctx, 31, 0x3E0DD8u);
    ctx->pc = 0x3E0DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0DD0u;
    // 0x3e0dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0DD0u, 0x3E0DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0DD8u;
label_3e0dd8:
    // 0x3e0dd8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e0ddc:
    if (ctx->pc == 0x3E0DDCu) {
        ctx->pc = 0x3E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DD8u;
        // 0x3e0ddc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0DE0u;
        goto label_3e0de0;
    }
    ctx->pc = 0x3E0DD8u;
    {
        const bool branch_taken_0x3e0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0dd8) {
            ctx->pc = 0x3E0DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0DD8u;
            // 0x3e0ddc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0DF8u;
            goto label_3e0df8;
        }
    }
    ctx->pc = 0x3E0DE0u;
label_3e0de0:
    // 0x3e0de0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e0de4:
    // 0x3e0de4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3e0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3e0de8:
    // 0x3e0de8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e0dec:
    // 0x3e0dec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e0decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e0df0:
    // 0x3e0df0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e0df4:
    if (ctx->pc == 0x3E0DF4u) {
        ctx->pc = 0x3E0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DF0u;
        // 0x3e0df4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0DF8u;
        goto label_3e0df8;
    }
    ctx->pc = 0x3E0DF0u;
    {
        const bool branch_taken_0x3e0df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DF0u;
        // 0x3e0df4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0df0) {
            ctx->pc = 0x3E0E24u;
            goto label_3e0e24;
        }
    }
    ctx->pc = 0x3E0DF8u;
label_3e0df8:
    // 0x3e0df8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e0dfc:
    // 0x3e0dfc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e0e00:
    // 0x3e0e00: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3e0e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3e0e04:
    // 0x3e0e04: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e0e08:
    if (ctx->pc == 0x3E0E08u) {
        ctx->pc = 0x3E0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E04u;
        // 0x3e0e08: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0E0Cu;
        goto label_3e0e0c;
    }
    ctx->pc = 0x3E0E04u;
    {
        const bool branch_taken_0x3e0e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E04u;
        // 0x3e0e08: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e04) {
            ctx->pc = 0x3E0E24u;
            goto label_3e0e24;
        }
    }
    ctx->pc = 0x3E0E0Cu;
label_3e0e0c:
    // 0x3e0e0c: 0xc0e95f6  jal         func_3A57D8
label_3e0e10:
    if (ctx->pc == 0x3E0E10u) {
        ctx->pc = 0x3E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E0Cu;
        // 0x3e0e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0E14u;
        goto label_3e0e14;
    }
    ctx->pc = 0x3E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x3E0E14u);
    ctx->pc = 0x3E0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0E0Cu;
    // 0x3e0e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3E0E0Cu, 0x3E0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0E14u;
label_3e0e14:
    // 0x3e0e14: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3e0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e0e18:
    // 0x3e0e18: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3e0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3e0e1c:
    // 0x3e0e1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e0e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e0e20:
    // 0x3e0e20: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3e0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3e0e24:
    // 0x3e0e24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e0e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e0e28:
    // 0x3e0e28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e0e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0e2c:
    // 0x3e0e2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e0e2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e0e30:
    // 0x3e0e30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e0e30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0e34:
    // 0x3e0e34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e0e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e0e38:
    // 0x3e0e38: 0x3e00008  jr          $ra
label_3e0e3c:
    if (ctx->pc == 0x3E0E3Cu) {
        ctx->pc = 0x3E0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E38u;
        // 0x3e0e3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0E40u;
        goto label_fallthrough_0x3e0e38;
    }
    ctx->pc = 0x3E0E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E38u;
        // 0x3e0e3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0e38:
    ctx->pc = 0x3E0E40u;
}
