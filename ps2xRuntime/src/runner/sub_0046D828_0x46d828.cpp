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

// Function: sub_0046D828
// Address: 0x46d828 - 0x46d9d8
void sub_0046D828_0x46d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D828_0x46d828");
#endif

    switch (ctx->pc) {
        case 0x46d88cu: goto label_46d88c;
        case 0x46d894u: goto label_46d894;
        case 0x46d8b0u: goto label_46d8b0;
        case 0x46d8c4u: goto label_46d8c4;
        case 0x46d8e0u: goto label_46d8e0;
        case 0x46d938u: goto label_46d938;
        case 0x46d950u: goto label_46d950;
        case 0x46d97cu: goto label_46d97c;
        default: break;
    }

    ctx->pc = 0x46d828u;

    // 0x46d828: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x46d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x46d82c: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x46d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x46d830: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x46d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x46d834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46d834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d838: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x46d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x46d83c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x46d83cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d840: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x46d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x46d844: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x46d844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d848: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x46d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x46d84c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x46d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d850: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x46d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x46d854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46d854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d858: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x46d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x46d85c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x46d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x46d860: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x46d860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x46d864: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x46d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x46d868: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x46d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x46d86c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x46d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46d870: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x46d870u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x46d874: 0xafa70420  sw          $a3, 0x420($sp)
    ctx->pc = 0x46d874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 7));
    // 0x46d878: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x46d878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x46d87c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x46d880: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x46d880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x46d884: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46D884u;
    SET_GPR_U32(ctx, 31, 0x46D88Cu);
    ctx->pc = 0x46D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D884u;
    // 0x46d888: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46D884u, 0x46D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D88Cu;
label_46d88c:
    // 0x46d88c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x46D88Cu;
    {
        const bool branch_taken_0x46d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d88c) {
            ctx->pc = 0x46D890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D88Cu;
            // 0x46d890: 0x96150004  lhu         $s5, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D89Cu;
            goto label_46d89c;
        }
    }
    ctx->pc = 0x46D894u;
label_46d894:
    // 0x46d894: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x46D894u;
    {
        const bool branch_taken_0x46d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D894u;
        // 0x46d898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d894) {
            ctx->pc = 0x46D9A4u;
            goto label_46d9a4;
        }
    }
    ctx->pc = 0x46D89Cu;
label_46d89c:
    // 0x46d89c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x46d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x46d8a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x46d8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x46d8a4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x46d8a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x46d8a8: 0x12a2003d  beq         $s5, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x46D8A8u;
    {
        const bool branch_taken_0x46d8a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x46D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D8A8u;
        // 0x46d8ac: 0x26140010  addiu       $s4, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d8a8) {
            ctx->pc = 0x46D9A0u;
            goto label_46d9a0;
        }
    }
    ctx->pc = 0x46D8B0u;
label_46d8b0:
    // 0x46d8b0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x46d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x46d8b4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x46d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x46d8b8: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x46d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x46d8bc: 0xc11b5c2  jal         func_46D708
    ctx->pc = 0x46D8BCu;
    SET_GPR_U32(ctx, 31, 0x46D8C4u);
    ctx->pc = 0x46D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D8BCu;
    // 0x46d8c0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D708u, 0x46D8BCu, 0x46D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D8C4u;
label_46d8c4:
    // 0x46d8c4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x46D8C4u;
    {
        const bool branch_taken_0x46d8c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x46D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D8C4u;
        // 0x46d8c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d8c4) {
            ctx->pc = 0x46D8D0u;
            goto label_46d8d0;
        }
    }
    ctx->pc = 0x46D8CCu;
    // 0x46d8cc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x46d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_46d8d0:
    // 0x46d8d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x46d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d8d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46d8d8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46D8D8u;
    SET_GPR_U32(ctx, 31, 0x46D8E0u);
    ctx->pc = 0x46D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D8D8u;
    // 0x46d8dc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46D8D8u, 0x46D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D8E0u;
