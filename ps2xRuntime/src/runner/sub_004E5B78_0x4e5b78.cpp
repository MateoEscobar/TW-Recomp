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

// Function: sub_004E5B78
// Address: 0x4e5b78 - 0x4e5c90
void sub_004E5B78_0x4e5b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5B78_0x4e5b78");
#endif

    switch (ctx->pc) {
        case 0x4e5bd0u: goto label_4e5bd0;
        case 0x4e5bf4u: goto label_4e5bf4;
        case 0x4e5c04u: goto label_4e5c04;
        case 0x4e5c0cu: goto label_4e5c0c;
        case 0x4e5c18u: goto label_4e5c18;
        default: break;
    }

    ctx->pc = 0x4e5b78u;

    // 0x4e5b78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e5b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4e5b7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4e5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4e5b80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e5b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4e5b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4e5b88: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x4e5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4e5b8c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4e5b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4e5b90: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e5b94: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4e5b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4e5b98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4e5b9c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4e5b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ba0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e5ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e5ba8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4e5ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4e5bac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4e5bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5bb0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4e5bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4e5bb4: 0x2d1202a  slt         $a0, $s6, $s1
    ctx->pc = 0x4e5bb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4e5bb8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4e5bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4e5bbc: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x4e5bbcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4e5bc0: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4E5BC0u;
    {
        const bool branch_taken_0x4e5bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5BC0u;
        // 0x4e5bc4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5bc0) {
            ctx->pc = 0x4E5C54u;
            goto label_4e5c54;
        }
    }
    ctx->pc = 0x4E5BC8u;
    // 0x4e5bc8: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x4e5bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x4e5bcc: 0x0  nop
    ctx->pc = 0x4e5bccu;
    // NOP
label_4e5bd0:
    // 0x4e5bd0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x4e5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4e5bd4: 0x8ef0489c  lw          $s0, 0x489C($s7)
    ctx->pc = 0x4e5bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x4e5bd8: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x4e5bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5bdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e5bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5be0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5be4: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5bec: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5BECu;
    SET_GPR_U32(ctx, 31, 0x4E5BF4u);
    ctx->pc = 0x4E5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5BECu;
    // 0x4e5bf0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5BECu, 0x4E5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5BF4u;
label_4e5bf4:
    // 0x4e5bf4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e5bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5bfc: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E5BFCu;
    SET_GPR_U32(ctx, 31, 0x4E5C04u);
    ctx->pc = 0x4E5C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5BFCu;
    // 0x4e5c00: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E5BFCu, 0x4E5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5C04u;
label_4e5c04:
    // 0x4e5c04: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5C04u;
    SET_GPR_U32(ctx, 31, 0x4E5C0Cu);
    ctx->pc = 0x4E5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5C04u;
    // 0x4e5c08: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5C04u, 0x4E5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5C0Cu;
label_4e5c0c:
    // 0x4e5c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e5c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5c10: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E5C10u;
    SET_GPR_U32(ctx, 31, 0x4E5C18u);
    ctx->pc = 0x4E5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5C10u;
    // 0x4e5c14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E5C10u, 0x4E5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5C18u;
label_4e5c18:
    // 0x4e5c18: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e5c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e5c1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e5c20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e5c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e5c24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E5C24u;
    {
        const bool branch_taken_0x4e5c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C24u;
        // 0x4e5c28: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5c24) {
            ctx->pc = 0x4E5C54u;
            goto label_4e5c54;
        }
    }
    ctx->pc = 0x4E5C2Cu;
    // 0x4e5c2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4e5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5c30: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4e5c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5c34: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4e5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4e5c38: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x4e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4e5c3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4e5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x4e5c40: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x4e5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e5c44: 0x2d1182a  slt         $v1, $s6, $s1
    ctx->pc = 0x4e5c44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4e5c48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e5c4c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4E5C4Cu;
    {
        const bool branch_taken_0x4e5c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C4Cu;
        // 0x4e5c50: 0x29843  sra         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5c4c) {
            ctx->pc = 0x4E5BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5bd0;
        }
    }
    ctx->pc = 0x4E5C54u;
label_4e5c54:
    // 0x4e5c54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4e5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4e5c58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4e5c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4e5c5c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5c60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4e5c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e5c64: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x4e5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x4e5c68: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4e5c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e5c6c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4e5c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e5c70: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4e5c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5c74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e5c74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5c78: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4e5c78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5c7c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4e5c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e5c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5c84: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5C84u;
        // 0x4e5c88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5C8Cu;
    // 0x4e5c8c: 0x0  nop
    ctx->pc = 0x4e5c8cu;
    // NOP
    ctx->pc = 0x4e5c90u;
}
