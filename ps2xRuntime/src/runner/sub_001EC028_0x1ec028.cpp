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

// Function: sub_001EC028
// Address: 0x1ec028 - 0x1ec130
void sub_001EC028_0x1ec028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC028_0x1ec028");
#endif

    switch (ctx->pc) {
        case 0x1ec068u: goto label_1ec068;
        case 0x1ec090u: goto label_1ec090;
        case 0x1ec0a0u: goto label_1ec0a0;
        case 0x1ec0b4u: goto label_1ec0b4;
        case 0x1ec0e4u: goto label_1ec0e4;
        default: break;
    }

    ctx->pc = 0x1ec028u;

    // 0x1ec028: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ec02c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ec02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1ec030: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1ec030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1ec034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec038: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ec038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec03c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1ec03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1ec040: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ec040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ec044: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1ec044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1ec048: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ec048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ec04c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1ec04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1ec050: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1ec050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1ec054: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ec054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ec058: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ec058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ec05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec060: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC060u;
    SET_GPR_U32(ctx, 31, 0x1EC068u);
    ctx->pc = 0x1EC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC060u;
    // 0x1ec064: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC060u, 0x1EC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC068u;
label_1ec068:
    // 0x1ec068: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ec068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ec06c: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1ec070: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x1ec070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ec074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec078: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1ec078u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec07c: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1ec07cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec080: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ec080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec084: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec08c: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x1ec08cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ec090:
    // 0x1ec090: 0x2671ffff  addiu       $s1, $s3, -0x1
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ec094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec098: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC098u;
    SET_GPR_U32(ctx, 31, 0x1EC0A0u);
    ctx->pc = 0x1EC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC098u;
    // 0x1ec09c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC098u, 0x1EC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0A0u;
label_1ec0a0:
    // 0x1ec0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0ac: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC0ACu;
    SET_GPR_U32(ctx, 31, 0x1EC0B4u);
    ctx->pc = 0x1EC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0ACu;
    // 0x1ec0b0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC0ACu, 0x1EC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0B4u;
label_1ec0b4:
    // 0x1ec0b4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1ec0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ec0b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec0bc: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x1ec0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1ec0c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ec0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ec0c4: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ec0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ec0c8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ec0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ec0cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec0d0: 0x1660ffef  bnez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1EC0D0u;
    {
        const bool branch_taken_0x1ec0d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0D0u;
        // 0x1ec0d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0d0) {
            ctx->pc = 0x1EC090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec090;
        }
    }
    ctx->pc = 0x1EC0D8u;
    // 0x1ec0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0dc: 0xc07aff0  jal         func_1EBFC0
    ctx->pc = 0x1EC0DCu;
    SET_GPR_U32(ctx, 31, 0x1EC0E4u);
    ctx->pc = 0x1EC0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0DCu;
    // 0x1ec0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBFC0u, 0x1EC0DCu, 0x1EC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0E4u;
label_1ec0e4:
    // 0x1ec0e4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1ec0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ec0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec0ec: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x1ec0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ec0f0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ec0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec0f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ec0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec0f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ec0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec0fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ec0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec104: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ec104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec108: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1ec108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1ec10c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1ec10cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec110: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x1ec110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x1ec114: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1ec114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec118: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1ec118u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec11c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1ec11cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec124: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC124u;
        // 0x1ec128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC12Cu;
    // 0x1ec12c: 0x0  nop
    ctx->pc = 0x1ec12cu;
    // NOP
    ctx->pc = 0x1ec130u;
}
