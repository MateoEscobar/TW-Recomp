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

// Function: sub_00330B40
// Address: 0x330b40 - 0x330bc0
void sub_00330B40_0x330b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330B40_0x330b40");
#endif

    switch (ctx->pc) {
        case 0x330b68u: goto label_330b68;
        case 0x330b9cu: goto label_330b9c;
        default: break;
    }

    ctx->pc = 0x330b40u;

    // 0x330b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330b44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x330b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x330b48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x330b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x330b4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x330b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b50: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x330b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x330b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x330b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x330b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330b60: 0xc0cc0da  jal         func_330368
    ctx->pc = 0x330B60u;
    SET_GPR_U32(ctx, 31, 0x330B68u);
    ctx->pc = 0x330B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B60u;
    // 0x330b64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330368u, 0x330B60u, 0x330B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B68u;
label_330b68:
    // 0x330b68: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x330b68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x330b6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x330b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330b70: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x330b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x330b74: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x330b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x330b78: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x330b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x330b7c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x330b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x330b80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330B80u;
    {
        const bool branch_taken_0x330b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B80u;
        // 0x330b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b80) {
            ctx->pc = 0x330BA8u;
            goto label_330ba8;
        }
    }
    ctx->pc = 0x330B88u;
    // 0x330b88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x330b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x330b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b90: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x330b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x330b94: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x330B94u;
    SET_GPR_U32(ctx, 31, 0x330B9Cu);
    ctx->pc = 0x330B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B94u;
    // 0x330b98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x330B94u, 0x330B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B9Cu;
label_330b9c:
    // 0x330b9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x330B9Cu;
    {
        const bool branch_taken_0x330b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B9Cu;
        // 0x330ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b9c) {
            ctx->pc = 0x330BA8u;
            goto label_330ba8;
        }
    }
    ctx->pc = 0x330BA4u;
    // 0x330ba4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x330ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_330ba8:
    // 0x330ba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x330ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330bac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x330bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330bb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x330bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x330BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BB8u;
        // 0x330bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330BC0u;
}
