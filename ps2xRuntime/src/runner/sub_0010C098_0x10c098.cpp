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

// Function: sub_0010C098
// Address: 0x10c098 - 0x10c100
void sub_0010C098_0x10c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C098_0x10c098");
#endif

    switch (ctx->pc) {
        case 0x10c0b0u: goto label_10c0b0;
        default: break;
    }

    ctx->pc = 0x10c098u;

    // 0x10c098: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10c098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10c09c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c0a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10c0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c0a8: 0xc0437be  jal         func_10DEF8
    ctx->pc = 0x10C0A8u;
    SET_GPR_U32(ctx, 31, 0x10C0B0u);
    ctx->pc = 0x10C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0A8u;
    // 0x10c0ac: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEF8u, 0x10C0A8u, 0x10C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0B0u;
label_10c0b0:
    // 0x10c0b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10C0B0u;
    {
        const bool branch_taken_0x10c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0B0u;
        // 0x10c0b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0b0) {
            ctx->pc = 0x10C0E4u;
            goto label_10c0e4;
        }
    }
    ctx->pc = 0x10C0B8u;
    // 0x10c0b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c0bc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x10c0c0: 0x8c63040c  lw          $v1, 0x40C($v1)
    ctx->pc = 0x10c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
    // 0x10c0c4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C0C4u;
    {
        const bool branch_taken_0x10c0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0C4u;
        // 0x10c0c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0c4) {
            ctx->pc = 0x10C0D4u;
            goto label_10c0d4;
        }
    }
    ctx->pc = 0x10C0CCu;
    // 0x10c0cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C0CCu;
    {
        const bool branch_taken_0x10c0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c0cc) {
            ctx->pc = 0x10C0E4u;
            goto label_10c0e4;
        }
    }
    ctx->pc = 0x10C0D4u;
label_10c0d4:
    // 0x10c0d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10c0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c0dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C0DCu;
    {
        const bool branch_taken_0x10c0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0DCu;
        // 0x10c0e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0dc) {
            ctx->pc = 0x10C0F0u;
            goto label_10c0f0;
        }
    }
    ctx->pc = 0x10C0E4u;
label_10c0e4:
    // 0x10c0e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c0e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10c0f0:
    // 0x10c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0F0u;
        // 0x10c0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C0F8u;
    // 0x10c0f8: 0x0  nop
    ctx->pc = 0x10c0f8u;
    // NOP
    // 0x10c0fc: 0x0  nop
    ctx->pc = 0x10c0fcu;
    // NOP
    ctx->pc = 0x10c100u;
}
