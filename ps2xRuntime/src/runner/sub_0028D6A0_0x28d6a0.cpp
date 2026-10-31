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

// Function: sub_0028D6A0
// Address: 0x28d6a0 - 0x28d758
void sub_0028D6A0_0x28d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D6A0_0x28d6a0");
#endif

    switch (ctx->pc) {
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6a4u: goto label_28d6a4;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6b0u: goto label_28d6b0;
        case 0x28d6b4u: goto label_28d6b4;
        case 0x28d6b8u: goto label_28d6b8;
        case 0x28d6bcu: goto label_28d6bc;
        case 0x28d6c0u: goto label_28d6c0;
        case 0x28d6c4u: goto label_28d6c4;
        case 0x28d6c8u: goto label_28d6c8;
        case 0x28d6ccu: goto label_28d6cc;
        case 0x28d6d0u: goto label_28d6d0;
        case 0x28d6d4u: goto label_28d6d4;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6dcu: goto label_28d6dc;
        case 0x28d6e0u: goto label_28d6e0;
        case 0x28d6e4u: goto label_28d6e4;
        case 0x28d6e8u: goto label_28d6e8;
        case 0x28d6ecu: goto label_28d6ec;
        case 0x28d6f0u: goto label_28d6f0;
        case 0x28d6f4u: goto label_28d6f4;
        case 0x28d6f8u: goto label_28d6f8;
        case 0x28d6fcu: goto label_28d6fc;
        case 0x28d700u: goto label_28d700;
        case 0x28d704u: goto label_28d704;
        case 0x28d708u: goto label_28d708;
        case 0x28d70cu: goto label_28d70c;
        case 0x28d710u: goto label_28d710;
        case 0x28d714u: goto label_28d714;
        case 0x28d718u: goto label_28d718;
        case 0x28d71cu: goto label_28d71c;
        case 0x28d720u: goto label_28d720;
        case 0x28d724u: goto label_28d724;
        case 0x28d728u: goto label_28d728;
        case 0x28d72cu: goto label_28d72c;
        case 0x28d730u: goto label_28d730;
        case 0x28d734u: goto label_28d734;
        case 0x28d738u: goto label_28d738;
        case 0x28d73cu: goto label_28d73c;
        case 0x28d740u: goto label_28d740;
        case 0x28d744u: goto label_28d744;
        case 0x28d748u: goto label_28d748;
        case 0x28d74cu: goto label_28d74c;
        case 0x28d750u: goto label_28d750;
        case 0x28d754u: goto label_28d754;
        default: break;
    }

    ctx->pc = 0x28d6a0u;

label_28d6a0:
    // 0x28d6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28d6a4:
    // 0x28d6a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28d6a8:
    // 0x28d6a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28d6ac:
    // 0x28d6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d6b0:
    // 0x28d6b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28d6b4:
    // 0x28d6b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28d6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d6b8:
    // 0x28d6b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d6bc:
    // 0x28d6bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28d6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28d6c0:
    // 0x28d6c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28d6c4:
    // 0x28d6c4: 0x40f809  jalr        $v0
label_28d6c8:
    if (ctx->pc == 0x28D6C8u) {
        ctx->pc = 0x28D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6C4u;
        // 0x28d6c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6CCu;
        goto label_28d6cc;
    }
    ctx->pc = 0x28D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D6CCu);
        ctx->pc = 0x28D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6C4u;
        // 0x28d6c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D6C4u, 0x28D6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D6CCu;
label_28d6cc:
    // 0x28d6cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28d6d0:
    // 0x28d6d0: 0x26040164  addiu       $a0, $s0, 0x164
    ctx->pc = 0x28d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_28d6d4:
    // 0x28d6d4: 0xc137882  jal         func_4DE208
label_28d6d8:
    if (ctx->pc == 0x28D6D8u) {
        ctx->pc = 0x28D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6D4u;
        // 0x28d6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6DCu;
        goto label_28d6dc;
    }
    ctx->pc = 0x28D6D4u;
    SET_GPR_U32(ctx, 31, 0x28D6DCu);
    ctx->pc = 0x28D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6D4u;
    // 0x28d6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28D6D4u, 0x28D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6DCu;
label_28d6dc:
    // 0x28d6dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28d6e0:
    // 0x28d6e0: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_28d6e4:
    if (ctx->pc == 0x28D6E4u) {
        ctx->pc = 0x28D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6E0u;
        // 0x28d6e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6E8u;
        goto label_28d6e8;
    }
    ctx->pc = 0x28D6E0u;
    {
        const bool branch_taken_0x28d6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6E0u;
        // 0x28d6e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6e0) {
            ctx->pc = 0x28D740u;
            goto label_28d740;
        }
    }
    ctx->pc = 0x28D6E8u;
