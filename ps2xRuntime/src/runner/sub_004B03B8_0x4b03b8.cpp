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

// Function: sub_004B03B8
// Address: 0x4b03b8 - 0x4b0420
void sub_004B03B8_0x4b03b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B03B8_0x4b03b8");
#endif

    switch (ctx->pc) {
        case 0x4b03f4u: goto label_4b03f4;
        default: break;
    }

    ctx->pc = 0x4b03b8u;

    // 0x4b03b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b03b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b03bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b03bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b03c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b03c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b03c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b03c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b03cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b03ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b03d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b03d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b03d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b03d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b03dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b03e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b03e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b03e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B03E4u;
    {
        const bool branch_taken_0x4b03e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B03E4u;
        // 0x4b03e8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b03e4) {
            ctx->pc = 0x4B03F4u;
            goto label_4b03f4;
        }
    }
    ctx->pc = 0x4B03ECu;
    // 0x4b03ec: 0xc12c2a0  jal         func_4B0A80
    ctx->pc = 0x4B03ECu;
    SET_GPR_U32(ctx, 31, 0x4B03F4u);
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4B03ECu, 0x4B03F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B03F4u;
label_4b03f4:
    // 0x4b03f4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x4b03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x4b03f8: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x4b03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x4b03fc: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x4b03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x4b0400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b0400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b0404: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b0404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b0408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b040c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b040cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0414: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0414u;
        // 0x4b0418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B041Cu;
    // 0x4b041c: 0x0  nop
    ctx->pc = 0x4b041cu;
    // NOP
    ctx->pc = 0x4b0420u;
}
