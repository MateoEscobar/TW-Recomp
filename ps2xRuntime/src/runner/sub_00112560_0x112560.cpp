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

// Function: sub_00112560
// Address: 0x112560 - 0x112700
void sub_00112560_0x112560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112560_0x112560");
#endif

    switch (ctx->pc) {
        case 0x112598u: goto label_112598;
        case 0x1125acu: goto label_1125ac;
        case 0x1125c8u: goto label_1125c8;
        case 0x1125d4u: goto label_1125d4;
        case 0x1125f8u: goto label_1125f8;
        case 0x11261cu: goto label_11261c;
        case 0x112638u: goto label_112638;
        case 0x11264cu: goto label_11264c;
        case 0x1126a8u: goto label_1126a8;
        case 0x1126c0u: goto label_1126c0;
        default: break;
    }

    ctx->pc = 0x112560u;

    // 0x112560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x112564: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x112564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x112568: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x112568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11256c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11256cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x112570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x112574: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x112574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x112578: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x112578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11257c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11257cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112580: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x112580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x112584: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x112584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11258c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11258cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112590: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x112590u;
    SET_GPR_U32(ctx, 31, 0x112598u);
    ctx->pc = 0x112594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112590u;
    // 0x112594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x112590u, 0x112598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112598u;
label_112598:
    // 0x112598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11259c: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x11259Cu;
    {
        const bool branch_taken_0x11259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1125A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11259Cu;
        // 0x1125a0: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11259c) {
            ctx->pc = 0x112694u;
            goto label_112694;
        }
    }
    ctx->pc = 0x1125A4u;
    // 0x1125a4: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x1125A4u;
    SET_GPR_U32(ctx, 31, 0x1125ACu);
    ctx->pc = 0x1125A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125A4u;
    // 0x1125a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x1125A4u, 0x1125ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125ACu;
label_1125ac:
    // 0x1125ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1125acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1125b0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1125B0u;
    {
        const bool branch_taken_0x1125b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125B0u;
        // 0x1125b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125b0) {
            ctx->pc = 0x1125E8u;
            goto label_1125e8;
        }
    }
    ctx->pc = 0x1125B8u;
    // 0x1125b8: 0x26500064  addiu       $s0, $s2, 0x64
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x1125bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1125bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1125c0: 0xc046d26  jal         func_11B498
    ctx->pc = 0x1125C0u;
    SET_GPR_U32(ctx, 31, 0x1125C8u);
    ctx->pc = 0x1125C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125C0u;
    // 0x1125c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B498u, 0x1125C0u, 0x1125C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125C8u;
label_1125c8:
    // 0x1125c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1125c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125cc: 0xc046dd4  jal         func_11B750
    ctx->pc = 0x1125CCu;
    SET_GPR_U32(ctx, 31, 0x1125D4u);
    ctx->pc = 0x1125D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125CCu;
    // 0x1125d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x1125CCu, 0x1125D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125D4u;
label_1125d4:
    // 0x1125d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1125d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1125d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1125dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1125dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1125e0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1125E0u;
    {
        const bool branch_taken_0x1125e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125E0u;
        // 0x1125e4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125e0) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x1125E8u;
label_1125e8:
    // 0x1125e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1125e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1125ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1125f0: 0xc043c14  jal         func_10F050
    ctx->pc = 0x1125F0u;
    SET_GPR_U32(ctx, 31, 0x1125F8u);
    ctx->pc = 0x1125F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125F0u;
    // 0x1125f4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x1125F0u, 0x1125F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125F8u;
label_1125f8:
    // 0x1125f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1125F8u;
    {
        const bool branch_taken_0x1125f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125F8u;
        // 0x1125fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125f8) {
            ctx->pc = 0x11260Cu;
            goto label_11260c;
        }
    }
    ctx->pc = 0x112600u;
    // 0x112600: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x112600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x112604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112604u;
    {
        const bool branch_taken_0x112604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112604u;
        // 0x112608: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112604) {
            ctx->pc = 0x112614u;
            goto label_112614;
        }
    }
    ctx->pc = 0x11260Cu;
label_11260c:
    // 0x11260c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x112610: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_112614:
    // 0x112614: 0xc044a78  jal         func_1129E0
    ctx->pc = 0x112614u;
    SET_GPR_U32(ctx, 31, 0x11261Cu);
    ctx->pc = 0x1129E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129E0u, 0x112614u, 0x11261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11261Cu;
