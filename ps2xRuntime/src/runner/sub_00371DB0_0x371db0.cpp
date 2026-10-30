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

// Function: sub_00371DB0
// Address: 0x371db0 - 0x372058
void sub_00371DB0_0x371db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371DB0_0x371db0");
#endif

    switch (ctx->pc) {
        case 0x371df4u: goto label_371df4;
        case 0x371e08u: goto label_371e08;
        case 0x371e10u: goto label_371e10;
        case 0x371e24u: goto label_371e24;
        case 0x371e38u: goto label_371e38;
        case 0x371e40u: goto label_371e40;
        case 0x371e54u: goto label_371e54;
        case 0x371e5cu: goto label_371e5c;
        case 0x371e70u: goto label_371e70;
        case 0x371e78u: goto label_371e78;
        case 0x371e8cu: goto label_371e8c;
        case 0x371e94u: goto label_371e94;
        case 0x371ea8u: goto label_371ea8;
        case 0x371eb0u: goto label_371eb0;
        case 0x371ec4u: goto label_371ec4;
        case 0x371eccu: goto label_371ecc;
        case 0x371ee0u: goto label_371ee0;
        case 0x371ee8u: goto label_371ee8;
        case 0x371f00u: goto label_371f00;
        case 0x371f18u: goto label_371f18;
        case 0x371f20u: goto label_371f20;
        case 0x371f38u: goto label_371f38;
        case 0x371f50u: goto label_371f50;
        case 0x371f58u: goto label_371f58;
        case 0x371f9cu: goto label_371f9c;
        case 0x371fa4u: goto label_371fa4;
        case 0x371fb0u: goto label_371fb0;
        case 0x371fb8u: goto label_371fb8;
        case 0x371fc8u: goto label_371fc8;
        case 0x371fdcu: goto label_371fdc;
        case 0x371ff0u: goto label_371ff0;
        case 0x372000u: goto label_372000;
        case 0x372014u: goto label_372014;
        default: break;
    }

    ctx->pc = 0x371db0u;

    // 0x371db0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x371db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x371db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371db8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x371db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x371dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371dc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x371dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371dc4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x371dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x371dc8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x371dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x371dcc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x371dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x371dd0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x371dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x371dd4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x371dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x371dd8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x371dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x371ddc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x371ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x371de0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x371de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x371de4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x371de4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x371de8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x371de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x371dec: 0xc102488  jal         func_409220
    ctx->pc = 0x371DECu;
    SET_GPR_U32(ctx, 31, 0x371DF4u);
    ctx->pc = 0x371DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DECu;
    // 0x371df0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371DECu, 0x371DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DF4u;
label_371df4:
    // 0x371df4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x371df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x371df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371dfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x371e00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371E00u;
    SET_GPR_U32(ctx, 31, 0x371E08u);
    ctx->pc = 0x371E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E00u;
    // 0x371e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371E00u, 0x371E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E08u;
label_371e08:
    // 0x371e08: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371E08u;
    SET_GPR_U32(ctx, 31, 0x371E10u);
    ctx->pc = 0x371E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E08u;
    // 0x371e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371E08u, 0x371E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E10u;
label_371e10:
    // 0x371e10: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x371e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x371e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x371e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x371e1c: 0xc102488  jal         func_409220
    ctx->pc = 0x371E1Cu;
    SET_GPR_U32(ctx, 31, 0x371E24u);
    ctx->pc = 0x371E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E1Cu;
    // 0x371e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371E1Cu, 0x371E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E24u;
label_371e24:
    // 0x371e24: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x371e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x371e28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x371e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x371e30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371E30u;
    SET_GPR_U32(ctx, 31, 0x371E38u);
    ctx->pc = 0x371E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E30u;
    // 0x371e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371E30u, 0x371E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E38u;
label_371e38:
    // 0x371e38: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371E38u;
    SET_GPR_U32(ctx, 31, 0x371E40u);
    ctx->pc = 0x371E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E38u;
    // 0x371e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371E38u, 0x371E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E40u;
