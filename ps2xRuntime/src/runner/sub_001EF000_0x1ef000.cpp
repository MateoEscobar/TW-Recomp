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

// Function: sub_001EF000
// Address: 0x1ef000 - 0x1ef058
void sub_001EF000_0x1ef000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF000_0x1ef000");
#endif

    switch (ctx->pc) {
        case 0x1ef024u: goto label_1ef024;
        case 0x1ef02cu: goto label_1ef02c;
        default: break;
    }

    ctx->pc = 0x1ef000u;

    // 0x1ef000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef004: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ef004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef008: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1ef008u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1ef00c: 0x26c56f20  addiu       $a1, $s6, 0x6F20
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28448));
    // 0x1ef010: 0x2406030e  addiu       $a2, $zero, 0x30E
    ctx->pc = 0x1ef010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 782));
    // 0x1ef014: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ef018: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1ef018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1ef01c: 0xc13a766  jal         func_4E9D98
    ctx->pc = 0x1EF01Cu;
    SET_GPR_U32(ctx, 31, 0x1EF024u);
    ctx->pc = 0x1EF020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF01Cu;
    // 0x1ef020: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9D98u, 0x1EF01Cu, 0x1EF024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF024u;
label_1ef024:
    // 0x1ef024: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1ef024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1ef028: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1ef028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1ef02c:
    // 0x1ef02c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ef02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef030: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ef030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef034: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ef034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef038: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ef038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef03c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ef03cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef040: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ef040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef044: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ef044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF04Cu;
        // 0x1ef050: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF054u;
    // 0x1ef054: 0x0  nop
    ctx->pc = 0x1ef054u;
    // NOP
    ctx->pc = 0x1ef058u;
}
