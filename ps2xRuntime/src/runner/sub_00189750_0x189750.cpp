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

// Function: sub_00189750
// Address: 0x189750 - 0x1897a8
void sub_00189750_0x189750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189750_0x189750");
#endif

    switch (ctx->pc) {
        case 0x18976cu: goto label_18976c;
        default: break;
    }

    ctx->pc = 0x189750u;

    // 0x189750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189754: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x189754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x189758: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x189758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18975c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18975cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189760: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x189760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x189764: 0xc05e352  jal         func_178D48
    ctx->pc = 0x189764u;
    SET_GPR_U32(ctx, 31, 0x18976Cu);
    ctx->pc = 0x189768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189764u;
    // 0x189768: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D48u, 0x189764u, 0x18976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18976Cu;
label_18976c:
    // 0x18976c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x18976Cu;
    {
        const bool branch_taken_0x18976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18976c) {
            ctx->pc = 0x189770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18976Cu;
            // 0x189770: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189798u;
            goto label_189798;
        }
    }
    ctx->pc = 0x189774u;
    // 0x189774: 0xc6010bdc  lwc1        $f1, 0xBDC($s0)
    ctx->pc = 0x189774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189778: 0xc6000bcc  lwc1        $f0, 0xBCC($s0)
    ctx->pc = 0x189778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18977c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x18977cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x189780: 0xc6020bec  lwc1        $f2, 0xBEC($s0)
    ctx->pc = 0x189780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189784: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x189784u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x189788: 0xc6010bfc  lwc1        $f1, 0xBFC($s0)
    ctx->pc = 0x189788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18978c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x18978cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x189790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189790u;
    {
        const bool branch_taken_0x189790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189790u;
        // 0x189794: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189790) {
            ctx->pc = 0x18979Cu;
            goto label_18979c;
        }
    }
    ctx->pc = 0x189798u;
label_189798:
    // 0x189798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18979c:
    // 0x18979c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1897a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1897A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897A0u;
        // 0x1897a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1897A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1897A8u;
}
