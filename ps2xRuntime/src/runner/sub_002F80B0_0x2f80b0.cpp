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

// Function: sub_002F80B0
// Address: 0x2f80b0 - 0x2f8138
void sub_002F80B0_0x2f80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F80B0_0x2f80b0");
#endif

    switch (ctx->pc) {
        case 0x2f80ecu: goto label_2f80ec;
        case 0x2f80fcu: goto label_2f80fc;
        default: break;
    }

    ctx->pc = 0x2f80b0u;

    // 0x2f80b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f80b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f80b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f80b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f80b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f80b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f80bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f80bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f80c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80c4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F80C4u;
    {
        const bool branch_taken_0x2f80c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80C4u;
        // 0x2f80c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80c4) {
            ctx->pc = 0x2F8120u;
            goto label_2f8120;
        }
    }
    ctx->pc = 0x2F80CCu;
    // 0x2f80cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f80d0: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x2f80d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f80d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f80d8: 0xdc6200e0  ld          $v0, 0xE0($v1)
    ctx->pc = 0x2f80d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x2f80dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f80dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2f80e0: 0xfc6200e0  sd          $v0, 0xE0($v1)
    ctx->pc = 0x2f80e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 2));
    // 0x2f80e4: 0xc0a354e  jal         func_28D538
    ctx->pc = 0x2F80E4u;
    SET_GPR_U32(ctx, 31, 0x2F80ECu);
    ctx->pc = 0x2F80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F80E4u;
    // 0x2f80e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x2F80E4u, 0x2F80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F80ECu;
label_2f80ec:
    // 0x2f80ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f80f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f80f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80f4: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2F80F4u;
    SET_GPR_U32(ctx, 31, 0x2F80FCu);
    ctx->pc = 0x2F80F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F80F4u;
    // 0x2f80f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2F80F4u, 0x2F80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F80FCu;
label_2f80fc:
    // 0x2f80fc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2f8100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f8100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8104: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2f8108: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2f8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2f810c: 0xa205002a  sb          $a1, 0x2A($s0)
    ctx->pc = 0x2f810cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f8110: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x2f8114: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x2f8114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8118: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2f8118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2f811c: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x2f811cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
label_2f8120:
    // 0x2f8120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f8120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f8128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f812c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F812Cu;
        // 0x2f8130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F812Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8134u;
    // 0x2f8134: 0x0  nop
    ctx->pc = 0x2f8134u;
    // NOP
    ctx->pc = 0x2f8138u;
}
