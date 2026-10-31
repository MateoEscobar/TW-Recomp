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

// Function: sub_0025FA48
// Address: 0x25fa48 - 0x25fba0
void sub_0025FA48_0x25fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FA48_0x25fa48");
#endif

    switch (ctx->pc) {
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb7cu: goto label_25fb7c;
        default: break;
    }

    ctx->pc = 0x25fa48u;

    // 0x25fa48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25fa4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x25fa50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25fa54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fa5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x25fa60: 0x3c110008  lui         $s1, 0x8
    ctx->pc = 0x25fa60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8 << 16));
    // 0x25fa64: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x25FA64u;
    SET_GPR_U32(ctx, 31, 0x25FA6Cu);
    ctx->pc = 0x25FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA64u;
    // 0x25fa68: 0x8e1200d4  lw          $s2, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25FA64u, 0x25FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA6Cu;
label_25fa6c:
    // 0x25fa6c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25fa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x25fa70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25fa74: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x25fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x25fa78: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x25FA78u;
    {
        const bool branch_taken_0x25fa78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA78u;
        // 0x25fa7c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa78) {
            ctx->pc = 0x25FAB8u;
            goto label_25fab8;
        }
    }
    ctx->pc = 0x25FA80u;
    // 0x25fa80: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x25fa84: 0x34a50cf0  ori         $a1, $a1, 0xCF0
    ctx->pc = 0x25fa84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3312);
    // 0x25fa88: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25FA88u;
    SET_GPR_U32(ctx, 31, 0x25FA90u);
    ctx->pc = 0x25FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA88u;
    // 0x25fa8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25FA88u, 0x25FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA90u;
label_25fa90:
    // 0x25fa90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25FA90u;
    {
        const bool branch_taken_0x25fa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA90u;
        // 0x25fa94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa90) {
            ctx->pc = 0x25FABCu;
            goto label_25fabc;
        }
    }
    ctx->pc = 0x25FA98u;
    // 0x25fa98: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fa9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25fa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faa4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x25faa8: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x25FAA8u;
    SET_GPR_U32(ctx, 31, 0x25FAB0u);
    ctx->pc = 0x25FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAA8u;
    // 0x25faac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25FAA8u, 0x25FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAB0u;
label_25fab0:
    // 0x25fab0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25FAB0u;
    {
        const bool branch_taken_0x25fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAB0u;
        // 0x25fab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fab0) {
            ctx->pc = 0x25FB74u;
            goto label_25fb74;
        }
    }
    ctx->pc = 0x25FAB8u;
label_25fab8:
    // 0x25fab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fabc:
    // 0x25fabc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25FABCu;
    SET_GPR_U32(ctx, 31, 0x25FAC4u);
    ctx->pc = 0x25FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FABCu;
    // 0x25fac0: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25FABCu, 0x25FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAC4u;
label_25fac4:
    // 0x25fac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FAC4u;
    {
        const bool branch_taken_0x25fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAC4u;
        // 0x25fac8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fac4) {
            ctx->pc = 0x25FAD8u;
            goto label_25fad8;
        }
    }
    ctx->pc = 0x25FACCu;
    // 0x25facc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25FAD0u;
    {
        const bool branch_taken_0x25fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAD0u;
        // 0x25fad4: 0x24050163  addiu       $a1, $zero, 0x163 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fad0) {
            ctx->pc = 0x25FAF4u;
            goto label_25faf4;
        }
    }
    ctx->pc = 0x25FAD8u;
label_25fad8:
    // 0x25fad8: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x25FAD8u;
    SET_GPR_U32(ctx, 31, 0x25FAE0u);
    ctx->pc = 0x25FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAD8u;
    // 0x25fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25FAD8u, 0x25FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAE0u;
label_25fae0:
    // 0x25fae0: 0x24030164  addiu       $v1, $zero, 0x164
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x25fae4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FAE4u;
    {
        const bool branch_taken_0x25fae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAE4u;
        // 0x25fae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fae4) {
            ctx->pc = 0x25FB04u;
            goto label_25fb04;
        }
    }
    ctx->pc = 0x25FAECu;
    // 0x25faec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faf0: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_25faf4:
    // 0x25faf4: 0xc096a30  jal         func_25A8C0
    ctx->pc = 0x25FAF4u;
    SET_GPR_U32(ctx, 31, 0x25FAFCu);
    ctx->pc = 0x25FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FAF4u;
    // 0x25faf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25FAF4u, 0x25FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAFCu;
