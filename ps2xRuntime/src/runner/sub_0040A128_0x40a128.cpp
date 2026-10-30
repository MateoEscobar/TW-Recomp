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

// Function: sub_0040A128
// Address: 0x40a128 - 0x40a198
void sub_0040A128_0x40a128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A128_0x40a128");
#endif

    switch (ctx->pc) {
        case 0x40a148u: goto label_40a148;
        case 0x40a154u: goto label_40a154;
        case 0x40a160u: goto label_40a160;
        case 0x40a16cu: goto label_40a16c;
        case 0x40a178u: goto label_40a178;
        case 0x40a184u: goto label_40a184;
        default: break;
    }

    ctx->pc = 0x40a128u;

    // 0x40a128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40a128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40a12c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40a130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40a134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a13c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a140: 0xc0c8f4e  jal         func_323D38
    ctx->pc = 0x40A140u;
    SET_GPR_U32(ctx, 31, 0x40A148u);
    ctx->pc = 0x40A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A140u;
    // 0x40a144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D38u, 0x40A140u, 0x40A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A148u;
label_40a148:
    // 0x40a148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a14c: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40A14Cu;
    SET_GPR_U32(ctx, 31, 0x40A154u);
    ctx->pc = 0x40A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A14Cu;
    // 0x40a150: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40A14Cu, 0x40A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A154u;
label_40a154:
    // 0x40a154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a158: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40A158u;
    SET_GPR_U32(ctx, 31, 0x40A160u);
    ctx->pc = 0x40A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A158u;
    // 0x40a15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40A158u, 0x40A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A160u;
label_40a160:
    // 0x40a160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a164: 0xc0c8cf8  jal         func_3233E0
    ctx->pc = 0x40A164u;
    SET_GPR_U32(ctx, 31, 0x40A16Cu);
    ctx->pc = 0x40A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A164u;
    // 0x40a168: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3233E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3233E0u, 0x40A164u, 0x40A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A16Cu;
label_40a16c:
    // 0x40a16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a170: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40A170u;
    SET_GPR_U32(ctx, 31, 0x40A178u);
    ctx->pc = 0x40A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A170u;
    // 0x40a174: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A170u, 0x40A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A178u;
label_40a178:
    // 0x40a178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a17c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A17Cu;
    SET_GPR_U32(ctx, 31, 0x40A184u);
    ctx->pc = 0x40A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A17Cu;
    // 0x40a180: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A17Cu, 0x40A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A184u;
label_40a184:
    // 0x40a184: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40a184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40a188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a190: 0x3e00008  jr          $ra
    ctx->pc = 0x40A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A190u;
        // 0x40a194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A198u;
}
