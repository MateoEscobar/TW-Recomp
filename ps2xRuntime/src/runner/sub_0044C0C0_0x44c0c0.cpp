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

// Function: sub_0044C0C0
// Address: 0x44c0c0 - 0x44c208
void sub_0044C0C0_0x44c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C0C0_0x44c0c0");
#endif

    switch (ctx->pc) {
        case 0x44c0dcu: goto label_44c0dc;
        case 0x44c0ecu: goto label_44c0ec;
        case 0x44c0fcu: goto label_44c0fc;
        case 0x44c118u: goto label_44c118;
        case 0x44c128u: goto label_44c128;
        case 0x44c144u: goto label_44c144;
        case 0x44c154u: goto label_44c154;
        case 0x44c160u: goto label_44c160;
        case 0x44c168u: goto label_44c168;
        case 0x44c174u: goto label_44c174;
        case 0x44c184u: goto label_44c184;
        default: break;
    }

    ctx->pc = 0x44c0c0u;

    // 0x44c0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44c0c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x44c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x44c0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44c0cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44c0d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44c0d4: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C0D4u;
    SET_GPR_U32(ctx, 31, 0x44C0DCu);
    ctx->pc = 0x44C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0D4u;
    // 0x44c0d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C0D4u, 0x44C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0DCu;
label_44c0dc:
    // 0x44c0dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44c0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c0e4: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C0E4u;
    SET_GPR_U32(ctx, 31, 0x44C0ECu);
    ctx->pc = 0x44C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0E4u;
    // 0x44c0e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C0E4u, 0x44C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0ECu;
label_44c0ec:
    // 0x44c0ec: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x44c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x44c0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c0f4: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C0F4u;
    SET_GPR_U32(ctx, 31, 0x44C0FCu);
    ctx->pc = 0x44C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0F4u;
    // 0x44c0f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C0F4u, 0x44C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0FCu;
label_44c0fc:
    // 0x44c0fc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x44c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x44c100: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x44c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x44c104: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x44c104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x44c108: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44C108u;
    {
        const bool branch_taken_0x44c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C108u;
        // 0x44c10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c108) {
            ctx->pc = 0x44C130u;
            goto label_44c130;
        }
    }
    ctx->pc = 0x44C110u;
    // 0x44c110: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C110u;
    SET_GPR_U32(ctx, 31, 0x44C118u);
    ctx->pc = 0x44C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C110u;
    // 0x44c114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C110u, 0x44C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C118u;
label_44c118:
    // 0x44c118: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x44c118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x44c11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c120: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C120u;
    SET_GPR_U32(ctx, 31, 0x44C128u);
    ctx->pc = 0x44C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C120u;
    // 0x44c124: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C120u, 0x44C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C128u;
label_44c128:
    // 0x44c128: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x44c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x44c12c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x44c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_44c130:
    // 0x44c130: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44c134: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x44C134u;
    {
        const bool branch_taken_0x44c134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x44C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C134u;
        // 0x44c138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c134) {
            ctx->pc = 0x44C16Cu;
            goto label_44c16c;
        }
    }
    ctx->pc = 0x44C13Cu;
    // 0x44c13c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C13Cu;
    SET_GPR_U32(ctx, 31, 0x44C144u);
    ctx->pc = 0x44C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C13Cu;
    // 0x44c140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C13Cu, 0x44C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C144u;
label_44c144:
    // 0x44c144: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x44c144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x44c148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c14c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C14Cu;
    SET_GPR_U32(ctx, 31, 0x44C154u);
    ctx->pc = 0x44C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C14Cu;
    // 0x44c150: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C14Cu, 0x44C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C154u;
label_44c154:
    // 0x44c154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44C154u;
    {
        const bool branch_taken_0x44c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C154u;
        // 0x44c158: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c154) {
            ctx->pc = 0x44C168u;
            goto label_44c168;
        }
    }
    ctx->pc = 0x44C15Cu;
    // 0x44c15c: 0x0  nop
    ctx->pc = 0x44c15cu;
    // NOP
label_44c160:
    // 0x44c160: 0xc113218  jal         func_44C860
    ctx->pc = 0x44C160u;
    SET_GPR_U32(ctx, 31, 0x44C168u);
    ctx->pc = 0x44C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C160u;
    // 0x44c164: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44C160u, 0x44C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C168u;
label_44c168:
    // 0x44c168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c16c:
    // 0x44c16c: 0xc11293a  jal         func_44A4E8
    ctx->pc = 0x44C16Cu;
    SET_GPR_U32(ctx, 31, 0x44C174u);
    ctx->pc = 0x44C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C16Cu;
    // 0x44c170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C16Cu, 0x44C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C174u;
label_44c174:
    // 0x44c174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44C174u;
    {
        const bool branch_taken_0x44c174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C174u;
        // 0x44c178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c174) {
            ctx->pc = 0x44C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c160;
        }
    }
    ctx->pc = 0x44C17Cu;
    // 0x44c17c: 0xc113196  jal         func_44C658
    ctx->pc = 0x44C17Cu;
    SET_GPR_U32(ctx, 31, 0x44C184u);
    ctx->pc = 0x44C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C17Cu;
    // 0x44c180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C658u, 0x44C17Cu, 0x44C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C184u;
label_44c184:
    // 0x44c184: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x44c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x44c188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44c188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44c18c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44c190: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44C190u;
    {
        const bool branch_taken_0x44c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x44C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C190u;
        // 0x44c194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c190) {
            ctx->pc = 0x44C1B8u;
            goto label_44c1b8;
        }
    }
    ctx->pc = 0x44C198u;
    // 0x44c198: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44C198u;
    {
        const bool branch_taken_0x44c198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c198) {
            ctx->pc = 0x44C19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C198u;
            // 0x44c19c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C1BCu;
            goto label_44c1bc;
        }
    }
    ctx->pc = 0x44C1A0u;
    // 0x44c1a0: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C1A0u;
    {
        const bool branch_taken_0x44c1a0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x44c1a0) {
            ctx->pc = 0x44C1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C1A0u;
            // 0x44c1a4: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C1B4u;
            goto label_44c1b4;
        }
    }
    ctx->pc = 0x44C1A8u;
    // 0x44c1a8: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x44c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x44c1ac: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x44c1acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x44c1b0: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x44c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_44c1b4:
    // 0x44c1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44c1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44c1b8:
    // 0x44c1b8: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x44c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_44c1bc:
    // 0x44c1bc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x44c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x44c1c0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44C1C0u;
    {
        const bool branch_taken_0x44c1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1C0u;
        // 0x44c1c4: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c1c0) {
            ctx->pc = 0x44C1DCu;
            goto label_44c1dc;
        }
    }
    ctx->pc = 0x44C1C8u;
    // 0x44c1c8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x44c1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x44c1cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44C1CCu;
    {
        const bool branch_taken_0x44c1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c1cc) {
            ctx->pc = 0x44C1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C1CCu;
            // 0x44c1d0: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C1E0u;
            goto label_44c1e0;
        }
    }
    ctx->pc = 0x44C1D4u;
    // 0x44c1d4: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x44c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x44c1d8: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x44c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_44c1dc:
    // 0x44c1dc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x44c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_44c1e0:
    // 0x44c1e0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x44c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x44c1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44c1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44c1e8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x44c1e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x44c1ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44c1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44c1f0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x44c1f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x44c1f4: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x44c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x44c1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44c1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44c1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x44C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1FCu;
        // 0x44c200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C204u;
    // 0x44c204: 0x0  nop
    ctx->pc = 0x44c204u;
    // NOP
    ctx->pc = 0x44c208u;
}
