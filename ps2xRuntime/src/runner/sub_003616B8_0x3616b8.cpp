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

// Function: sub_003616B8
// Address: 0x3616b8 - 0x361730
void sub_003616B8_0x3616b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003616B8_0x3616b8");
#endif

    switch (ctx->pc) {
        case 0x3616e0u: goto label_3616e0;
        case 0x3616e8u: goto label_3616e8;
        case 0x3616fcu: goto label_3616fc;
        case 0x361704u: goto label_361704;
        case 0x361710u: goto label_361710;
        default: break;
    }

    ctx->pc = 0x3616b8u;

    // 0x3616b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3616b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3616bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3616bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3616c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3616c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3616c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3616c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3616c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3616c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3616ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3616d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3616d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3616d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3616d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3616D8u;
    SET_GPR_U32(ctx, 31, 0x3616E0u);
    ctx->pc = 0x3616DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616D8u;
    // 0x3616dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3616D8u, 0x3616E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616E0u;
label_3616e0:
    // 0x3616e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3616E0u;
    SET_GPR_U32(ctx, 31, 0x3616E8u);
    ctx->pc = 0x3616E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616E0u;
    // 0x3616e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3616E0u, 0x3616E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616E8u;
label_3616e8:
    // 0x3616e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3616e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3616ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3616f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3616f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3616F4u;
    SET_GPR_U32(ctx, 31, 0x3616FCu);
    ctx->pc = 0x3616F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616F4u;
    // 0x3616f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3616F4u, 0x3616FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616FCu;
label_3616fc:
    // 0x3616fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3616FCu;
    SET_GPR_U32(ctx, 31, 0x361704u);
    ctx->pc = 0x361700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616FCu;
    // 0x361700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3616FCu, 0x361704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361704u;
label_361704:
    // 0x361704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x361704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361708: 0xc0a94d8  jal         func_2A5360
    ctx->pc = 0x361708u;
    SET_GPR_U32(ctx, 31, 0x361710u);
    ctx->pc = 0x36170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361708u;
    // 0x36170c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5360u, 0x361708u, 0x361710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361710u;
label_361710:
    // 0x361710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x361710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361718: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x361718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36171c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361724: 0x3e00008  jr          $ra
    ctx->pc = 0x361724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361724u;
        // 0x361728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36172Cu;
    // 0x36172c: 0x0  nop
    ctx->pc = 0x36172cu;
    // NOP
    ctx->pc = 0x361730u;
}
