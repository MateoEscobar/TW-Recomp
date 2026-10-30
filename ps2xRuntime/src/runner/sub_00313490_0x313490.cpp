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

// Function: sub_00313490
// Address: 0x313490 - 0x313508
void sub_00313490_0x313490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313490_0x313490");
#endif

    switch (ctx->pc) {
        case 0x3134d8u: goto label_3134d8;
        default: break;
    }

    ctx->pc = 0x313490u;

    // 0x313490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313494: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313498: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31349c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x3134a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3134a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3134a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3134a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3134a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3134ac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3134acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3134b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3134b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3134b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3134b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3134b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3134b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3134bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3134c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3134c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3134c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3134c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3134c8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x3134c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x3134cc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3134ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3134d0: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x3134D0u;
    SET_GPR_U32(ctx, 31, 0x3134D8u);
    ctx->pc = 0x3134D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134D0u;
    // 0x3134d4: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x3134D0u, 0x3134D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134D8u;
label_3134d8:
    // 0x3134d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3134d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3134dc: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x3134dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3134e0: 0x246339e0  addiu       $v1, $v1, 0x39E0
    ctx->pc = 0x3134e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14816));
    // 0x3134e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3134e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134e8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3134e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3134ec: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x3134ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x3134f0: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x3134f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x3134f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3134f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3134f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3134f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3134fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3134fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313500: 0x3e00008  jr          $ra
    ctx->pc = 0x313500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313500u;
        // 0x313504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313508u;
}
