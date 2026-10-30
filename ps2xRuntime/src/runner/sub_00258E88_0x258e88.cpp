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

// Function: sub_00258E88
// Address: 0x258e88 - 0x2590f8
void sub_00258E88_0x258e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E88_0x258e88");
#endif

    switch (ctx->pc) {
        case 0x258eb4u: goto label_258eb4;
        case 0x258ed8u: goto label_258ed8;
        case 0x258eecu: goto label_258eec;
        case 0x258efcu: goto label_258efc;
        case 0x258f0cu: goto label_258f0c;
        case 0x258f1cu: goto label_258f1c;
        case 0x258f9cu: goto label_258f9c;
        case 0x258fb0u: goto label_258fb0;
        case 0x258fe0u: goto label_258fe0;
        case 0x258ff8u: goto label_258ff8;
        case 0x25900cu: goto label_25900c;
        case 0x259020u: goto label_259020;
        case 0x259048u: goto label_259048;
        case 0x259064u: goto label_259064;
        case 0x25907cu: goto label_25907c;
        case 0x259098u: goto label_259098;
        case 0x2590acu: goto label_2590ac;
        case 0x2590c4u: goto label_2590c4;
        default: break;
    }

    ctx->pc = 0x258e88u;

    // 0x258e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258e8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x258e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x258e90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x258e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x258e94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x258e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e9c: 0x3c050fc7  lui         $a1, 0xFC7
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4039 << 16));
    // 0x258ea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x258ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x258ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258ea8: 0x34a5eaf7  ori         $a1, $a1, 0xEAF7
    ctx->pc = 0x258ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60151);
    // 0x258eac: 0xc089998  jal         func_226660
    ctx->pc = 0x258EACu;
    SET_GPR_U32(ctx, 31, 0x258EB4u);
    ctx->pc = 0x258EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EACu;
    // 0x258eb0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x258EACu, 0x258EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EB4u;
label_258eb4:
    // 0x258eb4: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x258EB4u;
    {
        const bool branch_taken_0x258eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EB4u;
        // 0x258eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258eb4) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258EBCu;
    // 0x258ebc: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x258ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x258ec0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x258ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x258ec4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x258ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x258ec8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x258ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x258ecc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x258eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x258ed0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x258ED0u;
    SET_GPR_U32(ctx, 31, 0x258ED8u);
    ctx->pc = 0x258ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258ED0u;
    // 0x258ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x258ED0u, 0x258ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258ED8u;
label_258ed8:
    // 0x258ed8: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x258ED8u;
    {
        const bool branch_taken_0x258ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ED8u;
        // 0x258edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ed8) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258EE0u;
    // 0x258ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ee4: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x258EE4u;
    SET_GPR_U32(ctx, 31, 0x258EECu);
    ctx->pc = 0x258EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EE4u;
    // 0x258ee8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x258EE4u, 0x258EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EECu;
label_258eec:
    // 0x258eec: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x258EECu;
    {
        const bool branch_taken_0x258eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EECu;
        // 0x258ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258eec) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x258EF4u;
    // 0x258ef4: 0xc089548  jal         func_225520
    ctx->pc = 0x258EF4u;
    SET_GPR_U32(ctx, 31, 0x258EFCu);
    ctx->pc = 0x258EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EF4u;
    // 0x258ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x258EF4u, 0x258EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EFCu;
label_258efc:
    // 0x258efc: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x258EFCu;
    {
        const bool branch_taken_0x258efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EFCu;
        // 0x258f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258efc) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258F04u;
    // 0x258f04: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x258F04u;
    SET_GPR_U32(ctx, 31, 0x258F0Cu);
    ctx->pc = 0x258F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F04u;
    // 0x258f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x258F04u, 0x258F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F0Cu;
label_258f0c:
    // 0x258f0c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x258F0Cu;
    {
        const bool branch_taken_0x258f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F0Cu;
        // 0x258f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f0c) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258F14u;
    // 0x258f14: 0xc089000  jal         func_224000
    ctx->pc = 0x258F14u;
    SET_GPR_U32(ctx, 31, 0x258F1Cu);
    ctx->pc = 0x258F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F14u;
    // 0x258f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x258F14u, 0x258F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F1Cu;
label_258f1c:
    // 0x258f1c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x258F1Cu;
    {
        const bool branch_taken_0x258f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F1Cu;
        // 0x258f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f1c) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258F24u;
    // 0x258f24: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x258f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x258f28: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x258f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x258f2c: 0x2444d838  addiu       $a0, $v0, -0x27C8
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957112));
    // 0x258f30: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x258f30u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55D83Au));
    // 0x258f34: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258F34u;
    {
        const bool branch_taken_0x258f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F34u;
        // 0x258f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f34) {
            ctx->pc = 0x258F6Cu;
            goto label_258f6c;
        }
    }
    ctx->pc = 0x258F3Cu;
    // 0x258f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x258f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258f40: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258F40u;
    {
        const bool branch_taken_0x258f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F40u;
        // 0x258f44: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f40) {
            ctx->pc = 0x258F58u;
            goto label_258f58;
        }
    }
    ctx->pc = 0x258F48u;
    // 0x258f48: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x258f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x258f4c: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x258f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x258f50: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x258F50u;
    {
        const bool branch_taken_0x258f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x258F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F50u;
        // 0x258f54: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f50) {
            ctx->pc = 0x258F68u;
            goto label_258f68;
        }
    }
    ctx->pc = 0x258F58u;
label_258f58:
    // 0x258f58: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x258f5c: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x258f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x258f60: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258F60u;
    {
        const bool branch_taken_0x258f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258f60) {
            ctx->pc = 0x258F6Cu;
            goto label_258f6c;
        }
    }
    ctx->pc = 0x258F68u;
