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

// Function: sub_00421348
// Address: 0x421348 - 0x4214c0
void sub_00421348_0x421348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421348_0x421348");
#endif

    switch (ctx->pc) {
        case 0x421348u: goto label_421348;
        case 0x42134cu: goto label_42134c;
        case 0x421350u: goto label_421350;
        case 0x421354u: goto label_421354;
        case 0x421358u: goto label_421358;
        case 0x42135cu: goto label_42135c;
        case 0x421360u: goto label_421360;
        case 0x421364u: goto label_421364;
        case 0x421368u: goto label_421368;
        case 0x42136cu: goto label_42136c;
        case 0x421370u: goto label_421370;
        case 0x421374u: goto label_421374;
        case 0x421378u: goto label_421378;
        case 0x42137cu: goto label_42137c;
        case 0x421380u: goto label_421380;
        case 0x421384u: goto label_421384;
        case 0x421388u: goto label_421388;
        case 0x42138cu: goto label_42138c;
        case 0x421390u: goto label_421390;
        case 0x421394u: goto label_421394;
        case 0x421398u: goto label_421398;
        case 0x42139cu: goto label_42139c;
        case 0x4213a0u: goto label_4213a0;
        case 0x4213a4u: goto label_4213a4;
        case 0x4213a8u: goto label_4213a8;
        case 0x4213acu: goto label_4213ac;
        case 0x4213b0u: goto label_4213b0;
        case 0x4213b4u: goto label_4213b4;
        case 0x4213b8u: goto label_4213b8;
        case 0x4213bcu: goto label_4213bc;
        case 0x4213c0u: goto label_4213c0;
        case 0x4213c4u: goto label_4213c4;
        case 0x4213c8u: goto label_4213c8;
        case 0x4213ccu: goto label_4213cc;
        case 0x4213d0u: goto label_4213d0;
        case 0x4213d4u: goto label_4213d4;
        case 0x4213d8u: goto label_4213d8;
        case 0x4213dcu: goto label_4213dc;
        case 0x4213e0u: goto label_4213e0;
        case 0x4213e4u: goto label_4213e4;
        case 0x4213e8u: goto label_4213e8;
        case 0x4213ecu: goto label_4213ec;
        case 0x4213f0u: goto label_4213f0;
        case 0x4213f4u: goto label_4213f4;
        case 0x4213f8u: goto label_4213f8;
        case 0x4213fcu: goto label_4213fc;
        case 0x421400u: goto label_421400;
        case 0x421404u: goto label_421404;
        case 0x421408u: goto label_421408;
        case 0x42140cu: goto label_42140c;
        case 0x421410u: goto label_421410;
        case 0x421414u: goto label_421414;
        case 0x421418u: goto label_421418;
        case 0x42141cu: goto label_42141c;
        case 0x421420u: goto label_421420;
        case 0x421424u: goto label_421424;
        case 0x421428u: goto label_421428;
        case 0x42142cu: goto label_42142c;
        case 0x421430u: goto label_421430;
        case 0x421434u: goto label_421434;
        case 0x421438u: goto label_421438;
        case 0x42143cu: goto label_42143c;
        case 0x421440u: goto label_421440;
        case 0x421444u: goto label_421444;
        case 0x421448u: goto label_421448;
        case 0x42144cu: goto label_42144c;
        case 0x421450u: goto label_421450;
        case 0x421454u: goto label_421454;
        case 0x421458u: goto label_421458;
        case 0x42145cu: goto label_42145c;
        case 0x421460u: goto label_421460;
        case 0x421464u: goto label_421464;
        case 0x421468u: goto label_421468;
        case 0x42146cu: goto label_42146c;
        case 0x421470u: goto label_421470;
        case 0x421474u: goto label_421474;
        case 0x421478u: goto label_421478;
        case 0x42147cu: goto label_42147c;
        case 0x421480u: goto label_421480;
        case 0x421484u: goto label_421484;
        case 0x421488u: goto label_421488;
        case 0x42148cu: goto label_42148c;
        case 0x421490u: goto label_421490;
        case 0x421494u: goto label_421494;
        case 0x421498u: goto label_421498;
        case 0x42149cu: goto label_42149c;
        case 0x4214a0u: goto label_4214a0;
        case 0x4214a4u: goto label_4214a4;
        case 0x4214a8u: goto label_4214a8;
        case 0x4214acu: goto label_4214ac;
        case 0x4214b0u: goto label_4214b0;
        case 0x4214b4u: goto label_4214b4;
        case 0x4214b8u: goto label_4214b8;
        case 0x4214bcu: goto label_4214bc;
        default: break;
    }

    ctx->pc = 0x421348u;

label_421348:
    // 0x421348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x421348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42134c:
    // 0x42134c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x42134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_421350:
    // 0x421350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x421350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421354:
    // 0x421354: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x421354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_421358:
    // 0x421358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x421358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42135c:
    // 0x42135c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x42135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_421360:
    // 0x421360: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x421360u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_421364:
    // 0x421364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_421368:
    // 0x421368: 0xc1088f8  jal         func_4223E0
