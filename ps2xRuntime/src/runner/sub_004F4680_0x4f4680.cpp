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

// Function: sub_004F4680
// Address: 0x4f4680 - 0x4f46e0
void sub_004F4680_0x4f4680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4680_0x4f4680");
#endif

    switch (ctx->pc) {
        case 0x4f4680u: goto label_4f4680;
        case 0x4f4684u: goto label_4f4684;
        case 0x4f4688u: goto label_4f4688;
        case 0x4f468cu: goto label_4f468c;
        case 0x4f4690u: goto label_4f4690;
        case 0x4f4694u: goto label_4f4694;
        case 0x4f4698u: goto label_4f4698;
        case 0x4f469cu: goto label_4f469c;
        case 0x4f46a0u: goto label_4f46a0;
        case 0x4f46a4u: goto label_4f46a4;
        case 0x4f46a8u: goto label_4f46a8;
        case 0x4f46acu: goto label_4f46ac;
        case 0x4f46b0u: goto label_4f46b0;
        case 0x4f46b4u: goto label_4f46b4;
        case 0x4f46b8u: goto label_4f46b8;
        case 0x4f46bcu: goto label_4f46bc;
        case 0x4f46c0u: goto label_4f46c0;
        case 0x4f46c4u: goto label_4f46c4;
        case 0x4f46c8u: goto label_4f46c8;
        case 0x4f46ccu: goto label_4f46cc;
        case 0x4f46d0u: goto label_4f46d0;
        case 0x4f46d4u: goto label_4f46d4;
        case 0x4f46d8u: goto label_4f46d8;
        case 0x4f46dcu: goto label_4f46dc;
        default: break;
    }

    ctx->pc = 0x4f4680u;

label_4f4680:
    // 0x4f4680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f4684:
    // 0x4f4684: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f4684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f4688:
    // 0x4f4688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f468c:
    // 0x4f468c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4690:
    // 0x4f4690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f4690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4694:
    // 0x4f4694: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f4694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f4698:
    // 0x4f4698: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f469c:
    // 0x4f469c: 0x40f809  jalr        $v0
label_4f46a0:
    if (ctx->pc == 0x4F46A0u) {
        ctx->pc = 0x4F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F469Cu;
        // 0x4f46a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F46A4u;
        goto label_4f46a4;
    }
    ctx->pc = 0x4F469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F46A4u);
        ctx->pc = 0x4F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F469Cu;
        // 0x4f46a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F469Cu, 0x4F46A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F46A4u;
label_4f46a4:
    // 0x4f46a4: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f46a8:
    if (ctx->pc == 0x4F46A8u) {
        ctx->pc = 0x4F46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46A4u;
        // 0x4f46a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F46ACu;
        goto label_4f46ac;
    }
    ctx->pc = 0x4F46A4u;
    {
        const bool branch_taken_0x4f46a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f46a4) {
            ctx->pc = 0x4F46A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F46A4u;
            // 0x4f46a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F46B4u;
            goto label_4f46b4;
        }
    }
    ctx->pc = 0x4F46ACu;
label_4f46ac:
    // 0x4f46ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f46b0:
    if (ctx->pc == 0x4F46B0u) {
        ctx->pc = 0x4F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46ACu;
        // 0x4f46b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F46B4u;
        goto label_4f46b4;
    }
    ctx->pc = 0x4F46ACu;
    {
        const bool branch_taken_0x4f46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46ACu;
        // 0x4f46b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f46ac) {
            ctx->pc = 0x4F46CCu;
            goto label_4f46cc;
        }
    }
    ctx->pc = 0x4F46B4u;
label_4f46b4:
    // 0x4f46b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f46b8:
    // 0x4f46b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f46bc:
    // 0x4f46bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f46c0:
    // 0x4f46c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f46c4:
    // 0x4f46c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f46c8:
    // 0x4f46c8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f46cc:
    // 0x4f46cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f46ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f46d0:
    // 0x4f46d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f46d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f46d4:
    // 0x4f46d4: 0x3e00008  jr          $ra
label_4f46d8:
    if (ctx->pc == 0x4F46D8u) {
        ctx->pc = 0x4F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46D4u;
        // 0x4f46d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F46DCu;
        goto label_4f46dc;
    }
    ctx->pc = 0x4F46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F46D4u;
        // 0x4f46d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F46D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F46DCu;
label_4f46dc:
    // 0x4f46dc: 0x0  nop
    ctx->pc = 0x4f46dcu;
    // NOP
    ctx->pc = 0x4f46e0u;
}
