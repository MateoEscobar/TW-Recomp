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

// Function: sub_00335D08
// Address: 0x335d08 - 0x335d98
void sub_00335D08_0x335d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335D08_0x335d08");
#endif

    switch (ctx->pc) {
        case 0x335d30u: goto label_335d30;
        case 0x335d78u: goto label_335d78;
        default: break;
    }

    ctx->pc = 0x335d08u;

    // 0x335d08: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x335d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x335d0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335d10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x335d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335d14: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x335d14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x335d18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x335d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335d1c: 0x0  nop
    ctx->pc = 0x335d1cu;
    // NOP
    // 0x335d20: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x335D20u;
    {
        const bool branch_taken_0x335d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335d20) {
            ctx->pc = 0x335D48u;
            goto label_335d48;
        }
    }
    ctx->pc = 0x335D28u;
    // 0x335d28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x335d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x335d2c: 0x0  nop
    ctx->pc = 0x335d2cu;
    // NOP
label_335d30:
    // 0x335d30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x335d30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335d34: 0x0  nop
    ctx->pc = 0x335d34u;
    // NOP
    // 0x335d38: 0x0  nop
    ctx->pc = 0x335d38u;
    // NOP
    // 0x335d3c: 0x0  nop
    ctx->pc = 0x335d3cu;
    // NOP
    // 0x335d40: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x335D40u;
    {
        const bool branch_taken_0x335d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335d40) {
            ctx->pc = 0x335D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335D40u;
            // 0x335d44: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335d30;
        }
    }
    ctx->pc = 0x335D48u;
label_335d48:
    // 0x335d48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x335d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335d4c: 0x0  nop
    ctx->pc = 0x335d4cu;
    // NOP
    // 0x335d50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x335d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335d54: 0x0  nop
    ctx->pc = 0x335d54u;
    // NOP
    // 0x335d58: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x335D58u;
    {
        const bool branch_taken_0x335d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x335d58) {
            ctx->pc = 0x335D90u;
            goto label_335d90;
        }
    }
    ctx->pc = 0x335D60u;
    // 0x335d60: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x335d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x335d64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335d68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x335d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335d6c: 0x0  nop
    ctx->pc = 0x335d6cu;
    // NOP
    // 0x335d70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x335d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x335d74: 0x0  nop
    ctx->pc = 0x335d74u;
    // NOP
label_335d78:
    // 0x335d78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x335d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335d7c: 0x0  nop
    ctx->pc = 0x335d7cu;
    // NOP
    // 0x335d80: 0x0  nop
    ctx->pc = 0x335d80u;
    // NOP
    // 0x335d84: 0x0  nop
    ctx->pc = 0x335d84u;
    // NOP
    // 0x335d88: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x335D88u;
    {
        const bool branch_taken_0x335d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335d88) {
            ctx->pc = 0x335D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335D88u;
            // 0x335d8c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335d78;
        }
    }
    ctx->pc = 0x335D90u;
label_335d90:
    // 0x335d90: 0x3e00008  jr          $ra
    ctx->pc = 0x335D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335D98u;
}
