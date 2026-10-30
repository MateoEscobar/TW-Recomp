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

// Function: sub_0035E8E0
// Address: 0x35e8e0 - 0x35e958
void sub_0035E8E0_0x35e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E8E0_0x35e8e0");
#endif

    switch (ctx->pc) {
        case 0x35e908u: goto label_35e908;
        case 0x35e910u: goto label_35e910;
        case 0x35e924u: goto label_35e924;
        case 0x35e92cu: goto label_35e92c;
        case 0x35e938u: goto label_35e938;
        default: break;
    }

    ctx->pc = 0x35e8e0u;

    // 0x35e8e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e8e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35e8ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35e8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35e8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E900u;
    SET_GPR_U32(ctx, 31, 0x35E908u);
    ctx->pc = 0x35E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E900u;
    // 0x35e904: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E900u, 0x35E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E908u;
label_35e908:
    // 0x35e908: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E908u;
    SET_GPR_U32(ctx, 31, 0x35E910u);
    ctx->pc = 0x35E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E908u;
    // 0x35e90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E908u, 0x35E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E910u;
label_35e910:
    // 0x35e910: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35e910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e914: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35e914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e91c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E91Cu;
    SET_GPR_U32(ctx, 31, 0x35E924u);
    ctx->pc = 0x35E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E91Cu;
    // 0x35e920: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E91Cu, 0x35E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E924u;
label_35e924:
    // 0x35e924: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E924u;
    SET_GPR_U32(ctx, 31, 0x35E92Cu);
    ctx->pc = 0x35E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E924u;
    // 0x35e928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E924u, 0x35E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E92Cu;
label_35e92c:
    // 0x35e92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35e92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e930: 0xc0a521c  jal         func_294870
    ctx->pc = 0x35E930u;
    SET_GPR_U32(ctx, 31, 0x35E938u);
    ctx->pc = 0x35E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E930u;
    // 0x35e934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294870u, 0x35E930u, 0x35E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E938u;
label_35e938:
    // 0x35e938: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35e938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e940: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35e940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e944: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35e944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E94Cu;
        // 0x35e950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E954u;
    // 0x35e954: 0x0  nop
    ctx->pc = 0x35e954u;
    // NOP
    ctx->pc = 0x35e958u;
}
