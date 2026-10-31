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

// Function: sub_003E8678
// Address: 0x3e8678 - 0x3e8780
void sub_003E8678_0x3e8678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8678_0x3e8678");
#endif

    switch (ctx->pc) {
        case 0x3e8678u: goto label_3e8678;
        case 0x3e867cu: goto label_3e867c;
        case 0x3e8680u: goto label_3e8680;
        case 0x3e8684u: goto label_3e8684;
        case 0x3e8688u: goto label_3e8688;
        case 0x3e868cu: goto label_3e868c;
        case 0x3e8690u: goto label_3e8690;
        case 0x3e8694u: goto label_3e8694;
        case 0x3e8698u: goto label_3e8698;
        case 0x3e869cu: goto label_3e869c;
        case 0x3e86a0u: goto label_3e86a0;
        case 0x3e86a4u: goto label_3e86a4;
        case 0x3e86a8u: goto label_3e86a8;
        case 0x3e86acu: goto label_3e86ac;
        case 0x3e86b0u: goto label_3e86b0;
        case 0x3e86b4u: goto label_3e86b4;
        case 0x3e86b8u: goto label_3e86b8;
        case 0x3e86bcu: goto label_3e86bc;
        case 0x3e86c0u: goto label_3e86c0;
        case 0x3e86c4u: goto label_3e86c4;
        case 0x3e86c8u: goto label_3e86c8;
        case 0x3e86ccu: goto label_3e86cc;
        case 0x3e86d0u: goto label_3e86d0;
        case 0x3e86d4u: goto label_3e86d4;
        case 0x3e86d8u: goto label_3e86d8;
        case 0x3e86dcu: goto label_3e86dc;
        case 0x3e86e0u: goto label_3e86e0;
        case 0x3e86e4u: goto label_3e86e4;
        case 0x3e86e8u: goto label_3e86e8;
        case 0x3e86ecu: goto label_3e86ec;
        case 0x3e86f0u: goto label_3e86f0;
        case 0x3e86f4u: goto label_3e86f4;
        case 0x3e86f8u: goto label_3e86f8;
        case 0x3e86fcu: goto label_3e86fc;
        case 0x3e8700u: goto label_3e8700;
        case 0x3e8704u: goto label_3e8704;
        case 0x3e8708u: goto label_3e8708;
        case 0x3e870cu: goto label_3e870c;
        case 0x3e8710u: goto label_3e8710;
        case 0x3e8714u: goto label_3e8714;
        case 0x3e8718u: goto label_3e8718;
        case 0x3e871cu: goto label_3e871c;
        case 0x3e8720u: goto label_3e8720;
        case 0x3e8724u: goto label_3e8724;
        case 0x3e8728u: goto label_3e8728;
        case 0x3e872cu: goto label_3e872c;
        case 0x3e8730u: goto label_3e8730;
        case 0x3e8734u: goto label_3e8734;
        case 0x3e8738u: goto label_3e8738;
        case 0x3e873cu: goto label_3e873c;
        case 0x3e8740u: goto label_3e8740;
        case 0x3e8744u: goto label_3e8744;
        case 0x3e8748u: goto label_3e8748;
        case 0x3e874cu: goto label_3e874c;
        case 0x3e8750u: goto label_3e8750;
        case 0x3e8754u: goto label_3e8754;
        case 0x3e8758u: goto label_3e8758;
        case 0x3e875cu: goto label_3e875c;
        case 0x3e8760u: goto label_3e8760;
        case 0x3e8764u: goto label_3e8764;
        case 0x3e8768u: goto label_3e8768;
        case 0x3e876cu: goto label_3e876c;
        case 0x3e8770u: goto label_3e8770;
        case 0x3e8774u: goto label_3e8774;
        case 0x3e8778u: goto label_3e8778;
        case 0x3e877cu: goto label_3e877c;
        default: break;
    }

    ctx->pc = 0x3e8678u;

label_3e8678:
    // 0x3e8678: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3e8678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3e867c:
    // 0x3e867c: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3e867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3e8680:
    // 0x3e8680: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3e8680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3e8684:
    // 0x3e8684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8688:
    // 0x3e8688: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3e8688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3e868c:
    // 0x3e868c: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3e868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3e8690:
    // 0x3e8690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8694:
    // 0x3e8694: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3e8694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3e8698:
    // 0x3e8698: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e8698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e869c:
    // 0x3e869c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e86a0:
    // 0x3e86a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e86a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e86a4:
    // 0x3e86a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e86a8:
    // 0x3e86a8: 0x40f809  jalr        $v0
