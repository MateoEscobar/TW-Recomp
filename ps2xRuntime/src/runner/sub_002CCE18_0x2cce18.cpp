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

// Function: sub_002CCE18
// Address: 0x2cce18 - 0x2cce88
void sub_002CCE18_0x2cce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCE18_0x2cce18");
#endif

    switch (ctx->pc) {
        case 0x2cce40u: goto label_2cce40;
        case 0x2cce50u: goto label_2cce50;
        case 0x2cce64u: goto label_2cce64;
        default: break;
    }

    ctx->pc = 0x2cce18u;

    // 0x2cce18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cce1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cce20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cce24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cce24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cce2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cce30: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2cce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2cce34: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2cce34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2cce38: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2CCE38u;
    SET_GPR_U32(ctx, 31, 0x2CCE40u);
    ctx->pc = 0x2CCE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE38u;
    // 0x2cce3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CCE38u, 0x2CCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE40u;
label_2cce40:
    // 0x2cce40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cce44: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2cce44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cce48: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2CCE48u;
    SET_GPR_U32(ctx, 31, 0x2CCE50u);
    ctx->pc = 0x2CCE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE48u;
    // 0x2cce4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2CCE48u, 0x2CCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE50u;
label_2cce50:
    // 0x2cce50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce54: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCE54u;
    {
        const bool branch_taken_0x2cce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cce54) {
            ctx->pc = 0x2CCE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE54u;
            // 0x2cce58: 0x9603003c  lhu         $v1, 0x3C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE68u;
            goto label_2cce68;
        }
    }
    ctx->pc = 0x2CCE5Cu;
    // 0x2cce5c: 0xc08c050  jal         func_230140
    ctx->pc = 0x2CCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCE64u);
    ctx->pc = 0x2CCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE5Cu;
    // 0x2cce60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2CCE5Cu, 0x2CCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE64u;
label_2cce64:
    // 0x2cce64: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x2cce64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_2cce68:
    // 0x2cce68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cce6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cce70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cce70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cce74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cce74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cce78: 0xa44300f4  sh          $v1, 0xF4($v0)
    ctx->pc = 0x2cce78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cce7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE7Cu;
        // 0x2cce80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCE84u;
    // 0x2cce84: 0x0  nop
    ctx->pc = 0x2cce84u;
    // NOP
    ctx->pc = 0x2cce88u;
}
