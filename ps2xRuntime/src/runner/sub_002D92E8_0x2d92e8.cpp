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

// Function: sub_002D92E8
// Address: 0x2d92e8 - 0x2d9378
void sub_002D92E8_0x2d92e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D92E8_0x2d92e8");
#endif

    switch (ctx->pc) {
        case 0x2d933cu: goto label_2d933c;
        case 0x2d934cu: goto label_2d934c;
        default: break;
    }

    ctx->pc = 0x2d92e8u;

    // 0x2d92e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d92ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2d92f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d92f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d92f4: 0x24420f30  addiu       $v0, $v0, 0xF30
    ctx->pc = 0x2d92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3888));
    // 0x2d92f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d92f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d9300: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d9300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d9304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9308: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d9308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d930c: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x2d930cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x2d9310: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d9310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d9314: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2d9314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2d9318: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x2d9318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d931c: 0xa2070018  sb          $a3, 0x18($s0)
    ctx->pc = 0x2d931cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d9320: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d9320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d9324: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d9324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9328: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d9328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d932c: 0xa2000019  sb          $zero, 0x19($s0)
    ctx->pc = 0x2d932cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9330: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2d9330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d9334: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x2D9334u;
    SET_GPR_U32(ctx, 31, 0x2D933Cu);
    ctx->pc = 0x2D9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9334u;
    // 0x2d9338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2D9334u, 0x2D933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D933Cu;
label_2d933c:
    // 0x2d933c: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D933Cu;
    {
        const bool branch_taken_0x2d933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d933c) {
            ctx->pc = 0x2D9340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D933Cu;
            // 0x2d9340: 0xa2120018  sb          $s2, 0x18($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9358u;
            goto label_2d9358;
        }
    }
    ctx->pc = 0x2D9344u;
    // 0x2d9344: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D9344u;
    SET_GPR_U32(ctx, 31, 0x2D934Cu);
    ctx->pc = 0x2D9348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9344u;
    // 0x2d9348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D9344u, 0x2D934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D934Cu;
label_2d934c:
    // 0x2d934c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D934Cu;
    {
        const bool branch_taken_0x2d934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D934Cu;
        // 0x2d9350: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d934c) {
            ctx->pc = 0x2D935Cu;
            goto label_2d935c;
        }
    }
    ctx->pc = 0x2D9354u;
    // 0x2d9354: 0xa2120018  sb          $s2, 0x18($s0)
    ctx->pc = 0x2d9354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
label_2d9358:
    // 0x2d9358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d935c:
    // 0x2d935c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d935cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9360: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d9360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9364: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d9364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d936c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D936Cu;
        // 0x2d9370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9374u;
    // 0x2d9374: 0x0  nop
    ctx->pc = 0x2d9374u;
    // NOP
    ctx->pc = 0x2d9378u;
}
