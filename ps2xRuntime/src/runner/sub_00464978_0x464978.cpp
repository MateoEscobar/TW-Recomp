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

// Function: sub_00464978
// Address: 0x464978 - 0x464a88
void sub_00464978_0x464978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464978_0x464978");
#endif

    switch (ctx->pc) {
        case 0x4649c0u: goto label_4649c0;
        case 0x464a10u: goto label_464a10;
        case 0x464a4cu: goto label_464a4c;
        default: break;
    }

    ctx->pc = 0x464978u;

    // 0x464978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x464978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46497c: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x46497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x464980: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x464980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x464984: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x464984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x464988: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x464988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x46498c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x46498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x464990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x464994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464998: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x464998u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46499c: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x46499Cu;
    {
        const bool branch_taken_0x46499c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4649A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46499Cu;
        // 0x4649a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46499c) {
            ctx->pc = 0x464A6Cu;
            goto label_464a6c;
        }
    }
    ctx->pc = 0x4649A4u;
    // 0x4649a4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x4649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x4649a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4649A8u;
    {
        const bool branch_taken_0x4649a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4649ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4649A8u;
        // 0x4649ac: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4649a8) {
            ctx->pc = 0x4649B8u;
            goto label_4649b8;
        }
    }
    ctx->pc = 0x4649B0u;
    // 0x4649b0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x4649B0u;
    {
        const bool branch_taken_0x4649b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4649B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4649B0u;
        // 0x4649b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4649b0) {
            ctx->pc = 0x464A6Cu;
            goto label_464a6c;
        }
    }
    ctx->pc = 0x4649B8u;
label_4649b8:
    // 0x4649b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4649b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4649bc: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x4649bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_4649c0:
    // 0x4649c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4649c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4649c4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4649c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4649c8: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x4649c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x4649cc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4649ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4649d0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4649D0u;
    {
        const bool branch_taken_0x4649d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4649D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4649D0u;
        // 0x4649d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4649d0) {
            ctx->pc = 0x464A54u;
            goto label_464a54;
        }
    }
    ctx->pc = 0x4649D8u;
    // 0x4649d8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4649dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4649dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4649e0: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x4649e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x4649e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4649e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4649e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4649e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4649ec: 0x800008  jr          $a0
    ctx->pc = 0x4649ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4649F4u: goto label_4649f4;
            case 0x464A20u: goto label_464a20;
            case 0x464A30u: goto label_464a30;
            case 0x464A54u: goto label_464a54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4649ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4649F4u;
label_4649f4:
    // 0x4649f4: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x4649f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x4649f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4649f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4649fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4649fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x464a00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464A00u;
    {
        const bool branch_taken_0x464a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x464A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A00u;
        // 0x464a04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464a00) {
            ctx->pc = 0x464A14u;
            goto label_464a14;
        }
    }
    ctx->pc = 0x464A08u;
    // 0x464a08: 0xc120502  jal         func_481408
    ctx->pc = 0x464A08u;
    SET_GPR_U32(ctx, 31, 0x464A10u);
    ctx->pc = 0x481408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481408u, 0x464A08u, 0x464A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464A10u;
label_464a10:
    // 0x464a10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x464a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_464a14:
    // 0x464a14: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x464a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x464a18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x464A18u;
    {
        const bool branch_taken_0x464a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A18u;
        // 0x464a1c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464a18) {
            ctx->pc = 0x464A3Cu;
            goto label_464a3c;
        }
    }
    ctx->pc = 0x464A20u;
label_464a20:
    // 0x464a20: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x464a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x464a24: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x464a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x464a28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x464A28u;
    {
        const bool branch_taken_0x464a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A28u;
        // 0x464a2c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464a28) {
            ctx->pc = 0x464A3Cu;
            goto label_464a3c;
        }
    }
    ctx->pc = 0x464A30u;
label_464a30:
    // 0x464a30: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x464a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x464a34: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x464a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x464a38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x464a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_464a3c:
    // 0x464a3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464A3Cu;
    {
        const bool branch_taken_0x464a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x464A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A3Cu;
        // 0x464a40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464a3c) {
            ctx->pc = 0x464A50u;
            goto label_464a50;
        }
    }
    ctx->pc = 0x464A44u;
    // 0x464a44: 0xc120502  jal         func_481408
    ctx->pc = 0x464A44u;
    SET_GPR_U32(ctx, 31, 0x464A4Cu);
    ctx->pc = 0x481408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481408u, 0x464A44u, 0x464A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464A4Cu;
label_464a4c:
    // 0x464a4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x464a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_464a50:
    // 0x464a50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x464a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_464a54:
    // 0x464a54: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x464a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x464a58: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x464a58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x464a5c: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x464a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x464a60: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x464A60u;
    {
        const bool branch_taken_0x464a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x464A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A60u;
        // 0x464a64: 0x131980  sll         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464a60) {
            ctx->pc = 0x4649C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4649c0;
        }
    }
    ctx->pc = 0x464A68u;
    // 0x464a68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x464a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464a6c:
    // 0x464a6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x464a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464a70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x464a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x464a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464a78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x464a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464a80: 0x3e00008  jr          $ra
    ctx->pc = 0x464A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464A80u;
        // 0x464a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464A88u;
}
