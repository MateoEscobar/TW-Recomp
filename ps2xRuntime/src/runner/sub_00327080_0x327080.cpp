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

// Function: sub_00327080
// Address: 0x327080 - 0x3270d0
void sub_00327080_0x327080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327080_0x327080");
#endif

    switch (ctx->pc) {
        case 0x3270a4u: goto label_3270a4;
        case 0x3270b4u: goto label_3270b4;
        default: break;
    }

    ctx->pc = 0x327080u;

    // 0x327080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x327084: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x327084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x327088: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x327088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32708c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32708cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327090: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x327090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x327094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32709c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32709Cu;
    SET_GPR_U32(ctx, 31, 0x3270A4u);
    ctx->pc = 0x3270A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32709Cu;
    // 0x3270a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32709Cu, 0x3270A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270A4u;
label_3270a4:
    // 0x3270a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3270a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3270a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270ac: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x3270ACu;
    SET_GPR_U32(ctx, 31, 0x3270B4u);
    ctx->pc = 0x3270B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270ACu;
    // 0x3270b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x3270ACu, 0x3270B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270B4u;
label_3270b4:
    // 0x3270b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3270b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3270b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3270b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3270bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3270bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3270c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3270c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3270c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3270C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270C4u;
        // 0x3270c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3270CCu;
    // 0x3270cc: 0x0  nop
    ctx->pc = 0x3270ccu;
    // NOP
    ctx->pc = 0x3270d0u;
}
