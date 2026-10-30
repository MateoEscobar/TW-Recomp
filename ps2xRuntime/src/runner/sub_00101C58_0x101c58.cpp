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

// Function: sub_00101C58
// Address: 0x101c58 - 0x101ce0
void sub_00101C58_0x101c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101C58_0x101c58");
#endif

    switch (ctx->pc) {
        case 0x101c78u: goto label_101c78;
        case 0x101c90u: goto label_101c90;
        default: break;
    }

    ctx->pc = 0x101c58u;

    // 0x101c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101c64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101c70: 0xc040494  jal         func_101250
    ctx->pc = 0x101C70u;
    SET_GPR_U32(ctx, 31, 0x101C78u);
    ctx->pc = 0x101C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C70u;
    // 0x101c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101C70u, 0x101C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C78u;
label_101c78:
    // 0x101c78: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x101c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c80: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x101C80u;
    {
        const bool branch_taken_0x101c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C80u;
        // 0x101c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c80) {
            ctx->pc = 0x101CC0u;
            goto label_101cc0;
        }
    }
    ctx->pc = 0x101C88u;
    // 0x101c88: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x101c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x101c8c: 0x0  nop
    ctx->pc = 0x101c8cu;
    // NOP
label_101c90:
    // 0x101c90: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x101c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x101c94: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x101C94u;
    {
        const bool branch_taken_0x101c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x101c94) {
            ctx->pc = 0x101C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101C94u;
            // 0x101c98: 0x9603001a  lhu         $v1, 0x1A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101CACu;
            goto label_101cac;
        }
    }
    ctx->pc = 0x101C9Cu;
    // 0x101c9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x101c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ca4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101CA4u;
    {
        const bool branch_taken_0x101ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CA4u;
        // 0x101ca8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ca4) {
            ctx->pc = 0x101CC8u;
            goto label_101cc8;
        }
    }
    ctx->pc = 0x101CACu;
label_101cac:
    // 0x101cac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cb0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x101cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x101cb4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x101cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x101cb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x101CB8u;
    {
        const bool branch_taken_0x101cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CB8u;
        // 0x101cbc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cb8) {
            ctx->pc = 0x101C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101c90;
        }
    }
    ctx->pc = 0x101CC0u;
label_101cc0:
    // 0x101cc0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x101cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x101cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101cc8:
    // 0x101cc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x101CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CD4u;
        // 0x101cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101CDCu;
    // 0x101cdc: 0x0  nop
    ctx->pc = 0x101cdcu;
    // NOP
    ctx->pc = 0x101ce0u;
}
