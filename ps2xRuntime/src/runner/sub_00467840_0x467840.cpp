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

// Function: sub_00467840
// Address: 0x467840 - 0x4679d0
void sub_00467840_0x467840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467840_0x467840");
#endif

    switch (ctx->pc) {
        case 0x467840u: goto label_467840;
        case 0x467844u: goto label_467844;
        case 0x467848u: goto label_467848;
        case 0x46784cu: goto label_46784c;
        case 0x467850u: goto label_467850;
        case 0x467854u: goto label_467854;
        case 0x467858u: goto label_467858;
        case 0x46785cu: goto label_46785c;
        case 0x467860u: goto label_467860;
        case 0x467864u: goto label_467864;
        case 0x467868u: goto label_467868;
        case 0x46786cu: goto label_46786c;
        case 0x467870u: goto label_467870;
        case 0x467874u: goto label_467874;
        case 0x467878u: goto label_467878;
        case 0x46787cu: goto label_46787c;
        case 0x467880u: goto label_467880;
        case 0x467884u: goto label_467884;
        case 0x467888u: goto label_467888;
        case 0x46788cu: goto label_46788c;
        case 0x467890u: goto label_467890;
        case 0x467894u: goto label_467894;
        case 0x467898u: goto label_467898;
        case 0x46789cu: goto label_46789c;
        case 0x4678a0u: goto label_4678a0;
        case 0x4678a4u: goto label_4678a4;
        case 0x4678a8u: goto label_4678a8;
        case 0x4678acu: goto label_4678ac;
        case 0x4678b0u: goto label_4678b0;
        case 0x4678b4u: goto label_4678b4;
        case 0x4678b8u: goto label_4678b8;
        case 0x4678bcu: goto label_4678bc;
        case 0x4678c0u: goto label_4678c0;
        case 0x4678c4u: goto label_4678c4;
        case 0x4678c8u: goto label_4678c8;
        case 0x4678ccu: goto label_4678cc;
        case 0x4678d0u: goto label_4678d0;
        case 0x4678d4u: goto label_4678d4;
        case 0x4678d8u: goto label_4678d8;
        case 0x4678dcu: goto label_4678dc;
        case 0x4678e0u: goto label_4678e0;
        case 0x4678e4u: goto label_4678e4;
        case 0x4678e8u: goto label_4678e8;
        case 0x4678ecu: goto label_4678ec;
        case 0x4678f0u: goto label_4678f0;
        case 0x4678f4u: goto label_4678f4;
        case 0x4678f8u: goto label_4678f8;
        case 0x4678fcu: goto label_4678fc;
        case 0x467900u: goto label_467900;
        case 0x467904u: goto label_467904;
        case 0x467908u: goto label_467908;
        case 0x46790cu: goto label_46790c;
        case 0x467910u: goto label_467910;
        case 0x467914u: goto label_467914;
        case 0x467918u: goto label_467918;
        case 0x46791cu: goto label_46791c;
        case 0x467920u: goto label_467920;
        case 0x467924u: goto label_467924;
        case 0x467928u: goto label_467928;
        case 0x46792cu: goto label_46792c;
        case 0x467930u: goto label_467930;
        case 0x467934u: goto label_467934;
        case 0x467938u: goto label_467938;
        case 0x46793cu: goto label_46793c;
        case 0x467940u: goto label_467940;
        case 0x467944u: goto label_467944;
        case 0x467948u: goto label_467948;
        case 0x46794cu: goto label_46794c;
        case 0x467950u: goto label_467950;
        case 0x467954u: goto label_467954;
        case 0x467958u: goto label_467958;
        case 0x46795cu: goto label_46795c;
        case 0x467960u: goto label_467960;
        case 0x467964u: goto label_467964;
        case 0x467968u: goto label_467968;
        case 0x46796cu: goto label_46796c;
        case 0x467970u: goto label_467970;
        case 0x467974u: goto label_467974;
        case 0x467978u: goto label_467978;
        case 0x46797cu: goto label_46797c;
        case 0x467980u: goto label_467980;
        case 0x467984u: goto label_467984;
        case 0x467988u: goto label_467988;
        case 0x46798cu: goto label_46798c;
        case 0x467990u: goto label_467990;
        case 0x467994u: goto label_467994;
        case 0x467998u: goto label_467998;
        case 0x46799cu: goto label_46799c;
        case 0x4679a0u: goto label_4679a0;
        case 0x4679a4u: goto label_4679a4;
        case 0x4679a8u: goto label_4679a8;
        case 0x4679acu: goto label_4679ac;
        case 0x4679b0u: goto label_4679b0;
        case 0x4679b4u: goto label_4679b4;
        case 0x4679b8u: goto label_4679b8;
        case 0x4679bcu: goto label_4679bc;
        case 0x4679c0u: goto label_4679c0;
        case 0x4679c4u: goto label_4679c4;
        case 0x4679c8u: goto label_4679c8;
        case 0x4679ccu: goto label_4679cc;
        default: break;
    }

    ctx->pc = 0x467840u;

