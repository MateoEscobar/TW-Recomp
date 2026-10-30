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

// Function: sub_003264C8
// Address: 0x3264c8 - 0x326548
void sub_003264C8_0x3264c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003264C8_0x3264c8");
#endif

    switch (ctx->pc) {
        case 0x3264f8u: goto label_3264f8;
        case 0x326504u: goto label_326504;
        case 0x326514u: goto label_326514;
        case 0x326524u: goto label_326524;
        default: break;
    }

    ctx->pc = 0x3264c8u;

    // 0x3264c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3264cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3264ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3264d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3264d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3264d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3264d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3264d8: 0x24504c10  addiu       $s0, $v0, 0x4C10
    ctx->pc = 0x3264d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x3264dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3264dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3264e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3264e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3264e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3264e8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3264e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3264ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3264ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3264f0: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x3264f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3264f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x574C10u));
label_3264f8:
    // 0x3264f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3264f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264fc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x3264FCu;
    SET_GPR_U32(ctx, 31, 0x326504u);
    ctx->pc = 0x326500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264FCu;
    // 0x326500: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x3264FCu, 0x326504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326504u;
label_326504:
    // 0x326504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326508: 0x26656478  addiu       $a1, $s3, 0x6478
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25720));
    // 0x32650c: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x32650Cu;
    SET_GPR_U32(ctx, 31, 0x326514u);
    ctx->pc = 0x326510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32650Cu;
    // 0x326510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x32650Cu, 0x326514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326514u;
label_326514:
    // 0x326514: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x326514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32651c: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x32651Cu;
    SET_GPR_U32(ctx, 31, 0x326524u);
    ctx->pc = 0x326520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32651Cu;
    // 0x326520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x32651Cu, 0x326524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326524u;
label_326524:
    // 0x326524: 0x643fff4  bgezl       $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x326524u;
    {
        const bool branch_taken_0x326524 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x326524) {
            ctx->pc = 0x326528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326524u;
            // 0x326528: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3264F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3264f8;
        }
    }
    ctx->pc = 0x32652Cu;
    // 0x32652c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32652cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326530: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x326530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326538: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x326538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32653c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326540: 0x3e00008  jr          $ra
    ctx->pc = 0x326540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326540u;
        // 0x326544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326548u;
}
