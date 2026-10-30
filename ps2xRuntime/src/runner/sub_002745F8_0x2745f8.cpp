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

// Function: sub_002745F8
// Address: 0x2745f8 - 0x274638
void sub_002745F8_0x2745f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002745F8_0x2745f8");
#endif

    switch (ctx->pc) {
        case 0x274608u: goto label_274608;
        default: break;
    }

    ctx->pc = 0x2745f8u;

    // 0x2745f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2745fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2745fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274600: 0xc09d38e  jal         func_274E38
    ctx->pc = 0x274600u;
    SET_GPR_U32(ctx, 31, 0x274608u);
    ctx->pc = 0x274E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E38u, 0x274600u, 0x274608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27460c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27460cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274610: 0x0  nop
    ctx->pc = 0x274610u;
    // NOP
    // 0x274614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x274614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274618: 0x0  nop
    ctx->pc = 0x274618u;
    // NOP
    // 0x27461c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x27461Cu;
    {
        const bool branch_taken_0x27461c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x274620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27461Cu;
        // 0x274620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27461c) {
            ctx->pc = 0x274628u;
            goto label_274628;
        }
    }
    ctx->pc = 0x274624u;
    // 0x274624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274628:
    // 0x274628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27462c: 0x3e00008  jr          $ra
    ctx->pc = 0x27462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27462Cu;
        // 0x274630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274634u;
    // 0x274634: 0x0  nop
    ctx->pc = 0x274634u;
    // NOP
    ctx->pc = 0x274638u;
}
