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

// Function: sub_0044CAA8
// Address: 0x44caa8 - 0x44cb40
void sub_0044CAA8_0x44caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CAA8_0x44caa8");
#endif

    switch (ctx->pc) {
        case 0x44cac0u: goto label_44cac0;
        case 0x44caccu: goto label_44cacc;
        case 0x44cad8u: goto label_44cad8;
        case 0x44cae4u: goto label_44cae4;
        case 0x44caf0u: goto label_44caf0;
        case 0x44cafcu: goto label_44cafc;
        case 0x44cb08u: goto label_44cb08;
        case 0x44cb14u: goto label_44cb14;
        case 0x44cb20u: goto label_44cb20;
        case 0x44cb2cu: goto label_44cb2c;
        default: break;
    }

    ctx->pc = 0x44caa8u;

    // 0x44caa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44caac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44cab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44cab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44cab8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CAB8u;
    SET_GPR_U32(ctx, 31, 0x44CAC0u);
    ctx->pc = 0x44CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAB8u;
    // 0x44cabc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CAB8u, 0x44CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAC0u;
label_44cac0:
    // 0x44cac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cac4: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CAC4u;
    SET_GPR_U32(ctx, 31, 0x44CACCu);
    ctx->pc = 0x44CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAC4u;
    // 0x44cac8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CAC4u, 0x44CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CACCu;
label_44cacc:
    // 0x44cacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44caccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cad0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CAD0u;
    SET_GPR_U32(ctx, 31, 0x44CAD8u);
    ctx->pc = 0x44CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAD0u;
    // 0x44cad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CAD0u, 0x44CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAD8u;
label_44cad8:
    // 0x44cad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cadc: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CADCu;
    SET_GPR_U32(ctx, 31, 0x44CAE4u);
    ctx->pc = 0x44CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CADCu;
    // 0x44cae0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CADCu, 0x44CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAE4u;
label_44cae4:
    // 0x44cae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cae8: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CAE8u;
    SET_GPR_U32(ctx, 31, 0x44CAF0u);
    ctx->pc = 0x44CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAE8u;
    // 0x44caec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CAE8u, 0x44CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAF0u;
label_44caf0:
    // 0x44caf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44caf4: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CAF4u;
    SET_GPR_U32(ctx, 31, 0x44CAFCu);
    ctx->pc = 0x44CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CAF4u;
    // 0x44caf8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CAF4u, 0x44CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CAFCu;
label_44cafc:
    // 0x44cafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cb00: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CB00u;
    SET_GPR_U32(ctx, 31, 0x44CB08u);
    ctx->pc = 0x44CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CB00u;
    // 0x44cb04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CB00u, 0x44CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CB08u;
label_44cb08:
    // 0x44cb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cb0c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CB0Cu;
    SET_GPR_U32(ctx, 31, 0x44CB14u);
    ctx->pc = 0x44CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CB0Cu;
    // 0x44cb10: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CB0Cu, 0x44CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CB14u;
label_44cb14:
    // 0x44cb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cb18: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CB18u;
    SET_GPR_U32(ctx, 31, 0x44CB20u);
    ctx->pc = 0x44CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CB18u;
    // 0x44cb1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CB18u, 0x44CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CB20u;
label_44cb20:
    // 0x44cb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cb24: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44CB24u;
    SET_GPR_U32(ctx, 31, 0x44CB2Cu);
    ctx->pc = 0x44CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CB24u;
    // 0x44cb28: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44CB24u, 0x44CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CB2Cu;
label_44cb2c:
    // 0x44cb2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44cb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44cb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44cb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44cb34: 0x3e00008  jr          $ra
    ctx->pc = 0x44CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CB34u;
        // 0x44cb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CB3Cu;
    // 0x44cb3c: 0x0  nop
    ctx->pc = 0x44cb3cu;
    // NOP
    ctx->pc = 0x44cb40u;
}
