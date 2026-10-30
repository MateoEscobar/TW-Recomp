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

// Function: sub_001A9678
// Address: 0x1a9678 - 0x1a96f0
void sub_001A9678_0x1a9678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9678_0x1a9678");
#endif

    switch (ctx->pc) {
        case 0x1a9678u: goto label_1a9678;
        case 0x1a967cu: goto label_1a967c;
        case 0x1a9680u: goto label_1a9680;
        case 0x1a9684u: goto label_1a9684;
        case 0x1a9688u: goto label_1a9688;
        case 0x1a968cu: goto label_1a968c;
        case 0x1a9690u: goto label_1a9690;
        case 0x1a9694u: goto label_1a9694;
        case 0x1a9698u: goto label_1a9698;
        case 0x1a969cu: goto label_1a969c;
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96a4u: goto label_1a96a4;
        case 0x1a96a8u: goto label_1a96a8;
        case 0x1a96acu: goto label_1a96ac;
        case 0x1a96b0u: goto label_1a96b0;
        case 0x1a96b4u: goto label_1a96b4;
        case 0x1a96b8u: goto label_1a96b8;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96c0u: goto label_1a96c0;
        case 0x1a96c4u: goto label_1a96c4;
        case 0x1a96c8u: goto label_1a96c8;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a96d0u: goto label_1a96d0;
        case 0x1a96d4u: goto label_1a96d4;
        case 0x1a96d8u: goto label_1a96d8;
        case 0x1a96dcu: goto label_1a96dc;
        case 0x1a96e0u: goto label_1a96e0;
        case 0x1a96e4u: goto label_1a96e4;
        case 0x1a96e8u: goto label_1a96e8;
        case 0x1a96ecu: goto label_1a96ec;
        default: break;
    }

    ctx->pc = 0x1a9678u;

label_1a9678:
    // 0x1a9678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a967c:
    // 0x1a967c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a9680:
    // 0x1a9680: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a9684:
    // 0x1a9684: 0x24900048  addiu       $s0, $a0, 0x48
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_1a9688:
    // 0x1a9688: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a9688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a968c:
    // 0x1a968c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a968cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9690:
    // 0x1a9690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9694:
    // 0x1a9694: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a9698:
    if (ctx->pc == 0x1A9698u) {
        ctx->pc = 0x1A9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9694u;
        // 0x1a9698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A969Cu;
        goto label_1a969c;
    }
    ctx->pc = 0x1A9694u;
    {
        const bool branch_taken_0x1a9694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9694u;
        // 0x1a9698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9694) {
            ctx->pc = 0x1A96A4u;
            goto label_1a96a4;
        }
    }
    ctx->pc = 0x1A969Cu;
label_1a969c:
    // 0x1a969c: 0x0  nop
    ctx->pc = 0x1a969cu;
    // NOP
label_1a96a0:
    // 0x1a96a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a96a4:
    // 0x1a96a4: 0x2e220046  sltiu       $v0, $s1, 0x46
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1a96a8:
    // 0x1a96a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a96ac:
    if (ctx->pc == 0x1A96ACu) {
        ctx->pc = 0x1A96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96A8u;
        // 0x1a96ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96B0u;
        goto label_1a96b0;
    }
    ctx->pc = 0x1A96A8u;
    {
        const bool branch_taken_0x1a96a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96A8u;
        // 0x1a96ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96a8) {
            ctx->pc = 0x1A96D8u;
            goto label_1a96d8;
        }
    }
    ctx->pc = 0x1A96B0u;
label_1a96b0:
    // 0x1a96b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a96b4:
    // 0x1a96b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a96b8:
    // 0x1a96b8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a96b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a96bc:
    // 0x1a96bc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a96c0:
    // 0x1a96c0: 0x40f809  jalr        $v0
label_1a96c4:
    if (ctx->pc == 0x1A96C4u) {
        ctx->pc = 0x1A96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96C0u;
        // 0x1a96c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96C8u;
        goto label_1a96c8;
    }
    ctx->pc = 0x1A96C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A96C8u);
        ctx->pc = 0x1A96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96C0u;
        // 0x1a96c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96C0u, 0x1A96C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A96C8u;
label_1a96c8:
    // 0x1a96c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1a96cc:
    if (ctx->pc == 0x1A96CCu) {
        ctx->pc = 0x1A96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96C8u;
        // 0x1a96cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96D0u;
        goto label_1a96d0;
    }
    ctx->pc = 0x1A96C8u;
    {
        const bool branch_taken_0x1a96c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a96c8) {
            ctx->pc = 0x1A96CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A96C8u;
            // 0x1a96cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A96A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a96a0;
        }
    }
    ctx->pc = 0x1A96D0u;
label_1a96d0:
    // 0x1a96d0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1a96d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a96d4:
    // 0x1a96d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a96d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a96d8:
    // 0x1a96d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a96d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a96dc:
    // 0x1a96dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a96dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a96e0:
    // 0x1a96e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a96e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a96e4:
    // 0x1a96e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a96e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a96e8:
    // 0x1a96e8: 0x3e00008  jr          $ra
label_1a96ec:
    if (ctx->pc == 0x1A96ECu) {
        ctx->pc = 0x1A96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96E8u;
        // 0x1a96ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96F0u;
        goto label_fallthrough_0x1a96e8;
    }
    ctx->pc = 0x1A96E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96E8u;
        // 0x1a96ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a96e8:
    ctx->pc = 0x1A96F0u;
}