label_467840:
    // 0x467840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x467840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_467844:
    // 0x467844: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x467844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_467848:
    // 0x467848: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x467848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_46784c:
    // 0x46784c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_467850:
    // 0x467850: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x467850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_467854:
    // 0x467854: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x467854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_467858:
    // 0x467858: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x467858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46785c:
    // 0x46785c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x46785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_467860:
    // 0x467860: 0x2691002c  addiu       $s1, $s4, 0x2C
    ctx->pc = 0x467860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_467864:
    // 0x467864: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x467864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_467868:
    // 0x467868: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x467868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_46786c:
    // 0x46786c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x46786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_467870:
    // 0x467870: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x467870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_467874:
    // 0x467874: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x467874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_467878:
    // 0x467878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x467878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46787c:
    // 0x46787c: 0xc11ef80  jal         func_47BE00
label_467880:
    if (ctx->pc == 0x467880u) {
        ctx->pc = 0x467880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46787Cu;
        // 0x467880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467884u;
        goto label_467884;
    }
    ctx->pc = 0x46787Cu;
    SET_GPR_U32(ctx, 31, 0x467884u);
    ctx->pc = 0x467880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46787Cu;
    // 0x467880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46787Cu, 0x467884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467884u;
label_467884:
    // 0x467884: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_467888:
    if (ctx->pc == 0x467888u) {
        ctx->pc = 0x467888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467884u;
        // 0x467888: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46788Cu;
        goto label_46788c;
    }
    ctx->pc = 0x467884u;
    {
        const bool branch_taken_0x467884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467884u;
        // 0x467888: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467884) {
            ctx->pc = 0x467988u;
            goto label_467988;
        }
    }
    ctx->pc = 0x46788Cu;
label_46788c:
    // 0x46788c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x46788cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_467890:
    // 0x467890: 0xc11ef80  jal         func_47BE00
label_467894:
    if (ctx->pc == 0x467894u) {
        ctx->pc = 0x467894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467890u;
        // 0x467894: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467898u;
        goto label_467898;
    }
    ctx->pc = 0x467890u;
    SET_GPR_U32(ctx, 31, 0x467898u);
    ctx->pc = 0x467894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467890u;
    // 0x467894: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x467890u, 0x467898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467898u;
label_467898:
    // 0x467898: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_46789c:
    if (ctx->pc == 0x46789Cu) {
        ctx->pc = 0x46789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467898u;
        // 0x46789c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678A0u;
        goto label_4678a0;
    }
    ctx->pc = 0x467898u;
    {
        const bool branch_taken_0x467898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467898u;
        // 0x46789c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467898) {
            ctx->pc = 0x467988u;
            goto label_467988;
        }
    }
    ctx->pc = 0x4678A0u;
label_4678a0:
    // 0x4678a0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x4678a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_4678a4:
    // 0x4678a4: 0xc11ef80  jal         func_47BE00
label_4678a8:
    if (ctx->pc == 0x4678A8u) {
        ctx->pc = 0x4678A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678A4u;
        // 0x4678a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678ACu;
        goto label_4678ac;
    }
    ctx->pc = 0x4678A4u;
    SET_GPR_U32(ctx, 31, 0x4678ACu);
    ctx->pc = 0x4678A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4678A4u;
    // 0x4678a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4678A4u, 0x4678ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4678ACu;
