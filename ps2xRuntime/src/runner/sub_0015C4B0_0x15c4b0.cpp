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

// Function: sub_0015C4B0
// Address: 0x15c4b0 - 0x15c5f8
void sub_0015C4B0_0x15c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C4B0_0x15c4b0");
#endif

    switch (ctx->pc) {
        case 0x15c4b0u: goto label_15c4b0;
        case 0x15c4b4u: goto label_15c4b4;
        case 0x15c4b8u: goto label_15c4b8;
        case 0x15c4bcu: goto label_15c4bc;
        case 0x15c4c0u: goto label_15c4c0;
        case 0x15c4c4u: goto label_15c4c4;
        case 0x15c4c8u: goto label_15c4c8;
        case 0x15c4ccu: goto label_15c4cc;
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4d4u: goto label_15c4d4;
        case 0x15c4d8u: goto label_15c4d8;
        case 0x15c4dcu: goto label_15c4dc;
        case 0x15c4e0u: goto label_15c4e0;
        case 0x15c4e4u: goto label_15c4e4;
        case 0x15c4e8u: goto label_15c4e8;
        case 0x15c4ecu: goto label_15c4ec;
        case 0x15c4f0u: goto label_15c4f0;
        case 0x15c4f4u: goto label_15c4f4;
        case 0x15c4f8u: goto label_15c4f8;
        case 0x15c4fcu: goto label_15c4fc;
        case 0x15c500u: goto label_15c500;
        case 0x15c504u: goto label_15c504;
        case 0x15c508u: goto label_15c508;
        case 0x15c50cu: goto label_15c50c;
        case 0x15c510u: goto label_15c510;
        case 0x15c514u: goto label_15c514;
        case 0x15c518u: goto label_15c518;
        case 0x15c51cu: goto label_15c51c;
        case 0x15c520u: goto label_15c520;
        case 0x15c524u: goto label_15c524;
        case 0x15c528u: goto label_15c528;
        case 0x15c52cu: goto label_15c52c;
        case 0x15c530u: goto label_15c530;
        case 0x15c534u: goto label_15c534;
        case 0x15c538u: goto label_15c538;
        case 0x15c53cu: goto label_15c53c;
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        default: break;
    }

    ctx->pc = 0x15c4b0u;

label_15c4b0:
    // 0x15c4b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15c4b4:
    // 0x15c4b4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x15c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_15c4b8:
    // 0x15c4b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15c4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_15c4bc:
    // 0x15c4bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c4c0:
    // 0x15c4c0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x15c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_15c4c4:
    // 0x15c4c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_15c4c8:
    // 0x15c4c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15c4cc:
    // 0x15c4cc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x15c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_15c4d0:
    // 0x15c4d0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x15c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_15c4d4:
    // 0x15c4d4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_15c4d8:
    // 0x15c4d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x15c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_15c4dc:
    // 0x15c4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c4e0:
    // 0x15c4e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15c4e4:
    // 0x15c4e4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15c4e8:
    // 0x15c4e8: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_15c4ec:
    // 0x15c4ec: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_15c4f0:
    // 0x15c4f0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15c4f4:
    // 0x15c4f4: 0x3c160055  lui         $s6, 0x55
    ctx->pc = 0x15c4f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
label_15c4f8:
    // 0x15c4f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_15c4fc:
    if (ctx->pc == 0x15C4FCu) {
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F8u;
        // 0x15c4fc: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C500u;
        goto label_15c500;
    }
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F8u;
        // 0x15c4fc: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C514u;
            goto label_15c514;
        }
    }
    ctx->pc = 0x15C500u;
label_15c500:
    // 0x15c500: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15c504:
    // 0x15c504: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15c504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15c508:
    // 0x15c508: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15c50c:
    // 0x15c50c: 0x60f809  jalr        $v1
label_15c510:
    if (ctx->pc == 0x15C510u) {
        ctx->pc = 0x15C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C50Cu;
        // 0x15c510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C514u;
        goto label_15c514;
    }
    ctx->pc = 0x15C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C514u);
        ctx->pc = 0x15C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C50Cu;
        // 0x15c510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C50Cu, 0x15C514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C514u;
label_15c514:
    // 0x15c514: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15c514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15c518:
    // 0x15c518: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x15c518u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c51c:
    // 0x15c51c: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15c520:
    // 0x15c520: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15c524:
    // 0x15c524: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15c528:
    // 0x15c528: 0x40f809  jalr        $v0
label_15c52c:
    if (ctx->pc == 0x15C52Cu) {
        ctx->pc = 0x15C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C528u;
        // 0x15c52c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C530u;
        goto label_15c530;
    }
    ctx->pc = 0x15C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C530u);
        ctx->pc = 0x15C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C528u;
        // 0x15c52c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C528u, 0x15C530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C530u;
label_15c530:
    // 0x15c530: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15c534:
    // 0x15c534: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_15c538:
    if (ctx->pc == 0x15C538u) {
        ctx->pc = 0x15C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C534u;
        // 0x15c538: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C53Cu;
        goto label_15c53c;
    }
    ctx->pc = 0x15C534u;
    {
        const bool branch_taken_0x15c534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c534) {
            ctx->pc = 0x15C538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C534u;
            // 0x15c538: 0x8e055024  lw          $a1, 0x5024($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c500;
        }
    }
    ctx->pc = 0x15C53Cu;
