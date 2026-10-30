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

// Function: sub_00110E98
// Address: 0x110e98 - 0x110ee0
void sub_00110E98_0x110e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E98_0x110e98");
#endif

    switch (ctx->pc) {
        case 0x110ed0u: goto label_110ed0;
        default: break;
    }

    ctx->pc = 0x110e98u;

    // 0x110e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110e9c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110ea0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x110ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110ea4: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110ea8: 0x8fac0038  lw          $t4, 0x38($sp)
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x110eac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x110eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110eb0: 0x93ad0040  lbu         $t5, 0x40($sp)
    ctx->pc = 0x110eb0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110eb4: 0x83ae0048  lb          $t6, 0x48($sp)
    ctx->pc = 0x110eb4u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x110eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110ebc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x110ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x110ec0: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x110ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x110ec4: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x110ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x110ec8: 0xc0433d6  jal         func_10CF58
    ctx->pc = 0x110EC8u;
    SET_GPR_U32(ctx, 31, 0x110ED0u);
    ctx->pc = 0x110ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EC8u;
    // 0x110ecc: 0xafae0018  sw          $t6, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF58u, 0x110EC8u, 0x110ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110ED0u;
label_110ed0:
    // 0x110ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x110ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED4u;
        // 0x110ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110EDCu;
    // 0x110edc: 0x0  nop
    ctx->pc = 0x110edcu;
    // NOP
    ctx->pc = 0x110ee0u;
}
