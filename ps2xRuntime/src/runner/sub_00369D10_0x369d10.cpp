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

// Function: sub_00369D10
// Address: 0x369d10 - 0x369f38
void sub_00369D10_0x369d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369D10_0x369d10");
#endif

    switch (ctx->pc) {
        case 0x369d50u: goto label_369d50;
        case 0x369d58u: goto label_369d58;
        case 0x369d6cu: goto label_369d6c;
        case 0x369d74u: goto label_369d74;
        case 0x369d88u: goto label_369d88;
        case 0x369d90u: goto label_369d90;
        case 0x369da4u: goto label_369da4;
        case 0x369dacu: goto label_369dac;
        case 0x369dc0u: goto label_369dc0;
        case 0x369dc8u: goto label_369dc8;
        case 0x369ddcu: goto label_369ddc;
        case 0x369de4u: goto label_369de4;
        case 0x369df8u: goto label_369df8;
        case 0x369e00u: goto label_369e00;
        case 0x369e14u: goto label_369e14;
        case 0x369e1cu: goto label_369e1c;
        case 0x369e30u: goto label_369e30;
        case 0x369e38u: goto label_369e38;
        case 0x369e4cu: goto label_369e4c;
        case 0x369e54u: goto label_369e54;
        case 0x369e68u: goto label_369e68;
        case 0x369e70u: goto label_369e70;
        case 0x369e84u: goto label_369e84;
        case 0x369e8cu: goto label_369e8c;
        case 0x369ea0u: goto label_369ea0;
        case 0x369ea8u: goto label_369ea8;
        case 0x369ebcu: goto label_369ebc;
        case 0x369ec4u: goto label_369ec4;
        case 0x369f00u: goto label_369f00;
        default: break;
    }

    ctx->pc = 0x369d10u;

    // 0x369d10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x369d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x369d14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369d18: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x369d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x369d1c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x369d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x369d20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x369d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d28: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x369d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x369d2c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x369d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x369d30: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x369d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x369d34: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x369d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x369d38: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x369d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x369d3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x369d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x369d40: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x369d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x369d44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x369d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x369d48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369D48u;
    SET_GPR_U32(ctx, 31, 0x369D50u);
    ctx->pc = 0x369D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D48u;
    // 0x369d4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369D48u, 0x369D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D50u;
label_369d50:
    // 0x369d50: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369D50u;
    SET_GPR_U32(ctx, 31, 0x369D58u);
    ctx->pc = 0x369D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D50u;
    // 0x369d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369D50u, 0x369D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D58u;
label_369d58:
    // 0x369d58: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x369d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x369d5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369d64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369D64u;
    SET_GPR_U32(ctx, 31, 0x369D6Cu);
    ctx->pc = 0x369D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D64u;
    // 0x369d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369D64u, 0x369D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D6Cu;
label_369d6c:
    // 0x369d6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369D6Cu;
    SET_GPR_U32(ctx, 31, 0x369D74u);
    ctx->pc = 0x369D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D6Cu;
    // 0x369d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369D6Cu, 0x369D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D74u;
label_369d74:
    // 0x369d74: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x369d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x369d78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369d80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369D80u;
    SET_GPR_U32(ctx, 31, 0x369D88u);
    ctx->pc = 0x369D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D80u;
    // 0x369d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369D80u, 0x369D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D88u;
label_369d88:
    // 0x369d88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369D88u;
    SET_GPR_U32(ctx, 31, 0x369D90u);
    ctx->pc = 0x369D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D88u;
    // 0x369d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369D88u, 0x369D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D90u;
label_369d90:
    // 0x369d90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x369d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x369d94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x369d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x369d9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369D9Cu;
    SET_GPR_U32(ctx, 31, 0x369DA4u);
    ctx->pc = 0x369DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D9Cu;
    // 0x369da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369D9Cu, 0x369DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DA4u;
label_369da4:
    // 0x369da4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369DA4u;
    SET_GPR_U32(ctx, 31, 0x369DACu);
    ctx->pc = 0x369DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DA4u;
    // 0x369da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369DA4u, 0x369DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DACu;
label_369dac:
    // 0x369dac: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x369dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x369db0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369db4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x369db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x369db8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369DB8u;
    SET_GPR_U32(ctx, 31, 0x369DC0u);
    ctx->pc = 0x369DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DB8u;
    // 0x369dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369DB8u, 0x369DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DC0u;
label_369dc0:
    // 0x369dc0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369DC0u;
    SET_GPR_U32(ctx, 31, 0x369DC8u);
    ctx->pc = 0x369DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DC0u;
    // 0x369dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369DC0u, 0x369DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DC8u;
label_369dc8:
    // 0x369dc8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x369dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x369dcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369dd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x369dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x369dd4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369DD4u;
    SET_GPR_U32(ctx, 31, 0x369DDCu);
    ctx->pc = 0x369DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DD4u;
    // 0x369dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369DD4u, 0x369DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DDCu;
label_369ddc:
    // 0x369ddc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369DDCu;
    SET_GPR_U32(ctx, 31, 0x369DE4u);
    ctx->pc = 0x369DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DDCu;
    // 0x369de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369DDCu, 0x369DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DE4u;
