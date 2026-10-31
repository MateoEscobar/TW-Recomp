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

// Function: sub_002EAB08
// Address: 0x2eab08 - 0x2eab50
void sub_002EAB08_0x2eab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAB08_0x2eab08");
#endif

    switch (ctx->pc) {
        case 0x2eab1cu: goto label_2eab1c;
        default: break;
    }

    ctx->pc = 0x2eab08u;

    // 0x2eab08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eab0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eab10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eab14: 0xc087408  jal         func_21D020
    ctx->pc = 0x2EAB14u;
    SET_GPR_U32(ctx, 31, 0x2EAB1Cu);
    ctx->pc = 0x2EAB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB14u;
    // 0x2eab18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x2EAB14u, 0x2EAB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB1Cu;
label_2eab1c:
    // 0x2eab1c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2eab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2eab20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eab20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2eab24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab28: 0x0  nop
    ctx->pc = 0x2eab28u;
    // NOP
    // 0x2eab2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eab2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eab30: 0x0  nop
    ctx->pc = 0x2eab30u;
    // NOP
    // 0x2eab34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAB34u;
    {
        const bool branch_taken_0x2eab34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB34u;
        // 0x2eab38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab34) {
            ctx->pc = 0x2EAB40u;
            goto label_2eab40;
        }
    }
    ctx->pc = 0x2EAB3Cu;
    // 0x2eab3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eab3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eab40:
    // 0x2eab40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eab44: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB44u;
        // 0x2eab48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAB4Cu;
    // 0x2eab4c: 0x0  nop
    ctx->pc = 0x2eab4cu;
    // NOP
    ctx->pc = 0x2eab50u;
}
