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

// Function: sub_003309F0
// Address: 0x3309f0 - 0x330aa8
void sub_003309F0_0x3309f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003309F0_0x3309f0");
#endif

    switch (ctx->pc) {
        case 0x330a34u: goto label_330a34;
        case 0x330a68u: goto label_330a68;
        default: break;
    }

    ctx->pc = 0x3309f0u;

    // 0x3309f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3309f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3309f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3309f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3309f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3309f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3309fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3309fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330a04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x330a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x330a0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x330a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330a14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330a18: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x330a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x330a1c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x330a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x330a20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330A20u;
    {
        const bool branch_taken_0x330a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A20u;
        // 0x330a24: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a20) {
            ctx->pc = 0x330A34u;
            goto label_330a34;
        }
    }
    ctx->pc = 0x330A28u;
    // 0x330a28: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x330a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x330a2c: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x330A2Cu;
    SET_GPR_U32(ctx, 31, 0x330A34u);
    ctx->pc = 0x330A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330A2Cu;
    // 0x330a30: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x330A2Cu, 0x330A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330A34u;
label_330a34:
    // 0x330a34: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x330a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x330a38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x330a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x330a3c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x330a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x330a40: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x330a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x330a44: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x330a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x330a48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x330a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a4c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x330a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x330a50: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x330a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x330a54: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x330a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x330a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x330a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x330a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a60: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x330A60u;
    SET_GPR_U32(ctx, 31, 0x330A68u);
    ctx->pc = 0x330A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330A60u;
    // 0x330a64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x330A60u, 0x330A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330A68u;
label_330a68:
    // 0x330a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x330a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a6c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x330A6Cu;
    {
        const bool branch_taken_0x330a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a6c) {
            ctx->pc = 0x330A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330A6Cu;
            // 0x330a70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330A84u;
            goto label_330a84;
        }
    }
    ctx->pc = 0x330A74u;
    // 0x330a74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x330a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x330a78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x330a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x330a7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x330a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x330a80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x330a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_330a84:
    // 0x330a84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x330a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x330a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330a8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x330a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330a90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x330a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330a94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x330a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x330A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A9Cu;
        // 0x330aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330AA4u;
    // 0x330aa4: 0x0  nop
    ctx->pc = 0x330aa4u;
    // NOP
    ctx->pc = 0x330aa8u;
}
