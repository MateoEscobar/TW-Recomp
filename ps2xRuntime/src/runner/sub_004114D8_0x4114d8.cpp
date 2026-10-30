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

// Function: sub_004114D8
// Address: 0x4114d8 - 0x4115d0
void sub_004114D8_0x4114d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004114D8_0x4114d8");
#endif

    switch (ctx->pc) {
        case 0x4114d8u: goto label_4114d8;
        case 0x4114dcu: goto label_4114dc;
        case 0x4114e0u: goto label_4114e0;
        case 0x4114e4u: goto label_4114e4;
        case 0x4114e8u: goto label_4114e8;
        case 0x4114ecu: goto label_4114ec;
        case 0x4114f0u: goto label_4114f0;
        case 0x4114f4u: goto label_4114f4;
        case 0x4114f8u: goto label_4114f8;
        case 0x4114fcu: goto label_4114fc;
        case 0x411500u: goto label_411500;
        case 0x411504u: goto label_411504;
        case 0x411508u: goto label_411508;
        case 0x41150cu: goto label_41150c;
        case 0x411510u: goto label_411510;
        case 0x411514u: goto label_411514;
        case 0x411518u: goto label_411518;
        case 0x41151cu: goto label_41151c;
        case 0x411520u: goto label_411520;
        case 0x411524u: goto label_411524;
        case 0x411528u: goto label_411528;
        case 0x41152cu: goto label_41152c;
        case 0x411530u: goto label_411530;
        case 0x411534u: goto label_411534;
        case 0x411538u: goto label_411538;
        case 0x41153cu: goto label_41153c;
        case 0x411540u: goto label_411540;
        case 0x411544u: goto label_411544;
        case 0x411548u: goto label_411548;
        case 0x41154cu: goto label_41154c;
        case 0x411550u: goto label_411550;
        case 0x411554u: goto label_411554;
        case 0x411558u: goto label_411558;
        case 0x41155cu: goto label_41155c;
        case 0x411560u: goto label_411560;
        case 0x411564u: goto label_411564;
        case 0x411568u: goto label_411568;
        case 0x41156cu: goto label_41156c;
        case 0x411570u: goto label_411570;
        case 0x411574u: goto label_411574;
        case 0x411578u: goto label_411578;
        case 0x41157cu: goto label_41157c;
        case 0x411580u: goto label_411580;
        case 0x411584u: goto label_411584;
        case 0x411588u: goto label_411588;
        case 0x41158cu: goto label_41158c;
        case 0x411590u: goto label_411590;
        case 0x411594u: goto label_411594;
        case 0x411598u: goto label_411598;
        case 0x41159cu: goto label_41159c;
        case 0x4115a0u: goto label_4115a0;
        case 0x4115a4u: goto label_4115a4;
        case 0x4115a8u: goto label_4115a8;
        case 0x4115acu: goto label_4115ac;
        case 0x4115b0u: goto label_4115b0;
        case 0x4115b4u: goto label_4115b4;
        case 0x4115b8u: goto label_4115b8;
        case 0x4115bcu: goto label_4115bc;
        case 0x4115c0u: goto label_4115c0;
        case 0x4115c4u: goto label_4115c4;
        case 0x4115c8u: goto label_4115c8;
        case 0x4115ccu: goto label_4115cc;
        default: break;
    }

    ctx->pc = 0x4114d8u;

label_4114d8:
    // 0x4114d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4114d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4114dc:
    // 0x4114dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4114dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4114e0:
    // 0x4114e0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x4114e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_4114e4:
    // 0x4114e4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4114e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4114e8:
    // 0x4114e8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4114e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4114ec:
    // 0x4114ec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4114ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4114f0:
    // 0x4114f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4114f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4114f4:
    // 0x4114f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4114f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4114f8:
    // 0x4114f8: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x4114f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_4114fc:
    // 0x4114fc: 0x8e6327e4  lw          $v1, 0x27E4($s3)
    ctx->pc = 0x4114fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_411500:
    // 0x411500: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x411500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_411504:
    // 0x411504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x411504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_411508:
    // 0x411508: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x411508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_41150c:
    // 0x41150c: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x41150cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_411510:
    // 0x411510: 0xc0f809  jalr        $a2
label_411514:
    if (ctx->pc == 0x411514u) {
        ctx->pc = 0x411514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411510u;
        // 0x411514: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411518u;
        goto label_411518;
    }
    ctx->pc = 0x411510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x411518u);
        ctx->pc = 0x411514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411510u;
        // 0x411514: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411510u, 0x411518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411518u;
label_411518:
    // 0x411518: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x411518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41151c:
    // 0x41151c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x41151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_411520:
    // 0x411520: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x411520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_411524:
    // 0x411524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x411524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411528:
    // 0x411528: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x411528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41152c:
    // 0x41152c: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x41152cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_411530:
    // 0x411530: 0x8cc25340  lw          $v0, 0x5340($a2)
    ctx->pc = 0x411530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21312)));
label_411534:
    // 0x411534: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x411534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_411538:
    // 0x411538: 0x8d071210  lw          $a3, 0x1210($t0)
    ctx->pc = 0x411538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4624)));
