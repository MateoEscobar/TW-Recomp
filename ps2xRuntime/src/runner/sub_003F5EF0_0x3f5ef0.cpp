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

// Function: sub_003F5EF0
// Address: 0x3f5ef0 - 0x3f5ff4
void sub_003F5EF0_0x3f5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5EF0_0x3f5ef0");
#endif

    switch (ctx->pc) {
        case 0x3f5ef0u: goto label_3f5ef0;
        case 0x3f5ef4u: goto label_3f5ef4;
        case 0x3f5ef8u: goto label_3f5ef8;
        case 0x3f5efcu: goto label_3f5efc;
        case 0x3f5f00u: goto label_3f5f00;
        case 0x3f5f04u: goto label_3f5f04;
        case 0x3f5f08u: goto label_3f5f08;
        case 0x3f5f0cu: goto label_3f5f0c;
        case 0x3f5f10u: goto label_3f5f10;
        case 0x3f5f14u: goto label_3f5f14;
        case 0x3f5f18u: goto label_3f5f18;
        case 0x3f5f1cu: goto label_3f5f1c;
        case 0x3f5f20u: goto label_3f5f20;
        case 0x3f5f24u: goto label_3f5f24;
        case 0x3f5f28u: goto label_3f5f28;
        case 0x3f5f2cu: goto label_3f5f2c;
        case 0x3f5f30u: goto label_3f5f30;
        case 0x3f5f34u: goto label_3f5f34;
        case 0x3f5f38u: goto label_3f5f38;
        case 0x3f5f3cu: goto label_3f5f3c;
        case 0x3f5f40u: goto label_3f5f40;
        case 0x3f5f44u: goto label_3f5f44;
        case 0x3f5f48u: goto label_3f5f48;
        case 0x3f5f4cu: goto label_3f5f4c;
        case 0x3f5f50u: goto label_3f5f50;
        case 0x3f5f54u: goto label_3f5f54;
        case 0x3f5f58u: goto label_3f5f58;
        case 0x3f5f5cu: goto label_3f5f5c;
        case 0x3f5f60u: goto label_3f5f60;
        case 0x3f5f64u: goto label_3f5f64;
        case 0x3f5f68u: goto label_3f5f68;
        case 0x3f5f6cu: goto label_3f5f6c;
        case 0x3f5f70u: goto label_3f5f70;
        case 0x3f5f74u: goto label_3f5f74;
        case 0x3f5f78u: goto label_3f5f78;
        case 0x3f5f7cu: goto label_3f5f7c;
        case 0x3f5f80u: goto label_3f5f80;
        case 0x3f5f84u: goto label_3f5f84;
        case 0x3f5f88u: goto label_3f5f88;
        case 0x3f5f8cu: goto label_3f5f8c;
        case 0x3f5f90u: goto label_3f5f90;
        case 0x3f5f94u: goto label_3f5f94;
        case 0x3f5f98u: goto label_3f5f98;
        case 0x3f5f9cu: goto label_3f5f9c;
        case 0x3f5fa0u: goto label_3f5fa0;
        case 0x3f5fa4u: goto label_3f5fa4;
        case 0x3f5fa8u: goto label_3f5fa8;
        case 0x3f5facu: goto label_3f5fac;
        case 0x3f5fb0u: goto label_3f5fb0;
        case 0x3f5fb4u: goto label_3f5fb4;
        case 0x3f5fb8u: goto label_3f5fb8;
        case 0x3f5fbcu: goto label_3f5fbc;
        case 0x3f5fc0u: goto label_3f5fc0;
        case 0x3f5fc4u: goto label_3f5fc4;
        case 0x3f5fc8u: goto label_3f5fc8;
        case 0x3f5fccu: goto label_3f5fcc;
        case 0x3f5fd0u: goto label_3f5fd0;
        case 0x3f5fd4u: goto label_3f5fd4;
        case 0x3f5fd8u: goto label_3f5fd8;
        case 0x3f5fdcu: goto label_3f5fdc;
        case 0x3f5fe0u: goto label_3f5fe0;
        case 0x3f5fe4u: goto label_3f5fe4;
        case 0x3f5fe8u: goto label_3f5fe8;
        case 0x3f5fecu: goto label_3f5fec;
        case 0x3f5ff0u: goto label_3f5ff0;
        default: break;
    }

    ctx->pc = 0x3f5ef0u;

