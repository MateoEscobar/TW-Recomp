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

// Function: sub_0035BC40
// Address: 0x35bc40 - 0x35bc98
void sub_0035BC40_0x35bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BC40_0x35bc40");
#endif

    switch (ctx->pc) {
        case 0x35bc5cu: goto label_35bc5c;
        case 0x35bc64u: goto label_35bc64;
        case 0x35bc6cu: goto label_35bc6c;
        case 0x35bc74u: goto label_35bc74;
        case 0x35bc80u: goto label_35bc80;
        default: break;
    }

    ctx->pc = 0x35bc40u;

    // 0x35bc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bc44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35bc4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bc54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BC54u;
    SET_GPR_U32(ctx, 31, 0x35BC5Cu);
    ctx->pc = 0x35BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC54u;
    // 0x35bc58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BC54u, 0x35BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC5Cu;
label_35bc5c:
    // 0x35bc5c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BC5Cu;
    SET_GPR_U32(ctx, 31, 0x35BC64u);
    ctx->pc = 0x35BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC5Cu;
    // 0x35bc60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BC5Cu, 0x35BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC64u;
label_35bc64:
    // 0x35bc64: 0xc08df0e  jal         func_237C38
    ctx->pc = 0x35BC64u;
    SET_GPR_U32(ctx, 31, 0x35BC6Cu);
    ctx->pc = 0x35BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC64u;
    // 0x35bc68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C38u, 0x35BC64u, 0x35BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC6Cu;
label_35bc6c:
    // 0x35bc6c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35BC6Cu;
    SET_GPR_U32(ctx, 31, 0x35BC74u);
    ctx->pc = 0x35BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC6Cu;
    // 0x35bc70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35BC6Cu, 0x35BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC74u;
label_35bc74:
    // 0x35bc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc78: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35BC78u;
    SET_GPR_U32(ctx, 31, 0x35BC80u);
    ctx->pc = 0x35BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC78u;
    // 0x35bc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35BC78u, 0x35BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC80u;
label_35bc80:
    // 0x35bc80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35bc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x35BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC8Cu;
        // 0x35bc90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BC94u;
    // 0x35bc94: 0x0  nop
    ctx->pc = 0x35bc94u;
    // NOP
    ctx->pc = 0x35bc98u;
}
