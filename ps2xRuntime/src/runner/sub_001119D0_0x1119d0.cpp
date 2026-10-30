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

// Function: sub_001119D0
// Address: 0x1119d0 - 0x111aa0
void sub_001119D0_0x1119d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001119D0_0x1119d0");
#endif

    switch (ctx->pc) {
        case 0x111a10u: goto label_111a10;
        case 0x111a30u: goto label_111a30;
        case 0x111a70u: goto label_111a70;
        default: break;
    }

    ctx->pc = 0x1119d0u;

    // 0x1119d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1119d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1119d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1119d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1119d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1119d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1119dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1119dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1119e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1119e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1119e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1119e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1119e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119ec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1119ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1119f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1119f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1119f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1119f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1119f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1119fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111a00: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x111a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x111a04: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x111a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x111a08: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x111a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x111a0c: 0x0  nop
    ctx->pc = 0x111a0cu;
    // NOP
label_111a10:
    // 0x111a10: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x111a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a14: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x111a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x111a18: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x111a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111a20: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x111a20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x111a24: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x111a28: 0xc043c20  jal         func_10F080
    ctx->pc = 0x111A28u;
    SET_GPR_U32(ctx, 31, 0x111A30u);
    ctx->pc = 0x111A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A28u;
    // 0x111a2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x111A28u, 0x111A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A30u;
label_111a30:
    // 0x111a30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a34: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x111a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x111a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111A38u;
    {
        const bool branch_taken_0x111a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A38u;
        // 0x111a3c: 0x263102b  sltu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a38) {
            ctx->pc = 0x111A48u;
            goto label_111a48;
        }
    }
    ctx->pc = 0x111A40u;
    // 0x111a40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111A40u;
    {
        const bool branch_taken_0x111a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A40u;
        // 0x111a44: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a40) {
            ctx->pc = 0x111A58u;
            goto label_111a58;
        }
    }
    ctx->pc = 0x111A48u;
label_111a48:
    // 0x111a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111A48u;
    {
        const bool branch_taken_0x111a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A48u;
        // 0x111a4c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a48) {
            ctx->pc = 0x111A58u;
            goto label_111a58;
        }
    }
    ctx->pc = 0x111A50u;
    // 0x111a50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111A50u;
    {
        const bool branch_taken_0x111a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A50u;
        // 0x111a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a50) {
            ctx->pc = 0x111A7Cu;
            goto label_111a7c;
        }
    }
    ctx->pc = 0x111A58u;
label_111a58:
    // 0x111a58: 0x1612ffed  bne         $s0, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x111A58u;
    {
        const bool branch_taken_0x111a58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x2351021  addu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a58) {
            ctx->pc = 0x111A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111a10;
        }
    }
    ctx->pc = 0x111A60u;
    // 0x111a60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x111a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111a64: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x111a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x111a68: 0xc043c20  jal         func_10F080
    ctx->pc = 0x111A68u;
    SET_GPR_U32(ctx, 31, 0x111A70u);
    ctx->pc = 0x111A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A68u;
    // 0x111a6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x111A68u, 0x111A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A70u;
label_111a70:
    // 0x111a70: 0x531826  xor         $v1, $v0, $s3
    ctx->pc = 0x111a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x111a74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x111a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111a78: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x111a78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_111a7c:
    // 0x111a7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x111a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111a80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x111a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111a84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x111a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111a8c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x111a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a90: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x111a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a98: 0x3e00008  jr          $ra
    ctx->pc = 0x111A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A98u;
        // 0x111a9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111AA0u;
}
