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

// Function: sub_0032A3E8
// Address: 0x32a3e8 - 0x32a478
void sub_0032A3E8_0x32a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A3E8_0x32a3e8");
#endif

    switch (ctx->pc) {
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3ecu: goto label_32a3ec;
        case 0x32a3f0u: goto label_32a3f0;
        case 0x32a3f4u: goto label_32a3f4;
        case 0x32a3f8u: goto label_32a3f8;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a400u: goto label_32a400;
        case 0x32a404u: goto label_32a404;
        case 0x32a408u: goto label_32a408;
        case 0x32a40cu: goto label_32a40c;
        case 0x32a410u: goto label_32a410;
        case 0x32a414u: goto label_32a414;
        case 0x32a418u: goto label_32a418;
        case 0x32a41cu: goto label_32a41c;
        case 0x32a420u: goto label_32a420;
        case 0x32a424u: goto label_32a424;
        case 0x32a428u: goto label_32a428;
        case 0x32a42cu: goto label_32a42c;
        case 0x32a430u: goto label_32a430;
        case 0x32a434u: goto label_32a434;
        case 0x32a438u: goto label_32a438;
        case 0x32a43cu: goto label_32a43c;
        case 0x32a440u: goto label_32a440;
        case 0x32a444u: goto label_32a444;
        case 0x32a448u: goto label_32a448;
        case 0x32a44cu: goto label_32a44c;
        case 0x32a450u: goto label_32a450;
        case 0x32a454u: goto label_32a454;
        case 0x32a458u: goto label_32a458;
        case 0x32a45cu: goto label_32a45c;
        case 0x32a460u: goto label_32a460;
        case 0x32a464u: goto label_32a464;
        case 0x32a468u: goto label_32a468;
        case 0x32a46cu: goto label_32a46c;
        case 0x32a470u: goto label_32a470;
        case 0x32a474u: goto label_32a474;
        default: break;
    }

    ctx->pc = 0x32a3e8u;

label_32a3e8:
    // 0x32a3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32a3ec:
    // 0x32a3ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_32a3f0:
    // 0x32a3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32a3f4:
    // 0x32a3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a3f8:
    // 0x32a3f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a3fc:
    // 0x32a3fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32a400:
    // 0x32a400: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32a404:
    // 0x32a404: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32a408:
    // 0x32a408: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32a40c:
    if (ctx->pc == 0x32A40Cu) {
        ctx->pc = 0x32A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A408u;
        // 0x32a40c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A410u;
        goto label_32a410;
    }
    ctx->pc = 0x32A408u;
    {
        const bool branch_taken_0x32a408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A408u;
        // 0x32a40c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a408) {
            ctx->pc = 0x32A428u;
            goto label_32a428;
        }
    }
    ctx->pc = 0x32A410u;
label_32a410:
    // 0x32a410: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a414:
    // 0x32a414: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32a418:
    // 0x32a418: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32a418u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32a41c:
    // 0x32a41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a420:
    // 0x32a420: 0x10000006  b           . + 4 + (0x6 << 2)
label_32a424:
    if (ctx->pc == 0x32A424u) {
        ctx->pc = 0x32A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A420u;
        // 0x32a424: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A428u;
        goto label_32a428;
    }
    ctx->pc = 0x32A420u;
    {
        const bool branch_taken_0x32a420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A420u;
        // 0x32a424: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a420) {
            ctx->pc = 0x32A43Cu;
            goto label_32a43c;
        }
    }
    ctx->pc = 0x32A428u;
label_32a428:
    // 0x32a428: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32a428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32a42c:
    // 0x32a42c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32a430:
    // 0x32a430: 0x40f809  jalr        $v0
label_32a434:
    if (ctx->pc == 0x32A434u) {
        ctx->pc = 0x32A438u;
        goto label_32a438;
    }
    ctx->pc = 0x32A430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32A438u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A430u, 0x32A438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A438u;
label_32a438:
    // 0x32a438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32a438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a43c:
    // 0x32a43c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x32a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_32a440:
    // 0x32a440: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32a440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_32a444:
    // 0x32a444: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32a444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32a448:
    // 0x32a448: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32a448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32a44c:
    // 0x32a44c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32a450:
    // 0x32a450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a454:
    // 0x32a454: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x32a454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_32a458:
    // 0x32a458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32a45c:
    // 0x32a45c: 0x24e75488  addiu       $a3, $a3, 0x5488
    ctx->pc = 0x32a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21640));
label_32a460:
    // 0x32a460: 0xc0ca88a  jal         func_32A228
label_32a464:
    if (ctx->pc == 0x32A464u) {
        ctx->pc = 0x32A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A460u;
        // 0x32a464: 0x34c6fffd  ori         $a2, $a2, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A468u;
        goto label_32a468;
    }
    ctx->pc = 0x32A460u;
    SET_GPR_U32(ctx, 31, 0x32A468u);
    ctx->pc = 0x32A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A460u;
    // 0x32a464: 0x34c6fffd  ori         $a2, $a2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32A460u, 0x32A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A468u;
label_32a468:
    // 0x32a468: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32a468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a46c:
    // 0x32a46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a470:
    // 0x32a470: 0x3e00008  jr          $ra
label_32a474:
    if (ctx->pc == 0x32A474u) {
        ctx->pc = 0x32A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A470u;
        // 0x32a474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A478u;
        goto label_fallthrough_0x32a470;
    }
    ctx->pc = 0x32A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A470u;
        // 0x32a474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32a470:
    ctx->pc = 0x32A478u;
}
