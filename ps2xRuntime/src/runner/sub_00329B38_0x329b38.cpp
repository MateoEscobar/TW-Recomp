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

// Function: sub_00329B38
// Address: 0x329b38 - 0x329bd0
void sub_00329B38_0x329b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329B38_0x329b38");
#endif

    switch (ctx->pc) {
        case 0x329b78u: goto label_329b78;
        case 0x329b94u: goto label_329b94;
        default: break;
    }

    ctx->pc = 0x329b38u;

    // 0x329b38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x329b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x329b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329b40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x329b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x329b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x329b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x329b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x329b4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x329b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x329b50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x329b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x329b54: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x329b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x329b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329b5c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x329b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x329b60: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x329B60u;
    {
        const bool branch_taken_0x329b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B60u;
        // 0x329b64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b60) {
            ctx->pc = 0x329BA8u;
            goto label_329ba8;
        }
    }
    ctx->pc = 0x329B68u;
    // 0x329b68: 0x2415fffe  addiu       $s5, $zero, -0x2
    ctx->pc = 0x329b68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x329b6c: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x329b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x329b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x329b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b74: 0x0  nop
    ctx->pc = 0x329b74u;
    // NOP
label_329b78:
    // 0x329b78: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x329b7c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x329b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x329b80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x329b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329b84: 0x54750006  bnel        $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x329B84u;
    {
        const bool branch_taken_0x329b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x329b84) {
            ctx->pc = 0x329B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B84u;
            // 0x329b88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329BA0u;
            goto label_329ba0;
        }
    }
    ctx->pc = 0x329B8Cu;
    // 0x329b8c: 0xc0ca6b0  jal         func_329AC0
    ctx->pc = 0x329B8Cu;
    SET_GPR_U32(ctx, 31, 0x329B94u);
    ctx->pc = 0x329B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B8Cu;
    // 0x329b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AC0u, 0x329B8Cu, 0x329B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B94u;
label_329b94:
    // 0x329b94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329B94u;
    {
        const bool branch_taken_0x329b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b94) {
            ctx->pc = 0x329B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B94u;
            // 0x329b98: 0xae140010  sw          $s4, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B9Cu;
            goto label_329b9c;
        }
    }
    ctx->pc = 0x329B9Cu;
label_329b9c:
    // 0x329b9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x329b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_329ba0:
    // 0x329ba0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x329BA0u;
    {
        const bool branch_taken_0x329ba0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BA0u;
        // 0x329ba4: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ba0) {
            ctx->pc = 0x329B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b78;
        }
    }
    ctx->pc = 0x329BA8u;
label_329ba8:
    // 0x329ba8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x329ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x329bac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x329bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329bb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x329bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329bb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329bb8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x329bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329bbc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x329bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x329BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BC4u;
        // 0x329bc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329BCCu;
    // 0x329bcc: 0x0  nop
    ctx->pc = 0x329bccu;
    // NOP
    ctx->pc = 0x329bd0u;
}
