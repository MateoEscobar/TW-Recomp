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

// Function: sub_003F7E08
// Address: 0x3f7e08 - 0x3f7eb8
void sub_003F7E08_0x3f7e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7E08_0x3f7e08");
#endif

    switch (ctx->pc) {
        case 0x3f7e08u: goto label_3f7e08;
        case 0x3f7e0cu: goto label_3f7e0c;
        case 0x3f7e10u: goto label_3f7e10;
        case 0x3f7e14u: goto label_3f7e14;
        case 0x3f7e18u: goto label_3f7e18;
        case 0x3f7e1cu: goto label_3f7e1c;
        case 0x3f7e20u: goto label_3f7e20;
        case 0x3f7e24u: goto label_3f7e24;
        case 0x3f7e28u: goto label_3f7e28;
        case 0x3f7e2cu: goto label_3f7e2c;
        case 0x3f7e30u: goto label_3f7e30;
        case 0x3f7e34u: goto label_3f7e34;
        case 0x3f7e38u: goto label_3f7e38;
        case 0x3f7e3cu: goto label_3f7e3c;
        case 0x3f7e40u: goto label_3f7e40;
        case 0x3f7e44u: goto label_3f7e44;
        case 0x3f7e48u: goto label_3f7e48;
        case 0x3f7e4cu: goto label_3f7e4c;
        case 0x3f7e50u: goto label_3f7e50;
        case 0x3f7e54u: goto label_3f7e54;
        case 0x3f7e58u: goto label_3f7e58;
        case 0x3f7e5cu: goto label_3f7e5c;
        case 0x3f7e60u: goto label_3f7e60;
        case 0x3f7e64u: goto label_3f7e64;
        case 0x3f7e68u: goto label_3f7e68;
        case 0x3f7e6cu: goto label_3f7e6c;
        case 0x3f7e70u: goto label_3f7e70;
        case 0x3f7e74u: goto label_3f7e74;
        case 0x3f7e78u: goto label_3f7e78;
        case 0x3f7e7cu: goto label_3f7e7c;
        case 0x3f7e80u: goto label_3f7e80;
        case 0x3f7e84u: goto label_3f7e84;
        case 0x3f7e88u: goto label_3f7e88;
        case 0x3f7e8cu: goto label_3f7e8c;
        case 0x3f7e90u: goto label_3f7e90;
        case 0x3f7e94u: goto label_3f7e94;
        case 0x3f7e98u: goto label_3f7e98;
        case 0x3f7e9cu: goto label_3f7e9c;
        case 0x3f7ea0u: goto label_3f7ea0;
        case 0x3f7ea4u: goto label_3f7ea4;
        case 0x3f7ea8u: goto label_3f7ea8;
        case 0x3f7eacu: goto label_3f7eac;
        case 0x3f7eb0u: goto label_3f7eb0;
        case 0x3f7eb4u: goto label_3f7eb4;
        default: break;
    }

    ctx->pc = 0x3f7e08u;

label_3f7e08:
    // 0x3f7e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f7e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f7e0c:
    // 0x3f7e0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f7e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f7e10:
    // 0x3f7e10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f7e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f7e14:
    // 0x3f7e14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f7e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e18:
    // 0x3f7e18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f7e1c:
    // 0x3f7e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f7e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e20:
    // 0x3f7e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f7e24:
    // 0x3f7e24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f7e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e28:
    // 0x3f7e28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f7e2c:
    // 0x3f7e2c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f7e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f7e30:
    // 0x3f7e30: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7e34:
    // 0x3f7e34: 0x40f809  jalr        $v0
label_3f7e38:
    if (ctx->pc == 0x3F7E38u) {
        ctx->pc = 0x3F7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E34u;
        // 0x3f7e38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E3Cu;
        goto label_3f7e3c;
    }
    ctx->pc = 0x3F7E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F7E3Cu);
        ctx->pc = 0x3F7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E34u;
        // 0x3f7e38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7E34u, 0x3F7E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7E3Cu;
label_3f7e3c:
    // 0x3f7e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f7e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e40:
    // 0x3f7e40: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3f7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3f7e44:
    // 0x3f7e44: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f7e48:
    if (ctx->pc == 0x3F7E48u) {
        ctx->pc = 0x3F7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E44u;
        // 0x3f7e48: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E4Cu;
        goto label_3f7e4c;
    }
    ctx->pc = 0x3F7E44u;
    {
        const bool branch_taken_0x3f7e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E44u;
        // 0x3f7e48: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e44) {
            ctx->pc = 0x3F7E84u;
            goto label_3f7e84;
        }
    }
    ctx->pc = 0x3F7E4Cu;
label_3f7e4c:
    // 0x3f7e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f7e50:
    if (ctx->pc == 0x3F7E50u) {
        ctx->pc = 0x3F7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E4Cu;
        // 0x3f7e50: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E54u;
        goto label_3f7e54;
    }
    ctx->pc = 0x3F7E4Cu;
    {
        const bool branch_taken_0x3f7e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E4Cu;
        // 0x3f7e50: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e4c) {
            ctx->pc = 0x3F7E64u;
            goto label_3f7e64;
        }
    }
    ctx->pc = 0x3F7E54u;
