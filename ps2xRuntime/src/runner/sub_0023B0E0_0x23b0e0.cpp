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

// Function: sub_0023B0E0
// Address: 0x23b0e0 - 0x23b128
void sub_0023B0E0_0x23b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B0E0_0x23b0e0");
#endif

    switch (ctx->pc) {
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b104u: goto label_23b104;
        case 0x23b114u: goto label_23b114;
        default: break;
    }

    ctx->pc = 0x23b0e0u;

    // 0x23b0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b0e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23b0e8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23b0e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23b0ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b0f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23B0F4u;
    SET_GPR_U32(ctx, 31, 0x23B0FCu);
    ctx->pc = 0x23B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0F4u;
    // 0x23b0f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23B0F4u, 0x23B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0FCu;
label_23b0fc:
    // 0x23b0fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23B0FCu;
    SET_GPR_U32(ctx, 31, 0x23B104u);
    ctx->pc = 0x23B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0FCu;
    // 0x23b100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23B0FCu, 0x23B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B104u;
label_23b104:
    // 0x23b104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B104u;
    {
        const bool branch_taken_0x23b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B104u;
        // 0x23b108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b104) {
            ctx->pc = 0x23B114u;
            goto label_23b114;
        }
    }
    ctx->pc = 0x23B10Cu;
    // 0x23b10c: 0xc086582  jal         func_219608
    ctx->pc = 0x23B10Cu;
    SET_GPR_U32(ctx, 31, 0x23B114u);
    ctx->pc = 0x23B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B10Cu;
    // 0x23b110: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219608u, 0x23B10Cu, 0x23B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B114u;
label_23b114:
    // 0x23b114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b118: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b11c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B11Cu;
        // 0x23b120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B124u;
    // 0x23b124: 0x0  nop
    ctx->pc = 0x23b124u;
    // NOP
    ctx->pc = 0x23b128u;
}
