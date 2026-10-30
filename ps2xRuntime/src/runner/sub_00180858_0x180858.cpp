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

// Function: sub_00180858
// Address: 0x180858 - 0x1808b8
void sub_00180858_0x180858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180858_0x180858");
#endif

    switch (ctx->pc) {
        case 0x180878u: goto label_180878;
        case 0x180898u: goto label_180898;
        default: break;
    }

    ctx->pc = 0x180858u;

    // 0x180858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18085c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180864: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x180864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x180868: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x180868u;
    {
        const bool branch_taken_0x180868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180868) {
            ctx->pc = 0x1808A0u;
            goto label_1808a0;
        }
    }
    ctx->pc = 0x180870u;
    // 0x180870: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x180870u;
    SET_GPR_U32(ctx, 31, 0x180878u);
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x180870u, 0x180878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180878u;
label_180878:
    // 0x180878: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18087c: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x180880: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x180884: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x180884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x180888: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x180888u;
    {
        const bool branch_taken_0x180888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180888) {
            ctx->pc = 0x18088Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180888u;
            // 0x18088c: 0xc600ffe8  lwc1        $f0, -0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1808A4u;
            goto label_1808a4;
        }
    }
    ctx->pc = 0x180890u;
    // 0x180890: 0xc11a402  jal         func_469008
    ctx->pc = 0x180890u;
    SET_GPR_U32(ctx, 31, 0x180898u);
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x180890u, 0x180898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180898u;
label_180898:
    // 0x180898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180898u;
    {
        const bool branch_taken_0x180898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180898u;
        // 0x18089c: 0xc600ffe8  lwc1        $f0, -0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180898) {
            ctx->pc = 0x1808A4u;
            goto label_1808a4;
        }
    }
    ctx->pc = 0x1808A0u;
label_1808a0:
    // 0x1808a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1808a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1808a4:
    // 0x1808a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1808a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1808a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1808a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1808ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1808B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808ACu;
        // 0x1808b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1808B4u;
    // 0x1808b4: 0x0  nop
    ctx->pc = 0x1808b4u;
    // NOP
    ctx->pc = 0x1808b8u;
}