label_42136c:
    if (ctx->pc == 0x42136Cu) {
        ctx->pc = 0x42136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421368u;
        // 0x42136c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421370u;
        goto label_421370;
    }
    ctx->pc = 0x421368u;
    SET_GPR_U32(ctx, 31, 0x421370u);
    ctx->pc = 0x42136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421368u;
    // 0x42136c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4223E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4223E0u, 0x421368u, 0x421370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421370u;
label_421370:
    // 0x421370: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x421370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_421374:
    // 0x421374: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421378:
    // 0x421378: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x421378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_42137c:
    // 0x42137c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x42137cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_421380:
    // 0x421380: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x421380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_421384:
    // 0x421384: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x421384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_421388:
    // 0x421388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x421388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42138c:
    // 0x42138c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x42138cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_421390:
    // 0x421390: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x421390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_421394:
    // 0x421394: 0x60f809  jalr        $v1
label_421398:
    if (ctx->pc == 0x421398u) {
        ctx->pc = 0x421398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421394u;
        // 0x421398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42139Cu;
        goto label_42139c;
    }
    ctx->pc = 0x421394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42139Cu);
        ctx->pc = 0x421398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421394u;
        // 0x421398: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421394u, 0x42139Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42139Cu;
label_42139c:
    // 0x42139c: 0xc108530  jal         func_4214C0
label_4213a0:
    if (ctx->pc == 0x4213A0u) {
        ctx->pc = 0x4213A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42139Cu;
        // 0x4213a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4213A4u;
        goto label_4213a4;
    }
    ctx->pc = 0x42139Cu;
    SET_GPR_U32(ctx, 31, 0x4213A4u);
    ctx->pc = 0x4213A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42139Cu;
    // 0x4213a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4214C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4214C0u, 0x42139Cu, 0x4213A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4213A4u;
label_4213a4:
    // 0x4213a4: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x4213a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4213a8:
    // 0x4213a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4213a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4213ac:
    // 0x4213ac: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x4213acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_4213b0:
    // 0x4213b0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4213b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4213b4:
    // 0x4213b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4213b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4213b8:
    // 0x4213b8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4213b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4213bc:
    // 0x4213bc: 0x24a5b800  addiu       $a1, $a1, -0x4800
    ctx->pc = 0x4213bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948864));
label_4213c0:
    // 0x4213c0: 0x2508b810  addiu       $t0, $t0, -0x47F0
    ctx->pc = 0x4213c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948880));
label_4213c4:
    // 0x4213c4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4213c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4213c8:
    // 0x4213c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4213c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4213cc:
    // 0x4213cc: 0x2409002c  addiu       $t1, $zero, 0x2C
    ctx->pc = 0x4213ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4213d0:
    // 0x4213d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4213d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4213d4:
    // 0x4213d4: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x4213d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_4213d8:
    // 0x4213d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4213d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4213dc:
    // 0x4213dc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4213dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4213e0:
    // 0x4213e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4213e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4213e4:
    // 0x4213e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4213e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4213e8:
    // 0x4213e8: 0x40f809  jalr        $v0
label_4213ec:
    if (ctx->pc == 0x4213ECu) {
        ctx->pc = 0x4213ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213E8u;
        // 0x4213ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4213F0u;
        goto label_4213f0;
    }
    ctx->pc = 0x4213E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4213F0u);
        ctx->pc = 0x4213ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213E8u;
        // 0x4213ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4213E8u, 0x4213F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4213F0u;
label_4213f0:
    // 0x4213f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4213f4:
    if (ctx->pc == 0x4213F4u) {
        ctx->pc = 0x4213F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213F0u;
        // 0x4213f4: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4213F8u;
        goto label_4213f8;
    }
    ctx->pc = 0x4213F0u;
    {
        const bool branch_taken_0x4213f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4213f0) {
            ctx->pc = 0x4213F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4213F0u;
            // 0x4213f4: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421408u;
            goto label_421408;
        }
    }
    ctx->pc = 0x4213F8u;
label_4213f8:
    // 0x4213f8: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x4213f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4213fc:
    // 0x4213fc: 0xc055078  jal         func_1541E0
label_421400:
    if (ctx->pc == 0x421400u) {
        ctx->pc = 0x421400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213FCu;
        // 0x421400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421404u;
        goto label_421404;
    }
    ctx->pc = 0x4213FCu;
    SET_GPR_U32(ctx, 31, 0x421404u);
    ctx->pc = 0x421400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4213FCu;
    // 0x421400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1541E0u, 0x4213FCu, 0x421404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421404u;
label_421404:
    // 0x421404: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x421404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
label_421408:
    // 0x421408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x421408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42140c:
    // 0x42140c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421410:
    // 0x421410: 0xc10c1fa  jal         func_4307E8
