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

// Function: sub_004836D0
// Address: 0x4836d0 - 0x483720
void sub_004836D0_0x4836d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004836D0_0x4836d0");
#endif

    switch (ctx->pc) {
        case 0x4836f0u: goto label_4836f0;
        case 0x4836f8u: goto label_4836f8;
        default: break;
    }

    ctx->pc = 0x4836d0u;

    // 0x4836d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4836d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4836d4: 0x8f828618  lw          $v0, -0x79E8($gp)
    ctx->pc = 0x4836d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x4836d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4836d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4836dc: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x4836dcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4836e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4836E0u;
    {
        const bool branch_taken_0x4836e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4836E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4836E0u;
        // 0x4836e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4836e0) {
            ctx->pc = 0x483700u;
            goto label_483700;
        }
    }
    ctx->pc = 0x4836E8u;
    // 0x4836e8: 0xc11fe66  jal         func_47F998
    ctx->pc = 0x4836E8u;
    SET_GPR_U32(ctx, 31, 0x4836F0u);
    ctx->pc = 0x47F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F998u, 0x4836E8u, 0x4836F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836F0u;
label_4836f0:
    // 0x4836f0: 0xc11f830  jal         func_47E0C0
    ctx->pc = 0x4836F0u;
    SET_GPR_U32(ctx, 31, 0x4836F8u);
    ctx->pc = 0x47E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E0C0u, 0x4836F0u, 0x4836F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4836F8u;
label_4836f8:
    // 0x4836f8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4836f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4836fc: 0xac40ae3c  sw          $zero, -0x51C4($v0)
    ctx->pc = 0x4836fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x70AE3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70AE3Cu, _value); } while (0);
label_483700:
    // 0x483700: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x483708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48370c: 0x3e00008  jr          $ra
    ctx->pc = 0x48370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48370Cu;
        // 0x483710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483714u;
    // 0x483714: 0x0  nop
    ctx->pc = 0x483714u;
    // NOP
    // 0x483718: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x483718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48371c: 0x0  nop
    ctx->pc = 0x48371cu;
    // NOP
    ctx->pc = 0x483720u;
}
