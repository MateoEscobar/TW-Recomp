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

// Function: sub_004E6918
// Address: 0x4e6918 - 0x4e6950
void sub_004E6918_0x4e6918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6918_0x4e6918");
#endif

    switch (ctx->pc) {
        case 0x4e6934u: goto label_4e6934;
        default: break;
    }

    ctx->pc = 0x4e6918u;

    // 0x4e6918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e6918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e691c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4e691cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e6920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4e6924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e692c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x4E692Cu;
    SET_GPR_U32(ctx, 31, 0x4E6934u);
    ctx->pc = 0x4E6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E692Cu;
    // 0x4e6930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4E692Cu, 0x4E6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6934u;
label_4e6934:
    // 0x4e6934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e6934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e693c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e693cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6940: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6940u;
        // 0x4e6944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6948u;
    // 0x4e6948: 0xe48c0420  swc1        $f12, 0x420($a0)
    ctx->pc = 0x4e6948u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1056), bits); }
    // 0x4e694c: 0x0  nop
    ctx->pc = 0x4e694cu;
    // NOP
    ctx->pc = 0x4e6950u;
}
