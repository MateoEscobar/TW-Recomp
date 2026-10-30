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

// Function: sub_00449990
// Address: 0x449990 - 0x449b30
void sub_00449990_0x449990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449990_0x449990");
#endif

    switch (ctx->pc) {
        case 0x449a00u: goto label_449a00;
        case 0x449a24u: goto label_449a24;
        case 0x449a5cu: goto label_449a5c;
        case 0x449a68u: goto label_449a68;
        case 0x449aecu: goto label_449aec;
        default: break;
    }

    ctx->pc = 0x449990u;

    // 0x449990: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x449990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x449994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x449994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449998: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x449998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x44999c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x44999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x4499a0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4499a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4499a4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4499a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4499a8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x4499a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x4499ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4499acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4499b0: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x4499b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4499b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4499b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4499b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4499b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4499bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4499bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4499c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4499c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4499c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4499c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4499c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4499c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4499cc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4499ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4499d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4499d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4499d4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4499d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4499d8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x4499d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4499dc: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x4499dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4499e0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4499E0u;
    {
        const bool branch_taken_0x4499e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x4499E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499E0u;
        // 0x4499e4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4499e0) {
            ctx->pc = 0x449A18u;
            goto label_449a18;
        }
    }
    ctx->pc = 0x4499E8u;
    // 0x4499e8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x4499E8u;
    {
        const bool branch_taken_0x4499e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4499e8) {
            ctx->pc = 0x4499ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4499E8u;
            // 0x4499ec: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449AC4u;
            goto label_449ac4;
        }
    }
    ctx->pc = 0x4499F0u;
    // 0x4499f0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x4499F0u;
    {
        const bool branch_taken_0x4499f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4499f0) {
            ctx->pc = 0x4499F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4499F0u;
            // 0x4499f4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449AC4u;
            goto label_449ac4;
        }
    }
    ctx->pc = 0x4499F8u;
    // 0x4499f8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x4499F8u;
    SET_GPR_U32(ctx, 31, 0x449A00u);
    ctx->pc = 0x4499FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4499F8u;
    // 0x4499fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x4499F8u, 0x449A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449A00u;
label_449a00:
    // 0x449a00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x449a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449a04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x449a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x449a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x449a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x449a0c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x449a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x449a10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x449A10u;
    {
        const bool branch_taken_0x449a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A10u;
        // 0x449a14: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a10) {
            ctx->pc = 0x449AC0u;
            goto label_449ac0;
        }
    }
    ctx->pc = 0x449A18u;
label_449a18:
    // 0x449a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a1c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x449A1Cu;
    SET_GPR_U32(ctx, 31, 0x449A24u);
    ctx->pc = 0x449A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449A1Cu;
    // 0x449a20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x449A1Cu, 0x449A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449A24u;
label_449a24:
    // 0x449a24: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x449a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x449a28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x449a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449a2c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x449a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x449a30: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x449a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x449a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a38: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x449a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x449a3c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x449a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x449a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x449a44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x449a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a48: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x449a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a4c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x449a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a50: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x449a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a54: 0xc11255a  jal         func_449568
    ctx->pc = 0x449A54u;
    SET_GPR_U32(ctx, 31, 0x449A5Cu);
    ctx->pc = 0x449A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449A54u;
    // 0x449a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449568u, 0x449A54u, 0x449A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449A5Cu;
label_449a5c:
    // 0x449a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a60: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x449A60u;
    SET_GPR_U32(ctx, 31, 0x449A68u);
    ctx->pc = 0x449A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449A60u;
    // 0x449a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x449A60u, 0x449A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449A68u;
label_449a68:
    // 0x449a68: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x449a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x449a6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x449a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x449a70: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x449a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x449a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a78: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x449a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a7c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x449a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a80: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x449a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a84: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x449a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a88: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x449a88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x449a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x449a90: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x449a90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x449a94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x449a94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449a98: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x449a98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x449a9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x449a9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x449aa0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x449aa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x449aa4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x449aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x449aa8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x449aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449aac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x449aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449ab0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x449ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449ab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x449ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449ab8: 0x811255a  j           func_449568
    ctx->pc = 0x449AB8u;
    ctx->pc = 0x449ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449AB8u;
    // 0x449abc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449568u;
    sub_00449568_0x449568(rdram, ctx, runtime); return;
    ctx->pc = 0x449AC0u;
label_449ac0:
    // 0x449ac0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x449ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_449ac4:
    // 0x449ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ac8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x449ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x449acc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x449accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ad0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x449ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ad4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x449ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ad8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x449ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449adc: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x449adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x449ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ae4: 0xc11255a  jal         func_449568
    ctx->pc = 0x449AE4u;
    SET_GPR_U32(ctx, 31, 0x449AECu);
    ctx->pc = 0x449AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449AE4u;
    // 0x449ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449568u, 0x449AE4u, 0x449AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449AECu;
label_449aec:
    // 0x449aec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x449aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x449af0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x449af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x449af4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x449af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x449af8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x449af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x449afc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x449afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x449b00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x449b00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x449b04: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x449b04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x449b08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x449b08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x449b0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x449b0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x449b10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x449b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x449b14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x449b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449b18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x449b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449b1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x449b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449b20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x449b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449b24: 0x3e00008  jr          $ra
    ctx->pc = 0x449B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B24u;
        // 0x449b28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449B2Cu;
    // 0x449b2c: 0x0  nop
    ctx->pc = 0x449b2cu;
    // NOP
    ctx->pc = 0x449b30u;
}
