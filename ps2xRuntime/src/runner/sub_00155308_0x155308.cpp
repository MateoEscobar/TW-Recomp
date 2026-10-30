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

// Function: sub_00155308
// Address: 0x155308 - 0x155378
void sub_00155308_0x155308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155308_0x155308");
#endif

    switch (ctx->pc) {
        case 0x15533cu: goto label_15533c;
        case 0x15534cu: goto label_15534c;
        case 0x155360u: goto label_155360;
        case 0x15536cu: goto label_15536c;
        default: break;
    }

    ctx->pc = 0x155308u;

    // 0x155308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15530c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x155310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155314: 0x8c435024  lw          $v1, 0x5024($v0)
    ctx->pc = 0x155314u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x515024u));
    // 0x155318: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x15531c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15531Cu;
    {
        const bool branch_taken_0x15531c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15531Cu;
        // 0x155320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15531c) {
            ctx->pc = 0x15536Cu;
            goto label_15536c;
        }
    }
    ctx->pc = 0x155324u;
    // 0x155324: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x155328: 0x946456dc  lhu         $a0, 0x56DC($v1)
    ctx->pc = 0x155328u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
    // 0x15532c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15532Cu;
    {
        const bool branch_taken_0x15532c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15532c) {
            ctx->pc = 0x155344u;
            goto label_155344;
        }
    }
    ctx->pc = 0x155334u;
    // 0x155334: 0xc081002  jal         func_204008
    ctx->pc = 0x155334u;
    SET_GPR_U32(ctx, 31, 0x15533Cu);
    ctx->pc = 0x204008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204008u, 0x155334u, 0x15533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15533Cu;
label_15533c:
    // 0x15533c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15533Cu;
    {
        const bool branch_taken_0x15533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15533Cu;
        // 0x155340: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15533c) {
            ctx->pc = 0x155370u;
            goto label_155370;
        }
    }
    ctx->pc = 0x155344u;
label_155344:
    // 0x155344: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x155344u;
    SET_GPR_U32(ctx, 31, 0x15534Cu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155344u, 0x15534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15534Cu;
label_15534c:
    // 0x15534c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x15534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x155350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155350u;
    {
        const bool branch_taken_0x155350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155350u;
        // 0x155354: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155350) {
            ctx->pc = 0x155370u;
            goto label_155370;
        }
    }
    ctx->pc = 0x155358u;
    // 0x155358: 0xc05689c  jal         func_15A270
    ctx->pc = 0x155358u;
    SET_GPR_U32(ctx, 31, 0x155360u);
    ctx->pc = 0x15535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155358u;
    // 0x15535c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A270u, 0x155358u, 0x155360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155360u;
label_155360:
    // 0x155360: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x155360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x155364: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x155364u;
    SET_GPR_U32(ctx, 31, 0x15536Cu);
    ctx->pc = 0x155368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155364u;
    // 0x155368: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x155364u, 0x15536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15536Cu;
label_15536c:
    // 0x15536c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155370:
    // 0x155370: 0x3e00008  jr          $ra
    ctx->pc = 0x155370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155370u;
        // 0x155374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155378u;
}