label_46d8e0:
    // 0x46d8e0: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x46D8E0u;
    {
        const bool branch_taken_0x46d8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D8E0u;
        // 0x46d8e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d8e0) {
            ctx->pc = 0x46D894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d894;
        }
    }
    ctx->pc = 0x46D8E8u;
    // 0x46d8e8: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x46d8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x46d8ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46D8ECu;
    {
        const bool branch_taken_0x46d8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D8ECu;
        // 0x46d8f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d8ec) {
            ctx->pc = 0x46D908u;
            goto label_46d908;
        }
    }
    ctx->pc = 0x46D8F4u;
    // 0x46d8f4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x46d8f8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x46d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x46d8fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x46d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x46d900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46D900u;
    {
        const bool branch_taken_0x46d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D900u;
        // 0x46d904: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d900) {
            ctx->pc = 0x46D920u;
            goto label_46d920;
        }
    }
    ctx->pc = 0x46D908u;
label_46d908:
    // 0x46d908: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x46D908u;
    {
        const bool branch_taken_0x46d908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D908u;
        // 0x46d90c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d908) {
            ctx->pc = 0x46D98Cu;
            goto label_46d98c;
        }
    }
    ctx->pc = 0x46D910u;
    // 0x46d910: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x46d914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x46d918: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x46D918u;
    {
        const bool branch_taken_0x46d918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d918) {
            ctx->pc = 0x46D98Cu;
            goto label_46d98c;
        }
    }
    ctx->pc = 0x46D920u;
label_46d920:
    // 0x46d920: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x46d920u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x46d924: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x46D924u;
    {
        const bool branch_taken_0x46d924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D924u;
        // 0x46d928: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d924) {
            ctx->pc = 0x46D98Cu;
            goto label_46d98c;
        }
    }
    ctx->pc = 0x46D92Cu;
    // 0x46d92c: 0x24170100  addiu       $s7, $zero, 0x100
    ctx->pc = 0x46d92cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x46d930: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x46d930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46d934: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x46d934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_46d938:
    // 0x46d938: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x46d938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d93c: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x46d93cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x46d940: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x46D940u;
    {
        const bool branch_taken_0x46d940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D940u;
        // 0x46d944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d940) {
            ctx->pc = 0x46D96Cu;
            goto label_46d96c;
        }
    }
    ctx->pc = 0x46D948u;
    // 0x46d948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46d948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d94c: 0x0  nop
    ctx->pc = 0x46d94cu;
    // NOP
label_46d950:
    // 0x46d950: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x46d950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x46d954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46d954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x46d958: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x46d958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x46d95c: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x46d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46d960: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x46d960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x46d964: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x46D964u;
    {
        const bool branch_taken_0x46d964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D964u;
        // 0x46d968: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d964) {
            ctx->pc = 0x46D950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d950;
        }
    }
    ctx->pc = 0x46D96Cu;
label_46d96c:
    // 0x46d96c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x46d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46d970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d974: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46D974u;
    SET_GPR_U32(ctx, 31, 0x46D97Cu);
    ctx->pc = 0x46D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D974u;
    // 0x46d978: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46D974u, 0x46D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D97Cu;
label_46d97c:
    // 0x46d97c: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x46D97Cu;
    {
        const bool branch_taken_0x46d97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D97Cu;
        // 0x46d980: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d97c) {
            ctx->pc = 0x46D894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d894;
        }
    }
    ctx->pc = 0x46D984u;
    // 0x46d984: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x46D984u;
    {
        const bool branch_taken_0x46d984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D984u;
        // 0x46d988: 0x2e220101  sltiu       $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d984) {
            ctx->pc = 0x46D938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d938;
        }
    }
    ctx->pc = 0x46D98Cu;
label_46d98c:
    // 0x46d98c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x46d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x46d990: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x46d990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x46d994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x46d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x46d998: 0x16a2ffc5  bne         $s5, $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x46D998u;
    {
        const bool branch_taken_0x46d998 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x46D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D998u;
        // 0x46d99c: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d998) {
            ctx->pc = 0x46D8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d8b0;
        }
    }
    ctx->pc = 0x46D9A0u;
label_46d9a0:
    // 0x46d9a0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46d9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46d9a4:
    // 0x46d9a4: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x46d9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x46d9a8: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x46d9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x46d9ac: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x46d9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x46d9b0: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x46d9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x46d9b4: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x46d9b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x46d9b8: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x46d9b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x46d9bc: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x46d9bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x46d9c0: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x46d9c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x46d9c4: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x46d9c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x46d9c8: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x46d9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x46d9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x46D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D9CCu;
        // 0x46d9d0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D9D4u;
    // 0x46d9d4: 0x0  nop
    ctx->pc = 0x46d9d4u;
    // NOP
    ctx->pc = 0x46d9d8u;
}