label_371e40:
    // 0x371e40: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x371e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x371e44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x371e4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371E4Cu;
    SET_GPR_U32(ctx, 31, 0x371E54u);
    ctx->pc = 0x371E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E4Cu;
    // 0x371e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371E4Cu, 0x371E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E54u;
label_371e54:
    // 0x371e54: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371E54u;
    SET_GPR_U32(ctx, 31, 0x371E5Cu);
    ctx->pc = 0x371E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E54u;
    // 0x371e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371E54u, 0x371E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E5Cu;
label_371e5c:
    // 0x371e5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x371e5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x371e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x371e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x371e68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371E68u;
    SET_GPR_U32(ctx, 31, 0x371E70u);
    ctx->pc = 0x371E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E68u;
    // 0x371e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371E68u, 0x371E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E70u;
label_371e70:
    // 0x371e70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371E70u;
    SET_GPR_U32(ctx, 31, 0x371E78u);
    ctx->pc = 0x371E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E70u;
    // 0x371e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371E70u, 0x371E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E78u;
label_371e78:
    // 0x371e78: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x371e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x371e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e80: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x371e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x371e84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371E84u;
    SET_GPR_U32(ctx, 31, 0x371E8Cu);
    ctx->pc = 0x371E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E84u;
    // 0x371e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371E84u, 0x371E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E8Cu;
label_371e8c:
    // 0x371e8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371E8Cu;
    SET_GPR_U32(ctx, 31, 0x371E94u);
    ctx->pc = 0x371E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E8Cu;
    // 0x371e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371E8Cu, 0x371E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E94u;
label_371e94:
    // 0x371e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e98: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x371e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371EA0u;
    SET_GPR_U32(ctx, 31, 0x371EA8u);
    ctx->pc = 0x371EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EA0u;
    // 0x371ea4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371EA0u, 0x371EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EA8u;
label_371ea8:
    // 0x371ea8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371EA8u;
    SET_GPR_U32(ctx, 31, 0x371EB0u);
    ctx->pc = 0x371EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EA8u;
    // 0x371eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371EA8u, 0x371EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EB0u;
label_371eb0:
    // 0x371eb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371eb4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x371eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x371eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ebc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371EBCu;
    SET_GPR_U32(ctx, 31, 0x371EC4u);
    ctx->pc = 0x371EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EBCu;
    // 0x371ec0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371EBCu, 0x371EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EC4u;
label_371ec4:
    // 0x371ec4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x371EC4u;
    SET_GPR_U32(ctx, 31, 0x371ECCu);
    ctx->pc = 0x371EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EC4u;
    // 0x371ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x371EC4u, 0x371ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371ECCu;
label_371ecc:
    // 0x371ecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ed4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x371ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371ed8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371ED8u;
    SET_GPR_U32(ctx, 31, 0x371EE0u);
    ctx->pc = 0x371EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371ED8u;
    // 0x371edc: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371ED8u, 0x371EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EE0u;
label_371ee0:
    // 0x371ee0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x371EE0u;
    SET_GPR_U32(ctx, 31, 0x371EE8u);
    ctx->pc = 0x371EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EE0u;
    // 0x371ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x371EE0u, 0x371EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EE8u;
label_371ee8:
    // 0x371ee8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x371ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371eec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x371eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x371ef0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x371ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x371ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ef8: 0x2ae03  sra         $s5, $v0, 24
    ctx->pc = 0x371ef8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 24));
    // 0x371efc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x371efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_371f00:
    // 0x371f00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f10: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371F10u;
    SET_GPR_U32(ctx, 31, 0x371F18u);
    ctx->pc = 0x371F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F10u;
    // 0x371f14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371F10u, 0x371F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F18u;
label_371f18:
    // 0x371f18: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371F18u;
    SET_GPR_U32(ctx, 31, 0x371F20u);
    ctx->pc = 0x371F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F18u;
    // 0x371f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371F18u, 0x371F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F20u;
label_371f20:
    // 0x371f20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371f24: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371f28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371F28u;
    {
        const bool branch_taken_0x371f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F28u;
        // 0x371f2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f28) {
            ctx->pc = 0x371F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371f00;
        }
    }
    ctx->pc = 0x371F30u;
    // 0x371f30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f34: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x371f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371f38:
    // 0x371f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x371f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f48: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371F48u;
    SET_GPR_U32(ctx, 31, 0x371F50u);
    ctx->pc = 0x371F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F48u;
    // 0x371f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371F48u, 0x371F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F50u;
