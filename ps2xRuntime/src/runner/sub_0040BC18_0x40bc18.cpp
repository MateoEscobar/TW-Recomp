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

// Function: sub_0040BC18
// Address: 0x40bc18 - 0x40bc90
void sub_0040BC18_0x40bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BC18_0x40bc18");
#endif

    switch (ctx->pc) {
        case 0x40bc3cu: goto label_40bc3c;
        case 0x40bc48u: goto label_40bc48;
        case 0x40bc54u: goto label_40bc54;
        case 0x40bc60u: goto label_40bc60;
        case 0x40bc68u: goto label_40bc68;
        case 0x40bc78u: goto label_40bc78;
        default: break;
    }

    ctx->pc = 0x40bc18u;

    // 0x40bc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40bc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40bc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40bc20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40bc24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40bc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40bc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc2c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40bc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bc34: 0xc102866  jal         func_40A198
    ctx->pc = 0x40BC34u;
    SET_GPR_U32(ctx, 31, 0x40BC3Cu);
    ctx->pc = 0x40BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC34u;
    // 0x40bc38: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40BC34u, 0x40BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC3Cu;
label_40bc3c:
    // 0x40bc3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40bc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc40: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40BC40u;
    SET_GPR_U32(ctx, 31, 0x40BC48u);
    ctx->pc = 0x40BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC40u;
    // 0x40bc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40BC40u, 0x40BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC48u;
label_40bc48:
    // 0x40bc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc4c: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40BC4Cu;
    SET_GPR_U32(ctx, 31, 0x40BC54u);
    ctx->pc = 0x40BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC4Cu;
    // 0x40bc50: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40BC4Cu, 0x40BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC54u;
label_40bc54:
    // 0x40bc54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40bc58: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40BC58u;
    SET_GPR_U32(ctx, 31, 0x40BC60u);
    ctx->pc = 0x40BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC58u;
    // 0x40bc5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40BC58u, 0x40BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC60u;
label_40bc60:
    // 0x40bc60: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40BC60u;
    SET_GPR_U32(ctx, 31, 0x40BC68u);
    ctx->pc = 0x40BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC60u;
    // 0x40bc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40BC60u, 0x40BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC68u;
label_40bc68:
    // 0x40bc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40bc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc70: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40BC70u;
    SET_GPR_U32(ctx, 31, 0x40BC78u);
    ctx->pc = 0x40BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BC70u;
    // 0x40bc74: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40BC70u, 0x40BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BC78u;
label_40bc78:
    // 0x40bc78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40bc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bc7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40bc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40bc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40bc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bc88: 0x3e00008  jr          $ra
    ctx->pc = 0x40BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BC88u;
        // 0x40bc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BC90u;
}
