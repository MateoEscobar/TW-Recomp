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

// Function: sub_00416718
// Address: 0x416718 - 0x416b18
void sub_00416718_0x416718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416718_0x416718");
#endif

    switch (ctx->pc) {
        case 0x416754u: goto label_416754;
        case 0x41676cu: goto label_41676c;
        case 0x416778u: goto label_416778;
        case 0x416788u: goto label_416788;
        case 0x4167c4u: goto label_4167c4;
        case 0x4167c8u: goto label_4167c8;
        case 0x416868u: goto label_416868;
        case 0x4169e0u: goto label_4169e0;
        case 0x4169e4u: goto label_4169e4;
        default: break;
    }

    ctx->pc = 0x416718u;

    // 0x416718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x416718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x41671c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x416720: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x416720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x416724: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x416724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x416728: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x416728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41672c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x416730: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x416730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x416734: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x416734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x416738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41673c: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x41673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x416740: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x416740u;
    {
        const bool branch_taken_0x416740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416740u;
        // 0x416744: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416740) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x416748u;
    // 0x416748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x416748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41674c: 0xc087502  jal         func_21D408
    ctx->pc = 0x41674Cu;
    SET_GPR_U32(ctx, 31, 0x416754u);
    ctx->pc = 0x416750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41674Cu;
    // 0x416750: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41674Cu, 0x416754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416754u;
label_416754:
    // 0x416754: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x416754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416758: 0x56800001  bnel        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x416758u;
    {
        const bool branch_taken_0x416758 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x416758) {
            ctx->pc = 0x41675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x416758u;
            // 0x41675c: 0x8e930004  lw          $s3, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x416760u;
            goto label_416760;
        }
    }
    ctx->pc = 0x416760u;
label_416760:
    // 0x416760: 0x8e5000cc  lw          $s0, 0xCC($s2)
    ctx->pc = 0x416760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x416764: 0xc08a200  jal         func_228800
    ctx->pc = 0x416764u;
    SET_GPR_U32(ctx, 31, 0x41676Cu);
    ctx->pc = 0x416768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416764u;
    // 0x416768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x416764u, 0x41676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41676Cu;
label_41676c:
    // 0x41676c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416770: 0xc08a200  jal         func_228800
    ctx->pc = 0x416770u;
    SET_GPR_U32(ctx, 31, 0x416778u);
    ctx->pc = 0x416774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416770u;
    // 0x416774: 0x9051011b  lbu         $s1, 0x11B($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x416770u, 0x416778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416778u;
label_416778:
    // 0x416778: 0x9043014b  lbu         $v1, 0x14B($v0)
    ctx->pc = 0x416778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 331)));
    // 0x41677c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416780: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x416780u;
    SET_GPR_U32(ctx, 31, 0x416788u);
    ctx->pc = 0x416784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416780u;
    // 0x416784: 0x2c700001  sltiu       $s0, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x416780u, 0x416788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416788u;
