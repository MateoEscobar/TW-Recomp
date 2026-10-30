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

// Function: sub_004F3228
// Address: 0x4f3228 - 0x4f3288
void sub_004F3228_0x4f3228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3228_0x4f3228");
#endif

    switch (ctx->pc) {
        case 0x4f3228u: goto label_4f3228;
        case 0x4f322cu: goto label_4f322c;
        case 0x4f3230u: goto label_4f3230;
        case 0x4f3234u: goto label_4f3234;
        case 0x4f3238u: goto label_4f3238;
        case 0x4f323cu: goto label_4f323c;
        case 0x4f3240u: goto label_4f3240;
        case 0x4f3244u: goto label_4f3244;
        case 0x4f3248u: goto label_4f3248;
        case 0x4f324cu: goto label_4f324c;
        case 0x4f3250u: goto label_4f3250;
        case 0x4f3254u: goto label_4f3254;
        case 0x4f3258u: goto label_4f3258;
        case 0x4f325cu: goto label_4f325c;
        case 0x4f3260u: goto label_4f3260;
        case 0x4f3264u: goto label_4f3264;
        case 0x4f3268u: goto label_4f3268;
        case 0x4f326cu: goto label_4f326c;
        case 0x4f3270u: goto label_4f3270;
        case 0x4f3274u: goto label_4f3274;
        case 0x4f3278u: goto label_4f3278;
        case 0x4f327cu: goto label_4f327c;
        case 0x4f3280u: goto label_4f3280;
        case 0x4f3284u: goto label_4f3284;
        default: break;
    }

    ctx->pc = 0x4f3228u;

label_4f3228:
    // 0x4f3228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f3228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f322c:
    // 0x4f322c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f3230:
    // 0x4f3230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f3230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f3234:
    // 0x4f3234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f3234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3238:
    // 0x4f3238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f323c:
    // 0x4f323c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f3240:
    if (ctx->pc == 0x4F3240u) {
        ctx->pc = 0x4F3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F323Cu;
        // 0x4f3240: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3244u;
        goto label_4f3244;
    }
    ctx->pc = 0x4F323Cu;
    {
        const bool branch_taken_0x4f323c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F323Cu;
        // 0x4f3240: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f323c) {
            ctx->pc = 0x4F3274u;
            goto label_4f3274;
        }
    }
    ctx->pc = 0x4F3244u;
label_4f3244:
    // 0x4f3244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3248:
    // 0x4f3248: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f3248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f324c:
    // 0x4f324c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f324cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f3250:
    // 0x4f3250: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f3254:
    // 0x4f3254: 0x60f809  jalr        $v1
label_4f3258:
    if (ctx->pc == 0x4F3258u) {
        ctx->pc = 0x4F3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3254u;
        // 0x4f3258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F325Cu;
        goto label_4f325c;
    }
    ctx->pc = 0x4F3254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F325Cu);
        ctx->pc = 0x4F3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3254u;
        // 0x4f3258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3254u, 0x4F325Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F325Cu;
label_4f325c:
    // 0x4f325c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f3260:
    // 0x4f3260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f3260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3264:
    // 0x4f3264: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f3264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f3268:
    // 0x4f3268: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f3268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f326c:
    // 0x4f326c: 0x60f809  jalr        $v1
label_4f3270:
    if (ctx->pc == 0x4F3270u) {
        ctx->pc = 0x4F3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F326Cu;
        // 0x4f3270: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3274u;
        goto label_4f3274;
    }
    ctx->pc = 0x4F326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3274u);
        ctx->pc = 0x4F3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F326Cu;
        // 0x4f3270: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F326Cu, 0x4F3274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3274u;
label_4f3274:
    // 0x4f3274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f3274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3278:
    // 0x4f3278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f3278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f327c:
    // 0x4f327c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3280:
    // 0x4f3280: 0x3e00008  jr          $ra
label_4f3284:
    if (ctx->pc == 0x4F3284u) {
        ctx->pc = 0x4F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3280u;
        // 0x4f3284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3288u;
        goto label_fallthrough_0x4f3280;
    }
    ctx->pc = 0x4F3280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3280u;
        // 0x4f3284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f3280:
    ctx->pc = 0x4F3288u;
}
