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

// Function: sub_004F31C8
// Address: 0x4f31c8 - 0x4f3228
void sub_004F31C8_0x4f31c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F31C8_0x4f31c8");
#endif

    switch (ctx->pc) {
        case 0x4f31c8u: goto label_4f31c8;
        case 0x4f31ccu: goto label_4f31cc;
        case 0x4f31d0u: goto label_4f31d0;
        case 0x4f31d4u: goto label_4f31d4;
        case 0x4f31d8u: goto label_4f31d8;
        case 0x4f31dcu: goto label_4f31dc;
        case 0x4f31e0u: goto label_4f31e0;
        case 0x4f31e4u: goto label_4f31e4;
        case 0x4f31e8u: goto label_4f31e8;
        case 0x4f31ecu: goto label_4f31ec;
        case 0x4f31f0u: goto label_4f31f0;
        case 0x4f31f4u: goto label_4f31f4;
        case 0x4f31f8u: goto label_4f31f8;
        case 0x4f31fcu: goto label_4f31fc;
        case 0x4f3200u: goto label_4f3200;
        case 0x4f3204u: goto label_4f3204;
        case 0x4f3208u: goto label_4f3208;
        case 0x4f320cu: goto label_4f320c;
        case 0x4f3210u: goto label_4f3210;
        case 0x4f3214u: goto label_4f3214;
        case 0x4f3218u: goto label_4f3218;
        case 0x4f321cu: goto label_4f321c;
        case 0x4f3220u: goto label_4f3220;
        case 0x4f3224u: goto label_4f3224;
        default: break;
    }

    ctx->pc = 0x4f31c8u;

label_4f31c8:
    // 0x4f31c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f31c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f31cc:
    // 0x4f31cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f31ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f31d0:
    // 0x4f31d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f31d4:
    // 0x4f31d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f31d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f31d8:
    // 0x4f31d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f31dc:
    // 0x4f31dc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f31dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f31e0:
    // 0x4f31e0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f31e4:
    // 0x4f31e4: 0x40f809  jalr        $v0
label_4f31e8:
    if (ctx->pc == 0x4F31E8u) {
        ctx->pc = 0x4F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31E4u;
        // 0x4f31e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F31ECu;
        goto label_4f31ec;
    }
    ctx->pc = 0x4F31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F31ECu);
        ctx->pc = 0x4F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31E4u;
        // 0x4f31e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F31E4u, 0x4F31ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F31ECu;
label_4f31ec:
    // 0x4f31ec: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f31f0:
    if (ctx->pc == 0x4F31F0u) {
        ctx->pc = 0x4F31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31ECu;
        // 0x4f31f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F31F4u;
        goto label_4f31f4;
    }
    ctx->pc = 0x4F31ECu;
    {
        const bool branch_taken_0x4f31ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f31ec) {
            ctx->pc = 0x4F31F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F31ECu;
            // 0x4f31f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F31FCu;
            goto label_4f31fc;
        }
    }
    ctx->pc = 0x4F31F4u;
label_4f31f4:
    // 0x4f31f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f31f8:
    if (ctx->pc == 0x4F31F8u) {
        ctx->pc = 0x4F31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31F4u;
        // 0x4f31f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F31FCu;
        goto label_4f31fc;
    }
    ctx->pc = 0x4F31F4u;
    {
        const bool branch_taken_0x4f31f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31F4u;
        // 0x4f31f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f31f4) {
            ctx->pc = 0x4F3214u;
            goto label_4f3214;
        }
    }
    ctx->pc = 0x4F31FCu;
label_4f31fc:
    // 0x4f31fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f3200:
    // 0x4f3200: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f3200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f3204:
    // 0x4f3204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f3204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f3208:
    // 0x4f3208: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f3208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f320c:
    // 0x4f320c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f3210:
    // 0x4f3210: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f3210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f3214:
    // 0x4f3214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f3214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3218:
    // 0x4f3218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f321c:
    // 0x4f321c: 0x3e00008  jr          $ra
label_4f3220:
    if (ctx->pc == 0x4F3220u) {
        ctx->pc = 0x4F3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F321Cu;
        // 0x4f3220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3224u;
        goto label_4f3224;
    }
    ctx->pc = 0x4F321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F321Cu;
        // 0x4f3220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3224u;
label_4f3224:
    // 0x4f3224: 0x0  nop
    ctx->pc = 0x4f3224u;
    // NOP
    ctx->pc = 0x4f3228u;
}
