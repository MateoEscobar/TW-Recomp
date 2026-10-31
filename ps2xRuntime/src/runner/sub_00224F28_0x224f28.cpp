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

// Function: sub_00224F28
// Address: 0x224f28 - 0x224fd0
void sub_00224F28_0x224f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F28_0x224f28");
#endif

    switch (ctx->pc) {
        case 0x224f44u: goto label_224f44;
        case 0x224f54u: goto label_224f54;
        case 0x224f64u: goto label_224f64;
        case 0x224f74u: goto label_224f74;
        case 0x224f84u: goto label_224f84;
        case 0x224fb8u: goto label_224fb8;
        default: break;
    }

    ctx->pc = 0x224f28u;

    // 0x224f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224f2c: 0x3c051800  lui         $a1, 0x1800
    ctx->pc = 0x224f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6144 << 16));
    // 0x224f30: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x224f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x224f34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224f3c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x224F3Cu;
    SET_GPR_U32(ctx, 31, 0x224F44u);
    ctx->pc = 0x224F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F3Cu;
    // 0x224f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224F3Cu, 0x224F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F44u;
label_224f44:
    // 0x224f44: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x224F44u;
    {
        const bool branch_taken_0x224f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F44u;
        // 0x224f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f44) {
            ctx->pc = 0x224FBCu;
            goto label_224fbc;
        }
    }
    ctx->pc = 0x224F4Cu;
    // 0x224f4c: 0xc089000  jal         func_224000
    ctx->pc = 0x224F4Cu;
    SET_GPR_U32(ctx, 31, 0x224F54u);
    ctx->pc = 0x224F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F4Cu;
    // 0x224f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x224F4Cu, 0x224F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F54u;
label_224f54:
    // 0x224f54: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x224F54u;
    {
        const bool branch_taken_0x224f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F54u;
        // 0x224f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f54) {
            ctx->pc = 0x224FBCu;
            goto label_224fbc;
        }
    }
    ctx->pc = 0x224F5Cu;
    // 0x224f5c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x224F5Cu;
    SET_GPR_U32(ctx, 31, 0x224F64u);
    ctx->pc = 0x224F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F5Cu;
    // 0x224f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x224F5Cu, 0x224F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F64u;
label_224f64:
    // 0x224f64: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x224F64u;
    {
        const bool branch_taken_0x224f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F64u;
        // 0x224f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f64) {
            ctx->pc = 0x224FBCu;
            goto label_224fbc;
        }
    }
    ctx->pc = 0x224F6Cu;
    // 0x224f6c: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x224F6Cu;
    SET_GPR_U32(ctx, 31, 0x224F74u);
    ctx->pc = 0x224F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F6Cu;
    // 0x224f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x224F6Cu, 0x224F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F74u;
label_224f74:
    // 0x224f74: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x224F74u;
    {
        const bool branch_taken_0x224f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F74u;
        // 0x224f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f74) {
            ctx->pc = 0x224FBCu;
            goto label_224fbc;
        }
    }
    ctx->pc = 0x224F7Cu;
    // 0x224f7c: 0xc08a000  jal         func_228000
    ctx->pc = 0x224F7Cu;
    SET_GPR_U32(ctx, 31, 0x224F84u);
    ctx->pc = 0x224F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F7Cu;
    // 0x224f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x224F7Cu, 0x224F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F84u;
label_224f84:
    // 0x224f84: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x224F84u;
    {
        const bool branch_taken_0x224f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f84) {
            ctx->pc = 0x224F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224F84u;
            // 0x224f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224FBCu;
            goto label_224fbc;
        }
    }
    ctx->pc = 0x224F8Cu;
    // 0x224f8c: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x224f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x224f90: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x224f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x224f94: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x224f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x224f98: 0x3c02dff7  lui         $v0, 0xDFF7
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57335 << 16));
    // 0x224f9c: 0x3c05dff7  lui         $a1, 0xDFF7
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57335 << 16));
    // 0x224fa0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x224fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x224fa4: 0x3442effb  ori         $v0, $v0, 0xEFFB
    ctx->pc = 0x224fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61435);
    // 0x224fa8: 0x34a5ebfb  ori         $a1, $a1, 0xEBFB
    ctx->pc = 0x224fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60411);
    // 0x224fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fb0: 0xc089998  jal         func_226660
    ctx->pc = 0x224FB0u;
    SET_GPR_U32(ctx, 31, 0x224FB8u);
    ctx->pc = 0x224FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FB0u;
    // 0x224fb4: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x224FB0u, 0x224FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FB8u;
label_224fb8:
    // 0x224fb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x224fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_224fbc:
    // 0x224fbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x224FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FC4u;
        // 0x224fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224FCCu;
    // 0x224fcc: 0x0  nop
    ctx->pc = 0x224fccu;
    // NOP
    ctx->pc = 0x224fd0u;
}
