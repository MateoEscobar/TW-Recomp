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

// Function: sub_00324EF0
// Address: 0x324ef0 - 0x325068
void sub_00324EF0_0x324ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324EF0_0x324ef0");
#endif

    switch (ctx->pc) {
        case 0x324f18u: goto label_324f18;
        case 0x324f20u: goto label_324f20;
        case 0x324f38u: goto label_324f38;
        case 0x324f44u: goto label_324f44;
        case 0x324f54u: goto label_324f54;
        case 0x324f60u: goto label_324f60;
        case 0x324f74u: goto label_324f74;
        case 0x324f9cu: goto label_324f9c;
        case 0x324facu: goto label_324fac;
        case 0x324fe0u: goto label_324fe0;
        case 0x325018u: goto label_325018;
        case 0x325030u: goto label_325030;
        case 0x32503cu: goto label_32503c;
        case 0x32504cu: goto label_32504c;
        default: break;
    }

    ctx->pc = 0x324ef0u;

    // 0x324ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324ef4: 0x34068048  ori         $a2, $zero, 0x8048
    ctx->pc = 0x324ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x324ef8: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x324ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x324efc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x324efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x324f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x324f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324f04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x324f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x324f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324f0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324f10: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x324F10u;
    SET_GPR_U32(ctx, 31, 0x324F18u);
    ctx->pc = 0x324F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F10u;
    // 0x324f14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x324F10u, 0x324F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F18u;
label_324f18:
    // 0x324f18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x324F18u;
    SET_GPR_U32(ctx, 31, 0x324F20u);
    ctx->pc = 0x324F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F18u;
    // 0x324f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x324F18u, 0x324F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F20u;
label_324f20:
    // 0x324f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x324f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x324f28: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x324F28u;
    {
        const bool branch_taken_0x324f28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x324F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F28u;
        // 0x324f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f28) {
            ctx->pc = 0x324F68u;
            goto label_324f68;
        }
    }
    ctx->pc = 0x324F30u;
    // 0x324f30: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x324F30u;
    SET_GPR_U32(ctx, 31, 0x324F38u);
    ctx->pc = 0x324F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F30u;
    // 0x324f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x324F30u, 0x324F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F38u;
label_324f38:
    // 0x324f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f3c: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x324F3Cu;
    SET_GPR_U32(ctx, 31, 0x324F44u);
    ctx->pc = 0x324F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F3Cu;
    // 0x324f40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x324F3Cu, 0x324F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F44u;
label_324f44:
    // 0x324f44: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x324F44u;
    {
        const bool branch_taken_0x324f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F44u;
        // 0x324f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f44) {
            ctx->pc = 0x325044u;
            goto label_325044;
        }
    }
    ctx->pc = 0x324F4Cu;
    // 0x324f4c: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x324F4Cu;
    SET_GPR_U32(ctx, 31, 0x324F54u);
    ctx->pc = 0x324F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F4Cu;
    // 0x324f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x324F4Cu, 0x324F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F54u;
label_324f54:
    // 0x324f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f58: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x324F58u;
    SET_GPR_U32(ctx, 31, 0x324F60u);
    ctx->pc = 0x324F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F58u;
    // 0x324f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x324F58u, 0x324F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F60u;
label_324f60:
    // 0x324f60: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x324F60u;
    {
        const bool branch_taken_0x324f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F60u;
        // 0x324f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f60) {
            ctx->pc = 0x325050u;
            goto label_325050;
        }
    }
    ctx->pc = 0x324F68u;
label_324f68:
    // 0x324f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324f6c: 0xc0c9192  jal         func_324648
    ctx->pc = 0x324F6Cu;
    SET_GPR_U32(ctx, 31, 0x324F74u);
    ctx->pc = 0x324F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F6Cu;
    // 0x324f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x324F6Cu, 0x324F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F74u;
