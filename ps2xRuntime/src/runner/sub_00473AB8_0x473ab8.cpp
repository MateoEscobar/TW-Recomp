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

// Function: sub_00473AB8
// Address: 0x473ab8 - 0x473b00
void sub_00473AB8_0x473ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473AB8_0x473ab8");
#endif

    switch (ctx->pc) {
        case 0x473ad8u: goto label_473ad8;
        case 0x473aecu: goto label_473aec;
        default: break;
    }

    ctx->pc = 0x473ab8u;

    // 0x473ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x473abc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x473abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x473ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x473ac4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x473ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x473ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473ad0: 0xc11c770  jal         func_471DC0
    ctx->pc = 0x473AD0u;
    SET_GPR_U32(ctx, 31, 0x473AD8u);
    ctx->pc = 0x473AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473AD0u;
    // 0x473ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x473AD0u, 0x473AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473AD8u;
label_473ad8:
    // 0x473ad8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x473ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x473adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x473adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ae0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x473ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ae4: 0xc11b60a  jal         func_46D828
    ctx->pc = 0x473AE4u;
    SET_GPR_U32(ctx, 31, 0x473AECu);
    ctx->pc = 0x473AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473AE4u;
    // 0x473ae8: 0x24a70010  addiu       $a3, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D828u, 0x473AE4u, 0x473AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473AECu;
label_473aec:
    // 0x473aec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x473aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473af8: 0x3e00008  jr          $ra
    ctx->pc = 0x473AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473AF8u;
        // 0x473afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473B00u;
}