label_11261c:
    // 0x11261c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11261cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x112620: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x112620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112624: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112628: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x112628u;
    {
        const bool branch_taken_0x112628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x112628) {
            ctx->pc = 0x11262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112628u;
            // 0x11262c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11268Cu;
            goto label_11268c;
        }
    }
    ctx->pc = 0x112630u;
    // 0x112630: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x112630u;
    SET_GPR_U32(ctx, 31, 0x112638u);
    ctx->pc = 0x112634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112630u;
    // 0x112634: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112630u, 0x112638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112638u;
label_112638:
    // 0x112638: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x112638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11263c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11263Cu;
    {
        const bool branch_taken_0x11263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11263Cu;
        // 0x112640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11263c) {
            ctx->pc = 0x1126C8u;
            goto label_1126c8;
        }
    }
    ctx->pc = 0x112644u;
    // 0x112644: 0xc0449c0  jal         func_112700
    ctx->pc = 0x112644u;
    SET_GPR_U32(ctx, 31, 0x11264Cu);
    ctx->pc = 0x112648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112644u;
    // 0x112648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112700u, 0x112644u, 0x11264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11264Cu;
label_11264c:
    // 0x11264c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11264cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112650: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x112650u;
    {
        const bool branch_taken_0x112650 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x112654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112650u;
        // 0x112654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112650) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x112658u;
    // 0x112658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11265c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x112660: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x112660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x112664: 0x908583bb  lbu         $a1, -0x7C45($a0)
    ctx->pc = 0x112664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x5483BBu));
    // 0x112668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x112668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11266c: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x11266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x112670: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x112670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x112674: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x112674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x112678: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x112678u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x11267c: 0xa0c50094  sb          $a1, 0x94($a2)
    ctx->pc = 0x11267cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 148), (uint8_t)GPR_U32(ctx, 5));
    // 0x112680: 0xacd0003c  sw          $s0, 0x3C($a2)
    ctx->pc = 0x112680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 16));
    // 0x112684: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112684u;
    {
        const bool branch_taken_0x112684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112684u;
        // 0x112688: 0xacd00040  sw          $s0, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112684) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x11268Cu;
label_11268c:
    // 0x11268c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11268Cu;
    {
        const bool branch_taken_0x11268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11268Cu;
        // 0x112690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11268c) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x112694u;
label_112694:
    // 0x112694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112698: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x112698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11269c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1126a0: 0xc044a84  jal         func_112A10
    ctx->pc = 0x1126A0u;
    SET_GPR_U32(ctx, 31, 0x1126A8u);
    ctx->pc = 0x1126A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A0u;
    // 0x1126a4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A10u, 0x1126A0u, 0x1126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1126ac: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1126ACu;
    {
        const bool branch_taken_0x1126ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126ACu;
        // 0x1126b0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126ac) {
            ctx->pc = 0x1126DCu;
            goto label_1126dc;
        }
    }
    ctx->pc = 0x1126B4u;
    // 0x1126b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1126b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126b8: 0xc0449c0  jal         func_112700
    ctx->pc = 0x1126B8u;
    SET_GPR_U32(ctx, 31, 0x1126C0u);
    ctx->pc = 0x1126BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126B8u;
    // 0x1126bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112700u, 0x1126B8u, 0x1126C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126C0u;
label_1126c0:
    // 0x1126c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1126C0u;
    {
        const bool branch_taken_0x1126c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1126c0) {
            ctx->pc = 0x1126C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1126C0u;
            // 0x1126c4: 0x8c43003c  lw          $v1, 0x3C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x1126C8u;
label_1126c8:
    // 0x1126c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1126C8u;
    {
        const bool branch_taken_0x1126c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126C8u;
        // 0x1126cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126c8) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x1126D0u;
label_1126d0:
    // 0x1126d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1126d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1126D4u;
    {
        const bool branch_taken_0x1126d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126D4u;
        // 0x1126d8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126d4) {
            ctx->pc = 0x1126E0u;
            goto label_1126e0;
        }
    }
    ctx->pc = 0x1126DCu;
label_1126dc:
    // 0x1126dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1126dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1126e0:
    // 0x1126e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1126e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1126e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1126e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1126e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1126e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1126ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1126ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1126f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1126f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1126f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1126f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1126f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1126F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1126FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126F8u;
        // 0x1126fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1126F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112700u;
}
