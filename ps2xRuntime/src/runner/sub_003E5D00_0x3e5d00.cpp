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

// Function: sub_003E5D00
// Address: 0x3e5d00 - 0x3e5eb0
void sub_003E5D00_0x3e5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5D00_0x3e5d00");
#endif

    switch (ctx->pc) {
        case 0x3e5d2cu: goto label_3e5d2c;
        case 0x3e5d5cu: goto label_3e5d5c;
        case 0x3e5d6cu: goto label_3e5d6c;
        case 0x3e5e30u: goto label_3e5e30;
        case 0x3e5e68u: goto label_3e5e68;
        case 0x3e5e7cu: goto label_3e5e7c;
        default: break;
    }

    ctx->pc = 0x3e5d00u;

    // 0x3e5d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e5d04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e5d08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3e5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3e5d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e5d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3e5d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3e5d14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e5d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3e5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3e5d1c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3e5d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3e5d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e5d24: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E5D24u;
    SET_GPR_U32(ctx, 31, 0x3E5D2Cu);
    ctx->pc = 0x3E5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D24u;
    // 0x3e5d28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E5D24u, 0x3E5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D2Cu;
label_3e5d2c:
    // 0x3e5d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e5d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d30: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3e5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3e5d34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e5d38: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3E5D38u;
    {
        const bool branch_taken_0x3e5d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D38u;
        // 0x3e5d3c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d38) {
            ctx->pc = 0x3E5E90u;
            goto label_3e5e90;
        }
    }
    ctx->pc = 0x3E5D40u;
    // 0x3e5d40: 0x10710052  beq         $v1, $s1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3E5D40u;
    {
        const bool branch_taken_0x3e5d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3E5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D40u;
        // 0x3e5d44: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d40) {
            ctx->pc = 0x3E5E8Cu;
            goto label_3e5e8c;
        }
    }
    ctx->pc = 0x3E5D48u;
    // 0x3e5d48: 0x8e5400b0  lw          $s4, 0xB0($s2)
    ctx->pc = 0x3e5d48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x3e5d4c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e5d50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e5d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d54: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E5D54u;
    SET_GPR_U32(ctx, 31, 0x3E5D5Cu);
    ctx->pc = 0x3E5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D54u;
    // 0x3e5d58: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E5D54u, 0x3E5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D5Cu;
label_3e5d5c:
    // 0x3e5d5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e5d60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e5d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5d64: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E5D64u;
    SET_GPR_U32(ctx, 31, 0x3E5D6Cu);
    ctx->pc = 0x3E5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5D64u;
    // 0x3e5d68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E5D64u, 0x3E5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5D6Cu;
label_3e5d6c:
    // 0x3e5d6c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e5d70: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3E5D70u;
    {
        const bool branch_taken_0x3e5d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D70u;
        // 0x3e5d74: 0x2e22000b  sltiu       $v0, $s1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d70) {
            ctx->pc = 0x3E5E68u;
            goto label_3e5e68;
        }
    }
    ctx->pc = 0x3E5D78u;
    // 0x3e5d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5D78u;
    {
        const bool branch_taken_0x3e5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D78u;
        // 0x3e5d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d78) {
            ctx->pc = 0x3E5DA0u;
            goto label_3e5da0;
        }
    }
    ctx->pc = 0x3E5D80u;
    // 0x3e5d80: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5D80u;
    {
        const bool branch_taken_0x3e5d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D80u;
        // 0x3e5d84: 0x368200ff  ori         $v0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d80) {
            ctx->pc = 0x3E5DF8u;
            goto label_3e5df8;
        }
    }
    ctx->pc = 0x3E5D88u;
    // 0x3e5d88: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E5D88u;
    {
        const bool branch_taken_0x3e5d88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D88u;
        // 0x3e5d8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d88) {
            ctx->pc = 0x3E5DD8u;
            goto label_3e5dd8;
        }
    }
    ctx->pc = 0x3E5D90u;
    // 0x3e5d90: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5D90u;
    {
        const bool branch_taken_0x3e5d90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D90u;
        // 0x3e5d94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d90) {
            ctx->pc = 0x3E5E08u;
            goto label_3e5e08;
        }
    }
    ctx->pc = 0x3E5D98u;
    // 0x3e5d98: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3E5D98u;
    {
        const bool branch_taken_0x3e5d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5D98u;
        // 0x3e5d9c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5d98) {
            ctx->pc = 0x3E5E94u;
            goto label_3e5e94;
        }
    }
    ctx->pc = 0x3E5DA0u;
