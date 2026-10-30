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

// Function: sub_0032F870
// Address: 0x32f870 - 0x32f900
void sub_0032F870_0x32f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F870_0x32f870");
#endif

    switch (ctx->pc) {
        case 0x32f88cu: goto label_32f88c;
        case 0x32f8a0u: goto label_32f8a0;
        case 0x32f8e0u: goto label_32f8e0;
        case 0x32f8f0u: goto label_32f8f0;
        default: break;
    }

    ctx->pc = 0x32f870u;

    // 0x32f870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f878: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32f87c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f884: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F884u;
    SET_GPR_U32(ctx, 31, 0x32F88Cu);
    ctx->pc = 0x32F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F884u;
    // 0x32f888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F884u, 0x32F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F88Cu;
label_32f88c:
    // 0x32f88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f890: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x32f890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x32f894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f898: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32F898u;
    SET_GPR_U32(ctx, 31, 0x32F8A0u);
    ctx->pc = 0x32F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F898u;
    // 0x32f89c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32F898u, 0x32F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F8A0u;
label_32f8a0:
    // 0x32f8a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f8a4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x32f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x32f8a8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x32f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x32f8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8b0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x32f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x32f8b4: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x32f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x32f8b8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x32f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32f8bc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x32f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32f8c0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x32f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x32f8c4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x32f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x32f8c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32f8cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x32f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x32f8d0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x32f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32f8d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x32f8d8: 0xc0cbe68  jal         func_32F9A0
    ctx->pc = 0x32F8D8u;
    SET_GPR_U32(ctx, 31, 0x32F8E0u);
    ctx->pc = 0x32F8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F8D8u;
    // 0x32f8dc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F9A0u, 0x32F8D8u, 0x32F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F8E0u;
label_32f8e0:
    // 0x32f8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8e4: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x32f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x32f8e8: 0xc0cbe68  jal         func_32F9A0
    ctx->pc = 0x32F8E8u;
    SET_GPR_U32(ctx, 31, 0x32F8F0u);
    ctx->pc = 0x32F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F8E8u;
    // 0x32f8ec: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F9A0u, 0x32F8E8u, 0x32F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F8F0u;
label_32f8f0:
    // 0x32f8f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32f8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8F8u;
        // 0x32f8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F900u;
}
