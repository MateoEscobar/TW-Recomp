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

// Function: sub_0040C000
// Address: 0x40c000 - 0x40c0a0
void sub_0040C000_0x40c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C000_0x40c000");
#endif

    switch (ctx->pc) {
        case 0x40c014u: goto label_40c014;
        case 0x40c01cu: goto label_40c01c;
        case 0x40c028u: goto label_40c028;
        case 0x40c034u: goto label_40c034;
        case 0x40c040u: goto label_40c040;
        case 0x40c050u: goto label_40c050;
        case 0x40c05cu: goto label_40c05c;
        case 0x40c064u: goto label_40c064;
        case 0x40c070u: goto label_40c070;
        case 0x40c07cu: goto label_40c07c;
        case 0x40c088u: goto label_40c088;
        default: break;
    }

    ctx->pc = 0x40c000u;

    // 0x40c000: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c004: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40c004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c00c: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C00Cu;
    SET_GPR_U32(ctx, 31, 0x40C014u);
    ctx->pc = 0x40C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C00Cu;
    // 0x40c010: 0x24a583e0  addiu       $a1, $a1, -0x7C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C00Cu, 0x40C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C014u;
label_40c014:
    // 0x40c014: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C014u;
    SET_GPR_U32(ctx, 31, 0x40C01Cu);
    ctx->pc = 0x40C018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C014u;
    // 0x40c018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C014u, 0x40C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C01Cu;
label_40c01c:
    // 0x40c01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c020: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C020u;
    SET_GPR_U32(ctx, 31, 0x40C028u);
    ctx->pc = 0x40C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C020u;
    // 0x40c024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C020u, 0x40C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C028u;
label_40c028:
    // 0x40c028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c02c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40C02Cu;
    SET_GPR_U32(ctx, 31, 0x40C034u);
    ctx->pc = 0x40C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C02Cu;
    // 0x40c030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40C02Cu, 0x40C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C034u;
label_40c034:
    // 0x40c034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c038: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40C038u;
    SET_GPR_U32(ctx, 31, 0x40C040u);
    ctx->pc = 0x40C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C038u;
    // 0x40c03c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40C038u, 0x40C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C040u;
label_40c040:
    // 0x40c040: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c048: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C048u;
    SET_GPR_U32(ctx, 31, 0x40C050u);
    ctx->pc = 0x40C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C048u;
    // 0x40c04c: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C048u, 0x40C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C050u;
label_40c050:
    // 0x40c050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40c050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c054: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40C054u;
    SET_GPR_U32(ctx, 31, 0x40C05Cu);
    ctx->pc = 0x40C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C054u;
    // 0x40c058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40C054u, 0x40C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C05Cu;
label_40c05c:
    // 0x40c05c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C05Cu;
    SET_GPR_U32(ctx, 31, 0x40C064u);
    ctx->pc = 0x40C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C05Cu;
    // 0x40c060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C05Cu, 0x40C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C064u;
label_40c064:
    // 0x40c064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c068: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C068u;
    SET_GPR_U32(ctx, 31, 0x40C070u);
    ctx->pc = 0x40C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C068u;
    // 0x40c06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C068u, 0x40C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C070u;
label_40c070:
    // 0x40c070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c074: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40C074u;
    SET_GPR_U32(ctx, 31, 0x40C07Cu);
    ctx->pc = 0x40C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C074u;
    // 0x40c078: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40C074u, 0x40C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C07Cu;
label_40c07c:
    // 0x40c07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c080: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40C080u;
    SET_GPR_U32(ctx, 31, 0x40C088u);
    ctx->pc = 0x40C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C080u;
    // 0x40c084: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40C080u, 0x40C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C088u;
label_40c088:
    // 0x40c088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c08c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c090: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40c090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c098: 0x3e00008  jr          $ra
    ctx->pc = 0x40C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C098u;
        // 0x40c09c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C0A0u;
}