label_41153c:
    // 0x41153c: 0x8c661210  lw          $a2, 0x1210($v1)
    ctx->pc = 0x41153cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
label_411540:
    // 0x411540: 0xc05509a  jal         func_154268
label_411544:
    if (ctx->pc == 0x411544u) {
        ctx->pc = 0x411544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411540u;
        // 0x411544: 0x8c45003c  lw          $a1, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411548u;
        goto label_411548;
    }
    ctx->pc = 0x411540u;
    SET_GPR_U32(ctx, 31, 0x411548u);
    ctx->pc = 0x411544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411540u;
    // 0x411544: 0x8c45003c  lw          $a1, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154268u, 0x411540u, 0x411548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411548u;
label_411548:
    // 0x411548: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x411548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_41154c:
    // 0x41154c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41154cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411550:
    // 0x411550: 0xc065f7c  jal         func_197DF0
label_411554:
    if (ctx->pc == 0x411554u) {
        ctx->pc = 0x411554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411550u;
        // 0x411554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411558u;
        goto label_411558;
    }
    ctx->pc = 0x411550u;
    SET_GPR_U32(ctx, 31, 0x411558u);
    ctx->pc = 0x411554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411550u;
    // 0x411554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DF0u, 0x411550u, 0x411558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411558u;
label_411558:
    // 0x411558: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x411558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41155c:
    // 0x41155c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_411560:
    // 0x411560: 0xc11fc7e  jal         func_47F1F8
label_411564:
    if (ctx->pc == 0x411564u) {
        ctx->pc = 0x411564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411560u;
        // 0x411564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411568u;
        goto label_411568;
    }
    ctx->pc = 0x411560u;
    SET_GPR_U32(ctx, 31, 0x411568u);
    ctx->pc = 0x411564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411560u;
    // 0x411564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1F8u, 0x411560u, 0x411568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411568u;
label_411568:
    // 0x411568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x411568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41156c:
    // 0x41156c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411570:
    // 0x411570: 0xc104430  jal         func_4110C0
label_411574:
    if (ctx->pc == 0x411574u) {
        ctx->pc = 0x411574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411570u;
        // 0x411574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411578u;
        goto label_411578;
    }
    ctx->pc = 0x411570u;
    SET_GPR_U32(ctx, 31, 0x411578u);
    ctx->pc = 0x411574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411570u;
    // 0x411574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4110C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4110C0u, 0x411570u, 0x411578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411578u;
label_411578:
    // 0x411578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41157c:
    // 0x41157c: 0xc11fcaa  jal         func_47F2A8
label_411580:
    if (ctx->pc == 0x411580u) {
        ctx->pc = 0x411580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41157Cu;
        // 0x411580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411584u;
        goto label_411584;
    }
    ctx->pc = 0x41157Cu;
    SET_GPR_U32(ctx, 31, 0x411584u);
    ctx->pc = 0x411580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41157Cu;
    // 0x411580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F2A8u, 0x41157Cu, 0x411584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411584u;
label_411584:
    // 0x411584: 0x8e6627e4  lw          $a2, 0x27E4($s3)
    ctx->pc = 0x411584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_411588:
    // 0x411588: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x411588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_41158c:
    // 0x41158c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411590:
    // 0x411590: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x411590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_411594:
    // 0x411594: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x411594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_411598:
    // 0x411598: 0x60f809  jalr        $v1
label_41159c:
    if (ctx->pc == 0x41159Cu) {
        ctx->pc = 0x41159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411598u;
        // 0x41159c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4115A0u;
        goto label_4115a0;
    }
    ctx->pc = 0x411598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4115A0u);
        ctx->pc = 0x41159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411598u;
        // 0x41159c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411598u, 0x4115A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4115A0u;
label_4115a0:
    // 0x4115a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4115a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4115a4:
    // 0x4115a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4115a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4115a8:
    // 0x4115a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4115a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4115ac:
    // 0x4115ac: 0xc0550a4  jal         func_154290
label_4115b0:
    if (ctx->pc == 0x4115B0u) {
        ctx->pc = 0x4115B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4115ACu;
        // 0x4115b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4115B4u;
        goto label_4115b4;
    }
    ctx->pc = 0x4115ACu;
    SET_GPR_U32(ctx, 31, 0x4115B4u);
    ctx->pc = 0x4115B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4115ACu;
    // 0x4115b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154290u, 0x4115ACu, 0x4115B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4115B4u;
label_4115b4:
    // 0x4115b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4115b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4115b8:
    // 0x4115b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4115b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4115bc:
    // 0x4115bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4115bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4115c0:
    // 0x4115c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4115c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4115c4:
    // 0x4115c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4115c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4115c8:
    // 0x4115c8: 0x3e00008  jr          $ra
label_4115cc:
    if (ctx->pc == 0x4115CCu) {
        ctx->pc = 0x4115CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4115C8u;
        // 0x4115cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4115D0u;
        goto label_fallthrough_0x4115c8;
    }
    ctx->pc = 0x4115C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4115CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4115C8u;
        // 0x4115cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4115C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4115c8:
    ctx->pc = 0x4115D0u;
}