label_3f7e54:
    // 0x3f7e54: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f7e58:
    if (ctx->pc == 0x3F7E58u) {
        ctx->pc = 0x3F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E54u;
        // 0x3f7e58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E5Cu;
        goto label_3f7e5c;
    }
    ctx->pc = 0x3F7E54u;
    {
        const bool branch_taken_0x3f7e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E54u;
        // 0x3f7e58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e54) {
            ctx->pc = 0x3F7E94u;
            goto label_3f7e94;
        }
    }
    ctx->pc = 0x3F7E5Cu;
label_3f7e5c:
    // 0x3f7e5c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f7e60:
    if (ctx->pc == 0x3F7E60u) {
        ctx->pc = 0x3F7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E5Cu;
        // 0x3f7e60: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E64u;
        goto label_3f7e64;
    }
    ctx->pc = 0x3F7E5Cu;
    {
        const bool branch_taken_0x3f7e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E5Cu;
        // 0x3f7e60: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e5c) {
            ctx->pc = 0x3F7EA8u;
            goto label_3f7ea8;
        }
    }
    ctx->pc = 0x3F7E64u;
label_3f7e64:
    // 0x3f7e64: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3f7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3f7e68:
    // 0x3f7e68: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3f7e6c:
    if (ctx->pc == 0x3F7E6Cu) {
        ctx->pc = 0x3F7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E68u;
        // 0x3f7e6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E70u;
        goto label_3f7e70;
    }
    ctx->pc = 0x3F7E68u;
    {
        const bool branch_taken_0x3f7e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E68u;
        // 0x3f7e6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e68) {
            ctx->pc = 0x3F7EA4u;
            goto label_3f7ea4;
        }
    }
    ctx->pc = 0x3F7E70u;
label_3f7e70:
    // 0x3f7e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e74:
    // 0x3f7e74: 0xc0fd9c8  jal         func_3F6720
label_3f7e78:
    if (ctx->pc == 0x3F7E78u) {
        ctx->pc = 0x3F7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E74u;
        // 0x3f7e78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E7Cu;
        goto label_3f7e7c;
    }
    ctx->pc = 0x3F7E74u;
    SET_GPR_U32(ctx, 31, 0x3F7E7Cu);
    ctx->pc = 0x3F7E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7E74u;
    // 0x3f7e78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6720u, 0x3F7E74u, 0x3F7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7E7Cu;
label_3f7e7c:
    // 0x3f7e7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f7e80:
    if (ctx->pc == 0x3F7E80u) {
        ctx->pc = 0x3F7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E7Cu;
        // 0x3f7e80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E84u;
        goto label_3f7e84;
    }
    ctx->pc = 0x3F7E7Cu;
    {
        const bool branch_taken_0x3f7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E7Cu;
        // 0x3f7e80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e7c) {
            ctx->pc = 0x3F7EA4u;
            goto label_3f7ea4;
        }
    }
    ctx->pc = 0x3F7E84u;
label_3f7e84:
    // 0x3f7e84: 0xc0fda4c  jal         func_3F6930
label_3f7e88:
    if (ctx->pc == 0x3F7E88u) {
        ctx->pc = 0x3F7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E84u;
        // 0x3f7e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E8Cu;
        goto label_3f7e8c;
    }
    ctx->pc = 0x3F7E84u;
    SET_GPR_U32(ctx, 31, 0x3F7E8Cu);
    ctx->pc = 0x3F7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7E84u;
    // 0x3f7e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6930u, 0x3F7E84u, 0x3F7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7E8Cu;
label_3f7e8c:
    // 0x3f7e8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f7e90:
    if (ctx->pc == 0x3F7E90u) {
        ctx->pc = 0x3F7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E8Cu;
        // 0x3f7e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7E94u;
        goto label_3f7e94;
    }
    ctx->pc = 0x3F7E8Cu;
    {
        const bool branch_taken_0x3f7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E8Cu;
        // 0x3f7e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7e8c) {
            ctx->pc = 0x3F7EA4u;
            goto label_3f7ea4;
        }
    }
    ctx->pc = 0x3F7E94u;
label_3f7e94:
    // 0x3f7e94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3f7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7e98:
    // 0x3f7e98: 0xc0fda38  jal         func_3F68E0
label_3f7e9c:
    if (ctx->pc == 0x3F7E9Cu) {
        ctx->pc = 0x3F7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7E98u;
        // 0x3f7e9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7EA0u;
        goto label_3f7ea0;
    }
    ctx->pc = 0x3F7E98u;
    SET_GPR_U32(ctx, 31, 0x3F7EA0u);
    ctx->pc = 0x3F7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7E98u;
    // 0x3f7e9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F68E0u, 0x3F7E98u, 0x3F7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7EA0u;
label_3f7ea0:
    // 0x3f7ea0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f7ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7ea4:
    // 0x3f7ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f7ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7ea8:
    // 0x3f7ea8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f7ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7eac:
    // 0x3f7eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f7eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7eb0:
    // 0x3f7eb0: 0x3e00008  jr          $ra
label_3f7eb4:
    if (ctx->pc == 0x3F7EB4u) {
        ctx->pc = 0x3F7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EB0u;
        // 0x3f7eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7EB8u;
        goto label_fallthrough_0x3f7eb0;
    }
    ctx->pc = 0x3F7EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EB0u;
        // 0x3f7eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7eb0:
    ctx->pc = 0x3F7EB8u;
}
