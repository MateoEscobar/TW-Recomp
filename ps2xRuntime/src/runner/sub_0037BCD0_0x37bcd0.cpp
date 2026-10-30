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

// Function: sub_0037BCD0
// Address: 0x37bcd0 - 0x37bd30
void sub_0037BCD0_0x37bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BCD0_0x37bcd0");
#endif

    switch (ctx->pc) {
        case 0x37bce8u: goto label_37bce8;
        case 0x37bcf4u: goto label_37bcf4;
        case 0x37bd0cu: goto label_37bd0c;
        case 0x37bd18u: goto label_37bd18;
        default: break;
    }

    ctx->pc = 0x37bcd0u;

    // 0x37bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37bcd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bcd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37bcdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37bce0: 0xc06d234  jal         func_1B48D0
    ctx->pc = 0x37BCE0u;
    SET_GPR_U32(ctx, 31, 0x37BCE8u);
    ctx->pc = 0x37BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BCE0u;
    // 0x37bce4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D0u, 0x37BCE0u, 0x37BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BCE8u;
label_37bce8:
    // 0x37bce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37bce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bcec: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37BCECu;
    SET_GPR_U32(ctx, 31, 0x37BCF4u);
    ctx->pc = 0x37BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BCECu;
    // 0x37bcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37BCECu, 0x37BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BCF4u;
label_37bcf4:
    // 0x37bcf4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BCF4u;
    {
        const bool branch_taken_0x37bcf4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BCF4u;
        // 0x37bcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bcf4) {
            ctx->pc = 0x37BD10u;
            goto label_37bd10;
        }
    }
    ctx->pc = 0x37BCFCu;
    // 0x37bcfc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37bcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37bd00: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37bd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37bd04: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37BD04u;
    SET_GPR_U32(ctx, 31, 0x37BD0Cu);
    ctx->pc = 0x37BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD04u;
    // 0x37bd08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37BD04u, 0x37BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD0Cu;
label_37bd0c:
    // 0x37bd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37bd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37bd10:
    // 0x37bd10: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37BD10u;
    SET_GPR_U32(ctx, 31, 0x37BD18u);
    ctx->pc = 0x37BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD10u;
    // 0x37bd14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37BD10u, 0x37BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD18u;
label_37bd18:
    // 0x37bd18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37bd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37bd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bd28: 0x3e00008  jr          $ra
    ctx->pc = 0x37BD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD28u;
        // 0x37bd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BD30u;
}
