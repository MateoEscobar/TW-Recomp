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

// Function: sub_00332BB0
// Address: 0x332bb0 - 0x332c98
void sub_00332BB0_0x332bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332BB0_0x332bb0");
#endif

    switch (ctx->pc) {
        case 0x332c00u: goto label_332c00;
        case 0x332c20u: goto label_332c20;
        case 0x332c2cu: goto label_332c2c;
        case 0x332c68u: goto label_332c68;
        default: break;
    }

    ctx->pc = 0x332bb0u;

    // 0x332bb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x332bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x332bb4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x332bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332bb8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x332bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x332bbc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x332bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x332bc0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x332bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332bc4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x332bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x332bc8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x332bc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332bcc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x332bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x332bd0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x332bd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332bd4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x332bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x332bd8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x332bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x332bdc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x332bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x332be0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x332be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x332be4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x332be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x332be8: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x332BE8u;
    {
        const bool branch_taken_0x332be8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x332BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BE8u;
        // 0x332bec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332be8) {
            ctx->pc = 0x332C50u;
            goto label_332c50;
        }
    }
    ctx->pc = 0x332BF0u;
    // 0x332bf0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x332bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x332bf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x332bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332bf8: 0x10c2001b  beq         $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x332BF8u;
    {
        const bool branch_taken_0x332bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x332BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BF8u;
        // 0x332bfc: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bf8) {
            ctx->pc = 0x332C68u;
            goto label_332c68;
        }
    }
    ctx->pc = 0x332C00u;
label_332c00:
    // 0x332c00: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x332c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x332c04: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x332c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x332c08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x332c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c0c: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x332c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x332c10: 0x121e000a  beq         $s0, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x332C10u;
    {
        const bool branch_taken_0x332c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x332C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C10u;
        // 0x332c14: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c10) {
            ctx->pc = 0x332C3Cu;
            goto label_332c3c;
        }
    }
    ctx->pc = 0x332C18u;
    // 0x332c18: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x332c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x332c1c: 0x0  nop
    ctx->pc = 0x332c1cu;
    // NOP
label_332c20:
    // 0x332c20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x332c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c24: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x332C24u;
    SET_GPR_U32(ctx, 31, 0x332C2Cu);
    ctx->pc = 0x332C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C24u;
    // 0x332c28: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x332C24u, 0x332C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C2Cu;
label_332c2c:
    // 0x332c2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x332c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x332c30: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x332c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x332c34: 0x1612fffa  bne         $s0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332C34u;
    {
        const bool branch_taken_0x332c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x332C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C34u;
        // 0x332c38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c34) {
            ctx->pc = 0x332C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332c20;
        }
    }
    ctx->pc = 0x332C3Cu;
label_332c3c:
    // 0x332c3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c40: 0x14deffef  bne         $a2, $fp, . + 4 + (-0x11 << 2)
    ctx->pc = 0x332C40u;
    {
        const bool branch_taken_0x332c40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        ctx->pc = 0x332C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C40u;
        // 0x332c44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c40) {
            ctx->pc = 0x332C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332c00;
        }
    }
    ctx->pc = 0x332C48u;
    // 0x332c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332C48u;
    {
        const bool branch_taken_0x332c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C48u;
        // 0x332c4c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c48) {
            ctx->pc = 0x332C6Cu;
            goto label_332c6c;
        }
    }
    ctx->pc = 0x332C50u;
label_332c50:
    // 0x332c50: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x332c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x332c54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x332c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x332c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c5c: 0x3812  mflo        $a3
    ctx->pc = 0x332c5cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x332c60: 0xc0ccab0  jal         func_332AC0
    ctx->pc = 0x332C60u;
    SET_GPR_U32(ctx, 31, 0x332C68u);
    ctx->pc = 0x332C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C60u;
    // 0x332c64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332AC0u, 0x332C60u, 0x332C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C68u;
label_332c68:
    // 0x332c68: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x332c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_332c6c:
    // 0x332c6c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x332c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x332c70: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x332c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x332c74: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x332c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332c78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x332c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332c7c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x332c7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332c80: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x332c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332c84: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x332c84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332c88: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x332c88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332c90: 0x3e00008  jr          $ra
    ctx->pc = 0x332C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C90u;
        // 0x332c94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332C98u;
}
