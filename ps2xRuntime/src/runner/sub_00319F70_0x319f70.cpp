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

// Function: sub_00319F70
// Address: 0x319f70 - 0x319ff8
void sub_00319F70_0x319f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319F70_0x319f70");
#endif

    switch (ctx->pc) {
        case 0x319f8cu: goto label_319f8c;
        case 0x319fc4u: goto label_319fc4;
        case 0x319fd8u: goto label_319fd8;
        default: break;
    }

    ctx->pc = 0x319f70u;

    // 0x319f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x319f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x319f74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x319f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x319f78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x319f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x319f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319f84: 0xc05959e  jal         func_165678
    ctx->pc = 0x319F84u;
    SET_GPR_U32(ctx, 31, 0x319F8Cu);
    ctx->pc = 0x319F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F84u;
    // 0x319f88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x319F84u, 0x319F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F8Cu;
label_319f8c:
    // 0x319f8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x319f8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f90: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x319F90u;
    {
        const bool branch_taken_0x319f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F90u;
        // 0x319f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f90) {
            ctx->pc = 0x319FE4u;
            goto label_319fe4;
        }
    }
    ctx->pc = 0x319F98u;
    // 0x319f98: 0x9202003f  lbu         $v0, 0x3F($s0)
    ctx->pc = 0x319f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x319f9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x319F9Cu;
    {
        const bool branch_taken_0x319f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F9Cu;
        // 0x319fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f9c) {
            ctx->pc = 0x319FE4u;
            goto label_319fe4;
        }
    }
    ctx->pc = 0x319FA4u;
    // 0x319fa4: 0x9211003e  lbu         $s1, 0x3E($s0)
    ctx->pc = 0x319fa4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x319fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319fac: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319FACu;
    {
        const bool branch_taken_0x319fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x319FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FACu;
        // 0x319fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fac) {
            ctx->pc = 0x319FDCu;
            goto label_319fdc;
        }
    }
    ctx->pc = 0x319FB4u;
    // 0x319fb4: 0x8c620178  lw          $v0, 0x178($v1)
    ctx->pc = 0x319fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x319fb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fbc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x319FBCu;
    SET_GPR_U32(ctx, 31, 0x319FC4u);
    ctx->pc = 0x319FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FBCu;
    // 0x319fc0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x319FBCu, 0x319FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FC4u;
label_319fc4:
    // 0x319fc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x319fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319fc8: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x319FC8u;
    {
        const bool branch_taken_0x319fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x319FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC8u;
        // 0x319fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fc8) {
            ctx->pc = 0x319FE0u;
            goto label_319fe0;
        }
    }
    ctx->pc = 0x319FD0u;
    // 0x319fd0: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x319FD0u;
    SET_GPR_U32(ctx, 31, 0x319FD8u);
    ctx->pc = 0x319FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FD0u;
    // 0x319fd4: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x319FD0u, 0x319FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FD8u;
label_319fd8:
    // 0x319fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319fdc:
    // 0x319fdc: 0xa202003f  sb          $v0, 0x3F($s0)
    ctx->pc = 0x319fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 2));
label_319fe0:
    // 0x319fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319fe4:
    // 0x319fe4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x319fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319fe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x319fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x319FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FF0u;
        // 0x319ff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319FF8u;
}
