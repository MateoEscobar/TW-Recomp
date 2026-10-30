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

// Function: sub_00471F38
// Address: 0x471f38 - 0x472000
void sub_00471F38_0x471f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471F38_0x471f38");
#endif

    switch (ctx->pc) {
        case 0x471f38u: goto label_471f38;
        case 0x471f3cu: goto label_471f3c;
        case 0x471f40u: goto label_471f40;
        case 0x471f44u: goto label_471f44;
        case 0x471f48u: goto label_471f48;
        case 0x471f4cu: goto label_471f4c;
        case 0x471f50u: goto label_471f50;
        case 0x471f54u: goto label_471f54;
        case 0x471f58u: goto label_471f58;
        case 0x471f5cu: goto label_471f5c;
        case 0x471f60u: goto label_471f60;
        case 0x471f64u: goto label_471f64;
        case 0x471f68u: goto label_471f68;
        case 0x471f6cu: goto label_471f6c;
        case 0x471f70u: goto label_471f70;
        case 0x471f74u: goto label_471f74;
        case 0x471f78u: goto label_471f78;
        case 0x471f7cu: goto label_471f7c;
        case 0x471f80u: goto label_471f80;
        case 0x471f84u: goto label_471f84;
        case 0x471f88u: goto label_471f88;
        case 0x471f8cu: goto label_471f8c;
        case 0x471f90u: goto label_471f90;
        case 0x471f94u: goto label_471f94;
        case 0x471f98u: goto label_471f98;
        case 0x471f9cu: goto label_471f9c;
        case 0x471fa0u: goto label_471fa0;
        case 0x471fa4u: goto label_471fa4;
        case 0x471fa8u: goto label_471fa8;
        case 0x471facu: goto label_471fac;
        case 0x471fb0u: goto label_471fb0;
        case 0x471fb4u: goto label_471fb4;
        case 0x471fb8u: goto label_471fb8;
        case 0x471fbcu: goto label_471fbc;
        case 0x471fc0u: goto label_471fc0;
        case 0x471fc4u: goto label_471fc4;
        case 0x471fc8u: goto label_471fc8;
        case 0x471fccu: goto label_471fcc;
        case 0x471fd0u: goto label_471fd0;
        case 0x471fd4u: goto label_471fd4;
        case 0x471fd8u: goto label_471fd8;
        case 0x471fdcu: goto label_471fdc;
        case 0x471fe0u: goto label_471fe0;
        case 0x471fe4u: goto label_471fe4;
        case 0x471fe8u: goto label_471fe8;
        case 0x471fecu: goto label_471fec;
        case 0x471ff0u: goto label_471ff0;
        case 0x471ff4u: goto label_471ff4;
        case 0x471ff8u: goto label_471ff8;
        case 0x471ffcu: goto label_471ffc;
        default: break;
    }

    ctx->pc = 0x471f38u;

label_471f38:
    // 0x471f38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x471f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_471f3c:
    // 0x471f3c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x471f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_471f40:
    // 0x471f40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x471f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_471f44:
    // 0x471f44: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x471f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_471f48:
    // 0x471f48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x471f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_471f4c:
    // 0x471f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x471f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_471f50:
    // 0x471f50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x471f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_471f54:
    // 0x471f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471f58:
    // 0x471f58: 0xc11c216  jal         func_470858
label_471f5c:
    if (ctx->pc == 0x471F5Cu) {
        ctx->pc = 0x471F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F58u;
        // 0x471f5c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471F60u;
        goto label_471f60;
    }
    ctx->pc = 0x471F58u;
    SET_GPR_U32(ctx, 31, 0x471F60u);
    ctx->pc = 0x471F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471F58u;
    // 0x471f5c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470858u, 0x471F58u, 0x471F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F60u;
label_471f60:
    // 0x471f60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_471f64:
    if (ctx->pc == 0x471F64u) {
        ctx->pc = 0x471F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F60u;
        // 0x471f64: 0x26950038  addiu       $s5, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471F68u;
        goto label_471f68;
    }
    ctx->pc = 0x471F60u;
    {
        const bool branch_taken_0x471f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F60u;
        // 0x471f64: 0x26950038  addiu       $s5, $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471f60) {
            ctx->pc = 0x471FD8u;
            goto label_471fd8;
        }
    }
    ctx->pc = 0x471F68u;
label_471f68:
    // 0x471f68: 0x8e910038  lw          $s1, 0x38($s4)
    ctx->pc = 0x471f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_471f6c:
    // 0x471f6c: 0x1235001b  beq         $s1, $s5, . + 4 + (0x1B << 2)
label_471f70:
    if (ctx->pc == 0x471F70u) {
        ctx->pc = 0x471F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F6Cu;
        // 0x471f70: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471F74u;
        goto label_471f74;
    }
    ctx->pc = 0x471F6Cu;
    {
        const bool branch_taken_0x471f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x471F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F6Cu;
        // 0x471f70: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471f6c) {
            ctx->pc = 0x471FDCu;
            goto label_471fdc;
        }
    }
    ctx->pc = 0x471F74u;