label_3f5ef0:
    // 0x3f5ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f5ef4:
    // 0x3f5ef4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f5ef8:
    // 0x3f5ef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f5efc:
    // 0x3f5efc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f5efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f00:
    // 0x3f5f00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f5f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f5f04:
    // 0x3f5f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f5f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f08:
    // 0x3f5f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f5f0c:
    // 0x3f5f0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f5f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f10:
    // 0x3f5f10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5f14:
    // 0x3f5f14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f5f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f5f18:
    // 0x3f5f18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f5f1c:
    // 0x3f5f1c: 0x40f809  jalr        $v0
label_3f5f20:
    if (ctx->pc == 0x3F5F20u) {
        ctx->pc = 0x3F5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F1Cu;
        // 0x3f5f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F24u;
        goto label_3f5f24;
    }
    ctx->pc = 0x3F5F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5F24u);
        ctx->pc = 0x3F5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F1Cu;
        // 0x3f5f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5F1Cu, 0x3F5F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5F24u;
label_3f5f24:
    // 0x3f5f24: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x3f5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3f5f28:
    // 0x3f5f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f5f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f2c:
    // 0x3f5f2c: 0x2c620037  sltiu       $v0, $v1, 0x37
    ctx->pc = 0x3f5f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
label_3f5f30:
    // 0x3f5f30: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3f5f34:
    if (ctx->pc == 0x3F5F34u) {
        ctx->pc = 0x3F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F30u;
        // 0x3f5f34: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F38u;
        goto label_3f5f38;
    }
    ctx->pc = 0x3F5F30u;
    {
        const bool branch_taken_0x3f5f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F30u;
        // 0x3f5f34: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f30) {
            ctx->pc = 0x3F5FFCu;
            return;
        }
    }
    ctx->pc = 0x3F5F38u;
label_3f5f38:
    // 0x3f5f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f5f3c:
    // 0x3f5f3c: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x3f5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
label_3f5f40:
    // 0x3f5f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f5f44:
    // 0x3f5f44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f5f48:
    // 0x3f5f48: 0x800008  jr          $a0
label_3f5f4c:
    if (ctx->pc == 0x3F5F4Cu) {
        ctx->pc = 0x3F5F50u;
        goto label_3f5f50;
    }
    ctx->pc = 0x3F5F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F5F50u: goto label_3f5f50;
            case 0x3F5F6Cu: goto label_3f5f6c;
            case 0x3F5F80u: goto label_3f5f80;
            case 0x3F5F9Cu: goto label_3f5f9c;
            case 0x3F5FB0u: goto label_3f5fb0;
            case 0x3F5FCCu: goto label_3f5fcc;
            case 0x3F5FE4u: goto label_3f5fe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5F48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F5F50u;
label_3f5f50:
    // 0x3f5f50: 0x9205002c  lbu         $a1, 0x2C($s0)
    ctx->pc = 0x3f5f50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_3f5f54:
    // 0x3f5f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f58:
    // 0x3f5f58: 0x38a50002  xori        $a1, $a1, 0x2
    ctx->pc = 0x3f5f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_3f5f5c:
    // 0x3f5f5c: 0xc0ea16a  jal         func_3A85A8
label_3f5f60:
    if (ctx->pc == 0x3F5F60u) {
        ctx->pc = 0x3F5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F5Cu;
        // 0x3f5f60: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F64u;
        goto label_3f5f64;
    }
    ctx->pc = 0x3F5F5Cu;
    SET_GPR_U32(ctx, 31, 0x3F5F64u);
    ctx->pc = 0x3F5F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F5Cu;
    // 0x3f5f60: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F5F5Cu, 0x3F5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F64u;
