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

// Function: sub_00375D98
// Address: 0x375d98 - 0x375ef8
void sub_00375D98_0x375d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375D98_0x375d98");
#endif

    switch (ctx->pc) {
        case 0x375dd8u: goto label_375dd8;
        case 0x375de0u: goto label_375de0;
        case 0x375df4u: goto label_375df4;
        case 0x375e08u: goto label_375e08;
        case 0x375e20u: goto label_375e20;
        case 0x375e28u: goto label_375e28;
        case 0x375e40u: goto label_375e40;
        case 0x375e48u: goto label_375e48;
        case 0x375e5cu: goto label_375e5c;
        case 0x375e64u: goto label_375e64;
        case 0x375e78u: goto label_375e78;
        case 0x375e80u: goto label_375e80;
        case 0x375e94u: goto label_375e94;
        case 0x375e9cu: goto label_375e9c;
        case 0x375ec0u: goto label_375ec0;
        default: break;
    }

    ctx->pc = 0x375d98u;

    // 0x375d98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x375d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x375d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375da0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x375da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x375da4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x375da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x375da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375dac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x375dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375db0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x375db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x375db4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x375db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x375db8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375dbc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x375dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x375dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375dc4: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x375dc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x375dc8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x375dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x375dcc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x375dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x375dd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375DD0u;
    SET_GPR_U32(ctx, 31, 0x375DD8u);
    ctx->pc = 0x375DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DD0u;
    // 0x375dd4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375DD0u, 0x375DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DD8u;
label_375dd8:
    // 0x375dd8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375DD8u;
    SET_GPR_U32(ctx, 31, 0x375DE0u);
    ctx->pc = 0x375DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DD8u;
    // 0x375ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375DD8u, 0x375DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DE0u;
label_375de0:
    // 0x375de0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375dec: 0xc102488  jal         func_409220
    ctx->pc = 0x375DECu;
    SET_GPR_U32(ctx, 31, 0x375DF4u);
    ctx->pc = 0x375DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DECu;
    // 0x375df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375DECu, 0x375DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DF4u;
label_375df4:
    // 0x375df4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375dfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375e00: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375E00u;
    SET_GPR_U32(ctx, 31, 0x375E08u);
    ctx->pc = 0x375E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E00u;
    // 0x375e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375E00u, 0x375E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E08u;
label_375e08:
    // 0x375e08: 0x34068038  ori         $a2, $zero, 0x8038
    ctx->pc = 0x375e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x375e0c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375e10: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x375e10u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x375e14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x375e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375e18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375E18u;
    SET_GPR_U32(ctx, 31, 0x375E20u);
    ctx->pc = 0x375E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E18u;
    // 0x375e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375E18u, 0x375E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E20u;
label_375e20:
    // 0x375e20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375E20u;
    SET_GPR_U32(ctx, 31, 0x375E28u);
    ctx->pc = 0x375E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E20u;
    // 0x375e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375E20u, 0x375E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E28u;
label_375e28:
    // 0x375e28: 0x34068058  ori         $a2, $zero, 0x8058
    ctx->pc = 0x375e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32856);
    // 0x375e2c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x375e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x375e30: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x375e30u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x375e34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x375e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x375e38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375E38u;
    SET_GPR_U32(ctx, 31, 0x375E40u);
    ctx->pc = 0x375E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E38u;
    // 0x375e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375E38u, 0x375E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E40u;
label_375e40:
    // 0x375e40: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375E40u;
    SET_GPR_U32(ctx, 31, 0x375E48u);
    ctx->pc = 0x375E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E40u;
    // 0x375e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375E40u, 0x375E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E48u;
label_375e48:
    // 0x375e48: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x375e48u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x375e4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x375e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375e54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375E54u;
    SET_GPR_U32(ctx, 31, 0x375E5Cu);
    ctx->pc = 0x375E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E54u;
    // 0x375e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375E54u, 0x375E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E5Cu;
label_375e5c:
    // 0x375e5c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375E5Cu;
    SET_GPR_U32(ctx, 31, 0x375E64u);
    ctx->pc = 0x375E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E5Cu;
    // 0x375e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375E5Cu, 0x375E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E64u;
label_375e64:
    // 0x375e64: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x375e64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x375e68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x375e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375e70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375E70u;
    SET_GPR_U32(ctx, 31, 0x375E78u);
    ctx->pc = 0x375E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E70u;
    // 0x375e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375E70u, 0x375E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E78u;
label_375e78:
    // 0x375e78: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375E78u;
    SET_GPR_U32(ctx, 31, 0x375E80u);
    ctx->pc = 0x375E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E78u;
    // 0x375e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375E78u, 0x375E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E80u;
label_375e80:
    // 0x375e80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x375e80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x375e84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x375e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375E8Cu;
    SET_GPR_U32(ctx, 31, 0x375E94u);
    ctx->pc = 0x375E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E8Cu;
    // 0x375e90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375E8Cu, 0x375E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E94u;
label_375e94:
    // 0x375e94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x375E94u;
    SET_GPR_U32(ctx, 31, 0x375E9Cu);
    ctx->pc = 0x375E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E94u;
    // 0x375e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x375E94u, 0x375E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E9Cu;
label_375e9c:
    // 0x375e9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x375e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x375ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ea4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x375ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ea8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x375ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375eac: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x375eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x375eb0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x375eb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x375eb4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x375eb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x375eb8: 0xc0c5a62  jal         func_316988
    ctx->pc = 0x375EB8u;
    SET_GPR_U32(ctx, 31, 0x375EC0u);
    ctx->pc = 0x375EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375EB8u;
    // 0x375ebc: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316988u, 0x375EB8u, 0x375EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EC0u;
label_375ec0:
    // 0x375ec0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x375ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x375ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375ecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x375eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375ed0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x375ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375ed4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x375ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375edc: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x375edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x375ee0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x375ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x375ee4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x375ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x375ee8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x375ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375eec: 0x3e00008  jr          $ra
    ctx->pc = 0x375EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375EECu;
        // 0x375ef0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375EF4u;
    // 0x375ef4: 0x0  nop
    ctx->pc = 0x375ef4u;
    // NOP
    ctx->pc = 0x375ef8u;
}
