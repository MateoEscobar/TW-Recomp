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

// Function: sub_0010F900
// Address: 0x10f900 - 0x10f978
void sub_0010F900_0x10f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F900_0x10f900");
#endif

    switch (ctx->pc) {
        case 0x10f928u: goto label_10f928;
        case 0x10f930u: goto label_10f930;
        case 0x10f938u: goto label_10f938;
        case 0x10f948u: goto label_10f948;
        case 0x10f95cu: goto label_10f95c;
        default: break;
    }

    ctx->pc = 0x10f900u;

    // 0x10f900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f904: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10f908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f90c: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x10f90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x10f910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f918: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10f91c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x10f91cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f920: 0xc044b48  jal         func_112D20
    ctx->pc = 0x10F920u;
    SET_GPR_U32(ctx, 31, 0x10F928u);
    ctx->pc = 0x10F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F920u;
    // 0x10f924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D20u, 0x10F920u, 0x10F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F928u;
label_10f928:
    // 0x10f928: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10F928u;
    {
        const bool branch_taken_0x10f928 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x10F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F928u;
        // 0x10f92c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f928) {
            ctx->pc = 0x10F954u;
            goto label_10f954;
        }
    }
    ctx->pc = 0x10F930u;
label_10f930:
    // 0x10f930: 0xc043bf0  jal         func_10EFC0
    ctx->pc = 0x10F930u;
    SET_GPR_U32(ctx, 31, 0x10F938u);
    ctx->pc = 0x10F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F930u;
    // 0x10f934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFC0u, 0x10F930u, 0x10F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F938u;
label_10f938:
    // 0x10f938: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x10f938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x10f93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f940: 0xc044b40  jal         func_112D00
    ctx->pc = 0x10F940u;
    SET_GPR_U32(ctx, 31, 0x10F948u);
    ctx->pc = 0x10F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F940u;
    // 0x10f944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D00u, 0x10F940u, 0x10F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F948u;
label_10f948:
    // 0x10f948: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10f94c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10F94Cu;
    {
        const bool branch_taken_0x10f94c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f94c) {
            ctx->pc = 0x10F930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f930;
        }
    }
    ctx->pc = 0x10F954u;
label_10f954:
    // 0x10f954: 0xc043e68  jal         func_10F9A0
    ctx->pc = 0x10F954u;
    SET_GPR_U32(ctx, 31, 0x10F95Cu);
    ctx->pc = 0x10F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F954u;
    // 0x10f958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9A0u, 0x10F954u, 0x10F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F95Cu;
label_10f95c:
    // 0x10f95c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10f95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f960: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10f960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F96Cu;
        // 0x10f970: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F974u;
    // 0x10f974: 0x0  nop
    ctx->pc = 0x10f974u;
    // NOP
    ctx->pc = 0x10f978u;
}
