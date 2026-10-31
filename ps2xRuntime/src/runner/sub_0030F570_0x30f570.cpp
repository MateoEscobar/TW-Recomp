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

// Function: sub_0030F570
// Address: 0x30f570 - 0x30f6b0
void sub_0030F570_0x30f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F570_0x30f570");
#endif

    switch (ctx->pc) {
        case 0x30f5a8u: goto label_30f5a8;
        case 0x30f5b0u: goto label_30f5b0;
        case 0x30f5b8u: goto label_30f5b8;
        case 0x30f5ccu: goto label_30f5cc;
        case 0x30f5dcu: goto label_30f5dc;
        case 0x30f5e8u: goto label_30f5e8;
        case 0x30f5f0u: goto label_30f5f0;
        case 0x30f604u: goto label_30f604;
        case 0x30f620u: goto label_30f620;
        case 0x30f62cu: goto label_30f62c;
        case 0x30f63cu: goto label_30f63c;
        case 0x30f670u: goto label_30f670;
        case 0x30f67cu: goto label_30f67c;
        default: break;
    }

    ctx->pc = 0x30f570u;

    // 0x30f570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30f570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30f574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30f574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30f578: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30f578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30f57c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30f57cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f580: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30f580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30f584: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30f584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f588: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30f58c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30f590: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30f594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f598: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x30f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30f59c: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x30f59cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30f5a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5a4: 0x0  nop
    ctx->pc = 0x30f5a4u;
    // NOP
label_30f5a8:
    // 0x30f5a8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30F5A8u;
    SET_GPR_U32(ctx, 31, 0x30F5B0u);
    ctx->pc = 0x30F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5A8u;
    // 0x30f5ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30F5A8u, 0x30F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5B0u;
label_30f5b0:
    // 0x30f5b0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30F5B0u;
    SET_GPR_U32(ctx, 31, 0x30F5B8u);
    ctx->pc = 0x30F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5B0u;
    // 0x30f5b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30F5B0u, 0x30F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5B8u;
label_30f5b8:
    // 0x30f5b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30f5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5bc: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x30F5BCu;
    {
        const bool branch_taken_0x30f5bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5BCu;
        // 0x30f5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5bc) {
            ctx->pc = 0x30F67Cu;
            goto label_30f67c;
        }
    }
    ctx->pc = 0x30F5C4u;
    // 0x30f5c4: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30F5C4u;
    SET_GPR_U32(ctx, 31, 0x30F5CCu);
    ctx->pc = 0x30F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5C4u;
    // 0x30f5c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30F5C4u, 0x30F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5CCu;
label_30f5cc:
    // 0x30f5cc: 0x5052002c  beql        $v0, $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x30F5CCu;
    {
        const bool branch_taken_0x30f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x30f5cc) {
            ctx->pc = 0x30F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F5CCu;
            // 0x30f5d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F680u;
            goto label_30f680;
        }
    }
    ctx->pc = 0x30F5D4u;
    // 0x30f5d4: 0xc087502  jal         func_21D408
    ctx->pc = 0x30F5D4u;
    SET_GPR_U32(ctx, 31, 0x30F5DCu);
    ctx->pc = 0x30F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5D4u;
    // 0x30f5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30F5D4u, 0x30F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5DCu;
label_30f5dc:
    // 0x30f5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30f5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5e0: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x30F5E0u;
    SET_GPR_U32(ctx, 31, 0x30F5E8u);
    ctx->pc = 0x30F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5E0u;
    // 0x30f5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30F5E0u, 0x30F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5E8u;
label_30f5e8:
    // 0x30f5e8: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x30F5E8u;
    SET_GPR_U32(ctx, 31, 0x30F5F0u);
    ctx->pc = 0x30F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5E8u;
    // 0x30f5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30F5E8u, 0x30F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5F0u;
label_30f5f0:
    // 0x30f5f0: 0x92830028  lbu         $v1, 0x28($s4)
    ctx->pc = 0x30f5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x30f5f4: 0x1472000f  bne         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x30F5F4u;
    {
        const bool branch_taken_0x30f5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x30f5f4) {
            ctx->pc = 0x30F634u;
            goto label_30f634;
        }
    }
    ctx->pc = 0x30F5FCu;
    // 0x30f5fc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30F5FCu;
    SET_GPR_U32(ctx, 31, 0x30F604u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30F5FCu, 0x30F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F604u;
label_30f604:
    // 0x30f604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30f604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f608: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F608u;
    {
        const bool branch_taken_0x30f608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F608u;
        // 0x30f60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f608) {
            ctx->pc = 0x30F620u;
            goto label_30f620;
        }
    }
    ctx->pc = 0x30F610u;
    // 0x30f610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30f610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f618: 0xc0b2bde  jal         func_2CAF78
    ctx->pc = 0x30F618u;
    SET_GPR_U32(ctx, 31, 0x30F620u);
    ctx->pc = 0x30F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F618u;
    // 0x30f61c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF78u, 0x30F618u, 0x30F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F620u;
label_30f620:
    // 0x30f620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f624: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30F624u;
    SET_GPR_U32(ctx, 31, 0x30F62Cu);
    ctx->pc = 0x30F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F624u;
    // 0x30f628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30F624u, 0x30F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F62Cu;
label_30f62c:
    // 0x30f62c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30F62Cu;
    {
        const bool branch_taken_0x30f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F62Cu;
        // 0x30f630: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f62c) {
            ctx->pc = 0x30F680u;
            goto label_30f680;
        }
    }
    ctx->pc = 0x30F634u;
label_30f634:
    // 0x30f634: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30F634u;
    SET_GPR_U32(ctx, 31, 0x30F63Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30F634u, 0x30F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F63Cu;
label_30f63c:
    // 0x30f63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30f63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f640: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30F640u;
    {
        const bool branch_taken_0x30f640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F640u;
        // 0x30f644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f640) {
            ctx->pc = 0x30F670u;
            goto label_30f670;
        }
    }
    ctx->pc = 0x30F648u;
    // 0x30f648: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x30f648u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x30f64c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30f64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f65c: 0x24080fa0  addiu       $t0, $zero, 0xFA0
    ctx->pc = 0x30f65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x30f660: 0x24091770  addiu       $t1, $zero, 0x1770
    ctx->pc = 0x30f660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x30f664: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x30f664u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x30f668: 0xc0ad026  jal         func_2B4098
    ctx->pc = 0x30F668u;
    SET_GPR_U32(ctx, 31, 0x30F670u);
    ctx->pc = 0x30F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F668u;
    // 0x30f66c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4098u, 0x30F668u, 0x30F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F670u;
label_30f670:
    // 0x30f670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f674: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30F674u;
    SET_GPR_U32(ctx, 31, 0x30F67Cu);
    ctx->pc = 0x30F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F674u;
    // 0x30f678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30F674u, 0x30F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F67Cu;
label_30f67c:
    // 0x30f67c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30f67cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30f680:
    // 0x30f680: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x30f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30f684: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x30F684u;
    {
        const bool branch_taken_0x30f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F684u;
        // 0x30f688: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f684) {
            ctx->pc = 0x30F5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f5a8;
        }
    }
    ctx->pc = 0x30F68Cu;
    // 0x30f68c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30f68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f690: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30f690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f694: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30f694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f69c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30f69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f6a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30f6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6A8u;
        // 0x30f6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F6B0u;
}
