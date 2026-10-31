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

// Function: sub_003404A8
// Address: 0x3404a8 - 0x3405d8
void sub_003404A8_0x3404a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003404A8_0x3404a8");
#endif

    switch (ctx->pc) {
        case 0x340510u: goto label_340510;
        case 0x340564u: goto label_340564;
        case 0x340580u: goto label_340580;
        default: break;
    }

    ctx->pc = 0x3404a8u;

    // 0x3404a8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3404a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3404ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3404acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3404b0: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x3404b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3404b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3404b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3404b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3404b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3404bc: 0x0  nop
    ctx->pc = 0x3404bcu;
    // NOP
    // 0x3404c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3404C0u;
    {
        const bool branch_taken_0x3404c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3404c0) {
            ctx->pc = 0x3404C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3404C0u;
            // 0x3404c4: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3404C8u;
            goto label_3404c8;
        }
    }
    ctx->pc = 0x3404C8u;
label_3404c8:
    // 0x3404c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3404c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3404cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3404CCu;
    {
        const bool branch_taken_0x3404cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404CCu;
        // 0x3404d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404cc) {
            ctx->pc = 0x3404E4u;
            goto label_3404e4;
        }
    }
    ctx->pc = 0x3404D4u;
    // 0x3404d4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3404d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x3404d8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x3404d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x3404dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3404DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3404E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404DCu;
        // 0x3404e0: 0xaca00024  sw          $zero, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3404DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3404E4u;
label_3404e4:
    // 0x3404e4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3404e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3404e8: 0xc6180b  movn        $v1, $a2, $a2
    ctx->pc = 0x3404e8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x3404ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3404ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3404f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3404f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3404f4: 0x0  nop
    ctx->pc = 0x3404f4u;
    // NOP
    // 0x3404f8: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x3404F8u;
    {
        const bool branch_taken_0x3404f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3404f8) {
            ctx->pc = 0x3404FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3404F8u;
            // 0x3404fc: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340574u;
            goto label_340574;
        }
    }
    ctx->pc = 0x340500u;
    // 0x340500: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x340504: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x340504u;
    {
        const bool branch_taken_0x340504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x340504) {
            ctx->pc = 0x340508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340504u;
            // 0x340508: 0xaca30028  sw          $v1, 0x28($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340554u;
            goto label_340554;
        }
    }
    ctx->pc = 0x34050Cu;
    // 0x34050c: 0x0  nop
    ctx->pc = 0x34050cu;
    // NOP
label_340510:
    // 0x340510: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x340510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340514: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x340514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340518: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x340518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34051c: 0x0  nop
    ctx->pc = 0x34051cu;
    // NOP
    // 0x340520: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x340520u;
    {
        const bool branch_taken_0x340520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340520) {
            ctx->pc = 0x340524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340520u;
            // 0x340524: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340548u;
            goto label_340548;
        }
    }
    ctx->pc = 0x340528u;
    // 0x340528: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x340528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x34052c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34052Cu;
    {
        const bool branch_taken_0x34052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34052c) {
            ctx->pc = 0x340530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34052Cu;
            // 0x340530: 0xac450024  sw          $a1, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340534u;
            goto label_340534;
        }
    }
    ctx->pc = 0x340534u;
label_340534:
    // 0x340534: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x340534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x340538: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x340538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x34053c: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x34053cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x340540: 0x3e00008  jr          $ra
    ctx->pc = 0x340540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340540u;
        // 0x340544: 0xac650028  sw          $a1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340548u;
label_340548:
    // 0x340548: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x340548u;
    {
        const bool branch_taken_0x340548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340548u;
        // 0x34054c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340548) {
            ctx->pc = 0x340510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340510;
        }
    }
    ctx->pc = 0x340550u;
    // 0x340550: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x340550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_340554:
    // 0x340554: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x340554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x340558: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x340558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x34055c: 0x3e00008  jr          $ra
    ctx->pc = 0x34055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34055Cu;
        // 0x340560: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340564u;
label_340564:
    // 0x340564: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x340564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x340568: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x340568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x34056c: 0x3e00008  jr          $ra
    ctx->pc = 0x34056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34056Cu;
        // 0x340570: 0xac650024  sw          $a1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340574u;
label_340574:
    // 0x340574: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x340574u;
    {
        const bool branch_taken_0x340574 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x340578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340574u;
        // 0x340578: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340574) {
            ctx->pc = 0x3405C8u;
            goto label_3405c8;
        }
    }
    ctx->pc = 0x34057Cu;
    // 0x34057c: 0x0  nop
    ctx->pc = 0x34057cu;
    // NOP
label_340580:
    // 0x340580: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x340580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340584: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x340584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x340588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34058c: 0x0  nop
    ctx->pc = 0x34058cu;
    // NOP
    // 0x340590: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x340590u;
    {
        const bool branch_taken_0x340590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340590) {
            ctx->pc = 0x340594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340590u;
            // 0x340594: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405C0u;
            goto label_3405c0;
        }
    }
    ctx->pc = 0x340598u;
    // 0x340598: 0x5067fff2  beql        $v1, $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x340598u;
    {
        const bool branch_taken_0x340598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x340598) {
            ctx->pc = 0x34059Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340598u;
            // 0x34059c: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340564;
        }
    }
    ctx->pc = 0x3405A0u;
    // 0x3405a0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3405a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3405a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3405A4u;
    {
        const bool branch_taken_0x3405a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3405a4) {
            ctx->pc = 0x3405A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3405A4u;
            // 0x3405a8: 0xac450028  sw          $a1, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405ACu;
            goto label_3405ac;
        }
    }
    ctx->pc = 0x3405ACu;
label_3405ac:
    // 0x3405ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3405acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3405b0: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x3405b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x3405b4: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x3405b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x3405b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3405B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3405BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405B8u;
        // 0x3405bc: 0xac650024  sw          $a1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3405B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3405C0u;
label_3405c0:
    // 0x3405c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3405C0u;
    {
        const bool branch_taken_0x3405c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3405C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405C0u;
        // 0x3405c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405c0) {
            ctx->pc = 0x340580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340580;
        }
    }
    ctx->pc = 0x3405C8u;
label_3405c8:
    // 0x3405c8: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x3405c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x3405cc: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x3405ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x3405d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3405D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3405D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405D0u;
        // 0x3405d4: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3405D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3405D8u;
}
