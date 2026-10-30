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

// Function: sub_00335320
// Address: 0x335320 - 0x335390
void sub_00335320_0x335320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335320_0x335320");
#endif

    switch (ctx->pc) {
        case 0x335330u: goto label_335330;
        default: break;
    }

    ctx->pc = 0x335320u;

    // 0x335320: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x335320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335324: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x335324u;
    {
        const bool branch_taken_0x335324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335324u;
        // 0x335328: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335324) {
            ctx->pc = 0x335348u;
            goto label_335348;
        }
    }
    ctx->pc = 0x33532Cu;
    // 0x33532c: 0x0  nop
    ctx->pc = 0x33532cu;
    // NOP
label_335330:
    // 0x335330: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x335330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x335334: 0x0  nop
    ctx->pc = 0x335334u;
    // NOP
    // 0x335338: 0x0  nop
    ctx->pc = 0x335338u;
    // NOP
    // 0x33533c: 0x0  nop
    ctx->pc = 0x33533cu;
    // NOP
    // 0x335340: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x335340u;
    {
        const bool branch_taken_0x335340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335340u;
        // 0x335344: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335340) {
            ctx->pc = 0x335330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335330;
        }
    }
    ctx->pc = 0x335348u;
label_335348:
    // 0x335348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33534c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335350: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x335350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x335354: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x335354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x335358: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x335358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33535c: 0x3e00008  jr          $ra
    ctx->pc = 0x33535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33535Cu;
        // 0x335360: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335364u;
    // 0x335364: 0x0  nop
    ctx->pc = 0x335364u;
    // NOP
    // 0x335368: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33536c: 0x0  nop
    ctx->pc = 0x33536cu;
    // NOP
    // 0x335370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x335370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x335374: 0x0  nop
    ctx->pc = 0x335374u;
    // NOP
    // 0x335378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x335378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33537c: 0x0  nop
    ctx->pc = 0x33537cu;
    // NOP
    // 0x335380: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x335384: 0x0  nop
    ctx->pc = 0x335384u;
    // NOP
    // 0x335388: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x335388u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x33538c: 0x0  nop
    ctx->pc = 0x33538cu;
    // NOP
    ctx->pc = 0x335390u;
}
