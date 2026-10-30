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

// Function: sub_00432478
// Address: 0x432478 - 0x432510
void sub_00432478_0x432478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432478_0x432478");
#endif

    switch (ctx->pc) {
        case 0x432478u: goto label_432478;
        case 0x43247cu: goto label_43247c;
        case 0x432480u: goto label_432480;
        case 0x432484u: goto label_432484;
        case 0x432488u: goto label_432488;
        case 0x43248cu: goto label_43248c;
        case 0x432490u: goto label_432490;
        case 0x432494u: goto label_432494;
        case 0x432498u: goto label_432498;
        case 0x43249cu: goto label_43249c;
        case 0x4324a0u: goto label_4324a0;
        case 0x4324a4u: goto label_4324a4;
        case 0x4324a8u: goto label_4324a8;
        case 0x4324acu: goto label_4324ac;
        case 0x4324b0u: goto label_4324b0;
        case 0x4324b4u: goto label_4324b4;
        case 0x4324b8u: goto label_4324b8;
        case 0x4324bcu: goto label_4324bc;
        case 0x4324c0u: goto label_4324c0;
        case 0x4324c4u: goto label_4324c4;
        case 0x4324c8u: goto label_4324c8;
        case 0x4324ccu: goto label_4324cc;
        case 0x4324d0u: goto label_4324d0;
        case 0x4324d4u: goto label_4324d4;
        case 0x4324d8u: goto label_4324d8;
        case 0x4324dcu: goto label_4324dc;
        case 0x4324e0u: goto label_4324e0;
        case 0x4324e4u: goto label_4324e4;
        case 0x4324e8u: goto label_4324e8;
        case 0x4324ecu: goto label_4324ec;
        case 0x4324f0u: goto label_4324f0;
        case 0x4324f4u: goto label_4324f4;
        case 0x4324f8u: goto label_4324f8;
        case 0x4324fcu: goto label_4324fc;
        case 0x432500u: goto label_432500;
        case 0x432504u: goto label_432504;
        case 0x432508u: goto label_432508;
        case 0x43250cu: goto label_43250c;
        default: break;
    }

    ctx->pc = 0x432478u;

label_432478:
    // 0x432478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x432478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43247c:
    // 0x43247c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_432480:
    // 0x432480: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x432480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_432484:
    // 0x432484: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x432484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_432488:
    // 0x432488: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x432488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_43248c:
    // 0x43248c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43248cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432490:
    // 0x432490: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x432490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_432494:
    // 0x432494: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x432494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_432498:
    // 0x432498: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x432498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_43249c:
    // 0x43249c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_4324a0:
    if (ctx->pc == 0x4324A0u) {
        ctx->pc = 0x4324A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43249Cu;
        // 0x4324a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324A4u;
        goto label_4324a4;
    }
    ctx->pc = 0x43249Cu;
    {
        const bool branch_taken_0x43249c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4324A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43249Cu;
        // 0x4324a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43249c) {
            ctx->pc = 0x4324E8u;
            goto label_4324e8;
        }
    }
    ctx->pc = 0x4324A4u;
label_4324a4:
    // 0x4324a4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x4324a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4324a8:
    // 0x4324a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4324a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4324ac:
    // 0x4324ac: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_4324b0:
    if (ctx->pc == 0x4324B0u) {
        ctx->pc = 0x4324B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324ACu;
        // 0x4324b0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324B4u;
        goto label_4324b4;
    }
    ctx->pc = 0x4324ACu;
    {
        const bool branch_taken_0x4324ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4324B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324ACu;
        // 0x4324b0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4324ac) {
            ctx->pc = 0x4324DCu;
            goto label_4324dc;
        }
    }
    ctx->pc = 0x4324B4u;
label_4324b4:
    // 0x4324b4: 0x0  nop
    ctx->pc = 0x4324b4u;
    // NOP
label_4324b8:
    // 0x4324b8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x4324b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4324bc:
    // 0x4324bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4324c0:
    if (ctx->pc == 0x4324C0u) {
        ctx->pc = 0x4324C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324BCu;
        // 0x4324c0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324C4u;
        goto label_4324c4;
    }
    ctx->pc = 0x4324BCu;
    {
        const bool branch_taken_0x4324bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4324bc) {
            ctx->pc = 0x4324C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4324BCu;
            // 0x4324c0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4324D4u;
            goto label_4324d4;
        }
    }
    ctx->pc = 0x4324C4u;
label_4324c4:
    // 0x4324c4: 0x280f809  jalr        $s4
label_4324c8:
    if (ctx->pc == 0x4324C8u) {
        ctx->pc = 0x4324C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324C4u;
        // 0x4324c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324CCu;
        goto label_4324cc;
    }
    ctx->pc = 0x4324C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x4324CCu);
        ctx->pc = 0x4324C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324C4u;
        // 0x4324c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4324C4u, 0x4324CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4324CCu;
label_4324cc:
    // 0x4324cc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x4324ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_4324d0:
    // 0x4324d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4324d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4324d4:
    // 0x4324d4: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_4324d8:
    if (ctx->pc == 0x4324D8u) {
        ctx->pc = 0x4324D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324D4u;
        // 0x4324d8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324DCu;
        goto label_4324dc;
    }
    ctx->pc = 0x4324D4u;
    {
        const bool branch_taken_0x4324d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4324D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324D4u;
        // 0x4324d8: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4324d4) {
            ctx->pc = 0x4324B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4324b8;
        }
    }
    ctx->pc = 0x4324DCu;
label_4324dc:
    // 0x4324dc: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x4324dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4324e0:
    // 0x4324e0: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_4324e4:
    if (ctx->pc == 0x4324E4u) {
        ctx->pc = 0x4324E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324E0u;
        // 0x4324e4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4324E8u;
        goto label_4324e8;
    }
    ctx->pc = 0x4324E0u;
    {
        const bool branch_taken_0x4324e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4324e0) {
            ctx->pc = 0x4324E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4324E0u;
            // 0x4324e4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4324A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4324a8;
        }
    }
    ctx->pc = 0x4324E8u;
label_4324e8:
    // 0x4324e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4324e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4324ec:
    // 0x4324ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4324ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4324f0:
    // 0x4324f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4324f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4324f4:
    // 0x4324f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4324f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4324f8:
    // 0x4324f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4324f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4324fc:
    // 0x4324fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4324fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432500:
    // 0x432500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_432504:
    // 0x432504: 0x3e00008  jr          $ra
label_432508:
    if (ctx->pc == 0x432508u) {
        ctx->pc = 0x432508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432504u;
        // 0x432508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43250Cu;
        goto label_43250c;
    }
    ctx->pc = 0x432504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432504u;
        // 0x432508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43250Cu;
label_43250c:
    // 0x43250c: 0x0  nop
    ctx->pc = 0x43250cu;
    // NOP
    ctx->pc = 0x432510u;
}
