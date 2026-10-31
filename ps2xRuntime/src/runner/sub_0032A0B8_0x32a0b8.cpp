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

// Function: sub_0032A0B8
// Address: 0x32a0b8 - 0x32a118
void sub_0032A0B8_0x32a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A0B8_0x32a0b8");
#endif

    switch (ctx->pc) {
        case 0x32a0d4u: goto label_32a0d4;
        case 0x32a0dcu: goto label_32a0dc;
        case 0x32a0e8u: goto label_32a0e8;
        case 0x32a0f0u: goto label_32a0f0;
        case 0x32a0f8u: goto label_32a0f8;
        case 0x32a100u: goto label_32a100;
        default: break;
    }

    ctx->pc = 0x32a0b8u;

    // 0x32a0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a0bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a0c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a0cc: 0xc0ca77e  jal         func_329DF8
    ctx->pc = 0x32A0CCu;
    SET_GPR_U32(ctx, 31, 0x32A0D4u);
    ctx->pc = 0x32A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0CCu;
    // 0x32a0d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329DF8u, 0x32A0CCu, 0x32A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0D4u;
label_32a0d4:
    // 0x32a0d4: 0xc0ca7f6  jal         func_329FD8
    ctx->pc = 0x32A0D4u;
    SET_GPR_U32(ctx, 31, 0x32A0DCu);
    ctx->pc = 0x32A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0D4u;
    // 0x32a0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329FD8u, 0x32A0D4u, 0x32A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0DCu;
label_32a0dc:
    // 0x32a0dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a0e0: 0xc0ca744  jal         func_329D10
    ctx->pc = 0x32A0E0u;
    SET_GPR_U32(ctx, 31, 0x32A0E8u);
    ctx->pc = 0x32A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0E0u;
    // 0x32a0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D10u, 0x32A0E0u, 0x32A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0E8u;
label_32a0e8:
    // 0x32a0e8: 0xc0ca728  jal         func_329CA0
    ctx->pc = 0x32A0E8u;
    SET_GPR_U32(ctx, 31, 0x32A0F0u);
    ctx->pc = 0x32A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0E8u;
    // 0x32a0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329CA0u, 0x32A0E8u, 0x32A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0F0u;
label_32a0f0:
    // 0x32a0f0: 0xc0ca6f4  jal         func_329BD0
    ctx->pc = 0x32A0F0u;
    SET_GPR_U32(ctx, 31, 0x32A0F8u);
    ctx->pc = 0x32A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0F0u;
    // 0x32a0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329BD0u, 0x32A0F0u, 0x32A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0F8u;
label_32a0f8:
    // 0x32a0f8: 0xc0ca70e  jal         func_329C38
    ctx->pc = 0x32A0F8u;
    SET_GPR_U32(ctx, 31, 0x32A100u);
    ctx->pc = 0x32A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0F8u;
    // 0x32a0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C38u, 0x32A0F8u, 0x32A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A100u;
label_32a100:
    // 0x32a100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A10Cu;
        // 0x32a110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A114u;
    // 0x32a114: 0x0  nop
    ctx->pc = 0x32a114u;
    // NOP
    ctx->pc = 0x32a118u;
}
