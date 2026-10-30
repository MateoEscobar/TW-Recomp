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

// Function: sub_0021E3A8
// Address: 0x21e3a8 - 0x21e400
void sub_0021E3A8_0x21e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E3A8_0x21e3a8");
#endif

    switch (ctx->pc) {
        case 0x21e3c8u: goto label_21e3c8;
        default: break;
    }

    ctx->pc = 0x21e3a8u;

    // 0x21e3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e3ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21e3b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x21e3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e3b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e3bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21e3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21e3c0: 0xc08cf14  jal         func_233C50
    ctx->pc = 0x21E3C0u;
    SET_GPR_U32(ctx, 31, 0x21E3C8u);
    ctx->pc = 0x21E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3C0u;
    // 0x21e3c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x21E3C0u, 0x21E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3C8u;
label_21e3c8:
    // 0x21e3c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E3C8u;
    {
        const bool branch_taken_0x21e3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3C8u;
        // 0x21e3cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3c8) {
            ctx->pc = 0x21E3ECu;
            goto label_21e3ec;
        }
    }
    ctx->pc = 0x21E3D0u;
    // 0x21e3d0: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x21e3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x21e3d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21e3d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21e3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E3D8u;
    {
        const bool branch_taken_0x21e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3D8u;
        // 0x21e3dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3d8) {
            ctx->pc = 0x21E3ECu;
            goto label_21e3ec;
        }
    }
    ctx->pc = 0x21E3E0u;
    // 0x21e3e0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x21e3e4: 0xc474024c  lwc1        $f20, 0x24C($v1)
    ctx->pc = 0x21e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21e3e8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x21e3e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_21e3ec:
    // 0x21e3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e3f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x21e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21e3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F8u;
        // 0x21e3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E400u;
}
