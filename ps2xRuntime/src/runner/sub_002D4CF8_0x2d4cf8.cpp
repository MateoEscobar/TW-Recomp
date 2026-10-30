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

// Function: sub_002D4CF8
// Address: 0x2d4cf8 - 0x2d4d90
void sub_002D4CF8_0x2d4cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4CF8_0x2d4cf8");
#endif

    switch (ctx->pc) {
        case 0x2d4d44u: goto label_2d4d44;
        case 0x2d4d4cu: goto label_2d4d4c;
        case 0x2d4d60u: goto label_2d4d60;
        case 0x2d4d7cu: goto label_2d4d7c;
        default: break;
    }

    ctx->pc = 0x2d4cf8u;

    // 0x2d4cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4cfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d4d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4d0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4d10: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2d4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x2d4d14: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4d18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4d1c: 0xa0600265  sb          $zero, 0x265($v1)
    ctx->pc = 0x2d4d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4d20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4d24: 0x8045000b  lb          $a1, 0xB($v0)
    ctx->pc = 0x2d4d24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2d4d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d2c: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2d4d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2d4d30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d4d34: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2d4d38: 0xa2030015  sb          $v1, 0x15($s0)
    ctx->pc = 0x2d4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4d3c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D4D44u);
    ctx->pc = 0x2D4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D3Cu;
    // 0x2d4d40: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D4D3Cu, 0x2D4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D44u;
label_2d4d44:
    // 0x2d4d44: 0xc089018  jal         func_224060
    ctx->pc = 0x2D4D44u;
    SET_GPR_U32(ctx, 31, 0x2D4D4Cu);
    ctx->pc = 0x2D4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D44u;
    // 0x2d4d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2D4D44u, 0x2D4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D4Cu;
label_2d4d4c:
    // 0x2d4d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4d50: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4D50u;
    {
        const bool branch_taken_0x2d4d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d4d50) {
            ctx->pc = 0x2D4D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4D50u;
            // 0x2d4d54: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4D64u;
            goto label_2d4d64;
        }
    }
    ctx->pc = 0x2D4D58u;
    // 0x2d4d58: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2D4D58u;
    SET_GPR_U32(ctx, 31, 0x2D4D60u);
    ctx->pc = 0x2D4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D58u;
    // 0x2d4d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D4D58u, 0x2D4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D60u;
label_2d4d60:
    // 0x2d4d60: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2d4d60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2d4d64:
    // 0x2d4d64: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2d4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4d70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d4d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4d74: 0xc0b5384  jal         func_2D4E10
    ctx->pc = 0x2D4D74u;
    SET_GPR_U32(ctx, 31, 0x2D4D7Cu);
    ctx->pc = 0x2D4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D74u;
    // 0x2d4d78: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E10u, 0x2D4D74u, 0x2D4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D7Cu;
label_2d4d7c:
    // 0x2d4d7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D88u;
        // 0x2d4d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4D90u;
}
