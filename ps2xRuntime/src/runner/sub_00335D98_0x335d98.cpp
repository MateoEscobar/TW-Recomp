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

// Function: sub_00335D98
// Address: 0x335d98 - 0x335e00
void sub_00335D98_0x335d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335D98_0x335d98");
#endif

    switch (ctx->pc) {
        case 0x335dacu: goto label_335dac;
        default: break;
    }

    ctx->pc = 0x335d98u;

    // 0x335d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335d9c: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x335d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x335da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335da4: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x335DA4u;
    SET_GPR_U32(ctx, 31, 0x335DACu);
    ctx->pc = 0x335DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335DA4u;
    // 0x335da8: 0xc48d0004  lwc1        $f13, 0x4($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x335DA4u, 0x335DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DACu;
label_335dac:
    // 0x335dac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x335dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x335db0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335db4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x335db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335db8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x335db8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x335dbc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x335dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335dc0: 0x0  nop
    ctx->pc = 0x335dc0u;
    // NOP
    // 0x335dc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x335DC4u;
    {
        const bool branch_taken_0x335dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335dc4) {
            ctx->pc = 0x335DD4u;
            goto label_335dd4;
        }
    }
    ctx->pc = 0x335DCCu;
    // 0x335dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x335DCCu;
    {
        const bool branch_taken_0x335dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DCCu;
        // 0x335dd0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dcc) {
            ctx->pc = 0x335DF0u;
            goto label_335df0;
        }
    }
    ctx->pc = 0x335DD4u;
label_335dd4:
    // 0x335dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335dd8: 0x0  nop
    ctx->pc = 0x335dd8u;
    // NOP
    // 0x335ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x335ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335de0: 0x0  nop
    ctx->pc = 0x335de0u;
    // NOP
    // 0x335de4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x335DE4u;
    {
        const bool branch_taken_0x335de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335de4) {
            ctx->pc = 0x335DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DE4u;
            // 0x335de8: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DF0u;
            goto label_335df0;
        }
    }
    ctx->pc = 0x335DECu;
    // 0x335dec: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x335decu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_335df0:
    // 0x335df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335df4: 0x3e00008  jr          $ra
    ctx->pc = 0x335DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DF4u;
        // 0x335df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335DFCu;
    // 0x335dfc: 0x0  nop
    ctx->pc = 0x335dfcu;
    // NOP
    ctx->pc = 0x335e00u;
}
