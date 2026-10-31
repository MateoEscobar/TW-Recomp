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

// Function: sub_0029EF80
// Address: 0x29ef80 - 0x29f098
void sub_0029EF80_0x29ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF80_0x29ef80");
#endif

    switch (ctx->pc) {
        case 0x29efa0u: goto label_29efa0;
        case 0x29efb8u: goto label_29efb8;
        case 0x29efc8u: goto label_29efc8;
        case 0x29efd4u: goto label_29efd4;
        case 0x29eff8u: goto label_29eff8;
        case 0x29f000u: goto label_29f000;
        case 0x29f024u: goto label_29f024;
        case 0x29f038u: goto label_29f038;
        case 0x29f040u: goto label_29f040;
        case 0x29f05cu: goto label_29f05c;
        case 0x29f074u: goto label_29f074;
        case 0x29f080u: goto label_29f080;
        default: break;
    }

    ctx->pc = 0x29ef80u;

    // 0x29ef80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ef84: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ef88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29ef8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ef90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ef90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ef98: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29EF98u;
    SET_GPR_U32(ctx, 31, 0x29EFA0u);
    ctx->pc = 0x29EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF98u;
    // 0x29ef9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29EF98u, 0x29EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFA0u;
label_29efa0:
    // 0x29efa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29efa4: 0x54430037  bnel        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x29EFA4u;
    {
        const bool branch_taken_0x29efa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29efa4) {
            ctx->pc = 0x29EFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EFA4u;
            // 0x29efa8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F084u;
            goto label_29f084;
        }
    }
    ctx->pc = 0x29EFACu;
    // 0x29efac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29efb0: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x29EFB0u;
    SET_GPR_U32(ctx, 31, 0x29EFB8u);
    ctx->pc = 0x29EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFB0u;
    // 0x29efb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x29EFB0u, 0x29EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFB8u;
label_29efb8:
    // 0x29efb8: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x29EFB8u;
    {
        const bool branch_taken_0x29efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29efb8) {
            ctx->pc = 0x29EFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EFB8u;
            // 0x29efbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F084u;
            goto label_29f084;
        }
    }
    ctx->pc = 0x29EFC0u;
    // 0x29efc0: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x29EFC0u;
    SET_GPR_U32(ctx, 31, 0x29EFC8u);
    ctx->pc = 0x29EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFC0u;
    // 0x29efc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x29EFC0u, 0x29EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFC8u;
label_29efc8:
    // 0x29efc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29efcc: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29EFCCu;
    SET_GPR_U32(ctx, 31, 0x29EFD4u);
    ctx->pc = 0x29EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFCCu;
    // 0x29efd0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29EFCCu, 0x29EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFD4u;
label_29efd4:
    // 0x29efd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efd8: 0x6220010  bltzl       $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29EFD8u;
    {
        const bool branch_taken_0x29efd8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x29efd8) {
            ctx->pc = 0x29EFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EFD8u;
            // 0x29efdc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F01Cu;
            goto label_29f01c;
        }
    }
    ctx->pc = 0x29EFE0u;
    // 0x29efe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29efe4: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x29efe8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29efe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29efec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29EFECu;
    {
        const bool branch_taken_0x29efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efec) {
            ctx->pc = 0x29F054u;
            goto label_29f054;
        }
    }
    ctx->pc = 0x29EFF4u;
    // 0x29eff4: 0x0  nop
    ctx->pc = 0x29eff4u;
    // NOP
label_29eff8:
    // 0x29eff8: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x29EFF8u;
    SET_GPR_U32(ctx, 31, 0x29F000u);
    ctx->pc = 0x29EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFF8u;
    // 0x29effc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x29EFF8u, 0x29F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F000u;
label_29f000:
    // 0x29f000: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29f004: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29f004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x29f008: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29f008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f00c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29F00Cu;
    {
        const bool branch_taken_0x29f00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f00c) {
            ctx->pc = 0x29EFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eff8;
        }
    }
    ctx->pc = 0x29F014u;
    // 0x29f014: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29F014u;
    {
        const bool branch_taken_0x29f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f014) {
            ctx->pc = 0x29F054u;
            goto label_29f054;
        }
    }
    ctx->pc = 0x29F01Cu;
label_29f01c:
    // 0x29f01c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x29F01Cu;
    SET_GPR_U32(ctx, 31, 0x29F024u);
    ctx->pc = 0x29F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F01Cu;
    // 0x29f020: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x29F01Cu, 0x29F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F024u;
label_29f024:
    // 0x29f024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29f024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f028: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x29F028u;
    {
        const bool branch_taken_0x29f028 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x29f028) {
            ctx->pc = 0x29F054u;
            goto label_29f054;
        }
    }
    ctx->pc = 0x29F030u;
    // 0x29f030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29F030u;
    {
        const bool branch_taken_0x29f030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F030u;
        // 0x29f034: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f030) {
            ctx->pc = 0x29F044u;
            goto label_29f044;
        }
    }
    ctx->pc = 0x29F038u;
label_29f038:
    // 0x29f038: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x29F038u;
    SET_GPR_U32(ctx, 31, 0x29F040u);
    ctx->pc = 0x29F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F038u;
    // 0x29f03c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x29F038u, 0x29F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F040u;
label_29f040:
    // 0x29f040: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f044:
    // 0x29f044: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x29f048: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x29f048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29f04c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29F04Cu;
    {
        const bool branch_taken_0x29f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f04c) {
            ctx->pc = 0x29F038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f038;
        }
    }
    ctx->pc = 0x29F054u;
label_29f054:
    // 0x29f054: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x29F054u;
    SET_GPR_U32(ctx, 31, 0x29F05Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x29F054u, 0x29F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F05Cu;
label_29f05c:
    // 0x29f05c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29f05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f060: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F060u;
    {
        const bool branch_taken_0x29f060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f060) {
            ctx->pc = 0x29F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F060u;
            // 0x29f064: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F078u;
            goto label_29f078;
        }
    }
    ctx->pc = 0x29F068u;
    // 0x29f068: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29f068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29f06c: 0xc0be324  jal         func_2F8C90
    ctx->pc = 0x29F06Cu;
    SET_GPR_U32(ctx, 31, 0x29F074u);
    ctx->pc = 0x29F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F06Cu;
    // 0x29f070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8C90u, 0x29F06Cu, 0x29F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F074u;
label_29f074:
    // 0x29f074: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f078:
    // 0x29f078: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x29F078u;
    SET_GPR_U32(ctx, 31, 0x29F080u);
    ctx->pc = 0x29F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F078u;
    // 0x29f07c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x29F078u, 0x29F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F080u;
label_29f080:
    // 0x29f080: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29f080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f084:
    // 0x29f084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f090: 0x3e00008  jr          $ra
    ctx->pc = 0x29F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F090u;
        // 0x29f094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F098u;
}
