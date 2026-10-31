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

// Function: sub_00299F98
// Address: 0x299f98 - 0x299fe0
void sub_00299F98_0x299f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F98_0x299f98");
#endif

    switch (ctx->pc) {
        case 0x299fd0u: goto label_299fd0;
        default: break;
    }

    ctx->pc = 0x299f98u;

    // 0x299f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299f9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x299f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x299fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299fa4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x299fa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fa8: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x299fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x299fac: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x299facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x299fb0: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x299fb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x299fb4: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x299fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x299fb8: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x299fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x299fbc: 0xe46d0008  swc1        $f13, 0x8($v1)
    ctx->pc = 0x299fbcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x299fc0: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x299fc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x299fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x299fc8: 0xc0a679a  jal         func_299E68
    ctx->pc = 0x299FC8u;
    SET_GPR_U32(ctx, 31, 0x299FD0u);
    ctx->pc = 0x299FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299FC8u;
    // 0x299fcc: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E68u, 0x299FC8u, 0x299FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299FD0u;
label_299fd0:
    // 0x299fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x299FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FD4u;
        // 0x299fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FDCu;
    // 0x299fdc: 0x0  nop
    ctx->pc = 0x299fdcu;
    // NOP
    ctx->pc = 0x299fe0u;
}