label_15c53c:
    // 0x15c53c: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x15c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_15c540:
    // 0x15c540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c544:
    // 0x15c544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c548:
    // 0x15c548: 0xc1073a2  jal         func_41CE88
label_15c54c:
    if (ctx->pc == 0x15C54Cu) {
        ctx->pc = 0x15C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C548u;
        // 0x15c54c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C550u;
        goto label_15c550;
    }
    ctx->pc = 0x15C548u;
    SET_GPR_U32(ctx, 31, 0x15C550u);
    ctx->pc = 0x15C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C548u;
    // 0x15c54c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CE88u, 0x15C548u, 0x15C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C550u;
label_15c550:
    // 0x15c550: 0xc057fa4  jal         func_15FE90
label_15c554:
    if (ctx->pc == 0x15C554u) {
        ctx->pc = 0x15C558u;
        goto label_15c558;
    }
    ctx->pc = 0x15C550u;
    SET_GPR_U32(ctx, 31, 0x15C558u);
    ctx->pc = 0x15FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE90u, 0x15C550u, 0x15C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C558u;
label_15c558:
    // 0x15c558: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15c55c:
    // 0x15c55c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c560:
    // 0x15c560: 0xc043e94  jal         func_10FA50
label_15c564:
    if (ctx->pc == 0x15C564u) {
        ctx->pc = 0x15C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C560u;
        // 0x15c564: 0x2685f2c8  addiu       $a1, $s4, -0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C568u;
        goto label_15c568;
    }
    ctx->pc = 0x15C560u;
    SET_GPR_U32(ctx, 31, 0x15C568u);
    ctx->pc = 0x15C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C560u;
    // 0x15c564: 0x2685f2c8  addiu       $a1, $s4, -0xD38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15C560u, 0x15C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C568u;
label_15c568:
    // 0x15c568: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x15c568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_15c56c:
    // 0x15c56c: 0x26c5f2d0  addiu       $a1, $s6, -0xD30
    ctx->pc = 0x15c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963920));
label_15c570:
    // 0x15c570: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15c574:
    // 0x15c574: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15c574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15c578:
    // 0x15c578: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15c57c:
    // 0x15c57c: 0x40f809  jalr        $v0
label_15c580:
    if (ctx->pc == 0x15C580u) {
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C584u;
        goto label_15c584;
    }
    ctx->pc = 0x15C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C584u);
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C57Cu, 0x15C584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C584u;
label_15c584:
    // 0x15c584: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x15c584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_15c588:
    // 0x15c588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c58c:
    // 0x15c58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c590:
    // 0x15c590: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c594:
    // 0x15c594: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15c598:
    // 0x15c598: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15c59c:
    // 0x15c59c: 0x60f809  jalr        $v1
label_15c5a0:
    if (ctx->pc == 0x15C5A0u) {
        ctx->pc = 0x15C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C59Cu;
        // 0x15c5a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5A4u;
        goto label_15c5a4;
    }
    ctx->pc = 0x15C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C5A4u);
        ctx->pc = 0x15C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C59Cu;
        // 0x15c5a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C59Cu, 0x15C5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C5A4u;
label_15c5a4:
    // 0x15c5a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c5a8:
    // 0x15c5a8: 0x8fc5d260  lw          $a1, -0x2DA0($fp)
    ctx->pc = 0x15c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955616)));
label_15c5ac:
    // 0x15c5ac: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x15c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_15c5b0:
    // 0x15c5b0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c5b4:
    // 0x15c5b4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_15c5b8:
    // 0x15c5b8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_15c5bc:
    // 0x15c5bc: 0x60f809  jalr        $v1
label_15c5c0:
    if (ctx->pc == 0x15C5C0u) {
        ctx->pc = 0x15C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5BCu;
        // 0x15c5c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5C4u;
        goto label_15c5c4;
    }
    ctx->pc = 0x15C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C5C4u);
        ctx->pc = 0x15C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5BCu;
        // 0x15c5c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C5BCu, 0x15C5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C5C4u;
label_15c5c4:
    // 0x15c5c4: 0xae770024  sw          $s7, 0x24($s3)
    ctx->pc = 0x15c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 23));
label_15c5c8:
    // 0x15c5c8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15c5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15c5cc:
    // 0x15c5cc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15c5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15c5d0:
    // 0x15c5d0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15c5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15c5d4:
    // 0x15c5d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15c5d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15c5d8:
    // 0x15c5d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15c5d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15c5dc:
    // 0x15c5dc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15c5dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c5e0:
    // 0x15c5e0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x15c5e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c5e4:
    // 0x15c5e4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x15c5e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c5e8:
    // 0x15c5e8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x15c5e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c5ec:
    // 0x15c5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c5f0:
    // 0x15c5f0: 0x3e00008  jr          $ra
label_15c5f4:
    if (ctx->pc == 0x15C5F4u) {
        ctx->pc = 0x15C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F0u;
        // 0x15c5f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5F8u;
        goto label_fallthrough_0x15c5f0;
    }
    ctx->pc = 0x15C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F0u;
        // 0x15c5f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c5f0:
    ctx->pc = 0x15C5F8u;
}