label_4678ac:
    // 0x4678ac: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_4678b0:
    if (ctx->pc == 0x4678B0u) {
        ctx->pc = 0x4678B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678ACu;
        // 0x4678b0: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678B4u;
        goto label_4678b4;
    }
    ctx->pc = 0x4678ACu;
    {
        const bool branch_taken_0x4678ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4678B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678ACu;
        // 0x4678b0: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4678ac) {
            ctx->pc = 0x467988u;
            goto label_467988;
        }
    }
    ctx->pc = 0x4678B4u;
label_4678b4:
    // 0x4678b4: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
label_4678b8:
    if (ctx->pc == 0x4678B8u) {
        ctx->pc = 0x4678B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678B4u;
        // 0x4678b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678BCu;
        goto label_4678bc;
    }
    ctx->pc = 0x4678B4u;
    {
        const bool branch_taken_0x4678b4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4678B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678B4u;
        // 0x4678b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4678b4) {
            ctx->pc = 0x467990u;
            goto label_467990;
        }
    }
    ctx->pc = 0x4678BCu;
label_4678bc:
    // 0x4678bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4678bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4678c0:
    // 0x4678c0: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x4678c0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4678c4:
    // 0x4678c4: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x4678c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_4678c8:
    // 0x4678c8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4678c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_4678cc:
    // 0x4678cc: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4678ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4678d0:
    // 0x4678d0: 0xc119e74  jal         func_4679D0
label_4678d4:
    if (ctx->pc == 0x4678D4u) {
        ctx->pc = 0x4678D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678D0u;
        // 0x4678d4: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678D8u;
        goto label_4678d8;
    }
    ctx->pc = 0x4678D0u;
    SET_GPR_U32(ctx, 31, 0x4678D8u);
    ctx->pc = 0x4678D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4678D0u;
    // 0x4678d4: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4679D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679D0u, 0x4678D0u, 0x4678D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4678D8u;
label_4678d8:
    // 0x4678d8: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x4678d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_4678dc:
    // 0x4678dc: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x4678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_4678e0:
    // 0x4678e0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x4678e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4678e4:
    // 0x4678e4: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4678e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_4678e8:
    // 0x4678e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4678e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4678ec:
    // 0x4678ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4678ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4678f0:
    // 0x4678f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4678f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4678f4:
    // 0x4678f4: 0x40f809  jalr        $v0
label_4678f8:
    if (ctx->pc == 0x4678F8u) {
        ctx->pc = 0x4678F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678F4u;
        // 0x4678f8: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4678FCu;
        goto label_4678fc;
    }
    ctx->pc = 0x4678F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4678FCu);
        ctx->pc = 0x4678F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4678F4u;
        // 0x4678f8: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4678F4u, 0x4678FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4678FCu;
label_4678fc:
    // 0x4678fc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4678fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_467900:
    // 0x467900: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_467904:
    if (ctx->pc == 0x467904u) {
        ctx->pc = 0x467904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467900u;
        // 0x467904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467908u;
        goto label_467908;
    }
    ctx->pc = 0x467900u;
    {
        const bool branch_taken_0x467900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467900u;
        // 0x467904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467900) {
            ctx->pc = 0x467940u;
            goto label_467940;
        }
    }
    ctx->pc = 0x467908u;
label_467908:
    // 0x467908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x467908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46790c:
    // 0x46790c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x46790cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_467910:
    // 0x467910: 0xc10c1fa  jal         func_4307E8
label_467914:
    if (ctx->pc == 0x467914u) {
        ctx->pc = 0x467914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467910u;
        // 0x467914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467918u;
        goto label_467918;
    }
    ctx->pc = 0x467910u;
    SET_GPR_U32(ctx, 31, 0x467918u);
    ctx->pc = 0x467914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467910u;
    // 0x467914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x467910u, 0x467918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467918u;