label_258f68:
    // 0x258f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258f6c:
    // 0x258f6c: 0x14a0005a  bnez        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x258F6Cu;
    {
        const bool branch_taken_0x258f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F6Cu;
        // 0x258f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f6c) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258F74u;
    // 0x258f74: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x258f74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x258f78: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x258f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x258f7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x258f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x258f80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x258f84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258f88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x258f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x258f8c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x258F8Cu;
    {
        const bool branch_taken_0x258f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F8Cu;
        // 0x258f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f8c) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x258F94u;
    // 0x258f94: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x258F94u;
    SET_GPR_U32(ctx, 31, 0x258F9Cu);
    ctx->pc = 0x258F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F94u;
    // 0x258f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x258F94u, 0x258F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F9Cu;
label_258f9c:
    // 0x258f9c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x258f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x258fa0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x258FA0u;
    {
        const bool branch_taken_0x258fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FA0u;
        // 0x258fa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fa0) {
            ctx->pc = 0x258FB8u;
            goto label_258fb8;
        }
    }
    ctx->pc = 0x258FA8u;
    // 0x258fa8: 0xc088d7e  jal         func_2235F8
    ctx->pc = 0x258FA8u;
    SET_GPR_U32(ctx, 31, 0x258FB0u);
    ctx->pc = 0x258FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FA8u;
    // 0x258fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235F8u, 0x258FA8u, 0x258FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FB0u;
label_258fb0:
    // 0x258fb0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x258FB0u;
    {
        const bool branch_taken_0x258fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FB0u;
        // 0x258fb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fb0) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x258FB8u;
label_258fb8:
    // 0x258fb8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x258fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x258fbc: 0x906456e3  lbu         $a0, 0x56E3($v1)
    ctx->pc = 0x258fbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22243)));
    // 0x258fc0: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x258FC0u;
    {
        const bool branch_taken_0x258fc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x258fc0) {
            ctx->pc = 0x259004u;
            goto label_259004;
        }
    }
    ctx->pc = 0x258FC8u;
    // 0x258fc8: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x258fcc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x258fccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x258fd0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258FD0u;
    {
        const bool branch_taken_0x258fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FD0u;
        // 0x258fd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fd0) {
            ctx->pc = 0x258FFCu;
            goto label_258ffc;
        }
    }
    ctx->pc = 0x258FD8u;
    // 0x258fd8: 0xc087502  jal         func_21D408
    ctx->pc = 0x258FD8u;
    SET_GPR_U32(ctx, 31, 0x258FE0u);
    ctx->pc = 0x258FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FD8u;
    // 0x258fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x258FD8u, 0x258FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FE0u;
label_258fe0:
    // 0x258fe0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x258fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258fe4: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x258fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x258fe8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x258FE8u;
    {
        const bool branch_taken_0x258fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258fe8) {
            ctx->pc = 0x258FFCu;
            goto label_258ffc;
        }
    }
    ctx->pc = 0x258FF0u;
    // 0x258ff0: 0xc088f88  jal         func_223E20
    ctx->pc = 0x258FF0u;
    SET_GPR_U32(ctx, 31, 0x258FF8u);
    ctx->pc = 0x258FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FF0u;
    // 0x258ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x258FF0u, 0x258FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FF8u;