label_369de4:
    // 0x369de4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x369de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x369de8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369dec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x369decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x369df0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369DF0u;
    SET_GPR_U32(ctx, 31, 0x369DF8u);
    ctx->pc = 0x369DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DF0u;
    // 0x369df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369DF0u, 0x369DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DF8u;
label_369df8:
    // 0x369df8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369DF8u;
    SET_GPR_U32(ctx, 31, 0x369E00u);
    ctx->pc = 0x369DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DF8u;
    // 0x369dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369DF8u, 0x369E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E00u;
label_369e00:
    // 0x369e00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e04: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x369e04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x369e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x369e0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E0Cu;
    SET_GPR_U32(ctx, 31, 0x369E14u);
    ctx->pc = 0x369E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E0Cu;
    // 0x369e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E0Cu, 0x369E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E14u;
label_369e14:
    // 0x369e14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369E14u;
    SET_GPR_U32(ctx, 31, 0x369E1Cu);
    ctx->pc = 0x369E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E14u;
    // 0x369e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369E14u, 0x369E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E1Cu;
label_369e1c:
    // 0x369e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x369e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x369e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x369e28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E28u;
    SET_GPR_U32(ctx, 31, 0x369E30u);
    ctx->pc = 0x369E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E28u;
    // 0x369e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E28u, 0x369E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E30u;
label_369e30:
    // 0x369e30: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369E30u;
    SET_GPR_U32(ctx, 31, 0x369E38u);
    ctx->pc = 0x369E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E30u;
    // 0x369e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369E30u, 0x369E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E38u;
label_369e38:
    // 0x369e38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x369e3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x369e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x369e44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E44u;
    SET_GPR_U32(ctx, 31, 0x369E4Cu);
    ctx->pc = 0x369E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E44u;
    // 0x369e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E44u, 0x369E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E4Cu;
label_369e4c:
    // 0x369e4c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369E4Cu;
    SET_GPR_U32(ctx, 31, 0x369E54u);
    ctx->pc = 0x369E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E4Cu;
    // 0x369e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369E4Cu, 0x369E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E54u;
label_369e54:
    // 0x369e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e58: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x369e58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e5c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x369e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x369e60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E60u;
    SET_GPR_U32(ctx, 31, 0x369E68u);
    ctx->pc = 0x369E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E60u;
    // 0x369e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E60u, 0x369E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E68u;
label_369e68:
    // 0x369e68: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369E68u;
    SET_GPR_U32(ctx, 31, 0x369E70u);
    ctx->pc = 0x369E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E68u;
    // 0x369e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369E68u, 0x369E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E70u;
label_369e70:
    // 0x369e70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x369e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e78: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x369e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x369e7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E7Cu;
    SET_GPR_U32(ctx, 31, 0x369E84u);
    ctx->pc = 0x369E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E7Cu;
    // 0x369e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E7Cu, 0x369E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E84u;
label_369e84:
    // 0x369e84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369E84u;
    SET_GPR_U32(ctx, 31, 0x369E8Cu);
    ctx->pc = 0x369E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E84u;
    // 0x369e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369E84u, 0x369E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E8Cu;
label_369e8c:
    // 0x369e8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e94: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x369e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x369e98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369E98u;
    SET_GPR_U32(ctx, 31, 0x369EA0u);
    ctx->pc = 0x369E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E98u;
    // 0x369e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369E98u, 0x369EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EA0u;
label_369ea0:
    // 0x369ea0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369EA0u;
    SET_GPR_U32(ctx, 31, 0x369EA8u);
    ctx->pc = 0x369EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EA0u;
    // 0x369ea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369EA0u, 0x369EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EA8u;
label_369ea8:
    // 0x369ea8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369eac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x369eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369eb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369EB4u;
    SET_GPR_U32(ctx, 31, 0x369EBCu);
    ctx->pc = 0x369EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EB4u;
    // 0x369eb8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369EB4u, 0x369EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EBCu;
label_369ebc:
    // 0x369ebc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369EBCu;
    SET_GPR_U32(ctx, 31, 0x369EC4u);
    ctx->pc = 0x369EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EBCu;
    // 0x369ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369EBCu, 0x369EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EC4u;
label_369ec4:
    // 0x369ec4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x369ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369ec8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x369ec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ecc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x369eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x369ed0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x369ed0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ed4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x369ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x369ed8: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x369ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x369edc: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x369edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369ee0: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x369ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x369ee4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x369ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x369ee8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x369ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x369eec: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x369eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    // 0x369ef0: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x369ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x369ef4: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x369ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x369ef8: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x369EF8u;
    SET_GPR_U32(ctx, 31, 0x369F00u);
    ctx->pc = 0x369EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EF8u;
    // 0x369efc: 0xafb20020  sw          $s2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228A70u, 0x369EF8u, 0x369F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F00u;
label_369f00:
    // 0x369f00: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x369f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x369f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f08: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x369f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x369f0c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x369f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x369f10: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x369f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x369f14: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x369f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x369f18: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x369f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369f1c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x369f1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369f20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x369f20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x369f24: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x369f24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x369f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x369f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x369F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F2Cu;
        // 0x369f30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369F34u;
    // 0x369f34: 0x0  nop
    ctx->pc = 0x369f34u;
    // NOP
    ctx->pc = 0x369f38u;
}
