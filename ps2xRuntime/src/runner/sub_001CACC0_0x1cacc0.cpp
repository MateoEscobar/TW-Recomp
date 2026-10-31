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

// Function: sub_001CACC0
// Address: 0x1cacc0 - 0x1cad38
void sub_001CACC0_0x1cacc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CACC0_0x1cacc0");
#endif

    switch (ctx->pc) {
        case 0x1cace0u: goto label_1cace0;
        case 0x1cacf4u: goto label_1cacf4;
        case 0x1cad0cu: goto label_1cad0c;
        default: break;
    }

    ctx->pc = 0x1cacc0u;

    // 0x1cacc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cacc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cacc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cacc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cacc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1caccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cacccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cacd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cacd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cacd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CACD4u;
    {
        const bool branch_taken_0x1cacd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACD4u;
        // 0x1cacd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacd4) {
            ctx->pc = 0x1CAD04u;
            goto label_1cad04;
        }
    }
    ctx->pc = 0x1CACDCu;
    // 0x1cacdc: 0x0  nop
    ctx->pc = 0x1cacdcu;
    // NOP
label_1cace0:
    // 0x1cace0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CACE0u;
    {
        const bool branch_taken_0x1cace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cace0) {
            ctx->pc = 0x1CAD04u;
            goto label_1cad04;
        }
    }
    ctx->pc = 0x1CACE8u;
    // 0x1cace8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cacec: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1CACECu;
    SET_GPR_U32(ctx, 31, 0x1CACF4u);
    ctx->pc = 0x1CACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACECu;
    // 0x1cacf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1CACECu, 0x1CACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACF4u;
label_1cacf4:
    // 0x1cacf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CACF4u;
    {
        const bool branch_taken_0x1cacf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACF4u;
        // 0x1cacf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf4) {
            ctx->pc = 0x1CAD04u;
            goto label_1cad04;
        }
    }
    ctx->pc = 0x1CACFCu;
    // 0x1cacfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CACFCu;
    {
        const bool branch_taken_0x1cacfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACFCu;
        // 0x1cad00: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacfc) {
            ctx->pc = 0x1CAD1Cu;
            goto label_1cad1c;
        }
    }
    ctx->pc = 0x1CAD04u;
label_1cad04:
    // 0x1cad04: 0xc072c64  jal         func_1CB190
    ctx->pc = 0x1CAD04u;
    SET_GPR_U32(ctx, 31, 0x1CAD0Cu);
    ctx->pc = 0x1CAD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD04u;
    // 0x1cad08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x1CAD04u, 0x1CAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD0Cu;
label_1cad0c:
    // 0x1cad0c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CAD0Cu;
    {
        const bool branch_taken_0x1cad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cad0c) {
            ctx->pc = 0x1CAD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAD0Cu;
            // 0x1cad10: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cace0;
        }
    }
    ctx->pc = 0x1CAD14u;
    // 0x1cad14: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cad18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cad1c:
    // 0x1cad1c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cad20: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1cad20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1cad24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cad28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cad28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cad2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cad30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD30u;
        // 0x1cad34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAD38u;
}