label_258ff8:
    // 0x258ff8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x258ff8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_258ffc:
    // 0x258ffc: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x258FFCu;
    {
        const bool branch_taken_0x258ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FFCu;
        // 0x259000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ffc) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x259004u;
label_259004:
    // 0x259004: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x259004u;
    SET_GPR_U32(ctx, 31, 0x25900Cu);
    ctx->pc = 0x259008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259004u;
    // 0x259008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x259004u, 0x25900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25900Cu;
label_25900c:
    // 0x25900c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25900cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x259010: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x259010u;
    {
        const bool branch_taken_0x259010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259010) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x259018u;
    // 0x259018: 0xc088db2  jal         func_2236C8
    ctx->pc = 0x259018u;
    SET_GPR_U32(ctx, 31, 0x259020u);
    ctx->pc = 0x25901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259018u;
    // 0x25901c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x259018u, 0x259020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259020u;
label_259020:
    // 0x259020: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x259020u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x259024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x259024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259028: 0x0  nop
    ctx->pc = 0x259028u;
    // NOP
    // 0x25902c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25902cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259030: 0x0  nop
    ctx->pc = 0x259030u;
    // NOP
    // 0x259034: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x259034u;
    {
        const bool branch_taken_0x259034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259034u;
        // 0x259038: 0x263005d0  addiu       $s0, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259034) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x25903Cu;
    // 0x25903c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259040: 0xc1060e6  jal         func_418398
    ctx->pc = 0x259040u;
    SET_GPR_U32(ctx, 31, 0x259048u);
    ctx->pc = 0x259044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259040u;
    // 0x259044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x259040u, 0x259048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259048u;
label_259048:
    // 0x259048: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x259048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25904c: 0x0  nop
    ctx->pc = 0x25904cu;
    // NOP
    // 0x259050: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x259050u;
    {
        const bool branch_taken_0x259050 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259050u;
        // 0x259054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259050) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x259058u;
    // 0x259058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25905c: 0xc1060e6  jal         func_418398
    ctx->pc = 0x25905Cu;
    SET_GPR_U32(ctx, 31, 0x259064u);
    ctx->pc = 0x259060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25905Cu;
    // 0x259060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x25905Cu, 0x259064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259064u;
label_259064:
    // 0x259064: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x259064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259068: 0x0  nop
    ctx->pc = 0x259068u;
    // NOP
    // 0x25906c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x25906Cu;
    {
        const bool branch_taken_0x25906c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x259070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25906Cu;
        // 0x259070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25906c) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x259074u;
label_259074:
    // 0x259074: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x259074u;
    SET_GPR_U32(ctx, 31, 0x25907Cu);
    ctx->pc = 0x259078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259074u;
    // 0x259078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x259074u, 0x25907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25907Cu;
label_25907c:
    // 0x25907c: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x25907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x259080: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x259080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x259084: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x259084u;
    {
        const bool branch_taken_0x259084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259084u;
        // 0x259088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259084) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x25908Cu;
    // 0x25908c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259090: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x259090u;
    SET_GPR_U32(ctx, 31, 0x259098u);
    ctx->pc = 0x259094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259090u;
    // 0x259094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x259090u, 0x259098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259098u;
label_259098:
    // 0x259098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25909c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2590a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590a4: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2590A4u;
    SET_GPR_U32(ctx, 31, 0x2590ACu);
    ctx->pc = 0x2590A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590A4u;
    // 0x2590a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2590A4u, 0x2590ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590ACu;
label_2590ac:
    // 0x2590ac: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2590ACu;
    {
        const bool branch_taken_0x2590ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2590B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590ACu;
        // 0x2590b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590ac) {
            ctx->pc = 0x2590CCu;
            goto label_2590cc;
        }
    }
    ctx->pc = 0x2590B4u;
    // 0x2590b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2590B4u;
    {
        const bool branch_taken_0x2590b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2590b4) {
            ctx->pc = 0x2590B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590B4u;
            // 0x2590b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x2590BCu;
    // 0x2590bc: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2590BCu;
    SET_GPR_U32(ctx, 31, 0x2590C4u);
    ctx->pc = 0x2590C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590BCu;
    // 0x2590c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2590BCu, 0x2590C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590C4u;
label_2590c4:
    // 0x2590c4: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x2590c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x2590c8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2590c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2590cc:
    // 0x2590cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2590CCu;
    {
        const bool branch_taken_0x2590cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590CCu;
        // 0x2590d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590cc) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x2590D4u;
label_2590d4:
    // 0x2590d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2590d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2590d8:
    // 0x2590d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2590d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2590dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2590dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2590e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2590e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2590e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2590e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2590e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2590e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2590ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2590ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2590F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590ECu;
        // 0x2590f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2590ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2590F4u;
    // 0x2590f4: 0x0  nop
    ctx->pc = 0x2590f4u;
    // NOP
    ctx->pc = 0x2590f8u;
}
