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

// Function: sub_0036D5E0
// Address: 0x36d5e0 - 0x36d648
void sub_0036D5E0_0x36d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D5E0_0x36d5e0");
#endif

    switch (ctx->pc) {
        case 0x36d5f8u: goto label_36d5f8;
        case 0x36d608u: goto label_36d608;
        case 0x36d620u: goto label_36d620;
        case 0x36d62cu: goto label_36d62c;
        default: break;
    }

    ctx->pc = 0x36d5e0u;

    // 0x36d5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36d5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d5e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d5f0: 0xc0d5e66  jal         func_357998
    ctx->pc = 0x36D5F0u;
    SET_GPR_U32(ctx, 31, 0x36D5F8u);
    ctx->pc = 0x36D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D5F0u;
    // 0x36d5f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357998u, 0x36D5F0u, 0x36D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5F8u;
label_36d5f8:
    // 0x36d5f8: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x36d5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36d5fc: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x36d5fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x36d600: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36D600u;
    SET_GPR_U32(ctx, 31, 0x36D608u);
    ctx->pc = 0x36D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D600u;
    // 0x36d604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36D600u, 0x36D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D608u;
label_36d608:
    // 0x36d608: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D608u;
    {
        const bool branch_taken_0x36d608 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D608u;
        // 0x36d60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d608) {
            ctx->pc = 0x36D624u;
            goto label_36d624;
        }
    }
    ctx->pc = 0x36D610u;
    // 0x36d610: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x36d610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x36d614: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36d614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36d618: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36D618u;
    SET_GPR_U32(ctx, 31, 0x36D620u);
    ctx->pc = 0x36D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D618u;
    // 0x36d61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36D618u, 0x36D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D620u;
label_36d620:
    // 0x36d620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36d624:
    // 0x36d624: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36D624u;
    SET_GPR_U32(ctx, 31, 0x36D62Cu);
    ctx->pc = 0x36D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D624u;
    // 0x36d628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36D624u, 0x36D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D62Cu;
label_36d62c:
    // 0x36d62c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d63c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D63Cu;
        // 0x36d640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D644u;
    // 0x36d644: 0x0  nop
    ctx->pc = 0x36d644u;
    // NOP
    ctx->pc = 0x36d648u;
}
