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

// Function: sub_00467A30
// Address: 0x467a30 - 0x467ae8
void sub_00467A30_0x467a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467A30_0x467a30");
#endif

    switch (ctx->pc) {
        case 0x467a5cu: goto label_467a5c;
        case 0x467a70u: goto label_467a70;
        case 0x467a84u: goto label_467a84;
        case 0x467ac0u: goto label_467ac0;
        default: break;
    }

    ctx->pc = 0x467a30u;

    // 0x467a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x467a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x467a34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x467a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x467a38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x467a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x467a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x467a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467a40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x467a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x467a44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x467a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x467a48: 0x2611002c  addiu       $s1, $s0, 0x2C
    ctx->pc = 0x467a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x467a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x467a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467a54: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x467A54u;
    SET_GPR_U32(ctx, 31, 0x467A5Cu);
    ctx->pc = 0x467A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467A54u;
    // 0x467a58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x467A54u, 0x467A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467A5Cu;
label_467a5c:
    // 0x467a5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x467A5Cu;
    {
        const bool branch_taken_0x467a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A5Cu;
        // 0x467a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a5c) {
            ctx->pc = 0x467A8Cu;
            goto label_467a8c;
        }
    }
    ctx->pc = 0x467A64u;
    // 0x467a64: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x467a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x467a68: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x467A68u;
    SET_GPR_U32(ctx, 31, 0x467A70u);
    ctx->pc = 0x467A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467A68u;
    // 0x467a6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x467A68u, 0x467A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467A70u;
label_467a70:
    // 0x467a70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x467A70u;
    {
        const bool branch_taken_0x467a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A70u;
        // 0x467a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a70) {
            ctx->pc = 0x467A8Cu;
            goto label_467a8c;
        }
    }
    ctx->pc = 0x467A78u;
    // 0x467a78: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x467a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x467a7c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x467A7Cu;
    SET_GPR_U32(ctx, 31, 0x467A84u);
    ctx->pc = 0x467A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467A7Cu;
    // 0x467a80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x467A7Cu, 0x467A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467A84u;
label_467a84:
    // 0x467a84: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x467A84u;
    {
        const bool branch_taken_0x467a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467a84) {
            ctx->pc = 0x467A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x467A84u;
            // 0x467a88: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x467A94u;
            goto label_467a94;
        }
    }
    ctx->pc = 0x467A8Cu;
label_467a8c:
    // 0x467a8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x467A8Cu;
    {
        const bool branch_taken_0x467a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A8Cu;
        // 0x467a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a8c) {
            ctx->pc = 0x467AD0u;
            goto label_467ad0;
        }
    }
    ctx->pc = 0x467A94u;
label_467a94:
    // 0x467a94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x467A94u;
    {
        const bool branch_taken_0x467a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467A94u;
        // 0x467a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467a94) {
            ctx->pc = 0x467ACCu;
            goto label_467acc;
        }
    }
    ctx->pc = 0x467A9Cu;
    // 0x467a9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x467a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x467aa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x467aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x467aa4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x467aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x467aa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x467aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x467aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x467aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x467ab0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x467ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x467ab4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x467ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x467ab8: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x467AB8u;
    SET_GPR_U32(ctx, 31, 0x467AC0u);
    ctx->pc = 0x467ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467AB8u;
    // 0x467abc: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x467AB8u, 0x467AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467AC0u;
label_467ac0:
    // 0x467ac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x467ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467ac4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x467AC4u;
    {
        const bool branch_taken_0x467ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x467AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467AC4u;
        // 0x467ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467ac4) {
            ctx->pc = 0x467AD0u;
            goto label_467ad0;
        }
    }
    ctx->pc = 0x467ACCu;
label_467acc:
    // 0x467acc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x467accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_467ad0:
    // 0x467ad0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x467ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467ad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x467ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467ad8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x467ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x467AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467AE0u;
        // 0x467ae4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467AE8u;
}
