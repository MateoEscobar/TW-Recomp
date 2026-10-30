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

// Function: sub_00465B50
// Address: 0x465b50 - 0x465bf0
void sub_00465B50_0x465b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465B50_0x465b50");
#endif

    switch (ctx->pc) {
        case 0x465ba0u: goto label_465ba0;
        case 0x465bb0u: goto label_465bb0;
        default: break;
    }

    ctx->pc = 0x465b50u;

    // 0x465b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x465b54: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x465b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x465b58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x465b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x465b5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x465b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x465b60: 0x2470e610  addiu       $s0, $v1, -0x19F0
    ctx->pc = 0x465b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960656));
    // 0x465b64: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x465b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x465b68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465b70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x465b70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E614u));
    // 0x465b74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x465B74u;
    {
        const bool branch_taken_0x465b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465B74u;
        // 0x465b78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465b74) {
            ctx->pc = 0x465BC0u;
            goto label_465bc0;
        }
    }
    ctx->pc = 0x465B7Cu;
    // 0x465b7c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x465b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x465b80: 0x8f85849c  lw          $a1, -0x7B64($gp)
    ctx->pc = 0x465b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x465b84: 0x8f8784a0  lw          $a3, -0x7B60($gp)
    ctx->pc = 0x465b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x465b88: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x465b88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x465b8c: 0x2508a2d0  addiu       $t0, $t0, -0x5D30
    ctx->pc = 0x465b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943440));
    // 0x465b90: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x465b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x465b94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x465b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x465b98: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x465B98u;
    SET_GPR_U32(ctx, 31, 0x465BA0u);
    ctx->pc = 0x465B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465B98u;
    // 0x465b9c: 0x35290120  ori         $t1, $t1, 0x120 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x465B98u, 0x465BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465BA0u;
label_465ba0:
    // 0x465ba0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x465BA0u;
    {
        const bool branch_taken_0x465ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x465BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465BA0u;
        // 0x465ba4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ba0) {
            ctx->pc = 0x465BB8u;
            goto label_465bb8;
        }
    }
    ctx->pc = 0x465BA8u;
    // 0x465ba8: 0xc119822  jal         func_466088
    ctx->pc = 0x465BA8u;
    SET_GPR_U32(ctx, 31, 0x465BB0u);
    ctx->pc = 0x466088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466088u, 0x465BA8u, 0x465BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465BB0u;
label_465bb0:
    // 0x465bb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465BB0u;
    {
        const bool branch_taken_0x465bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465BB0u;
        // 0x465bb4: 0x2644e610  addiu       $a0, $s2, -0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465bb0) {
            ctx->pc = 0x465BC4u;
            goto label_465bc4;
        }
    }
    ctx->pc = 0x465BB8u;
label_465bb8:
    // 0x465bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465BB8u;
    {
        const bool branch_taken_0x465bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465BB8u;
        // 0x465bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465bb8) {
            ctx->pc = 0x465BD4u;
            goto label_465bd4;
        }
    }
    ctx->pc = 0x465BC0u;
label_465bc0:
    // 0x465bc0: 0x2644e610  addiu       $a0, $s2, -0x19F0
    ctx->pc = 0x465bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960656));
label_465bc4:
    // 0x465bc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465bc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x465bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x465bcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x465bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x465bd0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x465bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_465bd4:
    // 0x465bd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x465bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x465bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x465bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465be4: 0x3e00008  jr          $ra
    ctx->pc = 0x465BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465BE4u;
        // 0x465be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465BECu;
    // 0x465bec: 0x0  nop
    ctx->pc = 0x465becu;
    // NOP
    ctx->pc = 0x465bf0u;
}