label_28d6e8:
    // 0x28d6e8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x28d6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_28d6ec:
    // 0x28d6ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28d6f0:
    if (ctx->pc == 0x28D6F0u) {
        ctx->pc = 0x28D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6ECu;
        // 0x28d6f0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6F4u;
        goto label_28d6f4;
    }
    ctx->pc = 0x28D6ECu;
    {
        const bool branch_taken_0x28d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6ECu;
        // 0x28d6f0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6ec) {
            ctx->pc = 0x28D708u;
            goto label_28d708;
        }
    }
    ctx->pc = 0x28D6F4u;
label_28d6f4:
    // 0x28d6f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d6f8:
    // 0x28d6f8: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x28d6f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_28d6fc:
    // 0x28d6fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28d6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d700:
    // 0x28d700: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28d700u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28d704:
    // 0x28d704: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x28d704u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_28d708:
    // 0x28d708: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_28d70c:
    if (ctx->pc == 0x28D70Cu) {
        ctx->pc = 0x28D710u;
        goto label_28d710;
    }
    ctx->pc = 0x28D708u;
    {
        const bool branch_taken_0x28d708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d708) {
            ctx->pc = 0x28D720u;
            goto label_28d720;
        }
    }
    ctx->pc = 0x28D710u;
label_28d710:
    // 0x28d710: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x28d710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_28d714:
    // 0x28d714: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28d714u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28d718:
    // 0x28d718: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_28d71c:
    if (ctx->pc == 0x28D71Cu) {
        ctx->pc = 0x28D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D718u;
        // 0x28d71c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D720u;
        goto label_28d720;
    }
    ctx->pc = 0x28D718u;
    {
        const bool branch_taken_0x28d718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D718u;
        // 0x28d71c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d718) {
            ctx->pc = 0x28D738u;
            goto label_28d738;
        }
    }
    ctx->pc = 0x28D720u;
label_28d720:
    // 0x28d720: 0xc087502  jal         func_21D408
label_28d724:
    if (ctx->pc == 0x28D724u) {
        ctx->pc = 0x28D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D720u;
        // 0x28d724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D728u;
        goto label_28d728;
    }
    ctx->pc = 0x28D720u;
    SET_GPR_U32(ctx, 31, 0x28D728u);
    ctx->pc = 0x28D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D720u;
    // 0x28d724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28D720u, 0x28D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D728u;
label_28d728:
    // 0x28d728: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28d728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28d72c:
    // 0x28d72c: 0xc0a3bcc  jal         func_28EF30
label_28d730:
    if (ctx->pc == 0x28D730u) {
        ctx->pc = 0x28D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D72Cu;
        // 0x28d730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D734u;
        goto label_28d734;
    }
    ctx->pc = 0x28D72Cu;
    SET_GPR_U32(ctx, 31, 0x28D734u);
    ctx->pc = 0x28D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D72Cu;
    // 0x28d730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF30u, 0x28D72Cu, 0x28D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D734u;
label_28d734:
    // 0x28d734: 0x26040164  addiu       $a0, $s0, 0x164
    ctx->pc = 0x28d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_28d738:
    // 0x28d738: 0xc13b6bc  jal         func_4EDAF0
label_28d73c:
    if (ctx->pc == 0x28D73Cu) {
        ctx->pc = 0x28D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D738u;
        // 0x28d73c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D740u;
        goto label_28d740;
    }
    ctx->pc = 0x28D738u;
    SET_GPR_U32(ctx, 31, 0x28D740u);
    ctx->pc = 0x28D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D738u;
    // 0x28d73c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDAF0u, 0x28D738u, 0x28D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D740u;
label_28d740:
    // 0x28d740: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d744:
    // 0x28d744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d748:
    // 0x28d748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28d74c:
    // 0x28d74c: 0x3e00008  jr          $ra
label_28d750:
    if (ctx->pc == 0x28D750u) {
        ctx->pc = 0x28D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D74Cu;
        // 0x28d750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D754u;
        goto label_28d754;
    }
    ctx->pc = 0x28D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D74Cu;
        // 0x28d750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D754u;
label_28d754:
    // 0x28d754: 0x0  nop
    ctx->pc = 0x28d754u;
    // NOP
    ctx->pc = 0x28d758u;
}
