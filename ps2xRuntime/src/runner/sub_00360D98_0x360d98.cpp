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

// Function: sub_00360D98
// Address: 0x360d98 - 0x360f28
void sub_00360D98_0x360d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360D98_0x360d98");
#endif

    switch (ctx->pc) {
        case 0x360dd8u: goto label_360dd8;
        case 0x360de0u: goto label_360de0;
        case 0x360decu: goto label_360dec;
        case 0x360e04u: goto label_360e04;
        case 0x360e1cu: goto label_360e1c;
        case 0x360e24u: goto label_360e24;
        case 0x360e38u: goto label_360e38;
        case 0x360e40u: goto label_360e40;
        case 0x360e54u: goto label_360e54;
        case 0x360e5cu: goto label_360e5c;
        case 0x360e70u: goto label_360e70;
        case 0x360e78u: goto label_360e78;
        case 0x360e8cu: goto label_360e8c;
        case 0x360e94u: goto label_360e94;
        case 0x360ea8u: goto label_360ea8;
        case 0x360eb0u: goto label_360eb0;
        case 0x360ec4u: goto label_360ec4;
        case 0x360eecu: goto label_360eec;
        default: break;
    }

    ctx->pc = 0x360d98u;

    // 0x360d98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x360d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x360d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x360da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360da8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x360da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x360dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x360db0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x360db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x360db4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x360db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x360db8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x360db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x360dbc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x360dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x360dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360dc4: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x360dc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x360dc8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x360dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x360dcc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x360dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x360dd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360DD0u;
    SET_GPR_U32(ctx, 31, 0x360DD8u);
    ctx->pc = 0x360DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DD0u;
    // 0x360dd4: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360DD0u, 0x360DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DD8u;
label_360dd8:
    // 0x360dd8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x360DD8u;
    SET_GPR_U32(ctx, 31, 0x360DE0u);
    ctx->pc = 0x360DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DD8u;
    // 0x360ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x360DD8u, 0x360DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DE0u;
label_360de0:
    // 0x360de0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x360de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360de4: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x360DE4u;
    SET_GPR_U32(ctx, 31, 0x360DECu);
    ctx->pc = 0x360DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DE4u;
    // 0x360de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x360DE4u, 0x360DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DECu;
label_360dec:
    // 0x360dec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x360decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x360df0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360DF0u;
    {
        const bool branch_taken_0x360df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360DF0u;
        // 0x360df4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360df0) {
            ctx->pc = 0x360E08u;
            goto label_360e08;
        }
    }
    ctx->pc = 0x360DF8u;
    // 0x360df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360dfc: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x360DFCu;
    SET_GPR_U32(ctx, 31, 0x360E04u);
    ctx->pc = 0x360E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DFCu;
    // 0x360e00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x360DFCu, 0x360E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E04u;
label_360e04:
    // 0x360e04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x360e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360e08:
    // 0x360e08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x360e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360e10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360E14u;
    SET_GPR_U32(ctx, 31, 0x360E1Cu);
    ctx->pc = 0x360E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E14u;
    // 0x360e18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360E14u, 0x360E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E1Cu;
label_360e1c:
    // 0x360e1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360E1Cu;
    SET_GPR_U32(ctx, 31, 0x360E24u);
    ctx->pc = 0x360E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E1Cu;
    // 0x360e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360E1Cu, 0x360E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E24u;
label_360e24:
    // 0x360e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x360e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360e30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360E30u;
    SET_GPR_U32(ctx, 31, 0x360E38u);
    ctx->pc = 0x360E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E30u;
    // 0x360e34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360E30u, 0x360E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E38u;
label_360e38:
    // 0x360e38: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360E38u;
    SET_GPR_U32(ctx, 31, 0x360E40u);
    ctx->pc = 0x360E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E38u;
    // 0x360e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360E38u, 0x360E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E40u;
label_360e40:
    // 0x360e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x360e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360e4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360E4Cu;
    SET_GPR_U32(ctx, 31, 0x360E54u);
    ctx->pc = 0x360E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E4Cu;
    // 0x360e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360E4Cu, 0x360E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E54u;
label_360e54:
    // 0x360e54: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360E54u;
    SET_GPR_U32(ctx, 31, 0x360E5Cu);
    ctx->pc = 0x360E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E54u;
    // 0x360e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360E54u, 0x360E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E5Cu;
label_360e5c:
    // 0x360e5c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x360e5cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x360e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360e68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360E68u;
    SET_GPR_U32(ctx, 31, 0x360E70u);
    ctx->pc = 0x360E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E68u;
    // 0x360e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360E68u, 0x360E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E70u;
label_360e70:
    // 0x360e70: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360E70u;
    SET_GPR_U32(ctx, 31, 0x360E78u);
    ctx->pc = 0x360E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E70u;
    // 0x360e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360E70u, 0x360E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E78u;
label_360e78:
    // 0x360e78: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x360e78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x360e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x360e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x360e84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360E84u;
    SET_GPR_U32(ctx, 31, 0x360E8Cu);
    ctx->pc = 0x360E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E84u;
    // 0x360e88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360E84u, 0x360E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E8Cu;
label_360e8c:
    // 0x360e8c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360E8Cu;
    SET_GPR_U32(ctx, 31, 0x360E94u);
    ctx->pc = 0x360E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E8Cu;
    // 0x360e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360E8Cu, 0x360E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E94u;
label_360e94:
    // 0x360e94: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x360e94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x360e98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x360e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x360ea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360EA0u;
    SET_GPR_U32(ctx, 31, 0x360EA8u);
    ctx->pc = 0x360EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EA0u;
    // 0x360ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360EA0u, 0x360EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EA8u;
label_360ea8:
    // 0x360ea8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360EA8u;
    SET_GPR_U32(ctx, 31, 0x360EB0u);
    ctx->pc = 0x360EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EA8u;
    // 0x360eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360EA8u, 0x360EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EB0u;
label_360eb0:
    // 0x360eb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x360eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360eb8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x360eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x360ebc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360EBCu;
    SET_GPR_U32(ctx, 31, 0x360EC4u);
    ctx->pc = 0x360EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EBCu;
    // 0x360ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360EBCu, 0x360EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EC4u;
label_360ec4:
    // 0x360ec4: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x360ec4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360ec8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x360ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ecc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x360eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ed0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x360ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ed4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x360ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ed8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x360ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x360edc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x360edcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x360ee0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x360ee0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x360ee4: 0xc0b85d8  jal         func_2E1760
    ctx->pc = 0x360EE4u;
    SET_GPR_U32(ctx, 31, 0x360EECu);
    ctx->pc = 0x360EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EE4u;
    // 0x360ee8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1760u, 0x360EE4u, 0x360EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EECu;
label_360eec:
    // 0x360eec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x360eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360ef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ef4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x360ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360ef8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x360ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360efc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360f00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x360f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360f04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x360f04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360f0c: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x360f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x360f10: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x360f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x360f14: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x360f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x360f18: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x360f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x360F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F1Cu;
        // 0x360f20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360F24u;
    // 0x360f24: 0x0  nop
    ctx->pc = 0x360f24u;
    // NOP
    ctx->pc = 0x360f28u;
}
