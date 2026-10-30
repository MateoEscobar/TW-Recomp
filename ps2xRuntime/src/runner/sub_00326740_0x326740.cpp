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

// Function: sub_00326740
// Address: 0x326740 - 0x326788
void sub_00326740_0x326740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326740_0x326740");
#endif

    switch (ctx->pc) {
        case 0x32676cu: goto label_32676c;
        default: break;
    }

    ctx->pc = 0x326740u;

    // 0x326740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x326744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32674c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32674cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326750: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x326750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x326754: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x326754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x326758: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x326758u;
    {
        const bool branch_taken_0x326758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x326758) {
            ctx->pc = 0x32675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326758u;
            // 0x32675c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32677Cu;
            goto label_32677c;
        }
    }
    ctx->pc = 0x326760u;
    // 0x326760: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x326760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x326764: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x326764u;
    SET_GPR_U32(ctx, 31, 0x32676Cu);
    ctx->pc = 0x326768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326764u;
    // 0x326768: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x326764u, 0x32676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32676Cu;
label_32676c:
    // 0x32676c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326770: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x326770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x326774: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x326774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x326778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x326778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32677c:
    // 0x32677c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326780: 0x3e00008  jr          $ra
    ctx->pc = 0x326780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326780u;
        // 0x326784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326788u;
}
