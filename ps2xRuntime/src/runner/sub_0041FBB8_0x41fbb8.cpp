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

// Function: sub_0041FBB8
// Address: 0x41fbb8 - 0x41fc08
void sub_0041FBB8_0x41fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FBB8_0x41fbb8");
#endif

    switch (ctx->pc) {
        case 0x41fbe0u: goto label_41fbe0;
        default: break;
    }

    ctx->pc = 0x41fbb8u;

    // 0x41fbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41fbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41fbbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41fbc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fbc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fbc8: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x41fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x41fbcc: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x41fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x41fbd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41FBD0u;
    {
        const bool branch_taken_0x41fbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBD0u;
        // 0x41fbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fbd0) {
            ctx->pc = 0x41FBF8u;
            goto label_41fbf8;
        }
    }
    ctx->pc = 0x41FBD8u;
    // 0x41fbd8: 0xc052e20  jal         func_14B880
    ctx->pc = 0x41FBD8u;
    SET_GPR_U32(ctx, 31, 0x41FBE0u);
    ctx->pc = 0x41FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FBD8u;
    // 0x41fbdc: 0x26040148  addiu       $a0, $s0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B880u, 0x41FBD8u, 0x41FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FBE0u;
label_41fbe0:
    // 0x41fbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41fbe4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x41FBE4u;
    {
        const bool branch_taken_0x41fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBE4u;
        // 0x41fbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fbe4) {
            ctx->pc = 0x41FBF8u;
            goto label_41fbf8;
        }
    }
    ctx->pc = 0x41FBECu;
    // 0x41fbec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41fbf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41fbf4: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x41fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
label_41fbf8:
    // 0x41fbf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41fbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fc00: 0x3e00008  jr          $ra
    ctx->pc = 0x41FC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC00u;
        // 0x41fc04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FC08u;
}
