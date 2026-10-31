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

// Function: sub_003F6F08
// Address: 0x3f6f08 - 0x3f6fb8
void sub_003F6F08_0x3f6f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6F08_0x3f6f08");
#endif

    switch (ctx->pc) {
        case 0x3f6f08u: goto label_3f6f08;
        case 0x3f6f0cu: goto label_3f6f0c;
        case 0x3f6f10u: goto label_3f6f10;
        case 0x3f6f14u: goto label_3f6f14;
        case 0x3f6f18u: goto label_3f6f18;
        case 0x3f6f1cu: goto label_3f6f1c;
        case 0x3f6f20u: goto label_3f6f20;
        case 0x3f6f24u: goto label_3f6f24;
        case 0x3f6f28u: goto label_3f6f28;
        case 0x3f6f2cu: goto label_3f6f2c;
        case 0x3f6f30u: goto label_3f6f30;
        case 0x3f6f34u: goto label_3f6f34;
        case 0x3f6f38u: goto label_3f6f38;
        case 0x3f6f3cu: goto label_3f6f3c;
        case 0x3f6f40u: goto label_3f6f40;
        case 0x3f6f44u: goto label_3f6f44;
        case 0x3f6f48u: goto label_3f6f48;
        case 0x3f6f4cu: goto label_3f6f4c;
        case 0x3f6f50u: goto label_3f6f50;
        case 0x3f6f54u: goto label_3f6f54;
        case 0x3f6f58u: goto label_3f6f58;
        case 0x3f6f5cu: goto label_3f6f5c;
        case 0x3f6f60u: goto label_3f6f60;
        case 0x3f6f64u: goto label_3f6f64;
        case 0x3f6f68u: goto label_3f6f68;
        case 0x3f6f6cu: goto label_3f6f6c;
        case 0x3f6f70u: goto label_3f6f70;
        case 0x3f6f74u: goto label_3f6f74;
        case 0x3f6f78u: goto label_3f6f78;
        case 0x3f6f7cu: goto label_3f6f7c;
        case 0x3f6f80u: goto label_3f6f80;
        case 0x3f6f84u: goto label_3f6f84;
        case 0x3f6f88u: goto label_3f6f88;
        case 0x3f6f8cu: goto label_3f6f8c;
        case 0x3f6f90u: goto label_3f6f90;
        case 0x3f6f94u: goto label_3f6f94;
        case 0x3f6f98u: goto label_3f6f98;
        case 0x3f6f9cu: goto label_3f6f9c;
        case 0x3f6fa0u: goto label_3f6fa0;
        case 0x3f6fa4u: goto label_3f6fa4;
        case 0x3f6fa8u: goto label_3f6fa8;
        case 0x3f6facu: goto label_3f6fac;
        case 0x3f6fb0u: goto label_3f6fb0;
        case 0x3f6fb4u: goto label_3f6fb4;
        default: break;
    }

    ctx->pc = 0x3f6f08u;

label_3f6f08:
    // 0x3f6f08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f6f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f6f0c:
    // 0x3f6f0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f6f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f6f10:
    // 0x3f6f10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f6f14:
    // 0x3f6f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f6f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f18:
    // 0x3f6f18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f6f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f6f1c:
    // 0x3f6f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f6f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f20:
    // 0x3f6f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f6f24:
    // 0x3f6f24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f6f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f28:
    // 0x3f6f28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f6f2c:
    // 0x3f6f2c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6f30:
    // 0x3f6f30: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6f34:
    // 0x3f6f34: 0x40f809  jalr        $v0
label_3f6f38:
    if (ctx->pc == 0x3F6F38u) {
        ctx->pc = 0x3F6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F34u;
        // 0x3f6f38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F3Cu;
        goto label_3f6f3c;
    }
    ctx->pc = 0x3F6F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6F3Cu);
        ctx->pc = 0x3F6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F34u;
        // 0x3f6f38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6F34u, 0x3F6F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6F3Cu;
label_3f6f3c:
    // 0x3f6f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f6f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f40:
    // 0x3f6f40: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3f6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3f6f44:
    // 0x3f6f44: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f6f48:
    if (ctx->pc == 0x3F6F48u) {
        ctx->pc = 0x3F6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F44u;
        // 0x3f6f48: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F4Cu;
        goto label_3f6f4c;
    }
    ctx->pc = 0x3F6F44u;
    {
        const bool branch_taken_0x3f6f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F44u;
        // 0x3f6f48: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f44) {
            ctx->pc = 0x3F6F84u;
            goto label_3f6f84;
        }
    }
    ctx->pc = 0x3F6F4Cu;
label_3f6f4c:
    // 0x3f6f4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f6f50:
    if (ctx->pc == 0x3F6F50u) {
        ctx->pc = 0x3F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F4Cu;
        // 0x3f6f50: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F54u;
        goto label_3f6f54;
    }
    ctx->pc = 0x3F6F4Cu;
    {
        const bool branch_taken_0x3f6f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F4Cu;
        // 0x3f6f50: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f4c) {
            ctx->pc = 0x3F6F64u;
            goto label_3f6f64;
        }
    }
    ctx->pc = 0x3F6F54u;
