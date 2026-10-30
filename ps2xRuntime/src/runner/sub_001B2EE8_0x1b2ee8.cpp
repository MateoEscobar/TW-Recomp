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

// Function: sub_001B2EE8
// Address: 0x1b2ee8 - 0x1b3020
void sub_001B2EE8_0x1b2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2EE8_0x1b2ee8");
#endif

    switch (ctx->pc) {
        case 0x1b2f0cu: goto label_1b2f0c;
        case 0x1b2f14u: goto label_1b2f14;
        case 0x1b2f40u: goto label_1b2f40;
        case 0x1b2f5cu: goto label_1b2f5c;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fd4u: goto label_1b2fd4;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b3008u: goto label_1b3008;
        default: break;
    }

    ctx->pc = 0x1b2ee8u;

    // 0x1b2ee8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2eec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ef4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b2ef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b2ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2efc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2f04: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B2F04u;
    SET_GPR_U32(ctx, 31, 0x1B2F0Cu);
    ctx->pc = 0x1B2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F04u;
    // 0x1b2f08: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B2F04u, 0x1B2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F0Cu;
label_1b2f0c:
    // 0x1b2f0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B2F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F14u);
    ctx->pc = 0x1B2F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F0Cu;
    // 0x1b2f10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B2F0Cu, 0x1B2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F14u;
label_1b2f14:
    // 0x1b2f14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2f18: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B2F18u;
    {
        const bool branch_taken_0x1b2f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F18u;
        // 0x1b2f1c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f18) {
            ctx->pc = 0x1B2F98u;
            goto label_1b2f98;
        }
    }
    ctx->pc = 0x1B2F20u;
    // 0x1b2f20: 0x263015d0  addiu       $s0, $s1, 0x15D0
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b2f24: 0x3c067878  lui         $a2, 0x7878
    ctx->pc = 0x1b2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30840 << 16));
    // 0x1b2f28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f30: 0x34c678ff  ori         $a2, $a2, 0x78FF
    ctx->pc = 0x1b2f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30975);
    // 0x1b2f34: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b2f38: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2F38u;
    SET_GPR_U32(ctx, 31, 0x1B2F40u);
    ctx->pc = 0x1B2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F38u;
    // 0x1b2f3c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2F38u, 0x1B2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F40u;
label_1b2f40:
    // 0x1b2f40: 0x26313f10  addiu       $s1, $s1, 0x3F10
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    // 0x1b2f44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f4c: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2f50: 0x2406016a  addiu       $a2, $zero, 0x16A
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x1b2f54: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2F54u;
    SET_GPR_U32(ctx, 31, 0x1B2F5Cu);
    ctx->pc = 0x1B2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F54u;
    // 0x1b2f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2F54u, 0x1B2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F5Cu;
label_1b2f5c:
    // 0x1b2f5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2f60: 0x3c067878  lui         $a2, 0x7878
    ctx->pc = 0x1b2f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30840 << 16));
    // 0x1b2f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f68: 0x34c678ff  ori         $a2, $a2, 0x78FF
    ctx->pc = 0x1b2f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30975);
    // 0x1b2f6c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1b2f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b2f70: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2F70u;
    SET_GPR_U32(ctx, 31, 0x1B2F78u);
    ctx->pc = 0x1B2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F70u;
    // 0x1b2f74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2F70u, 0x1B2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F78u;
label_1b2f78:
    // 0x1b2f78: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b2f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2f84: 0x2406016a  addiu       $a2, $zero, 0x16A
    ctx->pc = 0x1b2f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x1b2f88: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2F88u;
    SET_GPR_U32(ctx, 31, 0x1B2F90u);
    ctx->pc = 0x1B2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F88u;
    // 0x1b2f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2F88u, 0x1B2F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F90u;
label_1b2f90:
    // 0x1b2f90: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B2F90u;
    {
        const bool branch_taken_0x1b2f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F90u;
        // 0x1b2f94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f90) {
            ctx->pc = 0x1B300Cu;
            goto label_1b300c;
        }
    }
    ctx->pc = 0x1B2F98u;
label_1b2f98:
    // 0x1b2f98: 0x263015d0  addiu       $s0, $s1, 0x15D0
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b2f9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2fa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2fa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fa8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2fac: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1b2facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2fb0: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2FB0u;
    SET_GPR_U32(ctx, 31, 0x1B2FB8u);
    ctx->pc = 0x1B2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2FB0u;
    // 0x1b2fb4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2FB0u, 0x1B2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FB8u;
label_1b2fb8:
    // 0x1b2fb8: 0x26313f10  addiu       $s1, $s1, 0x3F10
    ctx->pc = 0x1b2fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    // 0x1b2fbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fc4: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b2fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2fc8: 0x2406016d  addiu       $a2, $zero, 0x16D
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x1b2fcc: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2FCCu;
    SET_GPR_U32(ctx, 31, 0x1B2FD4u);
    ctx->pc = 0x1B2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2FCCu;
    // 0x1b2fd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2FCCu, 0x1B2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FD4u;
label_1b2fd4:
    // 0x1b2fd4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fd8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fe0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2fe4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1b2fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2fe8: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2FE8u;
    SET_GPR_U32(ctx, 31, 0x1B2FF0u);
    ctx->pc = 0x1B2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2FE8u;
    // 0x1b2fec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2FE8u, 0x1B2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FF0u;
label_1b2ff0:
    // 0x1b2ff0: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ff8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b2ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ffc: 0x2406016d  addiu       $a2, $zero, 0x16D
    ctx->pc = 0x1b2ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x1b3000: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3000u;
    SET_GPR_U32(ctx, 31, 0x1B3008u);
    ctx->pc = 0x1B3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3000u;
    // 0x1b3004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3000u, 0x1B3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3008u;
label_1b3008:
    // 0x1b3008: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b3008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b300c:
    // 0x1b300c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b300cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3018: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3018u;
        // 0x1b301c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3020u;
}