label_3e86ac:
    if (ctx->pc == 0x3E86ACu) {
        ctx->pc = 0x3E86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86A8u;
        // 0x3e86ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86B0u;
        goto label_3e86b0;
    }
    ctx->pc = 0x3E86A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E86B0u);
        ctx->pc = 0x3E86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86A8u;
        // 0x3e86ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E86A8u, 0x3E86B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E86B0u;
label_3e86b0:
    // 0x3e86b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e86b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e86b4:
    // 0x3e86b4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3e86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3e86b8:
    // 0x3e86b8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3e86bc:
    if (ctx->pc == 0x3E86BCu) {
        ctx->pc = 0x3E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86B8u;
        // 0x3e86bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86C0u;
        goto label_3e86c0;
    }
    ctx->pc = 0x3E86B8u;
    {
        const bool branch_taken_0x3e86b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86B8u;
        // 0x3e86bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86b8) {
            ctx->pc = 0x3E86D0u;
            goto label_3e86d0;
        }
    }
    ctx->pc = 0x3E86C0u;
label_3e86c0:
    // 0x3e86c0: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
label_3e86c4:
    if (ctx->pc == 0x3E86C4u) {
        ctx->pc = 0x3E86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86C0u;
        // 0x3e86c4: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86C8u;
        goto label_3e86c8;
    }
    ctx->pc = 0x3E86C0u;
    {
        const bool branch_taken_0x3e86c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86C0u;
        // 0x3e86c4: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86c0) {
            ctx->pc = 0x3E8728u;
            goto label_3e8728;
        }
    }
    ctx->pc = 0x3E86C8u;
label_3e86c8:
    // 0x3e86c8: 0x10000028  b           . + 4 + (0x28 << 2)
label_3e86cc:
    if (ctx->pc == 0x3E86CCu) {
        ctx->pc = 0x3E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86C8u;
        // 0x3e86cc: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86D0u;
        goto label_3e86d0;
    }
    ctx->pc = 0x3E86C8u;
    {
        const bool branch_taken_0x3e86c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86C8u;
        // 0x3e86cc: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86c8) {
            ctx->pc = 0x3E876Cu;
            goto label_3e876c;
        }
    }
    ctx->pc = 0x3E86D0u;
label_3e86d0:
    // 0x3e86d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e86d4:
    // 0x3e86d4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_3e86d8:
    if (ctx->pc == 0x3E86D8u) {
        ctx->pc = 0x3E86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86D4u;
        // 0x3e86d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86DCu;
        goto label_3e86dc;
    }
    ctx->pc = 0x3E86D4u;
    {
        const bool branch_taken_0x3e86d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e86d4) {
            ctx->pc = 0x3E86D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E86D4u;
            // 0x3e86d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E870Cu;
            goto label_3e870c;
        }
    }
    ctx->pc = 0x3E86DCu;
label_3e86dc:
    // 0x3e86dc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e86dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e86e0:
    // 0x3e86e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e86e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e86e4:
    // 0x3e86e4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e86e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e86e8:
    // 0x3e86e8: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e86ec:
    // 0x3e86ec: 0x261058c8  addiu       $s0, $s0, 0x58C8
    ctx->pc = 0x3e86ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22728));
label_3e86f0:
    // 0x3e86f0: 0xc0e9f6a  jal         func_3A7DA8
label_3e86f4:
    if (ctx->pc == 0x3E86F4u) {
        ctx->pc = 0x3E86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86F0u;
        // 0x3e86f4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E86F8u;
        goto label_3e86f8;
    }
    ctx->pc = 0x3E86F0u;
    SET_GPR_U32(ctx, 31, 0x3E86F8u);
    ctx->pc = 0x3E86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86F0u;
    // 0x3e86f4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3E86F0u, 0x3E86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E86F8u;
label_3e86f8:
    // 0x3e86f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e86f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e86fc:
    // 0x3e86fc: 0xc0f15bc  jal         func_3C56F0
label_3e8700:
    if (ctx->pc == 0x3E8700u) {
        ctx->pc = 0x3E8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E86FCu;
        // 0x3e8700: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8704u;
        goto label_3e8704;
    }
    ctx->pc = 0x3E86FCu;
    SET_GPR_U32(ctx, 31, 0x3E8704u);
    ctx->pc = 0x3E8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86FCu;
    // 0x3e8700: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E86FCu, 0x3E8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8704u;
label_3e8704:
    // 0x3e8704: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e8704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e8708:
    // 0x3e8708: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e8708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e870c:
    // 0x3e870c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e8710:
    // 0x3e8710: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
