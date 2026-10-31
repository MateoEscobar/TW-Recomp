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

// Function: sub_002F6318
// Address: 0x2f6318 - 0x2f63b8
void sub_002F6318_0x2f6318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6318_0x2f6318");
#endif

    switch (ctx->pc) {
        case 0x2f633cu: goto label_2f633c;
        case 0x2f6348u: goto label_2f6348;
        case 0x2f6358u: goto label_2f6358;
        case 0x2f6368u: goto label_2f6368;
        case 0x2f6378u: goto label_2f6378;
        case 0x2f638cu: goto label_2f638c;
        default: break;
    }

    ctx->pc = 0x2f6318u;

    // 0x2f6318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f631c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f6320: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f6324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f6324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f6328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f632c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6330: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2f6330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6334: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F6334u;
    SET_GPR_U32(ctx, 31, 0x2F633Cu);
    ctx->pc = 0x2F6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6334u;
    // 0x2f6338: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6334u, 0x2F633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F633Cu;
label_2f633c:
    // 0x2f633c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f633cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6340: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F6340u;
    SET_GPR_U32(ctx, 31, 0x2F6348u);
    ctx->pc = 0x2F6344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6340u;
    // 0x2f6344: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6340u, 0x2F6348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6348u;
label_2f6348:
    // 0x2f6348: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6348u;
    {
        const bool branch_taken_0x2f6348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6348u;
        // 0x2f634c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6348) {
            ctx->pc = 0x2F6370u;
            goto label_2f6370;
        }
    }
    ctx->pc = 0x2F6350u;
    // 0x2f6350: 0xc088e60  jal         func_223980
    ctx->pc = 0x2F6350u;
    SET_GPR_U32(ctx, 31, 0x2F6358u);
    ctx->pc = 0x2F6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6350u;
    // 0x2f6354: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2F6350u, 0x2F6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6358u;
label_2f6358:
    // 0x2f6358: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6358u;
    {
        const bool branch_taken_0x2f6358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6358u;
        // 0x2f635c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6358) {
            ctx->pc = 0x2F63A0u;
            goto label_2f63a0;
        }
    }
    ctx->pc = 0x2F6360u;
    // 0x2f6360: 0xc088e40  jal         func_223900
    ctx->pc = 0x2F6360u;
    SET_GPR_U32(ctx, 31, 0x2F6368u);
    ctx->pc = 0x2F6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6360u;
    // 0x2f6364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2F6360u, 0x2F6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6368u;
label_2f6368:
    // 0x2f6368: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F6368u;
    {
        const bool branch_taken_0x2f6368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6368u;
        // 0x2f636c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6368) {
            ctx->pc = 0x2F63A0u;
            goto label_2f63a0;
        }
    }
    ctx->pc = 0x2F6370u;
label_2f6370:
    // 0x2f6370: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2F6370u;
    SET_GPR_U32(ctx, 31, 0x2F6378u);
    ctx->pc = 0x2F6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6370u;
    // 0x2f6374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2F6370u, 0x2F6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6378u;
label_2f6378:
    // 0x2f6378: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6378u;
    {
        const bool branch_taken_0x2f6378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f6378) {
            ctx->pc = 0x2F637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6378u;
            // 0x2f637c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F63A0u;
            goto label_2f63a0;
        }
    }
    ctx->pc = 0x2F6380u;
    // 0x2f6380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6384: 0xc089998  jal         func_226660
    ctx->pc = 0x2F6384u;
    SET_GPR_U32(ctx, 31, 0x2F638Cu);
    ctx->pc = 0x2F6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6384u;
    // 0x2f6388: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F6384u, 0x2F638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F638Cu;
label_2f638c:
    // 0x2f638c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6394: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6394u;
    {
        const bool branch_taken_0x2f6394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6394u;
        // 0x2f6398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6394) {
            ctx->pc = 0x2F63A0u;
            goto label_2f63a0;
        }
    }
    ctx->pc = 0x2F639Cu;
    // 0x2f639c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f63a0:
    // 0x2f63a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f63a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f63a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f63a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f63a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f63a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f63ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f63acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f63b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F63B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63B0u;
        // 0x2f63b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F63B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F63B8u;
}
