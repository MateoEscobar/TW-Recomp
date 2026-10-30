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

// Function: sub_001C98A8
// Address: 0x1c98a8 - 0x1c9978
void sub_001C98A8_0x1c98a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C98A8_0x1c98a8");
#endif

    switch (ctx->pc) {
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98f4u: goto label_1c98f4;
        case 0x1c9900u: goto label_1c9900;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9960u: goto label_1c9960;
        default: break;
    }

    ctx->pc = 0x1c98a8u;

    // 0x1c98a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c98a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c98ac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c98acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c98b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c98b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c98b4: 0x2442ab28  addiu       $v0, $v0, -0x54D8
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945576));
    // 0x1c98b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c98bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c98bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c98c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c98c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98c8: 0xc072860  jal         func_1CA180
    ctx->pc = 0x1C98C8u;
    SET_GPR_U32(ctx, 31, 0x1C98D0u);
    ctx->pc = 0x1C98CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98C8u;
    // 0x1c98cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA180u, 0x1C98C8u, 0x1C98D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98D0u;
label_1c98d0:
    // 0x1c98d0: 0x260409f0  addiu       $a0, $s0, 0x9F0
    ctx->pc = 0x1c98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    // 0x1c98d4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C98D4u;
    SET_GPR_U32(ctx, 31, 0x1C98DCu);
    ctx->pc = 0x1C98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98D4u;
    // 0x1c98d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C98D4u, 0x1C98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98DCu;
label_1c98dc:
    // 0x1c98dc: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    // 0x1c98e0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1C98E0u;
    SET_GPR_U32(ctx, 31, 0x1C98E8u);
    ctx->pc = 0x1C98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98E0u;
    // 0x1c98e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1C98E0u, 0x1C98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98E8u;
label_1c98e8:
    // 0x1c98e8: 0x26040850  addiu       $a0, $s0, 0x850
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    // 0x1c98ec: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1C98ECu;
    SET_GPR_U32(ctx, 31, 0x1C98F4u);
    ctx->pc = 0x1C98F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98ECu;
    // 0x1c98f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1C98ECu, 0x1C98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98F4u;
label_1c98f4:
    // 0x1c98f4: 0x26040750  addiu       $a0, $s0, 0x750
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    // 0x1c98f8: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C98F8u;
    SET_GPR_U32(ctx, 31, 0x1C9900u);
    ctx->pc = 0x1C98FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98F8u;
    // 0x1c98fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C98F8u, 0x1C9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9900u;
label_1c9900:
    // 0x1c9900: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1c9904: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C9904u;
    SET_GPR_U32(ctx, 31, 0x1C990Cu);
    ctx->pc = 0x1C9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9904u;
    // 0x1c9908: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C9904u, 0x1C990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C990Cu;
label_1c990c:
    // 0x1c990c: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x1c990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x1c9910: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C9910u;
    SET_GPR_U32(ctx, 31, 0x1C9918u);
    ctx->pc = 0x1C9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9910u;
    // 0x1c9914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C9910u, 0x1C9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9918u;
label_1c9918:
    // 0x1c9918: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x1c9918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x1c991c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C991Cu;
    SET_GPR_U32(ctx, 31, 0x1C9924u);
    ctx->pc = 0x1C9920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C991Cu;
    // 0x1c9920: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C991Cu, 0x1C9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9924u;
label_1c9924:
    // 0x1c9924: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x1c9928: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C9928u;
    SET_GPR_U32(ctx, 31, 0x1C9930u);
    ctx->pc = 0x1C992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9928u;
    // 0x1c992c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C9928u, 0x1C9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9930u;
label_1c9930:
    // 0x1c9930: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1c9934: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C9934u;
    SET_GPR_U32(ctx, 31, 0x1C993Cu);
    ctx->pc = 0x1C9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9934u;
    // 0x1c9938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C9934u, 0x1C993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C993Cu;
label_1c993c:
    // 0x1c993c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1c993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c9940: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C9940u;
    SET_GPR_U32(ctx, 31, 0x1C9948u);
    ctx->pc = 0x1C9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9940u;
    // 0x1c9944: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C9940u, 0x1C9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9948u;
label_1c9948:
    // 0x1c9948: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c9948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c994c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C994Cu;
    SET_GPR_U32(ctx, 31, 0x1C9954u);
    ctx->pc = 0x1C9950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C994Cu;
    // 0x1c9950: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C994Cu, 0x1C9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9954u;
label_1c9954:
    // 0x1c9954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9958: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1C9958u;
    SET_GPR_U32(ctx, 31, 0x1C9960u);
    ctx->pc = 0x1C995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9958u;
    // 0x1c995c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1C9958u, 0x1C9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9960u;
label_1c9960:
    // 0x1c9960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c996c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C996Cu;
        // 0x1c9970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9974u;
    // 0x1c9974: 0x0  nop
    ctx->pc = 0x1c9974u;
    // NOP
    ctx->pc = 0x1c9978u;
}