label_371f50:
    // 0x371f50: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371F50u;
    SET_GPR_U32(ctx, 31, 0x371F58u);
    ctx->pc = 0x371F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F50u;
    // 0x371f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371F50u, 0x371F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F58u;
label_371f58:
    // 0x371f58: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371f5c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371f60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371F60u;
    {
        const bool branch_taken_0x371f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F60u;
        // 0x371f64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f60) {
            ctx->pc = 0x371F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371f38;
        }
    }
    ctx->pc = 0x371F68u;
    // 0x371f68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x371f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371f6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x371f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x371f70: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x371f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x371f74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x371f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371f78: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x371f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371f7c: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x371f7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f80: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x371f80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x371f84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x371f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f88: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x371f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371f8c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x371f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x371f90: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x371f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
    // 0x371f94: 0xc044e48  jal         func_113920
    ctx->pc = 0x371F94u;
    SET_GPR_U32(ctx, 31, 0x371F9Cu);
    ctx->pc = 0x371F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F94u;
    // 0x371f98: 0xafb50010  sw          $s5, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113920u, 0x371F94u, 0x371F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F9Cu;
label_371f9c:
    // 0x371f9c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371F9Cu;
    SET_GPR_U32(ctx, 31, 0x371FA4u);
    ctx->pc = 0x371FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F9Cu;
    // 0x371fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371F9Cu, 0x371FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371FA4u;
label_371fa4:
    // 0x371fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fa8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371FA8u;
    SET_GPR_U32(ctx, 31, 0x371FB0u);
    ctx->pc = 0x371FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371FA8u;
    // 0x371fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371FA8u, 0x371FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371FB0u;
label_371fb0:
    // 0x371fb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x371fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_371fb8:
    // 0x371fb8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x371fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x371fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371fc0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371FC0u;
    SET_GPR_U32(ctx, 31, 0x371FC8u);
    ctx->pc = 0x371FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371FC0u;
    // 0x371fc4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371FC0u, 0x371FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371FC8u;
label_371fc8:
    // 0x371fc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x371fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371fd4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x371FD4u;
    SET_GPR_U32(ctx, 31, 0x371FDCu);
    ctx->pc = 0x371FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371FD4u;
    // 0x371fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x371FD4u, 0x371FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371FDCu;
label_371fdc:
    // 0x371fdc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371fe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371FE0u;
    {
        const bool branch_taken_0x371fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FE0u;
        // 0x371fe4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fe0) {
            ctx->pc = 0x371FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371fb8;
        }
    }
    ctx->pc = 0x371FE8u;
    // 0x371fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x371fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_371ff0:
    // 0x371ff0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x371ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x371ff4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371ff8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x371FF8u;
    SET_GPR_U32(ctx, 31, 0x372000u);
    ctx->pc = 0x371FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371FF8u;
    // 0x371ffc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x371FF8u, 0x372000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372000u;
label_372000:
    // 0x372000: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x372000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372008: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37200c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37200Cu;
    SET_GPR_U32(ctx, 31, 0x372014u);
    ctx->pc = 0x372010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37200Cu;
    // 0x372010: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37200Cu, 0x372014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372014u;
label_372014:
    // 0x372014: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x372014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372018: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x372018u;
    {
        const bool branch_taken_0x372018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372018u;
        // 0x37201c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372018) {
            ctx->pc = 0x371FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371ff0;
        }
    }
    ctx->pc = 0x372020u;
    // 0x372020: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x372020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x372024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372028: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x372028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x37202c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x37202cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x372030: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x372030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x372034: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x372034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x372038: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x372038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37203c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x37203cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x372040: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x372040u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x372044: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x372044u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x372048: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x372048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37204c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x37204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x372050: 0x3e00008  jr          $ra
    ctx->pc = 0x372050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372050u;
        // 0x372054: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372058u;
}
