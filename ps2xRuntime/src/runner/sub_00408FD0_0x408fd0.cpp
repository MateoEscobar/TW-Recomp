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

// Function: sub_00408FD0
// Address: 0x408fd0 - 0x409068
void sub_00408FD0_0x408fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408FD0_0x408fd0");
#endif

    switch (ctx->pc) {
        case 0x408ff8u: goto label_408ff8;
        case 0x409004u: goto label_409004;
        case 0x409014u: goto label_409014;
        case 0x409020u: goto label_409020;
        case 0x409030u: goto label_409030;
        case 0x40903cu: goto label_40903c;
        case 0x40904cu: goto label_40904c;
        default: break;
    }

    ctx->pc = 0x408fd0u;

    // 0x408fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x408fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x408fd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x408fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x408fd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x408fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x408fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408fe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x408fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x408fe4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x408fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408fe8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x408fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408ff0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x408FF0u;
    SET_GPR_U32(ctx, 31, 0x408FF8u);
    ctx->pc = 0x408FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408FF0u;
    // 0x408ff4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x408FF0u, 0x408FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408FF8u;
label_408ff8:
    // 0x408ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408ffc: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x408FFCu;
    SET_GPR_U32(ctx, 31, 0x409004u);
    ctx->pc = 0x409000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408FFCu;
    // 0x409000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x408FFCu, 0x409004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409004u;
label_409004:
    // 0x409004: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40900c: 0xc10284a  jal         func_40A128
    ctx->pc = 0x40900Cu;
    SET_GPR_U32(ctx, 31, 0x409014u);
    ctx->pc = 0x409010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40900Cu;
    // 0x409010: 0x24a57f00  addiu       $a1, $a1, 0x7F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x40900Cu, 0x409014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409014u;
label_409014:
    // 0x409014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409018: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409018u;
    SET_GPR_U32(ctx, 31, 0x409020u);
    ctx->pc = 0x40901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409018u;
    // 0x40901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409018u, 0x409020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409020u;
label_409020:
    // 0x409020: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409028: 0xc10284a  jal         func_40A128
    ctx->pc = 0x409028u;
    SET_GPR_U32(ctx, 31, 0x409030u);
    ctx->pc = 0x40902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409028u;
    // 0x40902c: 0x24a57f10  addiu       $a1, $a1, 0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x409028u, 0x409030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409030u;
label_409030:
    // 0x409030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409034: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409034u;
    SET_GPR_U32(ctx, 31, 0x40903Cu);
    ctx->pc = 0x409038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409034u;
    // 0x409038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409034u, 0x40903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40903Cu;
label_40903c:
    // 0x40903c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x40903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409044: 0xc10284a  jal         func_40A128
    ctx->pc = 0x409044u;
    SET_GPR_U32(ctx, 31, 0x40904Cu);
    ctx->pc = 0x409048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409044u;
    // 0x409048: 0x24a57f28  addiu       $a1, $a1, 0x7F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x409044u, 0x40904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40904Cu;
label_40904c:
    // 0x40904c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40904cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409050: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409054: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40905c: 0x3e00008  jr          $ra
    ctx->pc = 0x40905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40905Cu;
        // 0x409060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409064u;
    // 0x409064: 0x0  nop
    ctx->pc = 0x409064u;
    // NOP
    ctx->pc = 0x409068u;
}
