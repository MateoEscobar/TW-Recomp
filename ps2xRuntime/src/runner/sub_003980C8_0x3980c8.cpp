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

// Function: sub_003980C8
// Address: 0x3980c8 - 0x398130
void sub_003980C8_0x3980c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003980C8_0x3980c8");
#endif

    switch (ctx->pc) {
        case 0x3980c8u: goto label_3980c8;
        case 0x3980ccu: goto label_3980cc;
        case 0x3980d0u: goto label_3980d0;
        case 0x3980d4u: goto label_3980d4;
        case 0x3980d8u: goto label_3980d8;
        case 0x3980dcu: goto label_3980dc;
        case 0x3980e0u: goto label_3980e0;
        case 0x3980e4u: goto label_3980e4;
        case 0x3980e8u: goto label_3980e8;
        case 0x3980ecu: goto label_3980ec;
        case 0x3980f0u: goto label_3980f0;
        case 0x3980f4u: goto label_3980f4;
        case 0x3980f8u: goto label_3980f8;
        case 0x3980fcu: goto label_3980fc;
        case 0x398100u: goto label_398100;
        case 0x398104u: goto label_398104;
        case 0x398108u: goto label_398108;
        case 0x39810cu: goto label_39810c;
        case 0x398110u: goto label_398110;
        case 0x398114u: goto label_398114;
        case 0x398118u: goto label_398118;
        case 0x39811cu: goto label_39811c;
        case 0x398120u: goto label_398120;
        case 0x398124u: goto label_398124;
        case 0x398128u: goto label_398128;
        case 0x39812cu: goto label_39812c;
        default: break;
    }

    ctx->pc = 0x3980c8u;

label_3980c8:
    // 0x3980c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3980c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3980cc:
    // 0x3980cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3980ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3980d0:
    // 0x3980d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3980d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3980d4:
    // 0x3980d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3980d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3980d8:
    // 0x3980d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3980d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3980dc:
    // 0x3980dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3980e0:
    if (ctx->pc == 0x3980E0u) {
        ctx->pc = 0x3980E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980DCu;
        // 0x3980e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980E4u;
        goto label_3980e4;
    }
    ctx->pc = 0x3980DCu;
    {
        const bool branch_taken_0x3980dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3980E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980DCu;
        // 0x3980e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3980dc) {
            ctx->pc = 0x3980F8u;
            goto label_3980f8;
        }
    }
    ctx->pc = 0x3980E4u;
label_3980e4:
    // 0x3980e4: 0x0  nop
    ctx->pc = 0x3980e4u;
    // NOP
label_3980e8:
    // 0x3980e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3980e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3980ec:
    // 0x3980ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3980ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3980f0:
    // 0x3980f0: 0xc0e55c8  jal         func_395720
label_3980f4:
    if (ctx->pc == 0x3980F4u) {
        ctx->pc = 0x3980F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980F0u;
        // 0x3980f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980F8u;
        goto label_3980f8;
    }
    ctx->pc = 0x3980F0u;
    SET_GPR_U32(ctx, 31, 0x3980F8u);
    ctx->pc = 0x3980F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980F0u;
    // 0x3980f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395720u, 0x3980F0u, 0x3980F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980F8u;
label_3980f8:
    // 0x3980f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3980f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3980fc:
    // 0x3980fc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3980fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_398100:
    // 0x398100: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x398100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_398104:
    // 0x398104: 0x40f809  jalr        $v0
label_398108:
    if (ctx->pc == 0x398108u) {
        ctx->pc = 0x398108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398104u;
        // 0x398108: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39810Cu;
        goto label_39810c;
    }
    ctx->pc = 0x398104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39810Cu);
        ctx->pc = 0x398108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398104u;
        // 0x398108: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398104u, 0x39810Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39810Cu;
label_39810c:
    // 0x39810c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x39810cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_398110:
    // 0x398110: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x398110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398114:
    // 0x398114: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_398118:
    if (ctx->pc == 0x398118u) {
        ctx->pc = 0x398118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398114u;
        // 0x398118: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39811Cu;
        goto label_39811c;
    }
    ctx->pc = 0x398114u;
    {
        const bool branch_taken_0x398114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398114u;
        // 0x398118: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398114) {
            ctx->pc = 0x3980E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3980e8;
        }
    }
    ctx->pc = 0x39811Cu;
label_39811c:
    // 0x39811c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39811cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398120:
    // 0x398120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398124:
    // 0x398124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_398128:
    // 0x398128: 0x3e00008  jr          $ra
label_39812c:
    if (ctx->pc == 0x39812Cu) {
        ctx->pc = 0x39812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398128u;
        // 0x39812c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398130u;
        goto label_fallthrough_0x398128;
    }
    ctx->pc = 0x398128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398128u;
        // 0x39812c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x398128:
    ctx->pc = 0x398130u;
}
