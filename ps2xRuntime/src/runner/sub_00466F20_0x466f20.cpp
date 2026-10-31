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

// Function: sub_00466F20
// Address: 0x466f20 - 0x466ff0
void sub_00466F20_0x466f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466F20_0x466f20");
#endif

    switch (ctx->pc) {
        case 0x466f44u: goto label_466f44;
        case 0x466f58u: goto label_466f58;
        case 0x466f7cu: goto label_466f7c;
        case 0x466f8cu: goto label_466f8c;
        case 0x466fb0u: goto label_466fb0;
        case 0x466fd4u: goto label_466fd4;
        default: break;
    }

    ctx->pc = 0x466f20u;

    // 0x466f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x466f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x466f24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x466f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x466f28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x466f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466f2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x466f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x466f30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x466f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x466f34: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x466f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x466f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466f3c: 0xc120daa  jal         func_4836A8
    ctx->pc = 0x466F3Cu;
    SET_GPR_U32(ctx, 31, 0x466F44u);
    ctx->pc = 0x466F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466F3Cu;
    // 0x466f40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x466F3Cu, 0x466F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F44u;
label_466f44:
    // 0x466f44: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x466f44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x466f48: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x466F48u;
    {
        const bool branch_taken_0x466f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466f48) {
            ctx->pc = 0x466F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466F48u;
            // 0x466f4c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466F6Cu;
            goto label_466f6c;
        }
    }
    ctx->pc = 0x466F50u;
    // 0x466f50: 0xc11aa18  jal         func_46A860
    ctx->pc = 0x466F50u;
    SET_GPR_U32(ctx, 31, 0x466F58u);
    ctx->pc = 0x466F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466F50u;
    // 0x466f54: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A860u, 0x466F50u, 0x466F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F58u;
label_466f58:
    // 0x466f58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x466f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x466f5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x466f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x466f60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x466f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x466f64: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x466f64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x466f68: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x466f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_466f6c:
    // 0x466f6c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x466F6Cu;
    {
        const bool branch_taken_0x466f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x466F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466F6Cu;
        // 0x466f70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466f6c) {
            ctx->pc = 0x466FD8u;
            goto label_466fd8;
        }
    }
    ctx->pc = 0x466F74u;
    // 0x466f74: 0xc119b0e  jal         func_466C38
    ctx->pc = 0x466F74u;
    SET_GPR_U32(ctx, 31, 0x466F7Cu);
    ctx->pc = 0x466C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C38u, 0x466F74u, 0x466F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F7Cu;
label_466f7c:
    // 0x466f7c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x466F7Cu;
    {
        const bool branch_taken_0x466f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466F7Cu;
        // 0x466f80: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466f7c) {
            ctx->pc = 0x466FD4u;
            goto label_466fd4;
        }
    }
    ctx->pc = 0x466F84u;
    // 0x466f84: 0xc120daa  jal         func_4836A8
    ctx->pc = 0x466F84u;
    SET_GPR_U32(ctx, 31, 0x466F8Cu);
    ctx->pc = 0x466F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466F84u;
    // 0x466f88: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x466F84u, 0x466F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466F8Cu;
label_466f8c:
    // 0x466f8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x466f8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x466f90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x466F90u;
    {
        const bool branch_taken_0x466f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466F90u;
        // 0x466f94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466f90) {
            ctx->pc = 0x466FA8u;
            goto label_466fa8;
        }
    }
    ctx->pc = 0x466F98u;
    // 0x466f98: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x466F98u;
    {
        const bool branch_taken_0x466f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x466f98) {
            ctx->pc = 0x466FA8u;
            goto label_466fa8;
        }
    }
    ctx->pc = 0x466FA0u;
    // 0x466fa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x466FA0u;
    {
        const bool branch_taken_0x466fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466FA0u;
        // 0x466fa4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466fa0) {
            ctx->pc = 0x466FC8u;
            goto label_466fc8;
        }
    }
    ctx->pc = 0x466FA8u;
label_466fa8:
    // 0x466fa8: 0xc120daa  jal         func_4836A8
    ctx->pc = 0x466FA8u;
    SET_GPR_U32(ctx, 31, 0x466FB0u);
    ctx->pc = 0x466FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466FA8u;
    // 0x466fac: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4836A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836A8u, 0x466FA8u, 0x466FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466FB0u;
label_466fb0:
    // 0x466fb0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x466fb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x466fb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x466FB4u;
    {
        const bool branch_taken_0x466fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466FB4u;
        // 0x466fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466fb4) {
            ctx->pc = 0x466FCCu;
            goto label_466fcc;
        }
    }
    ctx->pc = 0x466FBCu;
    // 0x466fbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x466fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466fc0: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x466fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x466fc4: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x466fc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_466fc8:
    // 0x466fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x466fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466fcc:
    // 0x466fcc: 0xc119ddc  jal         func_467770
    ctx->pc = 0x466FCCu;
    SET_GPR_U32(ctx, 31, 0x466FD4u);
    ctx->pc = 0x466FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466FCCu;
    // 0x466fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467770u, 0x466FCCu, 0x466FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466FD4u;
label_466fd4:
    // 0x466fd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x466fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_466fd8:
    // 0x466fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466fdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x466fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466fe0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x466fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x466FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466FE8u;
        // 0x466fec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466FF0u;
}