label_25fafc:
    // 0x25fafc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25FAFCu;
    {
        const bool branch_taken_0x25fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FAFCu;
        // 0x25fb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fafc) {
            ctx->pc = 0x25FB74u;
            goto label_25fb74;
        }
    }
    ctx->pc = 0x25FB04u;
label_25fb04:
    // 0x25fb04: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x25FB04u;
    SET_GPR_U32(ctx, 31, 0x25FB0Cu);
    ctx->pc = 0x25FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB04u;
    // 0x25fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25FB04u, 0x25FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB0Cu;
label_25fb0c:
    // 0x25fb0c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25fb0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x25fb10: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25FB10u;
    {
        const bool branch_taken_0x25fb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB10u;
        // 0x25fb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb10) {
            ctx->pc = 0x25FB5Cu;
            goto label_25fb5c;
        }
    }
    ctx->pc = 0x25FB18u;
    // 0x25fb18: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x25FB18u;
    SET_GPR_U32(ctx, 31, 0x25FB20u);
    ctx->pc = 0x25FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB18u;
    // 0x25fb1c: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25FB18u, 0x25FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB20u;
label_25fb20:
    // 0x25fb20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25FB20u;
    {
        const bool branch_taken_0x25fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fb20) {
            ctx->pc = 0x25FB5Cu;
            goto label_25fb5c;
        }
    }
    ctx->pc = 0x25FB28u;
    // 0x25fb28: 0xc095018  jal         func_254060
    ctx->pc = 0x25FB28u;
    SET_GPR_U32(ctx, 31, 0x25FB30u);
    ctx->pc = 0x25FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB28u;
    // 0x25fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25FB28u, 0x25FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB30u;
label_25fb30:
    // 0x25fb30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25FB30u;
    {
        const bool branch_taken_0x25fb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB30u;
        // 0x25fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb30) {
            ctx->pc = 0x25FB5Cu;
            goto label_25fb5c;
        }
    }
    ctx->pc = 0x25FB38u;
    // 0x25fb38: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fb3c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25fb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x25fb40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25fb40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x25fb44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25fb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25fb48: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x25fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x25fb4c: 0xc097c6e  jal         func_25F1B8
    ctx->pc = 0x25FB4Cu;
    SET_GPR_U32(ctx, 31, 0x25FB54u);
    ctx->pc = 0x25FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB4Cu;
    // 0x25fb50: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B8u, 0x25FB4Cu, 0x25FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB54u;
label_25fb54:
    // 0x25fb54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25FB54u;
    {
        const bool branch_taken_0x25fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB54u;
        // 0x25fb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb54) {
            ctx->pc = 0x25FB74u;
            goto label_25fb74;
        }
    }
    ctx->pc = 0x25FB5Cu;
label_25fb5c:
    // 0x25fb5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25fb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x25fb60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25fb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25fb64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25fb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25fb68: 0xc09685e  jal         func_25A178
    ctx->pc = 0x25FB68u;
    SET_GPR_U32(ctx, 31, 0x25FB70u);
    ctx->pc = 0x25FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB68u;
    // 0x25fb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A178u, 0x25FB68u, 0x25FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB70u;
label_25fb70:
    // 0x25fb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fb74:
    // 0x25fb74: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x25FB74u;
    SET_GPR_U32(ctx, 31, 0x25FB7Cu);
    ctx->pc = 0x25FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FB74u;
    // 0x25fb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FB74u, 0x25FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB7Cu;
label_25fb7c:
    // 0x25fb7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25fb80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25fb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fb84: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x25fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x25fb88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25fb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fb8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25fb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb94: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB94u;
        // 0x25fb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FB9Cu;
    // 0x25fb9c: 0x0  nop
    ctx->pc = 0x25fb9cu;
    // NOP
    ctx->pc = 0x25fba0u;
}
