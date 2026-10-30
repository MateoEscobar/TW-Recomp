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

// Function: sub_0021B228
// Address: 0x21b228 - 0x21b290
void sub_0021B228_0x21b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B228_0x21b228");
#endif

    switch (ctx->pc) {
        case 0x21b24cu: goto label_21b24c;
        case 0x21b280u: goto label_21b280;
        default: break;
    }

    ctx->pc = 0x21b228u;

    // 0x21b228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b22c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21b230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b234: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21B234u;
    {
        const bool branch_taken_0x21b234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B234u;
        // 0x21b238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b234) {
            ctx->pc = 0x21B280u;
            goto label_21b280;
        }
    }
    ctx->pc = 0x21B23Cu;
    // 0x21b23c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x21b240: 0x8e050180  lw          $a1, 0x180($s0)
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x21b244: 0xc044096  jal         func_110258
    ctx->pc = 0x21B244u;
    SET_GPR_U32(ctx, 31, 0x21B24Cu);
    ctx->pc = 0x21B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B244u;
    // 0x21b248: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x21B244u, 0x21B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B24Cu;
label_21b24c:
    // 0x21b24c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21B24Cu;
    {
        const bool branch_taken_0x21b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b24c) {
            ctx->pc = 0x21B250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B24Cu;
            // 0x21b250: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B284u;
            goto label_21b284;
        }
    }
    ctx->pc = 0x21B254u;
    // 0x21b254: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x21b254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21b258: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21b258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21b25c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21b260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b264: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21b264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b268: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21b268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21b26c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b270: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21b270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b274: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21b274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b278: 0xc087d52  jal         func_21F548
    ctx->pc = 0x21B278u;
    SET_GPR_U32(ctx, 31, 0x21B280u);
    ctx->pc = 0x21B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B278u;
    // 0x21b27c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F548u, 0x21B278u, 0x21B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B280u;
label_21b280:
    // 0x21b280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21b284:
    // 0x21b284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b288: 0x3e00008  jr          $ra
    ctx->pc = 0x21B288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B288u;
        // 0x21b28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B290u;
}
