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

// Function: sub_00440F48
// Address: 0x440f48 - 0x440fc0
void sub_00440F48_0x440f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440F48_0x440f48");
#endif

    switch (ctx->pc) {
        case 0x440f88u: goto label_440f88;
        case 0x440fa0u: goto label_440fa0;
        default: break;
    }

    ctx->pc = 0x440f48u;

    // 0x440f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x440f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x440f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x440f50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x440f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x440f54: 0x3c100052  lui         $s0, 0x52
    ctx->pc = 0x440f54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
    // 0x440f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x440f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x440f5c: 0x8e028ef8  lw          $v0, -0x7108($s0)
    ctx->pc = 0x440f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x518EF8u));
    // 0x440f60: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x440F60u;
    {
        const bool branch_taken_0x440f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x440F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440F60u;
        // 0x440f64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f60) {
            ctx->pc = 0x440FACu;
            goto label_440fac;
        }
    }
    ctx->pc = 0x440F68u;
    // 0x440f68: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x440f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x440f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x440f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440f70: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x440f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
    // 0x440f74: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x440f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x440f78: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x440f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x440f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x440f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440f80: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x440F80u;
    SET_GPR_U32(ctx, 31, 0x440F88u);
    ctx->pc = 0x440F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440F80u;
    // 0x440f84: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x440F80u, 0x440F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440F88u;
label_440f88:
    // 0x440f88: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x440f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x440f8c: 0xae028ef8  sw          $v0, -0x7108($s0)
    ctx->pc = 0x440f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294938360), GPR_U32(ctx, 2));
    // 0x440f90: 0x2463daf0  addiu       $v1, $v1, -0x2510
    ctx->pc = 0x440f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957808));
    // 0x440f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x440f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440f98: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x440F98u;
    SET_GPR_U32(ctx, 31, 0x440FA0u);
    ctx->pc = 0x440F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440F98u;
    // 0x440f9c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x440F98u, 0x440FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440FA0u;
label_440fa0:
    // 0x440fa0: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x440fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x440fa4: 0xac628efc  sw          $v0, -0x7104($v1)
    ctx->pc = 0x440fa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x518EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x518EFCu, _value); } while (0);
    // 0x440fa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x440fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_440fac:
    // 0x440fac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x440facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x440fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x440FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FB0u;
        // 0x440fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440FB8u;
    // 0x440fb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x440fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x440fbc: 0x0  nop
    ctx->pc = 0x440fbcu;
    // NOP
    ctx->pc = 0x440fc0u;
}