label_471f74:
    // 0x471f74: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x471f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_471f78:
    // 0x471f78: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x471f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_471f7c:
    // 0x471f7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x471f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_471f80:
    // 0x471f80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_471f84:
    if (ctx->pc == 0x471F84u) {
        ctx->pc = 0x471F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F80u;
        // 0x471f84: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471F88u;
        goto label_471f88;
    }
    ctx->pc = 0x471F80u;
    {
        const bool branch_taken_0x471f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F80u;
        // 0x471f84: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471f80) {
            ctx->pc = 0x471FCCu;
            goto label_471fcc;
        }
    }
    ctx->pc = 0x471F88u;
label_471f88:
    // 0x471f88: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x471f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_471f8c:
    // 0x471f8c: 0x2653ad18  addiu       $s3, $s2, -0x52E8
    ctx->pc = 0x471f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946072));
label_471f90:
    // 0x471f90: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x471f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_471f94:
    // 0x471f94: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_471f98:
    if (ctx->pc == 0x471F98u) {
        ctx->pc = 0x471F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F94u;
        // 0x471f98: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471F9Cu;
        goto label_471f9c;
    }
    ctx->pc = 0x471F94u;
    {
        const bool branch_taken_0x471f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x471f94) {
            ctx->pc = 0x471F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471F94u;
            // 0x471f98: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471FD0u;
            goto label_471fd0;
        }
    }
    ctx->pc = 0x471F9Cu;
label_471f9c:
    // 0x471f9c: 0xc11a45e  jal         func_469178
label_471fa0:
    if (ctx->pc == 0x471FA0u) {
        ctx->pc = 0x471FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F9Cu;
        // 0x471fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471FA4u;
        goto label_471fa4;
    }
    ctx->pc = 0x471F9Cu;
    SET_GPR_U32(ctx, 31, 0x471FA4u);
    ctx->pc = 0x471FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471F9Cu;
    // 0x471fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x471F9Cu, 0x471FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471FA4u;
label_471fa4:
    // 0x471fa4: 0x8e44ad18  lw          $a0, -0x52E8($s2)
    ctx->pc = 0x471fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946072)));
label_471fa8:
    // 0x471fa8: 0xc120b20  jal         func_482C80
label_471fac:
    if (ctx->pc == 0x471FACu) {
        ctx->pc = 0x471FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FA8u;
        // 0x471fac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471FB0u;
        goto label_471fb0;
    }
    ctx->pc = 0x471FA8u;
    SET_GPR_U32(ctx, 31, 0x471FB0u);
    ctx->pc = 0x471FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471FA8u;
    // 0x471fac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482C80u, 0x471FA8u, 0x471FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471FB0u;
label_471fb0:
    // 0x471fb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_471fb4:
    if (ctx->pc == 0x471FB4u) {
        ctx->pc = 0x471FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FB0u;
        // 0x471fb4: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471FB8u;
        goto label_471fb8;
    }
    ctx->pc = 0x471FB0u;
    {
        const bool branch_taken_0x471fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471fb0) {
            ctx->pc = 0x471FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471FB0u;
            // 0x471fb4: 0x96620008  lhu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471FC8u;
            goto label_471fc8;
        }
    }
    ctx->pc = 0x471FB8u;
label_471fb8:
    // 0x471fb8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x471fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_471fbc:
    // 0x471fbc: 0x40f809  jalr        $v0
label_471fc0:
    if (ctx->pc == 0x471FC0u) {
        ctx->pc = 0x471FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FBCu;
        // 0x471fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471FC4u;
        goto label_471fc4;
    }
    ctx->pc = 0x471FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471FC4u);
        ctx->pc = 0x471FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FBCu;
        // 0x471fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471FBCu, 0x471FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471FC4u;
label_471fc4:
    // 0x471fc4: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x471fc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_471fc8:
    // 0x471fc8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x471fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_471fcc:
    // 0x471fcc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x471fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_471fd0:
    // 0x471fd0: 0x5635ffe9  bnel        $s1, $s5, . + 4 + (-0x17 << 2)
label_471fd4:
    if (ctx->pc == 0x471FD4u) {
        ctx->pc = 0x471FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FD0u;
        // 0x471fd4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471FD8u;
        goto label_471fd8;
    }
    ctx->pc = 0x471FD0u;
    {
        const bool branch_taken_0x471fd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x471fd0) {
            ctx->pc = 0x471FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471FD0u;
            // 0x471fd4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471f78;
        }
    }
    ctx->pc = 0x471FD8u;
label_471fd8:
    // 0x471fd8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x471fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_471fdc:
    // 0x471fdc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x471fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_471fe0:
    // 0x471fe0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x471fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471fe4:
    // 0x471fe4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x471fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471fe8:
    // 0x471fe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x471fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471fec:
    // 0x471fec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x471fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471ff0:
    // 0x471ff0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x471ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471ff4:
    // 0x471ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471ff8:
    // 0x471ff8: 0x3e00008  jr          $ra
label_471ffc:
    if (ctx->pc == 0x471FFCu) {
        ctx->pc = 0x471FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FF8u;
        // 0x471ffc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472000u;
        goto label_fallthrough_0x471ff8;
    }
    ctx->pc = 0x471FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471FF8u;
        // 0x471ffc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471ff8:
    ctx->pc = 0x472000u;
}
