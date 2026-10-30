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

// Function: sub_002BB728
// Address: 0x2bb728 - 0x2bb7b8
void sub_002BB728_0x2bb728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB728_0x2bb728");
#endif

    switch (ctx->pc) {
        case 0x2bb754u: goto label_2bb754;
        case 0x2bb760u: goto label_2bb760;
        case 0x2bb76cu: goto label_2bb76c;
        case 0x2bb77cu: goto label_2bb77c;
        case 0x2bb790u: goto label_2bb790;
        default: break;
    }

    ctx->pc = 0x2bb728u;

    // 0x2bb728: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb72c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bb72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb730: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bb730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bb734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb73c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bb73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bb740: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2bb740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb744: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2bb744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bb748: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2bb748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb74c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB74Cu;
    SET_GPR_U32(ctx, 31, 0x2BB754u);
    ctx->pc = 0x2BB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB74Cu;
    // 0x2bb750: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB74Cu, 0x2BB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB754u;
label_2bb754:
    // 0x2bb754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb758: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2BB758u;
    SET_GPR_U32(ctx, 31, 0x2BB760u);
    ctx->pc = 0x2BB75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB758u;
    // 0x2bb75c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BB758u, 0x2BB760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB760u;
label_2bb760:
    // 0x2bb760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb764: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2BB764u;
    SET_GPR_U32(ctx, 31, 0x2BB76Cu);
    ctx->pc = 0x2BB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB764u;
    // 0x2bb768: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BB764u, 0x2BB76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB76Cu;
label_2bb76c:
    // 0x2bb76c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BB76Cu;
    {
        const bool branch_taken_0x2bb76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB76Cu;
        // 0x2bb770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb76c) {
            ctx->pc = 0x2BB7A4u;
            goto label_2bb7a4;
        }
    }
    ctx->pc = 0x2BB774u;
    // 0x2bb774: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2BB774u;
    SET_GPR_U32(ctx, 31, 0x2BB77Cu);
    ctx->pc = 0x2BB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB774u;
    // 0x2bb778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2BB774u, 0x2BB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB77Cu;
label_2bb77c:
    // 0x2bb77c: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB77Cu;
    {
        const bool branch_taken_0x2bb77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2bb77c) {
            ctx->pc = 0x2BB780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB77Cu;
            // 0x2bb780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB7A4u;
            goto label_2bb7a4;
        }
    }
    ctx->pc = 0x2BB784u;
    // 0x2bb784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb788: 0xc089998  jal         func_226660
    ctx->pc = 0x2BB788u;
    SET_GPR_U32(ctx, 31, 0x2BB790u);
    ctx->pc = 0x2BB78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB788u;
    // 0x2bb78c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2BB788u, 0x2BB790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB790u;
label_2bb790:
    // 0x2bb790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb798: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB798u;
    {
        const bool branch_taken_0x2bb798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB798u;
        // 0x2bb79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb798) {
            ctx->pc = 0x2BB7A4u;
            goto label_2bb7a4;
        }
    }
    ctx->pc = 0x2BB7A0u;
    // 0x2bb7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb7a4:
    // 0x2bb7a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bb7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb7a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bb7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B0u;
        // 0x2bb7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7B8u;
}
