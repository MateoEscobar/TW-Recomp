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

// Function: sub_002EC4E8
// Address: 0x2ec4e8 - 0x2ec530
void sub_002EC4E8_0x2ec4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC4E8_0x2ec4e8");
#endif

    switch (ctx->pc) {
        case 0x2ec4fcu: goto label_2ec4fc;
        default: break;
    }

    ctx->pc = 0x2ec4e8u;

    // 0x2ec4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec4f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec4f4: 0xc087408  jal         func_21D020
    ctx->pc = 0x2EC4F4u;
    SET_GPR_U32(ctx, 31, 0x2EC4FCu);
    ctx->pc = 0x2EC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4F4u;
    // 0x2ec4f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x2EC4F4u, 0x2EC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4FCu;
label_2ec4fc:
    // 0x2ec4fc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2ec500: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ec500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ec504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec508: 0x0  nop
    ctx->pc = 0x2ec508u;
    // NOP
    // 0x2ec50c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec510: 0x0  nop
    ctx->pc = 0x2ec510u;
    // NOP
    // 0x2ec514: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC514u;
    {
        const bool branch_taken_0x2ec514 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC514u;
        // 0x2ec518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec514) {
            ctx->pc = 0x2EC520u;
            goto label_2ec520;
        }
    }
    ctx->pc = 0x2EC51Cu;
    // 0x2ec51c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec520:
    // 0x2ec520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec524: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC524u;
        // 0x2ec528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC52Cu;
    // 0x2ec52c: 0x0  nop
    ctx->pc = 0x2ec52cu;
    // NOP
    ctx->pc = 0x2ec530u;
}
