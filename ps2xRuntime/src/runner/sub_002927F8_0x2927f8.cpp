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

// Function: sub_002927F8
// Address: 0x2927f8 - 0x292848
void sub_002927F8_0x2927f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002927F8_0x2927f8");
#endif

    switch (ctx->pc) {
        case 0x292818u: goto label_292818;
        case 0x292820u: goto label_292820;
        case 0x292830u: goto label_292830;
        default: break;
    }

    ctx->pc = 0x2927f8u;

    // 0x2927f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2927fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x292800: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292804: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29280c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292810: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292810u;
    SET_GPR_U32(ctx, 31, 0x292818u);
    ctx->pc = 0x292814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292810u;
    // 0x292814: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292810u, 0x292818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292818u;
label_292818:
    // 0x292818: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292818u;
    SET_GPR_U32(ctx, 31, 0x292820u);
    ctx->pc = 0x29281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292818u;
    // 0x29281c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292818u, 0x292820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292820u;
label_292820:
    // 0x292820: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292820u;
    {
        const bool branch_taken_0x292820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292820) {
            ctx->pc = 0x292824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292820u;
            // 0x292824: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292838u;
            goto label_292838;
        }
    }
    ctx->pc = 0x292828u;
    // 0x292828: 0xc087502  jal         func_21D408
    ctx->pc = 0x292828u;
    SET_GPR_U32(ctx, 31, 0x292830u);
    ctx->pc = 0x29282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292828u;
    // 0x29282c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292828u, 0x292830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292830u;
label_292830:
    // 0x292830: 0xa0500228  sb          $s0, 0x228($v0)
    ctx->pc = 0x292830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 552), (uint8_t)GPR_U32(ctx, 16));
    // 0x292834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292838:
    // 0x292838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29283c: 0x3e00008  jr          $ra
    ctx->pc = 0x29283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29283Cu;
        // 0x292840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292844u;
    // 0x292844: 0x0  nop
    ctx->pc = 0x292844u;
    // NOP
    ctx->pc = 0x292848u;
}
