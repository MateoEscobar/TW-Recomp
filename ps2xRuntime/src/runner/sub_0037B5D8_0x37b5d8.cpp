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

// Function: sub_0037B5D8
// Address: 0x37b5d8 - 0x37b670
void sub_0037B5D8_0x37b5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B5D8_0x37b5d8");
#endif

    switch (ctx->pc) {
        case 0x37b600u: goto label_37b600;
        case 0x37b608u: goto label_37b608;
        case 0x37b61cu: goto label_37b61c;
        case 0x37b624u: goto label_37b624;
        case 0x37b63cu: goto label_37b63c;
        case 0x37b644u: goto label_37b644;
        case 0x37b654u: goto label_37b654;
        default: break;
    }

    ctx->pc = 0x37b5d8u;

    // 0x37b5d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b5dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b5e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37b5e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37b5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37b5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37b5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b5f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B5F8u;
    SET_GPR_U32(ctx, 31, 0x37B600u);
    ctx->pc = 0x37B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B5F8u;
    // 0x37b5fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B5F8u, 0x37B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B600u;
label_37b600:
    // 0x37b600: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B600u;
    SET_GPR_U32(ctx, 31, 0x37B608u);
    ctx->pc = 0x37B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B600u;
    // 0x37b604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B600u, 0x37B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B608u;
label_37b608:
    // 0x37b608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37b608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b60c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37b60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b610: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37b610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b614: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B614u;
    SET_GPR_U32(ctx, 31, 0x37B61Cu);
    ctx->pc = 0x37B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B614u;
    // 0x37b618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B614u, 0x37B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B61Cu;
label_37b61c:
    // 0x37b61c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B61Cu;
    SET_GPR_U32(ctx, 31, 0x37B624u);
    ctx->pc = 0x37B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B61Cu;
    // 0x37b620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B61Cu, 0x37B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B624u;
label_37b624:
    // 0x37b624: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b628: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b62c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b634: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B634u;
    SET_GPR_U32(ctx, 31, 0x37B63Cu);
    ctx->pc = 0x37B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B634u;
    // 0x37b638: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B634u, 0x37B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B63Cu;
label_37b63c:
    // 0x37b63c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B63Cu;
    SET_GPR_U32(ctx, 31, 0x37B644u);
    ctx->pc = 0x37B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B63Cu;
    // 0x37b640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B63Cu, 0x37B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B644u;
label_37b644:
    // 0x37b644: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37b644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37b648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b64c: 0xc107be6  jal         func_41EF98
    ctx->pc = 0x37B64Cu;
    SET_GPR_U32(ctx, 31, 0x37B654u);
    ctx->pc = 0x37B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B64Cu;
    // 0x37b650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EF98u, 0x37B64Cu, 0x37B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B654u;
label_37b654:
    // 0x37b654: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37b654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b65c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37b65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b660: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37b660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b668: 0x3e00008  jr          $ra
    ctx->pc = 0x37B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B668u;
        // 0x37b66c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B670u;
}