label_467918:
    // 0x467918: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x467918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_46791c:
    // 0x46791c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_467920:
    // 0x467920: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x467920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_467924:
    // 0x467924: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x467924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_467928:
    // 0x467928: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x467928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46792c:
    // 0x46792c: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x46792cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_467930:
    // 0x467930: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x467930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_467934:
    // 0x467934: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x467934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_467938:
    // 0x467938: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x467938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_46793c:
    // 0x46793c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x46793cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_467940:
    // 0x467940: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_467944:
    if (ctx->pc == 0x467944u) {
        ctx->pc = 0x467944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467940u;
        // 0x467944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467948u;
        goto label_467948;
    }
    ctx->pc = 0x467940u;
    {
        const bool branch_taken_0x467940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x467944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467940u;
        // 0x467944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467940) {
            ctx->pc = 0x467988u;
            goto label_467988;
        }
    }
    ctx->pc = 0x467948u;
label_467948:
    // 0x467948: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x467948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46794c:
    // 0x46794c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x46794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_467950:
    // 0x467950: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x467950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_467954:
    // 0x467954: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x467954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_467958:
    // 0x467958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46795c:
    // 0x46795c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x46795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_467960:
    // 0x467960: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x467960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_467964:
    // 0x467964: 0xc11fb56  jal         func_47ED58
label_467968:
    if (ctx->pc == 0x467968u) {
        ctx->pc = 0x467968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467964u;
        // 0x467968: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46796Cu;
        goto label_46796c;
    }
    ctx->pc = 0x467964u;
    SET_GPR_U32(ctx, 31, 0x46796Cu);
    ctx->pc = 0x467968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467964u;
    // 0x467968: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x467964u, 0x46796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46796Cu;
label_46796c:
    // 0x46796c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_467970:
    if (ctx->pc == 0x467970u) {
        ctx->pc = 0x467970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46796Cu;
        // 0x467970: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467974u;
        goto label_467974;
    }
    ctx->pc = 0x46796Cu;
    {
        const bool branch_taken_0x46796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46796c) {
            ctx->pc = 0x467970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46796Cu;
            // 0x467970: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x467994u;
            goto label_467994;
        }
    }
    ctx->pc = 0x467974u;
label_467974:
    // 0x467974: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x467974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_467978:
    // 0x467978: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x467978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46797c:
    // 0x46797c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_467980:
    // 0x467980: 0x40f809  jalr        $v0
label_467984:
    if (ctx->pc == 0x467984u) {
        ctx->pc = 0x467984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467980u;
        // 0x467984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467988u;
        goto label_467988;
    }
    ctx->pc = 0x467980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x467988u);
        ctx->pc = 0x467984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467980u;
        // 0x467984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467980u, 0x467988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x467988u;
label_467988:
    // 0x467988: 0x10000002  b           . + 4 + (0x2 << 2)
label_46798c:
    if (ctx->pc == 0x46798Cu) {
        ctx->pc = 0x46798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467988u;
        // 0x46798c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x467990u;
        goto label_467990;
    }
    ctx->pc = 0x467988u;
    {
        const bool branch_taken_0x467988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467988u;
        // 0x46798c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467988) {
            ctx->pc = 0x467994u;
            goto label_467994;
        }
    }
    ctx->pc = 0x467990u;
label_467990:
    // 0x467990: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x467990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_467994:
    // 0x467994: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x467994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_467998:
    // 0x467998: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x467998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46799c:
    // 0x46799c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x46799cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4679a0:
    // 0x4679a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4679a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4679a4:
    // 0x4679a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4679a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4679a8:
    // 0x4679a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4679a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4679ac:
    // 0x4679ac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4679acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4679b0:
    // 0x4679b0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4679b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4679b4:
    // 0x4679b4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4679b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4679b8:
    // 0x4679b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4679b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4679bc:
    // 0x4679bc: 0x3e00008  jr          $ra
label_4679c0:
    if (ctx->pc == 0x4679C0u) {
        ctx->pc = 0x4679C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4679BCu;
        // 0x4679c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4679C4u;
        goto label_4679c4;
    }
    ctx->pc = 0x4679BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4679C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4679BCu;
        // 0x4679c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4679BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4679C4u;
label_4679c4:
    // 0x4679c4: 0x0  nop
    ctx->pc = 0x4679c4u;
    // NOP
label_4679c8:
    // 0x4679c8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x4679c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4679cc:
    // 0x4679cc: 0x0  nop
    ctx->pc = 0x4679ccu;
    // NOP
    ctx->pc = 0x4679d0u;
}
