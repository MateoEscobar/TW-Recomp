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

// Function: sub_003336E0
// Address: 0x3336e0 - 0x333750
void sub_003336E0_0x3336e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003336E0_0x3336e0");
#endif

    switch (ctx->pc) {
        case 0x333718u: goto label_333718;
        case 0x333724u: goto label_333724;
        default: break;
    }

    ctx->pc = 0x3336e0u;

    // 0x3336e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3336e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3336e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3336e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3336e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3336ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3336ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3336f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3336f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3336f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3336f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3336f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3336fc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3336FCu;
    {
        const bool branch_taken_0x3336fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x333700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336FCu;
        // 0x333700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336fc) {
            ctx->pc = 0x333738u;
            goto label_333738;
        }
    }
    ctx->pc = 0x333704u;
    // 0x333704: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x333704u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x333708: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x333708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x33370c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333710: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x333710u;
    SET_GPR_U32(ctx, 31, 0x333718u);
    ctx->pc = 0x333714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333710u;
    // 0x333714: 0x24a56820  addiu       $a1, $a1, 0x6820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x333710u, 0x333718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333718u;
label_333718:
    // 0x333718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33371c: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x33371Cu;
    SET_GPR_U32(ctx, 31, 0x333724u);
    ctx->pc = 0x333720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33371Cu;
    // 0x333720: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x33371Cu, 0x333724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333724u;
label_333724:
    // 0x333724: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x333724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x333728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33372c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33372cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x333730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333730u;
    {
        const bool branch_taken_0x333730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333730u;
        // 0x333734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333730) {
            ctx->pc = 0x33373Cu;
            goto label_33373c;
        }
    }
    ctx->pc = 0x333738u;
label_333738:
    // 0x333738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33373c:
    // 0x33373c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33373cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333740: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x333740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333748: 0x3e00008  jr          $ra
    ctx->pc = 0x333748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333748u;
        // 0x33374c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333750u;
}
