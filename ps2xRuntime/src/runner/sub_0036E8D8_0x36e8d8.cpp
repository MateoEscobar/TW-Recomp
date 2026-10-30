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

// Function: sub_0036E8D8
// Address: 0x36e8d8 - 0x36e968
void sub_0036E8D8_0x36e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E8D8_0x36e8d8");
#endif

    switch (ctx->pc) {
        case 0x36e900u: goto label_36e900;
        case 0x36e908u: goto label_36e908;
        case 0x36e91cu: goto label_36e91c;
        case 0x36e924u: goto label_36e924;
        case 0x36e938u: goto label_36e938;
        case 0x36e948u: goto label_36e948;
        default: break;
    }

    ctx->pc = 0x36e8d8u;

    // 0x36e8d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e8dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e8e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36e8e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36e8e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36e8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36e8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e8f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E8F8u;
    SET_GPR_U32(ctx, 31, 0x36E900u);
    ctx->pc = 0x36E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E8F8u;
    // 0x36e8fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E8F8u, 0x36E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E900u;
label_36e900:
    // 0x36e900: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E900u;
    SET_GPR_U32(ctx, 31, 0x36E908u);
    ctx->pc = 0x36E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E900u;
    // 0x36e904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E900u, 0x36E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E908u;
label_36e908:
    // 0x36e908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36e908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e90c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e910: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e914: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E914u;
    SET_GPR_U32(ctx, 31, 0x36E91Cu);
    ctx->pc = 0x36E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E914u;
    // 0x36e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E914u, 0x36E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E91Cu;
label_36e91c:
    // 0x36e91c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E91Cu;
    SET_GPR_U32(ctx, 31, 0x36E924u);
    ctx->pc = 0x36E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E91Cu;
    // 0x36e920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E91Cu, 0x36E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E924u;
label_36e924:
    // 0x36e924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e92c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e930: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E930u;
    SET_GPR_U32(ctx, 31, 0x36E938u);
    ctx->pc = 0x36E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E930u;
    // 0x36e934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E930u, 0x36E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E938u;
label_36e938:
    // 0x36e938: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x36e938u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36e93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e940: 0xc06d6e0  jal         func_1B5B80
    ctx->pc = 0x36E940u;
    SET_GPR_U32(ctx, 31, 0x36E948u);
    ctx->pc = 0x36E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E940u;
    // 0x36e944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B80u, 0x36E940u, 0x36E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E948u;
label_36e948:
    // 0x36e948: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36e948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e950: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36e950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e954: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36e954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e95c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E95Cu;
        // 0x36e960: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E964u;
    // 0x36e964: 0x0  nop
    ctx->pc = 0x36e964u;
    // NOP
    ctx->pc = 0x36e968u;
}
