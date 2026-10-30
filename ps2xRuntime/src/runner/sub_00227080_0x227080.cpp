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

// Function: sub_00227080
// Address: 0x227080 - 0x2270d0
void sub_00227080_0x227080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227080_0x227080");
#endif

    switch (ctx->pc) {
        case 0x227080u: goto label_227080;
        case 0x227084u: goto label_227084;
        case 0x227088u: goto label_227088;
        case 0x22708cu: goto label_22708c;
        case 0x227090u: goto label_227090;
        case 0x227094u: goto label_227094;
        case 0x227098u: goto label_227098;
        case 0x22709cu: goto label_22709c;
        case 0x2270a0u: goto label_2270a0;
        case 0x2270a4u: goto label_2270a4;
        case 0x2270a8u: goto label_2270a8;
        case 0x2270acu: goto label_2270ac;
        case 0x2270b0u: goto label_2270b0;
        case 0x2270b4u: goto label_2270b4;
        case 0x2270b8u: goto label_2270b8;
        case 0x2270bcu: goto label_2270bc;
        case 0x2270c0u: goto label_2270c0;
        case 0x2270c4u: goto label_2270c4;
        case 0x2270c8u: goto label_2270c8;
        case 0x2270ccu: goto label_2270cc;
        default: break;
    }

    ctx->pc = 0x227080u;

label_227080:
    // 0x227080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227084:
    // 0x227084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_227088:
    // 0x227088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22708c:
    // 0x22708c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_227090:
    if (ctx->pc == 0x227090u) {
        ctx->pc = 0x227090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22708Cu;
        // 0x227090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227094u;
        goto label_227094;
    }
    ctx->pc = 0x22708Cu;
    {
        const bool branch_taken_0x22708c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x227090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22708Cu;
        // 0x227090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22708c) {
            ctx->pc = 0x2270B0u;
            goto label_2270b0;
        }
    }
    ctx->pc = 0x227094u;
label_227094:
    // 0x227094: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_227098:
    // 0x227098: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x227098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22709c:
    // 0x22709c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2270a0:
    // 0x2270a0: 0x40f809  jalr        $v0
label_2270a4:
    if (ctx->pc == 0x2270A4u) {
        ctx->pc = 0x2270A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270A0u;
        // 0x2270a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270A8u;
        goto label_2270a8;
    }
    ctx->pc = 0x2270A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2270A8u);
        ctx->pc = 0x2270A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270A0u;
        // 0x2270a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2270A0u, 0x2270A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2270A8u;
label_2270a8:
    // 0x2270a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2270ac:
    if (ctx->pc == 0x2270ACu) {
        ctx->pc = 0x2270ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270A8u;
        // 0x2270ac: 0xae02033c  sw          $v0, 0x33C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270B0u;
        goto label_2270b0;
    }
    ctx->pc = 0x2270A8u;
    {
        const bool branch_taken_0x2270a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270A8u;
        // 0x2270ac: 0xae02033c  sw          $v0, 0x33C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270a8) {
            ctx->pc = 0x2270BCu;
            goto label_2270bc;
        }
    }
    ctx->pc = 0x2270B0u;
label_2270b0:
    // 0x2270b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2270b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2270b4:
    // 0x2270b4: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2270b8:
    // 0x2270b8: 0xae03033c  sw          $v1, 0x33C($s0)
    ctx->pc = 0x2270b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 3));
label_2270bc:
    // 0x2270bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2270bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2270c0:
    // 0x2270c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2270c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2270c4:
    // 0x2270c4: 0x3e00008  jr          $ra
label_2270c8:
    if (ctx->pc == 0x2270C8u) {
        ctx->pc = 0x2270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C4u;
        // 0x2270c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270CCu;
        goto label_2270cc;
    }
    ctx->pc = 0x2270C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C4u;
        // 0x2270c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2270C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2270CCu;
label_2270cc:
    // 0x2270cc: 0x0  nop
    ctx->pc = 0x2270ccu;
    // NOP
    ctx->pc = 0x2270d0u;
}
