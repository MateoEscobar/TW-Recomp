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

// Function: sub_00469E68
// Address: 0x469e68 - 0x469ed8
void sub_00469E68_0x469e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469E68_0x469e68");
#endif

    switch (ctx->pc) {
        case 0x469e90u: goto label_469e90;
        case 0x469eb8u: goto label_469eb8;
        default: break;
    }

    ctx->pc = 0x469e68u;

    // 0x469e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x469e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x469e6c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x469e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x469e70: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x469e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x469e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469e78: 0x24c6a9e0  addiu       $a2, $a2, -0x5620
    ctx->pc = 0x469e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945248));
    // 0x469e7c: 0x24e7aa00  addiu       $a3, $a3, -0x5600
    ctx->pc = 0x469e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945280));
    // 0x469e80: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x469e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x469e84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x469e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x469e88: 0xc120b0c  jal         func_482C30
    ctx->pc = 0x469E88u;
    SET_GPR_U32(ctx, 31, 0x469E90u);
    ctx->pc = 0x469E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469E88u;
    // 0x469e8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482C30u, 0x469E88u, 0x469E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469E90u;
label_469e90:
    // 0x469e90: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x469E90u;
    {
        const bool branch_taken_0x469e90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x469E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469E90u;
        // 0x469e94: 0xaf8284bc  sw          $v0, -0x7B44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469e90) {
            ctx->pc = 0x469EC8u;
            goto label_469ec8;
        }
    }
    ctx->pc = 0x469E98u;
    // 0x469e98: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x469e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x469e9c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x469e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x469ea0: 0x24c6aa08  addiu       $a2, $a2, -0x55F8
    ctx->pc = 0x469ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945288));
    // 0x469ea4: 0x24e7aa28  addiu       $a3, $a3, -0x55D8
    ctx->pc = 0x469ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945320));
    // 0x469ea8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x469ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x469eac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x469eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x469eb0: 0xc11b242  jal         func_46C908
    ctx->pc = 0x469EB0u;
    SET_GPR_U32(ctx, 31, 0x469EB8u);
    ctx->pc = 0x469EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469EB0u;
    // 0x469eb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C908u, 0x469EB0u, 0x469EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469EB8u;
label_469eb8:
    // 0x469eb8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x469eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x469ebc: 0xaf8284c0  sw          $v0, -0x7B40($gp)
    ctx->pc = 0x469ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935744), GPR_U32(ctx, 2));
    // 0x469ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x469EC0u;
    {
        const bool branch_taken_0x469ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469EC0u;
        // 0x469ec4: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469ec0) {
            ctx->pc = 0x469ECCu;
            goto label_469ecc;
        }
    }
    ctx->pc = 0x469EC8u;
label_469ec8:
    // 0x469ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469ecc:
    // 0x469ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x469ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469ED0u;
        // 0x469ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469ED8u;
}