label_3f6f54:
    // 0x3f6f54: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f6f58:
    if (ctx->pc == 0x3F6F58u) {
        ctx->pc = 0x3F6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F54u;
        // 0x3f6f58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F5Cu;
        goto label_3f6f5c;
    }
    ctx->pc = 0x3F6F54u;
    {
        const bool branch_taken_0x3f6f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F54u;
        // 0x3f6f58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f54) {
            ctx->pc = 0x3F6F94u;
            goto label_3f6f94;
        }
    }
    ctx->pc = 0x3F6F5Cu;
label_3f6f5c:
    // 0x3f6f5c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f6f60:
    if (ctx->pc == 0x3F6F60u) {
        ctx->pc = 0x3F6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F5Cu;
        // 0x3f6f60: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F64u;
        goto label_3f6f64;
    }
    ctx->pc = 0x3F6F5Cu;
    {
        const bool branch_taken_0x3f6f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F5Cu;
        // 0x3f6f60: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f5c) {
            ctx->pc = 0x3F6FA8u;
            goto label_3f6fa8;
        }
    }
    ctx->pc = 0x3F6F64u;
label_3f6f64:
    // 0x3f6f64: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3f6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3f6f68:
    // 0x3f6f68: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3f6f6c:
    if (ctx->pc == 0x3F6F6Cu) {
        ctx->pc = 0x3F6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F68u;
        // 0x3f6f6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F70u;
        goto label_3f6f70;
    }
    ctx->pc = 0x3F6F68u;
    {
        const bool branch_taken_0x3f6f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F68u;
        // 0x3f6f6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f68) {
            ctx->pc = 0x3F6FA4u;
            goto label_3f6fa4;
        }
    }
    ctx->pc = 0x3F6F70u;
label_3f6f70:
    // 0x3f6f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f6f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f74:
    // 0x3f6f74: 0xc0fd9c8  jal         func_3F6720
label_3f6f78:
    if (ctx->pc == 0x3F6F78u) {
        ctx->pc = 0x3F6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F74u;
        // 0x3f6f78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F7Cu;
        goto label_3f6f7c;
    }
    ctx->pc = 0x3F6F74u;
    SET_GPR_U32(ctx, 31, 0x3F6F7Cu);
    ctx->pc = 0x3F6F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F74u;
    // 0x3f6f78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6720u, 0x3F6F74u, 0x3F6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F7Cu;
label_3f6f7c:
    // 0x3f6f7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f6f80:
    if (ctx->pc == 0x3F6F80u) {
        ctx->pc = 0x3F6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F7Cu;
        // 0x3f6f80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F84u;
        goto label_3f6f84;
    }
    ctx->pc = 0x3F6F7Cu;
    {
        const bool branch_taken_0x3f6f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F7Cu;
        // 0x3f6f80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f7c) {
            ctx->pc = 0x3F6FA4u;
            goto label_3f6fa4;
        }
    }
    ctx->pc = 0x3F6F84u;
label_3f6f84:
    // 0x3f6f84: 0xc0fda4c  jal         func_3F6930
label_3f6f88:
    if (ctx->pc == 0x3F6F88u) {
        ctx->pc = 0x3F6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F84u;
        // 0x3f6f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F8Cu;
        goto label_3f6f8c;
    }
    ctx->pc = 0x3F6F84u;
    SET_GPR_U32(ctx, 31, 0x3F6F8Cu);
    ctx->pc = 0x3F6F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F84u;
    // 0x3f6f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6930u, 0x3F6F84u, 0x3F6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F8Cu;
label_3f6f8c:
    // 0x3f6f8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f6f90:
    if (ctx->pc == 0x3F6F90u) {
        ctx->pc = 0x3F6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F8Cu;
        // 0x3f6f90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6F94u;
        goto label_3f6f94;
    }
    ctx->pc = 0x3F6F8Cu;
    {
        const bool branch_taken_0x3f6f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F8Cu;
        // 0x3f6f90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f8c) {
            ctx->pc = 0x3F6FA4u;
            goto label_3f6fa4;
        }
    }
    ctx->pc = 0x3F6F94u;
label_3f6f94:
    // 0x3f6f94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3f6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f98:
    // 0x3f6f98: 0xc0fda38  jal         func_3F68E0
label_3f6f9c:
    if (ctx->pc == 0x3F6F9Cu) {
        ctx->pc = 0x3F6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F98u;
        // 0x3f6f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6FA0u;
        goto label_3f6fa0;
    }
    ctx->pc = 0x3F6F98u;
    SET_GPR_U32(ctx, 31, 0x3F6FA0u);
    ctx->pc = 0x3F6F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F98u;
    // 0x3f6f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F68E0u, 0x3F6F98u, 0x3F6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6FA0u;
label_3f6fa0:
    // 0x3f6fa0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f6fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6fa4:
    // 0x3f6fa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f6fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6fa8:
    // 0x3f6fa8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f6fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6fac:
    // 0x3f6fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6fb0:
    // 0x3f6fb0: 0x3e00008  jr          $ra
label_3f6fb4:
    if (ctx->pc == 0x3F6FB4u) {
        ctx->pc = 0x3F6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FB0u;
        // 0x3f6fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6FB8u;
        goto label_fallthrough_0x3f6fb0;
    }
    ctx->pc = 0x3F6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6FB0u;
        // 0x3f6fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6fb0:
    ctx->pc = 0x3F6FB8u;
}