label_3f5f64:
    // 0x3f5f64: 0x10000026  b           . + 4 + (0x26 << 2)
label_3f5f68:
    if (ctx->pc == 0x3F5F68u) {
        ctx->pc = 0x3F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F64u;
        // 0x3f5f68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F6Cu;
        goto label_3f5f6c;
    }
    ctx->pc = 0x3F5F64u;
    {
        const bool branch_taken_0x3f5f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F64u;
        // 0x3f5f68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f64) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
    ctx->pc = 0x3F5F6Cu;
label_3f5f6c:
    // 0x3f5f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f70:
    // 0x3f5f70: 0xc0ea170  jal         func_3A85C0
label_3f5f74:
    if (ctx->pc == 0x3F5F74u) {
        ctx->pc = 0x3F5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F70u;
        // 0x3f5f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F78u;
        goto label_3f5f78;
    }
    ctx->pc = 0x3F5F70u;
    SET_GPR_U32(ctx, 31, 0x3F5F78u);
    ctx->pc = 0x3F5F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F70u;
    // 0x3f5f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85C0u, 0x3F5F70u, 0x3F5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F78u;
label_3f5f78:
    // 0x3f5f78: 0x10000021  b           . + 4 + (0x21 << 2)
label_3f5f7c:
    if (ctx->pc == 0x3F5F7Cu) {
        ctx->pc = 0x3F5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F78u;
        // 0x3f5f7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F80u;
        goto label_3f5f80;
    }
    ctx->pc = 0x3F5F78u;
    {
        const bool branch_taken_0x3f5f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F78u;
        // 0x3f5f7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f78) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
    ctx->pc = 0x3F5F80u;
label_3f5f80:
    // 0x3f5f80: 0xc0ea14c  jal         func_3A8530
label_3f5f84:
    if (ctx->pc == 0x3F5F84u) {
        ctx->pc = 0x3F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F80u;
        // 0x3f5f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F88u;
        goto label_3f5f88;
    }
    ctx->pc = 0x3F5F80u;
    SET_GPR_U32(ctx, 31, 0x3F5F88u);
    ctx->pc = 0x3F5F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F80u;
    // 0x3f5f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F5F80u, 0x3F5F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F88u;
label_3f5f88:
    // 0x3f5f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5f8c:
    // 0x3f5f8c: 0xc0ea16a  jal         func_3A85A8
label_3f5f90:
    if (ctx->pc == 0x3F5F90u) {
        ctx->pc = 0x3F5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F8Cu;
        // 0x3f5f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F94u;
        goto label_3f5f94;
    }
    ctx->pc = 0x3F5F8Cu;
    SET_GPR_U32(ctx, 31, 0x3F5F94u);
    ctx->pc = 0x3F5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5F8Cu;
    // 0x3f5f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F5F8Cu, 0x3F5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5F94u;
label_3f5f94:
    // 0x3f5f94: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f5f98:
    if (ctx->pc == 0x3F5F98u) {
        ctx->pc = 0x3F5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F94u;
        // 0x3f5f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5F9Cu;
        goto label_3f5f9c;
    }
    ctx->pc = 0x3F5F94u;
    {
        const bool branch_taken_0x3f5f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5F94u;
        // 0x3f5f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5f94) {
            ctx->pc = 0x3F5FD0u;
            goto label_3f5fd0;
        }
    }
    ctx->pc = 0x3F5F9Cu;
label_3f5f9c:
    // 0x3f5f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5fa0:
    // 0x3f5fa0: 0xc0fd4c6  jal         func_3F5318
label_3f5fa4:
    if (ctx->pc == 0x3F5FA4u) {
        ctx->pc = 0x3F5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FA0u;
        // 0x3f5fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FA8u;
        goto label_3f5fa8;
    }
    ctx->pc = 0x3F5FA0u;
    SET_GPR_U32(ctx, 31, 0x3F5FA8u);
    ctx->pc = 0x3F5FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FA0u;
    // 0x3f5fa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5318u, 0x3F5FA0u, 0x3F5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FA8u;
label_3f5fa8:
    // 0x3f5fa8: 0x10000015  b           . + 4 + (0x15 << 2)
label_3f5fac:
    if (ctx->pc == 0x3F5FACu) {
        ctx->pc = 0x3F5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FA8u;
        // 0x3f5fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FB0u;
        goto label_3f5fb0;
    }
    ctx->pc = 0x3F5FA8u;
    {
        const bool branch_taken_0x3f5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FA8u;
        // 0x3f5fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5fa8) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
    ctx->pc = 0x3F5FB0u;
label_3f5fb0:
    // 0x3f5fb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5fb4:
    // 0x3f5fb4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f5fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f5fb8:
    // 0x3f5fb8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f5fbc:
    // 0x3f5fbc: 0x60f809  jalr        $v1
label_3f5fc0:
    if (ctx->pc == 0x3F5FC0u) {
        ctx->pc = 0x3F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FBCu;
        // 0x3f5fc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FC4u;
        goto label_3f5fc4;
    }
    ctx->pc = 0x3F5FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5FC4u);
        ctx->pc = 0x3F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FBCu;
        // 0x3f5fc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5FBCu, 0x3F5FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5FC4u;
label_3f5fc4:
    // 0x3f5fc4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f5fc8:
    if (ctx->pc == 0x3F5FC8u) {
        ctx->pc = 0x3F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FC4u;
        // 0x3f5fc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FCCu;
        goto label_3f5fcc;
    }
    ctx->pc = 0x3F5FC4u;
    {
        const bool branch_taken_0x3f5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FC4u;
        // 0x3f5fc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5fc4) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
    ctx->pc = 0x3F5FCCu;
label_3f5fcc:
    // 0x3f5fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5fd0:
    // 0x3f5fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5fd4:
    // 0x3f5fd4: 0xc0fd582  jal         func_3F5608
label_3f5fd8:
    if (ctx->pc == 0x3F5FD8u) {
        ctx->pc = 0x3F5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FD4u;
        // 0x3f5fd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FDCu;
        goto label_3f5fdc;
    }
    ctx->pc = 0x3F5FD4u;
    SET_GPR_U32(ctx, 31, 0x3F5FDCu);
    ctx->pc = 0x3F5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FD4u;
    // 0x3f5fd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5608u, 0x3F5FD4u, 0x3F5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FDCu;
label_3f5fdc:
    // 0x3f5fdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f5fe0:
    if (ctx->pc == 0x3F5FE0u) {
        ctx->pc = 0x3F5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FDCu;
        // 0x3f5fe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FE4u;
        goto label_3f5fe4;
    }
    ctx->pc = 0x3F5FDCu;
    {
        const bool branch_taken_0x3f5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FDCu;
        // 0x3f5fe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5fdc) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
    ctx->pc = 0x3F5FE4u;
label_3f5fe4:
    // 0x3f5fe4: 0xc0e8616  jal         func_3A1858
label_3f5fe8:
    if (ctx->pc == 0x3F5FE8u) {
        ctx->pc = 0x3F5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FE4u;
        // 0x3f5fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FECu;
        goto label_3f5fec;
    }
    ctx->pc = 0x3F5FE4u;
    SET_GPR_U32(ctx, 31, 0x3F5FECu);
    ctx->pc = 0x3F5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FE4u;
    // 0x3f5fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3F5FE4u, 0x3F5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FECu;
label_3f5fec:
    // 0x3f5fec: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f5ff0:
    if (ctx->pc == 0x3F5FF0u) {
        ctx->pc = 0x3F5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FECu;
        // 0x3f5ff0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5FF4u;
        goto label_fallthrough_0x3f5fec;
    }
    ctx->pc = 0x3F5FECu;
    {
        const bool branch_taken_0x3f5fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5FECu;
        // 0x3f5ff0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5fec) {
            ctx->pc = 0x3F6000u;
            return;
        }
    }
label_fallthrough_0x3f5fec:
    ctx->pc = 0x3F5FF4u;
}
