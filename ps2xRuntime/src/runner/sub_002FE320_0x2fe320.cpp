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

// Function: sub_002FE320
// Address: 0x2fe320 - 0x2fe360
void sub_002FE320_0x2fe320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE320_0x2fe320");
#endif

    switch (ctx->pc) {
        case 0x2fe34cu: goto label_2fe34c;
        default: break;
    }

    ctx->pc = 0x2fe320u;

    // 0x2fe320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe324: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2fe324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe32c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe330: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2fe330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe334: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fe334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe338: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2fe338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2fe33c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe340: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fe340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fe344: 0xc08c708  jal         func_231C20
    ctx->pc = 0x2FE344u;
    SET_GPR_U32(ctx, 31, 0x2FE34Cu);
    ctx->pc = 0x2FE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE344u;
    // 0x2fe348: 0xac450144  sw          $a1, 0x144($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C20u, 0x2FE344u, 0x2FE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE34Cu;
label_2fe34c:
    // 0x2fe34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe354: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE354u;
        // 0x2fe358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE35Cu;
    // 0x2fe35c: 0x0  nop
    ctx->pc = 0x2fe35cu;
    // NOP
    ctx->pc = 0x2fe360u;
}