label_3e8714:
    if (ctx->pc == 0x3E8714u) {
        ctx->pc = 0x3E8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8710u;
        // 0x3e8714: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8718u;
        goto label_3e8718;
    }
    ctx->pc = 0x3E8710u;
    {
        const bool branch_taken_0x3e8710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8710u;
        // 0x3e8714: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8710) {
            ctx->pc = 0x3E8768u;
            goto label_3e8768;
        }
    }
    ctx->pc = 0x3E8718u;
label_3e8718:
    // 0x3e8718: 0xc045d08  jal         func_117420
label_3e871c:
    if (ctx->pc == 0x3E871Cu) {
        ctx->pc = 0x3E871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8718u;
        // 0x3e871c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8720u;
        goto label_3e8720;
    }
    ctx->pc = 0x3E8718u;
    SET_GPR_U32(ctx, 31, 0x3E8720u);
    ctx->pc = 0x3E871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8718u;
    // 0x3e871c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117420u, 0x3E8718u, 0x3E8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8720u;
label_3e8720:
    // 0x3e8720: 0x10000011  b           . + 4 + (0x11 << 2)
label_3e8724:
    if (ctx->pc == 0x3E8724u) {
        ctx->pc = 0x3E8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8720u;
        // 0x3e8724: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8728u;
        goto label_3e8728;
    }
    ctx->pc = 0x3E8720u;
    {
        const bool branch_taken_0x3e8720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8720u;
        // 0x3e8724: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8720) {
            ctx->pc = 0x3E8768u;
            goto label_3e8768;
        }
    }
    ctx->pc = 0x3E8728u;
label_3e8728:
    // 0x3e8728: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3e8728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e872c:
    // 0x3e872c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3e8730:
    if (ctx->pc == 0x3E8730u) {
        ctx->pc = 0x3E8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E872Cu;
        // 0x3e8730: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8734u;
        goto label_3e8734;
    }
    ctx->pc = 0x3E872Cu;
    {
        const bool branch_taken_0x3e872c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E872Cu;
        // 0x3e8730: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e872c) {
            ctx->pc = 0x3E874Cu;
            goto label_3e874c;
        }
    }
    ctx->pc = 0x3E8734u;
label_3e8734:
    // 0x3e8734: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3e8738:
    // 0x3e8738: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3e8738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e873c:
    // 0x3e873c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3e873cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3e8740:
    // 0x3e8740: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3e8740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3e8744:
    // 0x3e8744: 0x60f809  jalr        $v1
label_3e8748:
    if (ctx->pc == 0x3E8748u) {
        ctx->pc = 0x3E8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8744u;
        // 0x3e8748: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E874Cu;
        goto label_3e874c;
    }
    ctx->pc = 0x3E8744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E874Cu);
        ctx->pc = 0x3E8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8744u;
        // 0x3e8748: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8744u, 0x3E874Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E874Cu;
label_3e874c:
    // 0x3e874c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8750:
    // 0x3e8750: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e8754:
    // 0x3e8754: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_3e8758:
    if (ctx->pc == 0x3E8758u) {
        ctx->pc = 0x3E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8754u;
        // 0x3e8758: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E875Cu;
        goto label_3e875c;
    }
    ctx->pc = 0x3E8754u;
    {
        const bool branch_taken_0x3e8754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8754u;
        // 0x3e8758: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8754) {
            ctx->pc = 0x3E8764u;
            goto label_3e8764;
        }
    }
    ctx->pc = 0x3E875Cu;
label_3e875c:
    // 0x3e875c: 0xc045d08  jal         func_117420
label_3e8760:
    if (ctx->pc == 0x3E8760u) {
        ctx->pc = 0x3E8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E875Cu;
        // 0x3e8760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8764u;
        goto label_3e8764;
    }
    ctx->pc = 0x3E875Cu;
    SET_GPR_U32(ctx, 31, 0x3E8764u);
    ctx->pc = 0x3E8760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E875Cu;
    // 0x3e8760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117420u, 0x3E875Cu, 0x3E8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8764u;
label_3e8764:
    // 0x3e8764: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3e8764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e8768:
    // 0x3e8768: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3e8768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e876c:
    // 0x3e876c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3e876cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e8770:
    // 0x3e8770: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3e8770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e8774:
    // 0x3e8774: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3e8774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e8778:
    // 0x3e8778: 0x3e00008  jr          $ra
label_3e877c:
    if (ctx->pc == 0x3E877Cu) {
        ctx->pc = 0x3E877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8778u;
        // 0x3e877c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8780u;
        goto label_fallthrough_0x3e8778;
    }
    ctx->pc = 0x3E8778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8778u;
        // 0x3e877c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e8778:
    ctx->pc = 0x3E8780u;
}
