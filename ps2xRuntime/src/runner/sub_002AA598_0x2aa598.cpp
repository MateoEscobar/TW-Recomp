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

// Function: sub_002AA598
// Address: 0x2aa598 - 0x2aa738
void sub_002AA598_0x2aa598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA598_0x2aa598");
#endif

    switch (ctx->pc) {
        case 0x2aa5d4u: goto label_2aa5d4;
        case 0x2aa5e0u: goto label_2aa5e0;
        case 0x2aa5f8u: goto label_2aa5f8;
        case 0x2aa634u: goto label_2aa634;
        case 0x2aa648u: goto label_2aa648;
        case 0x2aa654u: goto label_2aa654;
        case 0x2aa678u: goto label_2aa678;
        case 0x2aa690u: goto label_2aa690;
        case 0x2aa6c0u: goto label_2aa6c0;
        case 0x2aa6d4u: goto label_2aa6d4;
        case 0x2aa718u: goto label_2aa718;
        default: break;
    }

    ctx->pc = 0x2aa598u;

    // 0x2aa598: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aa59c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aa59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2aa5a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2aa5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2aa5a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2aa5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2aa5ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2aa5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aa5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aa5b4: 0x241400fa  addiu       $s4, $zero, 0xFA
    ctx->pc = 0x2aa5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2aa5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa5bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2aa5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2aa5c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2aa5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa5c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2aa5c8: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2aa5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aa5cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AA5CCu;
    SET_GPR_U32(ctx, 31, 0x2AA5D4u);
    ctx->pc = 0x2AA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5CCu;
    // 0x2aa5d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AA5CCu, 0x2AA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5D4u;
label_2aa5d4:
    // 0x2aa5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5d8: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2AA5D8u;
    SET_GPR_U32(ctx, 31, 0x2AA5E0u);
    ctx->pc = 0x2AA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5D8u;
    // 0x2aa5dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AA5D8u, 0x2AA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5E0u;
label_2aa5e0:
    // 0x2aa5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5e4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AA5E4u;
    {
        const bool branch_taken_0x2aa5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5E4u;
        // 0x2aa5e8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5e4) {
            ctx->pc = 0x2AA698u;
            goto label_2aa698;
        }
    }
    ctx->pc = 0x2AA5ECu;
    // 0x2aa5ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa5f0: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2AA5F0u;
    SET_GPR_U32(ctx, 31, 0x2AA5F8u);
    ctx->pc = 0x2AA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5F0u;
    // 0x2aa5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2AA5F0u, 0x2AA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5F8u;
label_2aa5f8:
    // 0x2aa5f8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AA5F8u;
    {
        const bool branch_taken_0x2aa5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5F8u;
        // 0x2aa5fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5f8) {
            ctx->pc = 0x2AA698u;
            goto label_2aa698;
        }
    }
    ctx->pc = 0x2AA600u;
    // 0x2aa600: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x2aa600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2aa604: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA604u;
    {
        const bool branch_taken_0x2aa604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA604u;
        // 0x2aa608: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa604) {
            ctx->pc = 0x2AA634u;
            goto label_2aa634;
        }
    }
    ctx->pc = 0x2AA60Cu;
    // 0x2aa60c: 0x9625001c  lhu         $a1, 0x1C($s1)
    ctx->pc = 0x2aa60cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2aa610: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2aa610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2aa614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aa614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa61c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aa624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa628: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aa628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa62c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AA62Cu;
    SET_GPR_U32(ctx, 31, 0x2AA634u);
    ctx->pc = 0x2AA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA62Cu;
    // 0x2aa630: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AA62Cu, 0x2AA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA634u;
label_2aa634:
    // 0x2aa634: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aa634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2aa638: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x2aa638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2aa63c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2aa63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2aa640: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA640u;
    SET_GPR_U32(ctx, 31, 0x2AA648u);
    ctx->pc = 0x2AA644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA640u;
    // 0x2aa644: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA640u, 0x2AA648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA648u;
label_2aa648:
    // 0x2aa648: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2aa648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa64c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2AA64Cu;
    SET_GPR_U32(ctx, 31, 0x2AA654u);
    ctx->pc = 0x2AA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA64Cu;
    // 0x2aa650: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AA64Cu, 0x2AA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA654u;
label_2aa654:
    // 0x2aa654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aa654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa658: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AA658u;
    {
        const bool branch_taken_0x2aa658 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA658u;
        // 0x2aa65c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa658) {
            ctx->pc = 0x2AA6D8u;
            goto label_2aa6d8;
        }
    }
    ctx->pc = 0x2AA660u;
    // 0x2aa660: 0x86100092  lh          $s0, 0x92($s0)
    ctx->pc = 0x2aa660u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2aa664: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2aa664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2aa668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aa668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa66c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2aa670: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2AA670u;
    SET_GPR_U32(ctx, 31, 0x2AA678u);
    ctx->pc = 0x2AA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA670u;
    // 0x2aa674: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AA670u, 0x2AA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA678u;
label_2aa678:
    // 0x2aa678: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa67c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aa67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aa680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa684: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aa684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aa688: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2AA688u;
    SET_GPR_U32(ctx, 31, 0x2AA690u);
    ctx->pc = 0x2AA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA688u;
    // 0x2aa68c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2AA688u, 0x2AA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA690u;
label_2aa690:
    // 0x2aa690: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA690u;
    {
        const bool branch_taken_0x2aa690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA690u;
        // 0x2aa694: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa690) {
            ctx->pc = 0x2AA6DCu;
            goto label_2aa6dc;
        }
    }
    ctx->pc = 0x2AA698u;
label_2aa698:
    // 0x2aa698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa69c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aa69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa6a0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2aa6a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aa6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aa6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2aa6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2aa6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa6b8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AA6B8u;
    SET_GPR_U32(ctx, 31, 0x2AA6C0u);
    ctx->pc = 0x2AA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6B8u;
    // 0x2aa6bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AA6B8u, 0x2AA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6C0u;
label_2aa6c0:
    // 0x2aa6c0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2aa6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2aa6c4: 0x143042  srl         $a2, $s4, 1
    ctx->pc = 0x2aa6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x2aa6c8: 0x142882  srl         $a1, $s4, 2
    ctx->pc = 0x2aa6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x2aa6cc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2AA6CCu;
    SET_GPR_U32(ctx, 31, 0x2AA6D4u);
    ctx->pc = 0x2AA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6CCu;
    // 0x2aa6d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2AA6CCu, 0x2AA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6D4u;
label_2aa6d4:
    // 0x2aa6d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aa6d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa6d8:
    // 0x2aa6d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2aa6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2aa6dc:
    // 0x2aa6dc: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x2aa6e0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2aa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aa6e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2aa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2aa6e8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2aa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2aa6ec: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2aa6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x2aa6f0: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x2aa6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x2aa6f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2aa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aa6f8: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2aa6f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2aa6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa700: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2aa700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2aa704: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2aa704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aa708: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2aa708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2aa70c: 0xa223001e  sb          $v1, 0x1E($s1)
    ctx->pc = 0x2aa70cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa710: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2AA710u;
    SET_GPR_U32(ctx, 31, 0x2AA718u);
    ctx->pc = 0x2AA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA710u;
    // 0x2aa714: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AA710u, 0x2AA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA718u;
label_2aa718:
    // 0x2aa718: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2aa718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa71c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2aa71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa720: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2aa720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa728: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2aa728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa72c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa730: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA730u;
        // 0x2aa734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA738u;
}