label_3e5da0:
    // 0x3e5da0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e5da4: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3E5DA4u;
    {
        const bool branch_taken_0x3e5da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DA4u;
        // 0x3e5da8: 0x2e22000f  sltiu       $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5da4) {
            ctx->pc = 0x3E5E54u;
            goto label_3e5e54;
        }
    }
    ctx->pc = 0x3E5DACu;
    // 0x3e5dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E5DACu;
    {
        const bool branch_taken_0x3e5dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DACu;
        // 0x3e5db0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dac) {
            ctx->pc = 0x3E5DC4u;
            goto label_3e5dc4;
        }
    }
    ctx->pc = 0x3E5DB4u;
    // 0x3e5db4: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3E5DB4u;
    {
        const bool branch_taken_0x3e5db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DB4u;
        // 0x3e5db8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5db4) {
            ctx->pc = 0x3E5E3Cu;
            goto label_3e5e3c;
        }
    }
    ctx->pc = 0x3E5DBCu;
    // 0x3e5dbc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3E5DBCu;
    {
        const bool branch_taken_0x3e5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DBCu;
        // 0x3e5dc0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dbc) {
            ctx->pc = 0x3E5E94u;
            goto label_3e5e94;
        }
    }
    ctx->pc = 0x3E5DC4u;
label_3e5dc4:
    // 0x3e5dc4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3e5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3e5dc8: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E5DC8u;
    {
        const bool branch_taken_0x3e5dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DC8u;
        // 0x3e5dcc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dc8) {
            ctx->pc = 0x3E5E70u;
            goto label_3e5e70;
        }
    }
    ctx->pc = 0x3E5DD0u;
    // 0x3e5dd0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3E5DD0u;
    {
        const bool branch_taken_0x3e5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DD0u;
        // 0x3e5dd4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5dd0) {
            ctx->pc = 0x3E5E94u;
            goto label_3e5e94;
        }
    }
    ctx->pc = 0x3E5DD8u;
label_3e5dd8:
    // 0x3e5dd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e5ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5de0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e5de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3e5de4: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3e5de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3e5de8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e5de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e5dec: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e5decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3e5df0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E5DF0u;
    {
        const bool branch_taken_0x3e5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5DF0u;
        // 0x3e5df4: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5df0) {
            ctx->pc = 0x3E5E28u;
            goto label_3e5e28;
        }
    }
    ctx->pc = 0x3E5DF8u;
label_3e5df8:
    // 0x3e5df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5dfc: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x3e5e00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5E00u;
    {
        const bool branch_taken_0x3e5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E00u;
        // 0x3e5e04: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e00) {
            ctx->pc = 0x3E5E28u;
            goto label_3e5e28;
        }
    }
    ctx->pc = 0x3E5E08u;
label_3e5e08:
    // 0x3e5e08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e5e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e10: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e5e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3e5e14: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e5e18: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3e5e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x3e5e1c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e5e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3e5e20: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x3e5e24: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3e5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3e5e28:
    // 0x3e5e28: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3E5E28u;
    SET_GPR_U32(ctx, 31, 0x3E5E30u);
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E5E28u, 0x3E5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E30u;
label_3e5e30:
    // 0x3e5e30: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3e5e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e5e34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E5E34u;
    {
        const bool branch_taken_0x3e5e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E34u;
        // 0x3e5e38: 0xe64000c0  swc1        $f0, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e34) {
            ctx->pc = 0x3E5E8Cu;
            goto label_3e5e8c;
        }
    }
    ctx->pc = 0x3E5E3Cu;
label_3e5e3c:
    // 0x3e5e3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e5e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e44: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e5e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3e5e48: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e5e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e5e4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E5E4Cu;
    {
        const bool branch_taken_0x3e5e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E4Cu;
        // 0x3e5e50: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e4c) {
            ctx->pc = 0x3E5E60u;
            goto label_3e5e60;
        }
    }
    ctx->pc = 0x3E5E54u;
label_3e5e54:
    // 0x3e5e54: 0xae5400b4  sw          $s4, 0xB4($s2)
    ctx->pc = 0x3e5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 20));
    // 0x3e5e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e5e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e5e60:
    // 0x3e5e60: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3E5E60u;
    SET_GPR_U32(ctx, 31, 0x3E5E68u);
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E5E60u, 0x3E5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E68u;
label_3e5e68:
    // 0x3e5e68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E5E68u;
    {
        const bool branch_taken_0x3e5e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5E68u;
        // 0x3e5e6c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5e68) {
            ctx->pc = 0x3E5E8Cu;
            goto label_3e5e8c;
        }
    }
    ctx->pc = 0x3E5E70u;
label_3e5e70:
    // 0x3e5e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e5e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5e74: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3E5E74u;
    SET_GPR_U32(ctx, 31, 0x3E5E7Cu);
    ctx->pc = 0x3E5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5E74u;
    // 0x3e5e78: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E5E74u, 0x3E5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5E7Cu;
label_3e5e7c:
    // 0x3e5e7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e5e80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3e5e84: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x3e5e88: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x3e5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_3e5e8c:
    // 0x3e5e8c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e5e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5e90:
    // 0x3e5e90: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e5e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5e94:
    // 0x3e5e94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e5e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5e98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3e5e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5e9c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3e5e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5EA4u;
        // 0x3e5ea8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5EACu;
    // 0x3e5eac: 0x0  nop
    ctx->pc = 0x3e5eacu;
    // NOP
    ctx->pc = 0x3e5eb0u;
}
