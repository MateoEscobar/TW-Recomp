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

// Function: sub_0010D2A0
// Address: 0x10d2a0 - 0x10d2f8
void sub_0010D2A0_0x10d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D2A0_0x10d2a0");
#endif

    switch (ctx->pc) {
        case 0x10d2d0u: goto label_10d2d0;
        case 0x10d2e0u: goto label_10d2e0;
        default: break;
    }

    ctx->pc = 0x10d2a0u;

    // 0x10d2a0: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x10d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10d2a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d2a8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x10d2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10d2ac: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10d2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10d2b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10d2b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10d2b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10d2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d2bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x10d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d2c0: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x10d2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x10d2c4: 0xe4940088  swc1        $f20, 0x88($a0)
    ctx->pc = 0x10d2c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x10d2c8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10D2C8u;
    SET_GPR_U32(ctx, 31, 0x10D2D0u);
    ctx->pc = 0x10D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2C8u;
    // 0x10d2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10D2C8u, 0x10D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2D0u;
label_10d2d0:
    // 0x10d2d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D2D0u;
    {
        const bool branch_taken_0x10d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d2d0) {
            ctx->pc = 0x10D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D2D0u;
            // 0x10d2d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D2E8u;
            goto label_10d2e8;
        }
    }
    ctx->pc = 0x10D2D8u;
    // 0x10d2d8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10D2D8u;
    SET_GPR_U32(ctx, 31, 0x10D2E0u);
    ctx->pc = 0x10D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2D8u;
    // 0x10d2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10D2D8u, 0x10D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2E0u;
label_10d2e0:
    // 0x10d2e0: 0xe4540074  swc1        $f20, 0x74($v0)
    ctx->pc = 0x10d2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x10d2e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10d2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10d2e8:
    // 0x10d2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d2ec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2F0u;
        // 0x10d2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2F8u;
}
