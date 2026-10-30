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

// Function: sub_00409E78
// Address: 0x409e78 - 0x409f58
void sub_00409E78_0x409e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409E78_0x409e78");
#endif

    switch (ctx->pc) {
        case 0x409e94u: goto label_409e94;
        case 0x409ea0u: goto label_409ea0;
        case 0x409eb4u: goto label_409eb4;
        case 0x409ec4u: goto label_409ec4;
        case 0x409eccu: goto label_409ecc;
        case 0x409ed8u: goto label_409ed8;
        case 0x409ee8u: goto label_409ee8;
        case 0x409ef0u: goto label_409ef0;
        case 0x409efcu: goto label_409efc;
        case 0x409f08u: goto label_409f08;
        case 0x409f14u: goto label_409f14;
        case 0x409f1cu: goto label_409f1c;
        case 0x409f28u: goto label_409f28;
        case 0x409f34u: goto label_409f34;
        case 0x409f40u: goto label_409f40;
        default: break;
    }

    ctx->pc = 0x409e78u;

    // 0x409e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x409e7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x409e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x409e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x409e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409e8c: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x409E8Cu;
    SET_GPR_U32(ctx, 31, 0x409E94u);
    ctx->pc = 0x409E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E8Cu;
    // 0x409e90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x409E8Cu, 0x409E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E94u;
label_409e94:
    // 0x409e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e98: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x409E98u;
    SET_GPR_U32(ctx, 31, 0x409EA0u);
    ctx->pc = 0x409E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E98u;
    // 0x409e9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x409E98u, 0x409EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EA0u;
label_409ea0:
    // 0x409ea0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x409ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x409ea4: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x409EA4u;
    {
        const bool branch_taken_0x409ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x409ea4) {
            ctx->pc = 0x409EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409EA4u;
            // 0x409ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409F38u;
            goto label_409f38;
        }
    }
    ctx->pc = 0x409EACu;
    // 0x409eac: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409EACu;
    SET_GPR_U32(ctx, 31, 0x409EB4u);
    ctx->pc = 0x409EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EACu;
    // 0x409eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409EACu, 0x409EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EB4u;
label_409eb4:
    // 0x409eb4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ebc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409EBCu;
    SET_GPR_U32(ctx, 31, 0x409EC4u);
    ctx->pc = 0x409EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EBCu;
    // 0x409ec0: 0x24a58038  addiu       $a1, $a1, -0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409EBCu, 0x409EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EC4u;
label_409ec4:
    // 0x409ec4: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409EC4u;
    SET_GPR_U32(ctx, 31, 0x409ECCu);
    ctx->pc = 0x409EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EC4u;
    // 0x409ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409EC4u, 0x409ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409ECCu;
label_409ecc:
    // 0x409ecc: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x409eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x409ed0: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409ED0u;
    SET_GPR_U32(ctx, 31, 0x409ED8u);
    ctx->pc = 0x409ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409ED0u;
    // 0x409ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409ED0u, 0x409ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409ED8u;
label_409ed8:
    // 0x409ed8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ee0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409EE0u;
    SET_GPR_U32(ctx, 31, 0x409EE8u);
    ctx->pc = 0x409EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EE0u;
    // 0x409ee4: 0x24a58040  addiu       $a1, $a1, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409EE0u, 0x409EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EE8u;
label_409ee8:
    // 0x409ee8: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409EE8u;
    SET_GPR_U32(ctx, 31, 0x409EF0u);
    ctx->pc = 0x409EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EE8u;
    // 0x409eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409EE8u, 0x409EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EF0u;
label_409ef0:
    // 0x409ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ef4: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409EF4u;
    SET_GPR_U32(ctx, 31, 0x409EFCu);
    ctx->pc = 0x409EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409EF4u;
    // 0x409ef8: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409EF4u, 0x409EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409EFCu;
label_409efc:
    // 0x409efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f00: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409F00u;
    SET_GPR_U32(ctx, 31, 0x409F08u);
    ctx->pc = 0x409F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F00u;
    // 0x409f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409F00u, 0x409F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F08u;
label_409f08:
    // 0x409f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f0c: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x409F0Cu;
    SET_GPR_U32(ctx, 31, 0x409F14u);
    ctx->pc = 0x409F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F0Cu;
    // 0x409f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x409F0Cu, 0x409F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F14u;
label_409f14:
    // 0x409f14: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409F14u;
    SET_GPR_U32(ctx, 31, 0x409F1Cu);
    ctx->pc = 0x409F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F14u;
    // 0x409f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409F14u, 0x409F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F1Cu;
label_409f1c:
    // 0x409f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f20: 0xc1028a4  jal         func_40A290
    ctx->pc = 0x409F20u;
    SET_GPR_U32(ctx, 31, 0x409F28u);
    ctx->pc = 0x409F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F20u;
    // 0x409f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A290u, 0x409F20u, 0x409F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F28u;
label_409f28:
    // 0x409f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409f2c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409F2Cu;
    SET_GPR_U32(ctx, 31, 0x409F34u);
    ctx->pc = 0x409F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F2Cu;
    // 0x409f30: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409F2Cu, 0x409F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F34u;
label_409f34:
    // 0x409f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409f38:
    // 0x409f38: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409F38u;
    SET_GPR_U32(ctx, 31, 0x409F40u);
    ctx->pc = 0x409F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409F38u;
    // 0x409f3c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409F38u, 0x409F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409F40u;
label_409f40:
    // 0x409f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x409f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x409F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409F4Cu;
        // 0x409f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409F54u;
    // 0x409f54: 0x0  nop
    ctx->pc = 0x409f54u;
    // NOP
    ctx->pc = 0x409f58u;
}