label_421414:
    if (ctx->pc == 0x421414u) {
        ctx->pc = 0x421414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421410u;
        // 0x421414: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421418u;
        goto label_421418;
    }
    ctx->pc = 0x421410u;
    SET_GPR_U32(ctx, 31, 0x421418u);
    ctx->pc = 0x421414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421410u;
    // 0x421414: 0x24060108  addiu       $a2, $zero, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x421410u, 0x421418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421418u;
label_421418:
    // 0x421418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x421418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42141c:
    // 0x42141c: 0x8e260110  lw          $a2, 0x110($s1)
    ctx->pc = 0x42141cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_421420:
    // 0x421420: 0x8e250108  lw          $a1, 0x108($s1)
    ctx->pc = 0x421420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_421424:
    // 0x421424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x421424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_421428:
    // 0x421428: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x421428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_42142c:
    // 0x42142c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x42142cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_421430:
    // 0x421430: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x421430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_421434:
    // 0x421434: 0x2812  mflo        $a1
    ctx->pc = 0x421434u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_421438:
    // 0x421438: 0x60f809  jalr        $v1
label_42143c:
    if (ctx->pc == 0x42143Cu) {
        ctx->pc = 0x42143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421438u;
        // 0x42143c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421440u;
        goto label_421440;
    }
    ctx->pc = 0x421438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421440u);
        ctx->pc = 0x42143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421438u;
        // 0x42143c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421438u, 0x421440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421440u;
label_421440:
    // 0x421440: 0x8e270110  lw          $a3, 0x110($s1)
    ctx->pc = 0x421440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_421444:
    // 0x421444: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x421444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_421448:
    // 0x421448: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x421448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_42144c:
    // 0x42144c: 0x8e260108  lw          $a2, 0x108($s1)
    ctx->pc = 0x42144cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_421450:
    // 0x421450: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x421450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_421454:
    // 0x421454: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x421454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_421458:
    // 0x421458: 0x60f809  jalr        $v1
label_42145c:
    if (ctx->pc == 0x42145Cu) {
        ctx->pc = 0x42145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421458u;
        // 0x42145c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421460u;
        goto label_421460;
    }
    ctx->pc = 0x421458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421460u);
        ctx->pc = 0x42145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421458u;
        // 0x42145c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421458u, 0x421460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421460u;
label_421460:
    // 0x421460: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x421460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_421464:
    // 0x421464: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x421464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_421468:
    // 0x421468: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x421468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_42146c:
    // 0x42146c: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
label_421470:
    if (ctx->pc == 0x421470u) {
        ctx->pc = 0x421470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42146Cu;
        // 0x421470: 0x8e260110  lw          $a2, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421474u;
        goto label_421474;
    }
    ctx->pc = 0x42146Cu;
    {
        const bool branch_taken_0x42146c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42146c) {
            ctx->pc = 0x421470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42146Cu;
            // 0x421470: 0x8e260110  lw          $a2, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421420;
        }
    }
    ctx->pc = 0x421474u;
label_421474:
    // 0x421474: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x421474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_421478:
    // 0x421478: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x421478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_42147c:
    // 0x42147c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_421480:
    // 0x421480: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x421480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_421484:
    // 0x421484: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x421484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_421488:
    // 0x421488: 0x60f809  jalr        $v1
label_42148c:
    if (ctx->pc == 0x42148Cu) {
        ctx->pc = 0x42148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421488u;
        // 0x42148c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421490u;
        goto label_421490;
    }
    ctx->pc = 0x421488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421490u);
        ctx->pc = 0x42148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421488u;
        // 0x42148c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421488u, 0x421490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421490u;
label_421490:
    // 0x421490: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x421490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_421494:
    // 0x421494: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x421494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_421498:
    // 0x421498: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x421498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42149c:
    // 0x42149c: 0x60f809  jalr        $v1
label_4214a0:
    if (ctx->pc == 0x4214A0u) {
        ctx->pc = 0x4214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42149Cu;
        // 0x4214a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214A4u;
        goto label_4214a4;
    }
    ctx->pc = 0x42149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4214A4u);
        ctx->pc = 0x4214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42149Cu;
        // 0x4214a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42149Cu, 0x4214A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4214A4u;
label_4214a4:
    // 0x4214a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4214a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4214a8:
    // 0x4214a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4214a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4214ac:
    // 0x4214ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4214acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4214b0:
    // 0x4214b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4214b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4214b4:
    // 0x4214b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4214b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4214b8:
    // 0x4214b8: 0x3e00008  jr          $ra
label_4214bc:
    if (ctx->pc == 0x4214BCu) {
        ctx->pc = 0x4214BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214B8u;
        // 0x4214bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214C0u;
        goto label_fallthrough_0x4214b8;
    }
    ctx->pc = 0x4214B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4214BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214B8u;
        // 0x4214bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4214B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4214b8:
    ctx->pc = 0x4214C0u;
}