label_416788:
    // 0x416788: 0x96a300d0  lhu         $v1, 0xD0($s5)
    ctx->pc = 0x416788u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x41678c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x41678cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x416790: 0x2c620025  sltiu       $v0, $v1, 0x25
    ctx->pc = 0x416790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x416794: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x416794u;
    {
        const bool branch_taken_0x416794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416794u;
        // 0x416798: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416794) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x41679Cu;
    // 0x41679c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4167a0: 0x244295d0  addiu       $v0, $v0, -0x6A30
    ctx->pc = 0x4167a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
    // 0x4167a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4167a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4167a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4167ac: 0x800008  jr          $a0
    ctx->pc = 0x4167ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4167B4u: goto label_4167b4;
            case 0x4167E8u: goto label_4167e8;
            case 0x416808u: goto label_416808;
            case 0x416878u: goto label_416878;
            case 0x4168ACu: goto label_4168ac;
            case 0x4168F8u: goto label_4168f8;
            case 0x416920u: goto label_416920;
            case 0x416934u: goto label_416934;
            case 0x416954u: goto label_416954;
            case 0x416968u: goto label_416968;
            case 0x4169A4u: goto label_4169a4;
            case 0x4169C4u: goto label_4169c4;
            case 0x4169D4u: goto label_4169d4;
            case 0x416A04u: goto label_416a04;
            case 0x416A2Cu: goto label_416a2c;
            case 0x416A4Cu: goto label_416a4c;
            case 0x416A70u: goto label_416a70;
            case 0x416A7Cu: goto label_416a7c;
            case 0x416A88u: goto label_416a88;
            case 0x416AB4u: goto label_416ab4;
            case 0x416ACCu: goto label_416acc;
            case 0x416AD4u: goto label_416ad4;
            case 0x416AE4u: goto label_416ae4;
            case 0x416AF0u: goto label_416af0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4167ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4167B4u;
label_4167b4:
    // 0x4167b4: 0x2622fffa  addiu       $v0, $s1, -0x6
    ctx->pc = 0x4167b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x4167b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4167b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4167bc: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x4167BCu;
    {
        const bool branch_taken_0x4167bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4167C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167BCu;
        // 0x4167c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167bc) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x4167C4u;
label_4167c4:
    // 0x4167c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4167c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4167c8:
    // 0x4167c8: 0x122200a7  beq         $s1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x4167C8u;
    {
        const bool branch_taken_0x4167c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4167CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167C8u;
        // 0x4167cc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167c8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4167D0u;
    // 0x4167d0: 0x122200a5  beq         $s1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x4167D0u;
    {
        const bool branch_taken_0x4167d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4167D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167D0u;
        // 0x4167d4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167d0) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4167D8u;
    // 0x4167d8: 0x122200a3  beq         $s1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x4167D8u;
    {
        const bool branch_taken_0x4167d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167D8u;
        // 0x4167dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167d8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4167E0u;
    // 0x4167e0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x4167E0u;
    {
        const bool branch_taken_0x4167e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4167E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167E0u;
        // 0x4167e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167e0) {
            ctx->pc = 0x416AF8u;
            goto label_416af8;
        }
    }
    ctx->pc = 0x4167E8u;
label_4167e8:
    // 0x4167e8: 0x2622fffc  addiu       $v0, $s1, -0x4
    ctx->pc = 0x4167e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4167ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4167ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4167f0: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x4167F0u;
    {
        const bool branch_taken_0x4167f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4167F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167F0u;
        // 0x4167f4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167f0) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x4167F8u;
    // 0x4167f8: 0x166300be  bne         $s3, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x4167F8u;
    {
        const bool branch_taken_0x4167f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x4167FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4167F8u;
        // 0x4167fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4167f8) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416800u;
    // 0x416800: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x416800u;
    {
        const bool branch_taken_0x416800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416800u;
        // 0x416804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416800) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416808u;
label_416808:
    // 0x416808: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x416808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x41680c: 0x122200af  beq         $s1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x41680Cu;
    {
        const bool branch_taken_0x41680c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41680Cu;
        // 0x416810: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41680c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416814u;
    // 0x416814: 0x122200ad  beq         $s1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x416814u;
    {
        const bool branch_taken_0x416814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416814u;
        // 0x416818: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416814) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41681Cu;
    // 0x41681c: 0x122200ab  beq         $s1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x41681Cu;
    {
        const bool branch_taken_0x41681c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41681Cu;
        // 0x416820: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41681c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416824u;
    // 0x416824: 0x122200a9  beq         $s1, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x416824u;
    {
        const bool branch_taken_0x416824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416824u;
        // 0x416828: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416824) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41682Cu;
    // 0x41682c: 0x122200a7  beq         $s1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x41682Cu;
    {
        const bool branch_taken_0x41682c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41682Cu;
        // 0x416830: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41682c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416834u;
    // 0x416834: 0x122200a5  beq         $s1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x416834u;
    {
        const bool branch_taken_0x416834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416834u;
        // 0x416838: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416834) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41683Cu;
    // 0x41683c: 0x122200a3  beq         $s1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x41683Cu;
    {
        const bool branch_taken_0x41683c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41683Cu;
        // 0x416840: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41683c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416844u;
    // 0x416844: 0x122200a1  beq         $s1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x416844u;
    {
        const bool branch_taken_0x416844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416844u;
        // 0x416848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416844) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41684Cu;
    // 0x41684c: 0x1222009f  beq         $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x41684Cu;
    {
        const bool branch_taken_0x41684c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41684Cu;
        // 0x416850: 0x2622fff7  addiu       $v0, $s1, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41684c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416854u;
    // 0x416854: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x416854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x416858: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x416858u;
    {
        const bool branch_taken_0x416858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416858u;
        // 0x41685c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416858) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x416860u;
    // 0x416860: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x416860u;
    SET_GPR_U32(ctx, 31, 0x416868u);
    ctx->pc = 0x416864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416860u;
    // 0x416864: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x416860u, 0x416868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416868u;
label_416868:
    // 0x416868: 0x44100a2  bgez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x416868u;
    {
        const bool branch_taken_0x416868 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x41686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416868u;
        // 0x41686c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416868) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416870u;
    // 0x416870: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x416870u;
    {
        const bool branch_taken_0x416870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416870u;
        // 0x416874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416870) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416878u;
label_416878:
    // 0x416878: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x416878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x41687c: 0x1222007a  beq         $s1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x41687Cu;
    {
        const bool branch_taken_0x41687c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41687Cu;
        // 0x416880: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41687c) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x416884u;
    // 0x416884: 0x12220078  beq         $s1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x416884u;
    {
        const bool branch_taken_0x416884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416884u;
        // 0x416888: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416884) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x41688Cu;
    // 0x41688c: 0x12220076  beq         $s1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x41688Cu;
    {
        const bool branch_taken_0x41688c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41688Cu;
        // 0x416890: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41688c) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x416894u;
    // 0x416894: 0x12220074  beq         $s1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x416894u;
    {
        const bool branch_taken_0x416894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416894u;
        // 0x416898: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416894) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x41689Cu;
    // 0x41689c: 0x12220072  beq         $s1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x41689Cu;
    {
        const bool branch_taken_0x41689c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41689Cu;
        // 0x4168a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41689c) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168A4u;
    // 0x4168a4: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x4168A4u;
    {
        const bool branch_taken_0x4168a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4168A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168A4u;
        // 0x4168a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168a4) {
            ctx->pc = 0x416AF8u;
            goto label_416af8;
        }
    }
    ctx->pc = 0x4168ACu;
label_4168ac:
    // 0x4168ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4168acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4168b0: 0x1222006d  beq         $s1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x4168B0u;
    {
        const bool branch_taken_0x4168b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168B0u;
        // 0x4168b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168b0) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168B8u;
    // 0x4168b8: 0x1222006b  beq         $s1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4168B8u;
    {
        const bool branch_taken_0x4168b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168B8u;
        // 0x4168bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168b8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168C0u;
    // 0x4168c0: 0x12220069  beq         $s1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x4168C0u;
    {
        const bool branch_taken_0x4168c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168C0u;
        // 0x4168c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168c0) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168C8u;
    // 0x4168c8: 0x12220067  beq         $s1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x4168C8u;
    {
        const bool branch_taken_0x4168c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168C8u;
        // 0x4168cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168c8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168D0u;
    // 0x4168d0: 0x12220065  beq         $s1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4168D0u;
    {
        const bool branch_taken_0x4168d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168D0u;
        // 0x4168d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168d0) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168D8u;
    // 0x4168d8: 0x12220063  beq         $s1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4168D8u;
    {
        const bool branch_taken_0x4168d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168D8u;
        // 0x4168dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168d8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168E0u;
    // 0x4168e0: 0x12220061  beq         $s1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x4168E0u;
    {
        const bool branch_taken_0x4168e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168E0u;
        // 0x4168e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168e0) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168E8u;
    // 0x4168e8: 0x1222005f  beq         $s1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4168E8u;
    {
        const bool branch_taken_0x4168e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168E8u;
        // 0x4168ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168e8) {
            ctx->pc = 0x416A68u;
            goto label_416a68;
        }
    }
    ctx->pc = 0x4168F0u;
    // 0x4168f0: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x4168F0u;
    {
        const bool branch_taken_0x4168f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4168f0) {
            ctx->pc = 0x4167C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4167c8;
        }
    }
    ctx->pc = 0x4168F8u;
label_4168f8:
    // 0x4168f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4168f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4168fc: 0x12220073  beq         $s1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x4168FCu;
    {
        const bool branch_taken_0x4168fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168FCu;
        // 0x416900: 0x2622fffc  addiu       $v0, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168fc) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416904u;
    // 0x416904: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x416904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x416908: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x416908u;
    {
        const bool branch_taken_0x416908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416908u;
        // 0x41690c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416908) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x416910u;
    // 0x416910: 0x16620078  bne         $s3, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x416910u;
    {
        const bool branch_taken_0x416910 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x416914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416910u;
        // 0x416914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416910) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416918u;
    // 0x416918: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x416918u;
    {
        const bool branch_taken_0x416918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416918u;
        // 0x41691c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416918) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416920u;
label_416920:
    // 0x416920: 0x2623fffa  addiu       $v1, $s1, -0x6
    ctx->pc = 0x416920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x416924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416928: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x416928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41692c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x41692Cu;
    {
        const bool branch_taken_0x41692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41692Cu;
        // 0x416930: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41692c) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416934u;
label_416934:
    // 0x416934: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x416934u;
    {
        const bool branch_taken_0x416934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x416938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416934u;
        // 0x416938: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416934) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x41693Cu;
    // 0x41693c: 0x1222006c  beq         $s1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x41693Cu;
    {
        const bool branch_taken_0x41693c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41693Cu;
        // 0x416940: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41693c) {
            ctx->pc = 0x416AF0u;
            goto label_416af0;
        }
    }
    ctx->pc = 0x416944u;
    // 0x416944: 0x1623006b  bne         $s1, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x416944u;
    {
        const bool branch_taken_0x416944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x416948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416944u;
        // 0x416948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416944) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x41694Cu;
    // 0x41694c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x41694Cu;
    {
        const bool branch_taken_0x41694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41694Cu;
        // 0x416950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41694c) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416954u;
label_416954:
    // 0x416954: 0x2623fff5  addiu       $v1, $s1, -0xB
    ctx->pc = 0x416954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967285));
    // 0x416958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41695c: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x41695cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x416960: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x416960u;
    {
        const bool branch_taken_0x416960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416960u;
        // 0x416964: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416960) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416968u;
label_416968:
    // 0x416968: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x416968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x41696c: 0x12220057  beq         $s1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x41696Cu;
    {
        const bool branch_taken_0x41696c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41696Cu;
        // 0x416970: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41696c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416974u;
    // 0x416974: 0x12220055  beq         $s1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x416974u;
    {
        const bool branch_taken_0x416974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416974u;
        // 0x416978: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416974) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41697Cu;
    // 0x41697c: 0x12220053  beq         $s1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x41697Cu;
    {
        const bool branch_taken_0x41697c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41697Cu;
        // 0x416980: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41697c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416984u;
    // 0x416984: 0x12220051  beq         $s1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x416984u;
    {
        const bool branch_taken_0x416984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416984u;
        // 0x416988: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416984) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41698Cu;
    // 0x41698c: 0x1222004f  beq         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x41698Cu;
    {
        const bool branch_taken_0x41698c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41698Cu;
        // 0x416990: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41698c) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416994u;
    // 0x416994: 0x1222004d  beq         $s1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x416994u;
    {
        const bool branch_taken_0x416994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416994u;
        // 0x416998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416994) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x41699Cu;
    // 0x41699c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x41699Cu;
    {
        const bool branch_taken_0x41699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4169A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41699Cu;
        // 0x4169a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41699c) {
            ctx->pc = 0x416AF8u;
            goto label_416af8;
        }
    }
    ctx->pc = 0x4169A4u;
label_4169a4:
    // 0x4169a4: 0x2622fffc  addiu       $v0, $s1, -0x4
    ctx->pc = 0x4169a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x4169a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4169a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4169ac: 0x1040ff85  beqz        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x4169ACu;
    {
        const bool branch_taken_0x4169ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4169B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169ACu;
        // 0x4169b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169ac) {
            ctx->pc = 0x4167C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4167c4;
        }
    }
    ctx->pc = 0x4169B4u;
    // 0x4169b4: 0x1662004f  bne         $s3, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x4169B4u;
    {
        const bool branch_taken_0x4169b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4169B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169B4u;
        // 0x4169b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169b4) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x4169BCu;
    // 0x4169bc: 0x1000ff82  b           . + 4 + (-0x7E << 2)
    ctx->pc = 0x4169BCu;
    {
        const bool branch_taken_0x4169bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4169C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169BCu;
        // 0x4169c0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169bc) {
            ctx->pc = 0x4167C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4167c8;
        }
    }
    ctx->pc = 0x4169C4u;
label_4169c4:
    // 0x4169c4: 0x3a230008  xori        $v1, $s1, 0x8
    ctx->pc = 0x4169c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8);
    // 0x4169c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4169c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4169cc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x4169CCu;
    {
        const bool branch_taken_0x4169cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4169D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169CCu;
        // 0x4169d0: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169cc) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x4169D4u;
label_4169d4:
    // 0x4169d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4169d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4169d8: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4169D8u;
    {
        const bool branch_taken_0x4169d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4169DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169D8u;
        // 0x4169dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169d8) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x4169E0u;
label_4169e0:
    // 0x4169e0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4169e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4169e4:
    // 0x4169e4: 0x12220039  beq         $s1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4169E4u;
    {
        const bool branch_taken_0x4169e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4169E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169E4u;
        // 0x4169e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169e4) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x4169ECu;
    // 0x4169ec: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4169ECu;
    {
        const bool branch_taken_0x4169ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4169F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169ECu;
        // 0x4169f0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169ec) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x4169F4u;
    // 0x4169f4: 0x12220035  beq         $s1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4169F4u;
    {
        const bool branch_taken_0x4169f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4169F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169F4u;
        // 0x4169f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169f4) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x4169FCu;
    // 0x4169fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x4169FCu;
    {
        const bool branch_taken_0x4169fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4169FCu;
        // 0x416a00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4169fc) {
            ctx->pc = 0x416AF8u;
            goto label_416af8;
        }
    }
    ctx->pc = 0x416A04u;
label_416a04:
    // 0x416a04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x416a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x416a08: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x416A08u;
    {
        const bool branch_taken_0x416a08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A08u;
        // 0x416a0c: 0x2622fffc  addiu       $v0, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a08) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416A10u;
    // 0x416a10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x416a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x416a14: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x416A14u;
    {
        const bool branch_taken_0x416a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A14u;
        // 0x416a18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a14) {
            ctx->pc = 0x4169E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4169e0;
        }
    }
    ctx->pc = 0x416A1Cu;
    // 0x416a1c: 0x16620035  bne         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x416A1Cu;
    {
        const bool branch_taken_0x416a1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x416A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A1Cu;
        // 0x416a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a1c) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A24u;
    // 0x416a24: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x416A24u;
    {
        const bool branch_taken_0x416a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A24u;
        // 0x416a28: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a24) {
            ctx->pc = 0x4169E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4169e4;
        }
    }
    ctx->pc = 0x416A2Cu;
label_416a2c:
    // 0x416a2c: 0x2622fffc  addiu       $v0, $s1, -0x4
    ctx->pc = 0x416a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x416a30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x416a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x416a34: 0x1040ff63  beqz        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x416A34u;
    {
        const bool branch_taken_0x416a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A34u;
        // 0x416a38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a34) {
            ctx->pc = 0x4167C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4167c4;
        }
    }
    ctx->pc = 0x416A3Cu;
    // 0x416a3c: 0x1662002d  bne         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x416A3Cu;
    {
        const bool branch_taken_0x416a3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x416A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A3Cu;
        // 0x416a40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a3c) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A44u;
    // 0x416a44: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x416A44u;
    {
        const bool branch_taken_0x416a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A44u;
        // 0x416a48: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a44) {
            ctx->pc = 0x4167C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4167c8;
        }
    }
    ctx->pc = 0x416A4Cu;
label_416a4c:
    // 0x416a4c: 0x2622fff5  addiu       $v0, $s1, -0xB
    ctx->pc = 0x416a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967285));
    // 0x416a50: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x416a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x416a54: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x416A54u;
    {
        const bool branch_taken_0x416a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x416A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A54u;
        // 0x416a58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a54) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A5Cu;
    // 0x416a5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x416a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x416a60: 0x16220024  bne         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x416A60u;
    {
        const bool branch_taken_0x416a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x416A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A60u;
        // 0x416a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a60) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A68u;
label_416a68:
    // 0x416a68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x416A68u;
    {
        const bool branch_taken_0x416a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A68u;
        // 0x416a6c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a68) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A70u;
label_416a70:
    // 0x416a70: 0x3a220008  xori        $v0, $s1, 0x8
    ctx->pc = 0x416a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8);
    // 0x416a74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x416A74u;
    {
        const bool branch_taken_0x416a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A74u;
        // 0x416a78: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a74) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A7Cu;
label_416a7c:
    // 0x416a7c: 0x2622fff7  addiu       $v0, $s1, -0x9
    ctx->pc = 0x416a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x416a80: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x416A80u;
    {
        const bool branch_taken_0x416a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A80u;
        // 0x416a84: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a80) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416A88u;
label_416a88:
    // 0x416a88: 0x2622fffc  addiu       $v0, $s1, -0x4
    ctx->pc = 0x416a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x416a8c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x416a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x416a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x416A90u;
    {
        const bool branch_taken_0x416a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x416A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A90u;
        // 0x416a94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a90) {
            ctx->pc = 0x416AA0u;
            goto label_416aa0;
        }
    }
    ctx->pc = 0x416A98u;
    // 0x416a98: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x416A98u;
    {
        const bool branch_taken_0x416a98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x416A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416A98u;
        // 0x416a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416a98) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416AA0u;
label_416aa0:
    // 0x416aa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x416aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x416aa4: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x416AA4u;
    {
        const bool branch_taken_0x416aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x416AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416AA4u;
        // 0x416aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416aa4) {
            ctx->pc = 0x416ACCu;
            goto label_416acc;
        }
    }
    ctx->pc = 0x416AACu;
    // 0x416aac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x416AACu;
    {
        const bool branch_taken_0x416aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416AACu;
        // 0x416ab0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416aac) {
            ctx->pc = 0x416AF8u;
            goto label_416af8;
        }
    }
    ctx->pc = 0x416AB4u;
label_416ab4:
    // 0x416ab4: 0x2622fff7  addiu       $v0, $s1, -0x9
    ctx->pc = 0x416ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x416ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x416ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416abc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x416abcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x416ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416ac4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x416AC4u;
    {
        const bool branch_taken_0x416ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416AC4u;
        // 0x416ac8: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416ac4) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416ACCu;
label_416acc:
    // 0x416acc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x416ACCu;
    {
        const bool branch_taken_0x416acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416ACCu;
        // 0x416ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416acc) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416AD4u;
label_416ad4:
    // 0x416ad4: 0x2623fff7  addiu       $v1, $s1, -0x9
    ctx->pc = 0x416ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x416ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x416ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x416adc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x416ADCu;
    {
        const bool branch_taken_0x416adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416ADCu;
        // 0x416ae0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416adc) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416AE4u;
label_416ae4:
    // 0x416ae4: 0x3a620006  xori        $v0, $s3, 0x6
    ctx->pc = 0x416ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)6);
    // 0x416ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x416AE8u;
    {
        const bool branch_taken_0x416ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416AE8u;
        // 0x416aec: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x416ae8) {
            ctx->pc = 0x416AF4u;
            goto label_416af4;
        }
    }
    ctx->pc = 0x416AF0u;
label_416af0:
    // 0x416af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416af4:
    // 0x416af4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x416af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_416af8:
    // 0x416af8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x416af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x416afc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x416afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x416b00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x416b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x416b04: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x416b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416b08: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x416b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416b10: 0x3e00008  jr          $ra
    ctx->pc = 0x416B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416B10u;
        // 0x416b14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416B18u;
}
