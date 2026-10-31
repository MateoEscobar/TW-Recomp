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

// Function: sub_00328EB0
// Address: 0x328eb0 - 0x329030
void sub_00328EB0_0x328eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328EB0_0x328eb0");
#endif

    switch (ctx->pc) {
        case 0x328efcu: goto label_328efc;
        case 0x328f10u: goto label_328f10;
        case 0x328f20u: goto label_328f20;
        case 0x328f4cu: goto label_328f4c;
        case 0x328f5cu: goto label_328f5c;
        case 0x328f80u: goto label_328f80;
        case 0x328f98u: goto label_328f98;
        case 0x328fa4u: goto label_328fa4;
        case 0x328facu: goto label_328fac;
        case 0x328fbcu: goto label_328fbc;
        case 0x328fccu: goto label_328fcc;
        case 0x328fdcu: goto label_328fdc;
        case 0x328fecu: goto label_328fec;
        case 0x329004u: goto label_329004;
        default: break;
    }

    ctx->pc = 0x328eb0u;

    // 0x328eb0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x328eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x328eb4: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x328eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x328eb8: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x328eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x328ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ec0: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x328ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x328ec4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x328ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ec8: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x328ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x328ecc: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x328eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x328ed0: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x328ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x328ed4: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x328ED4u;
    {
        const bool branch_taken_0x328ed4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x328ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ED4u;
        // 0x328ed8: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ed4) {
            ctx->pc = 0x328EECu;
            goto label_328eec;
        }
    }
    ctx->pc = 0x328EDCu;
    // 0x328edc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x328edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x328ee0: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x328ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5169ECu));
    // 0x328ee4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x328EE4u;
    {
        const bool branch_taken_0x328ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EE4u;
        // 0x328ee8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ee4) {
            ctx->pc = 0x328F00u;
            goto label_328f00;
        }
    }
    ctx->pc = 0x328EECu;
label_328eec:
    // 0x328eec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x328eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x328ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x328ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ef4: 0xc10c69a  jal         func_431A68
    ctx->pc = 0x328EF4u;
    SET_GPR_U32(ctx, 31, 0x328EFCu);
    ctx->pc = 0x328EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EF4u;
    // 0x328ef8: 0x24a55398  addiu       $a1, $a1, 0x5398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431A68u, 0x328EF4u, 0x328EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EFCu;
label_328efc:
    // 0x328efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328f00:
    // 0x328f00: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328F00u;
    {
        const bool branch_taken_0x328f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F00u;
        // 0x328f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f00) {
            ctx->pc = 0x328F68u;
            goto label_328f68;
        }
    }
    ctx->pc = 0x328F08u;
    // 0x328f08: 0xc10c5c2  jal         func_431708
    ctx->pc = 0x328F08u;
    SET_GPR_U32(ctx, 31, 0x328F10u);
    ctx->pc = 0x328F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F08u;
    // 0x328f0c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431708u, 0x328F08u, 0x328F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F10u;
label_328f10:
    // 0x328f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f18: 0xc10cacc  jal         func_432B30
    ctx->pc = 0x328F18u;
    SET_GPR_U32(ctx, 31, 0x328F20u);
    ctx->pc = 0x328F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F18u;
    // 0x328f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432B30u, 0x328F18u, 0x328F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F20u;
label_328f20:
    // 0x328f20: 0x3a23001b  xori        $v1, $s1, 0x1B
    ctx->pc = 0x328f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)27);
    // 0x328f24: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x328f24u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x328f28: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x328F28u;
    {
        const bool branch_taken_0x328f28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F28u;
        // 0x328f2c: 0x8ea369ec  lw          $v1, 0x69EC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f28) {
            ctx->pc = 0x328F70u;
            goto label_328f70;
        }
    }
    ctx->pc = 0x328F30u;
    // 0x328f30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x328f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x328f34: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x328F34u;
    {
        const bool branch_taken_0x328f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x328F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F34u;
        // 0x328f38: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f34) {
            ctx->pc = 0x328F74u;
            goto label_328f74;
        }
    }
    ctx->pc = 0x328F3Cu;
    // 0x328f3c: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x328F3Cu;
    {
        const bool branch_taken_0x328f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328f3c) {
            ctx->pc = 0x328F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328F3Cu;
            // 0x328f40: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328F50u;
            goto label_328f50;
        }
    }
    ctx->pc = 0x328F44u;
    // 0x328f44: 0xc10c550  jal         func_431540
    ctx->pc = 0x328F44u;
    SET_GPR_U32(ctx, 31, 0x328F4Cu);
    ctx->pc = 0x328F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F44u;
    // 0x328f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431540u, 0x328F44u, 0x328F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F4Cu;
label_328f4c:
    // 0x328f4c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x328f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_328f50:
    // 0x328f50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x328f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f54: 0xc10c69a  jal         func_431A68
    ctx->pc = 0x328F54u;
    SET_GPR_U32(ctx, 31, 0x328F5Cu);
    ctx->pc = 0x328F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F54u;
    // 0x328f58: 0x24a553a0  addiu       $a1, $a1, 0x53A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431A68u, 0x328F54u, 0x328F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F5Cu;