label_324f74:
    // 0x324f74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f78: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x324f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x324f7c: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x324f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x324f80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x324F80u;
    {
        const bool branch_taken_0x324f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F80u;
        // 0x324f84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f80) {
            ctx->pc = 0x324FA0u;
            goto label_324fa0;
        }
    }
    ctx->pc = 0x324F88u;
    // 0x324f88: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x324f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f90: 0x24c64940  addiu       $a2, $a2, 0x4940
    ctx->pc = 0x324f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18752));
    // 0x324f94: 0xc0c910e  jal         func_324438
    ctx->pc = 0x324F94u;
    SET_GPR_U32(ctx, 31, 0x324F9Cu);
    ctx->pc = 0x324F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F94u;
    // 0x324f98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x324F94u, 0x324F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F9Cu;
label_324f9c:
    // 0x324f9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x324f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_324fa0:
    // 0x324fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fa4: 0xc10d6ce  jal         func_435B38
    ctx->pc = 0x324FA4u;
    SET_GPR_U32(ctx, 31, 0x324FACu);
    ctx->pc = 0x324FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FA4u;
    // 0x324fa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435B38u, 0x324FA4u, 0x324FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FACu;
label_324fac:
    // 0x324fac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x324facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324fb0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x324fb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x324fb4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x324fb4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x324fb8: 0x12440022  beq         $s2, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x324FB8u;
    {
        const bool branch_taken_0x324fb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x324FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FB8u;
        // 0x324fbc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fb8) {
            ctx->pc = 0x325044u;
            goto label_325044;
        }
    }
    ctx->pc = 0x324FC0u;
    // 0x324fc0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x324fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x324fc4: 0x2465c531  addiu       $a1, $v1, -0x3ACF
    ctx->pc = 0x324fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
    // 0x324fc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x324fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x324fcc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x324fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324fd0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x324fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x324fd4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x324FD4u;
    {
        const bool branch_taken_0x324fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FD4u;
        // 0x324fd8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fd4) {
            ctx->pc = 0x325004u;
            goto label_325004;
        }
    }
    ctx->pc = 0x324FDCu;
    // 0x324fdc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x324fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_324fe0:
    // 0x324fe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fe8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x324fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x324fec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x324fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x324ff0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x324ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324ff4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x324ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x324ff8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x324FF8u;
    {
        const bool branch_taken_0x324ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FF8u;
        // 0x324ffc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ff8) {
            ctx->pc = 0x324FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324fe0;
        }
    }
    ctx->pc = 0x325000u;
    // 0x325000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x325000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_325004:
    // 0x325004: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325008: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x325008u;
    {
        const bool branch_taken_0x325008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325008) {
            ctx->pc = 0x325044u;
            goto label_325044;
        }
    }
    ctx->pc = 0x325010u;
    // 0x325010: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325010u;
    SET_GPR_U32(ctx, 31, 0x325018u);
    ctx->pc = 0x325014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325010u;
    // 0x325014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325010u, 0x325018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325018u;
label_325018:
    // 0x325018: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325018u;
    {
        const bool branch_taken_0x325018 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x32501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325018u;
        // 0x32501c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325018) {
            ctx->pc = 0x325034u;
            goto label_325034;
        }
    }
    ctx->pc = 0x325020u;
    // 0x325020: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x325020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x325024: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x325024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x325028: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x325028u;
    SET_GPR_U32(ctx, 31, 0x325030u);
    ctx->pc = 0x32502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325028u;
    // 0x32502c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x325028u, 0x325030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325030u;
label_325030:
    // 0x325030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_325034:
    // 0x325034: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325034u;
    SET_GPR_U32(ctx, 31, 0x32503Cu);
    ctx->pc = 0x325038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325034u;
    // 0x325038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325034u, 0x32503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32503Cu;
label_32503c:
    // 0x32503c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32503Cu;
    {
        const bool branch_taken_0x32503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32503Cu;
        // 0x325040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32503c) {
            ctx->pc = 0x325050u;
            goto label_325050;
        }
    }
    ctx->pc = 0x325044u;
label_325044:
    // 0x325044: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x325044u;
    SET_GPR_U32(ctx, 31, 0x32504Cu);
    ctx->pc = 0x325048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325044u;
    // 0x325048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x325044u, 0x32504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32504Cu;
label_32504c:
    // 0x32504c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325050:
    // 0x325050: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x325050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325054: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x325054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x325058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32505c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32505cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325060: 0x3e00008  jr          $ra
    ctx->pc = 0x325060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325060u;
        // 0x325064: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325068u;
}
