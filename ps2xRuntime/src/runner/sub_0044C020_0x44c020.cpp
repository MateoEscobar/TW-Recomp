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

// Function: sub_0044C020
// Address: 0x44c020 - 0x44c0c0
void sub_0044C020_0x44c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C020_0x44c020");
#endif

    switch (ctx->pc) {
        case 0x44c050u: goto label_44c050;
        case 0x44c05cu: goto label_44c05c;
        case 0x44c068u: goto label_44c068;
        case 0x44c074u: goto label_44c074;
        case 0x44c080u: goto label_44c080;
        case 0x44c08cu: goto label_44c08c;
        case 0x44c098u: goto label_44c098;
        case 0x44c0a8u: goto label_44c0a8;
        default: break;
    }

    ctx->pc = 0x44c020u;

    // 0x44c020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44c024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c02c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44c030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44c034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44c034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c038: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x44c038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x44c03c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x44c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x44c040: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x44c040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x44c044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44c048: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C048u;
    SET_GPR_U32(ctx, 31, 0x44C050u);
    ctx->pc = 0x44C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C048u;
    // 0x44c04c: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C048u, 0x44C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C050u;
label_44c050:
    // 0x44c050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c054: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C054u;
    SET_GPR_U32(ctx, 31, 0x44C05Cu);
    ctx->pc = 0x44C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C054u;
    // 0x44c058: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C054u, 0x44C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C05Cu;
label_44c05c:
    // 0x44c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c060: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C060u;
    SET_GPR_U32(ctx, 31, 0x44C068u);
    ctx->pc = 0x44C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C060u;
    // 0x44c064: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C060u, 0x44C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C068u;
label_44c068:
    // 0x44c068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c06c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C06Cu;
    SET_GPR_U32(ctx, 31, 0x44C074u);
    ctx->pc = 0x44C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C06Cu;
    // 0x44c070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C06Cu, 0x44C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C074u;
label_44c074:
    // 0x44c074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c078: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C078u;
    SET_GPR_U32(ctx, 31, 0x44C080u);
    ctx->pc = 0x44C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C078u;
    // 0x44c07c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C078u, 0x44C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C080u;
label_44c080:
    // 0x44c080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c084: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C084u;
    SET_GPR_U32(ctx, 31, 0x44C08Cu);
    ctx->pc = 0x44C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C084u;
    // 0x44c088: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C084u, 0x44C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C08Cu;
label_44c08c:
    // 0x44c08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c090: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C090u;
    SET_GPR_U32(ctx, 31, 0x44C098u);
    ctx->pc = 0x44C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C090u;
    // 0x44c094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C090u, 0x44C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C098u;
label_44c098:
    // 0x44c098: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x44c098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x44c09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c0a0: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C0A0u;
    SET_GPR_U32(ctx, 31, 0x44C0A8u);
    ctx->pc = 0x44C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0A0u;
    // 0x44c0a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C0A0u, 0x44C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0A8u;
label_44c0a8:
    // 0x44c0a8: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x44c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x44c0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c0b8: 0x8113196  j           func_44C658
    ctx->pc = 0x44C0B8u;
    ctx->pc = 0x44C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0B8u;
    // 0x44c0bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C658u;
    sub_0044C658_0x44c658(rdram, ctx, runtime); return;
    ctx->pc = 0x44C0C0u;
}