label_328f5c:
    // 0x328f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f60: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328F60u;
    {
        const bool branch_taken_0x328f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x328F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F60u;
        // 0x328f64: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f60) {
            ctx->pc = 0x328F74u;
            goto label_328f74;
        }
    }
    ctx->pc = 0x328F68u;
label_328f68:
    // 0x328f68: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x328F68u;
    {
        const bool branch_taken_0x328f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F68u;
        // 0x328f6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f68) {
            ctx->pc = 0x329008u;
            goto label_329008;
        }
    }
    ctx->pc = 0x328F70u;
label_328f70:
    // 0x328f70: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x328f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_328f74:
    // 0x328f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328f78: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x328F78u;
    SET_GPR_U32(ctx, 31, 0x328F80u);
    ctx->pc = 0x328F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F78u;
    // 0x328f7c: 0x24a553a8  addiu       $a1, $a1, 0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x328F78u, 0x328F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F80u;
label_328f80:
    // 0x328f80: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x328F80u;
    {
        const bool branch_taken_0x328f80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x328F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F80u;
        // 0x328f84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f80) {
            ctx->pc = 0x328F90u;
            goto label_328f90;
        }
    }
    ctx->pc = 0x328F88u;
    // 0x328f88: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x328f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x328f8c: 0x244553b0  addiu       $a1, $v0, 0x53B0
    ctx->pc = 0x328f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21424));
label_328f90:
    // 0x328f90: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x328F90u;
    SET_GPR_U32(ctx, 31, 0x328F98u);
    ctx->pc = 0x328F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F90u;
    // 0x328f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x328F90u, 0x328F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F98u;
label_328f98:
    // 0x328f98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x328f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328f9c: 0xc0c90f6  jal         func_3243D8
    ctx->pc = 0x328F9Cu;
    SET_GPR_U32(ctx, 31, 0x328FA4u);
    ctx->pc = 0x328FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F9Cu;
    // 0x328fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243D8u, 0x328F9Cu, 0x328FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FA4u;
label_328fa4:
    // 0x328fa4: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x328FA4u;
    SET_GPR_U32(ctx, 31, 0x328FACu);
    ctx->pc = 0x328FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FA4u;
    // 0x328fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x328FA4u, 0x328FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FACu;
label_328fac:
    // 0x328fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fb4: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x328FB4u;
    SET_GPR_U32(ctx, 31, 0x328FBCu);
    ctx->pc = 0x328FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FB4u;
    // 0x328fb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x328FB4u, 0x328FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FBCu;
label_328fbc:
    // 0x328fbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x328fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fc4: 0xc0cd486  jal         func_335218
    ctx->pc = 0x328FC4u;
    SET_GPR_U32(ctx, 31, 0x328FCCu);
    ctx->pc = 0x328FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FC4u;
    // 0x328fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335218u, 0x328FC4u, 0x328FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FCCu;
label_328fcc:
    // 0x328fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x328fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x328fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fd4: 0xc0ca37c  jal         func_328DF0
    ctx->pc = 0x328FD4u;
    SET_GPR_U32(ctx, 31, 0x328FDCu);
    ctx->pc = 0x328FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FD4u;
    // 0x328fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328DF0u, 0x328FD4u, 0x328FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FDCu;
label_328fdc:
    // 0x328fdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x328fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fe4: 0xc0c8cdc  jal         func_323370
    ctx->pc = 0x328FE4u;
    SET_GPR_U32(ctx, 31, 0x328FECu);
    ctx->pc = 0x328FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FE4u;
    // 0x328fe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323370u, 0x328FE4u, 0x328FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FECu;
label_328fec:
    // 0x328fec: 0x8ea269ec  lw          $v0, 0x69EC($s5)
    ctx->pc = 0x328fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27116)));
    // 0x328ff0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x328ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x328ff4: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x328FF4u;
    {
        const bool branch_taken_0x328ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x328FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FF4u;
        // 0x328ff8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ff4) {
            ctx->pc = 0x329008u;
            goto label_329008;
        }
    }
    ctx->pc = 0x328FFCu;
    // 0x328ffc: 0xc10c550  jal         func_431540
    ctx->pc = 0x328FFCu;
    SET_GPR_U32(ctx, 31, 0x329004u);
    ctx->pc = 0x329000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FFCu;
    // 0x329000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431540u, 0x328FFCu, 0x329004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329004u;
label_329004:
    // 0x329004: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x329004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329008:
    // 0x329008: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x329008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x32900c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x32900cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x329010: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x329010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x329014: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x329014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x329018: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x329018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x32901c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x32901cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x329020: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x329020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x329024: 0x3e00008  jr          $ra
    ctx->pc = 0x329024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329024u;
        // 0x329028: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32902Cu;
    // 0x32902c: 0x0  nop
    ctx->pc = 0x32902cu;
    // NOP
    ctx->pc = 0x329030u;
}
