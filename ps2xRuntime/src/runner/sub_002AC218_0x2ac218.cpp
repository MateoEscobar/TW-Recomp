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

// Function: sub_002AC218
// Address: 0x2ac218 - 0x2ac270
void sub_002AC218_0x2ac218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC218_0x2ac218");
#endif

    ctx->pc = 0x2ac218u;

    // 0x2ac218: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2ac218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2ac21c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC21Cu;
    {
        const bool branch_taken_0x2ac21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac21c) {
            ctx->pc = 0x2AC220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC21Cu;
            // 0x2ac220: 0xdc820030  ld          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC22Cu;
            goto label_2ac22c;
        }
    }
    ctx->pc = 0x2AC224u;
    // 0x2ac224: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC224u;
        // 0x2ac228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC22Cu;
label_2ac22c:
    // 0x2ac22c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x2ac22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ac230: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2ac230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2ac234: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2ac234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2ac238: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2ac238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ac23c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2ac23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2ac240: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x2ac240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x2ac244: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2ac244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ac248: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC248u;
    {
        const bool branch_taken_0x2ac248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC248u;
        // 0x2ac24c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac248) {
            ctx->pc = 0x2AC268u;
            goto label_2ac268;
        }
    }
    ctx->pc = 0x2AC250u;
    // 0x2ac250: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2ac250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ac254: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x2ac254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x2ac258: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2ac258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2ac25c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x2ac25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x2ac260: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC260u;
        // 0x2ac264: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC268u;
label_2ac268:
    // 0x2ac268: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC270u;
}
