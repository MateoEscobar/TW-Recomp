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

// Function: sub_002D3560
// Address: 0x2d3560 - 0x2d35b8
void sub_002D3560_0x2d3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3560_0x2d3560");
#endif

    switch (ctx->pc) {
        case 0x2d358cu: goto label_2d358c;
        default: break;
    }

    ctx->pc = 0x2d3560u;

    // 0x2d3560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3564: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2d3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d3568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d356c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2d356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2d3570: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2d3570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2d3574: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2d3574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d357c: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2d357cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2d3580: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d3580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d3584: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D3584u;
    SET_GPR_U32(ctx, 31, 0x2D358Cu);
    ctx->pc = 0x2D3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3584u;
    // 0x2d3588: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D3584u, 0x2D358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D358Cu;
label_2d358c:
    // 0x2d358c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2d3590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d3590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3594: 0x0  nop
    ctx->pc = 0x2d3594u;
    // NOP
    // 0x2d3598: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d3598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d359c: 0x0  nop
    ctx->pc = 0x2d359cu;
    // NOP
    // 0x2d35a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D35A0u;
    {
        const bool branch_taken_0x2d35a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35A0u;
        // 0x2d35a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35a0) {
            ctx->pc = 0x2D35ACu;
            goto label_2d35ac;
        }
    }
    ctx->pc = 0x2D35A8u;
    // 0x2d35a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d35a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d35ac:
    // 0x2d35ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d35acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D35B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35B0u;
        // 0x2d35b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D35B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D35B8u;
}
