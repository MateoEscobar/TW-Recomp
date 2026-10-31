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

// Function: sub_00307668
// Address: 0x307668 - 0x307788
void sub_00307668_0x307668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307668_0x307668");
#endif

    switch (ctx->pc) {
        case 0x3076a0u: goto label_3076a0;
        case 0x3076a8u: goto label_3076a8;
        case 0x3076b0u: goto label_3076b0;
        case 0x3076c4u: goto label_3076c4;
        case 0x3076d0u: goto label_3076d0;
        case 0x3076e4u: goto label_3076e4;
        case 0x307710u: goto label_307710;
        case 0x307748u: goto label_307748;
        case 0x307754u: goto label_307754;
        default: break;
    }

    ctx->pc = 0x307668u;

    // 0x307668: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30766c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x307670: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x307670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x307674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307678: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x307678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30767c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30767cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307680: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x307680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x307684: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x307684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x307688: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x307688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30768c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x307690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307694: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x307694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307698: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30769c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3076a0:
    // 0x3076a0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3076A0u;
    SET_GPR_U32(ctx, 31, 0x3076A8u);
    ctx->pc = 0x3076A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076A0u;
    // 0x3076a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3076A0u, 0x3076A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076A8u;
label_3076a8:
    // 0x3076a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3076A8u;
    SET_GPR_U32(ctx, 31, 0x3076B0u);
    ctx->pc = 0x3076ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076A8u;
    // 0x3076ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3076A8u, 0x3076B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076B0u;
label_3076b0:
    // 0x3076b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3076b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076b4: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3076B4u;
    {
        const bool branch_taken_0x3076b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076b4) {
            ctx->pc = 0x3076B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3076B4u;
            // 0x3076b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3076D8u;
            goto label_3076d8;
        }
    }
    ctx->pc = 0x3076BCu;
    // 0x3076bc: 0xc087502  jal         func_21D408
    ctx->pc = 0x3076BCu;
    SET_GPR_U32(ctx, 31, 0x3076C4u);
    ctx->pc = 0x3076C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076BCu;
    // 0x3076c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3076BCu, 0x3076C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076C4u;
label_3076c4:
    // 0x3076c4: 0x24510164  addiu       $s1, $v0, 0x164
    ctx->pc = 0x3076c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x3076c8: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x3076C8u;
    SET_GPR_U32(ctx, 31, 0x3076D0u);
    ctx->pc = 0x3076CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076C8u;
    // 0x3076cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x3076C8u, 0x3076D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076D0u;
label_3076d0:
    // 0x3076d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3076D0u;
    {
        const bool branch_taken_0x3076d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3076D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076D0u;
        // 0x3076d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076d0) {
            ctx->pc = 0x30772Cu;
            goto label_30772c;
        }
    }
    ctx->pc = 0x3076D8u;
label_3076d8:
    // 0x3076d8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x3076d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3076dc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3076DCu;
    {
        const bool branch_taken_0x3076dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3076dc) {
            ctx->pc = 0x3076E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3076DCu;
            // 0x3076e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3076A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3076a0;
        }
    }
    ctx->pc = 0x3076E4u;
label_3076e4:
    // 0x3076e4: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x3076E4u;
    {
        const bool branch_taken_0x3076e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3076E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076E4u;
        // 0x3076e8: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076e4) {
            ctx->pc = 0x30775Cu;
            goto label_30775c;
        }
    }
    ctx->pc = 0x3076ECu;
    // 0x3076ec: 0x8ea201a8  lw          $v0, 0x1A8($s5)
    ctx->pc = 0x3076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
    // 0x3076f0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3076f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3076f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3076F4u;
    {
        const bool branch_taken_0x3076f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3076F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076F4u;
        // 0x3076f8: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076f4) {
            ctx->pc = 0x307700u;
            goto label_307700;
        }
    }
    ctx->pc = 0x3076FCu;
    // 0x3076fc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_307700:
    // 0x307700: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x307700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307708: 0xc059856  jal         func_166158
    ctx->pc = 0x307708u;
    SET_GPR_U32(ctx, 31, 0x307710u);
    ctx->pc = 0x30770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307708u;
    // 0x30770c: 0xa6630030  sh          $v1, 0x30($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x307708u, 0x307710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307710u;
label_307710:
    // 0x307710: 0x96630030  lhu         $v1, 0x30($s3)
    ctx->pc = 0x307710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x307714: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x307714u;
    {
        const bool branch_taken_0x307714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307714) {
            ctx->pc = 0x307718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307714u;
            // 0x307718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30771Cu;
            goto label_30771c;
        }
    }
    ctx->pc = 0x30771Cu;
label_30771c:
    // 0x30771c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x30771cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x307720: 0x1812  mflo        $v1
    ctx->pc = 0x307720u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x307724: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x307724u;
    {
        const bool branch_taken_0x307724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307724u;
        // 0x307728: 0xa663002c  sh          $v1, 0x2C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307724) {
            ctx->pc = 0x307760u;
            goto label_307760;
        }
    }
    ctx->pc = 0x30772Cu;
label_30772c:
    // 0x30772c: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x30772cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x307730: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x307730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x307734: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x307734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x307738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30773c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x307740: 0xc13b782  jal         func_4EDE08
    ctx->pc = 0x307740u;
    SET_GPR_U32(ctx, 31, 0x307748u);
    ctx->pc = 0x307744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307740u;
    // 0x307744: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x307740u, 0x307748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307748u;
label_307748:
    // 0x307748: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x307748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30774c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30774Cu;
    SET_GPR_U32(ctx, 31, 0x307754u);
    ctx->pc = 0x307750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30774Cu;
    // 0x307750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30774Cu, 0x307754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307754u;
label_307754:
    // 0x307754: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x307754u;
    {
        const bool branch_taken_0x307754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307754u;
        // 0x307758: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307754) {
            ctx->pc = 0x3076E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3076e4;
        }
    }
    ctx->pc = 0x30775Cu;
label_30775c:
    // 0x30775c: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x30775cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
label_307760:
    // 0x307760: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x307760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307764: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x307764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307768: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x307768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30776c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30776cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307770: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x307770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307774: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x307774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30777c: 0x3e00008  jr          $ra
    ctx->pc = 0x30777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30777Cu;
        // 0x307780: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30777Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307784u;
    // 0x307784: 0x0  nop
    ctx->pc = 0x307784u;
    // NOP
    ctx->pc = 0x307788u;
}
