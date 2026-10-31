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

// Function: sub_0047BC98
// Address: 0x47bc98 - 0x47bcf0
void sub_0047BC98_0x47bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BC98_0x47bc98");
#endif

    switch (ctx->pc) {
        case 0x47bce4u: goto label_47bce4;
        default: break;
    }

    ctx->pc = 0x47bc98u;

    // 0x47bc98: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x47bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x47bc9c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x47bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x47bca0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x47bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x47bca4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x47bca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x47bca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x47bcac: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x47bcacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x47bcb0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x47bcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x47bcb4: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x47bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x47bcb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47bcbc: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x47bcbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x47bcc0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x47bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x47bcc4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x47bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x47bcc8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x47bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x47bccc: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x47bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x47bcd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47bcd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x47bcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bcd8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x47bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x47bcdc: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x47BCDCu;
    SET_GPR_U32(ctx, 31, 0x47BCE4u);
    ctx->pc = 0x47BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BCDCu;
    // 0x47bce0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x47BCDCu, 0x47BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BCE4u;
label_47bce4:
    // 0x47bce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x47BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BCE8u;
        // 0x47bcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BCF0u;
}
