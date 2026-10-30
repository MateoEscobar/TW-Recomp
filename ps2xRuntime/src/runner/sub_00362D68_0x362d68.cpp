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

// Function: sub_00362D68
// Address: 0x362d68 - 0x362ec0
void sub_00362D68_0x362d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362D68_0x362d68");
#endif

    switch (ctx->pc) {
        case 0x362da0u: goto label_362da0;
        case 0x362da8u: goto label_362da8;
        case 0x362dbcu: goto label_362dbc;
        case 0x362dc4u: goto label_362dc4;
        case 0x362ddcu: goto label_362ddc;
        case 0x362de4u: goto label_362de4;
        case 0x362df8u: goto label_362df8;
        case 0x362e00u: goto label_362e00;
        case 0x362e10u: goto label_362e10;
        case 0x362e28u: goto label_362e28;
        case 0x362e30u: goto label_362e30;
        case 0x362e58u: goto label_362e58;
        case 0x362e60u: goto label_362e60;
        case 0x362e70u: goto label_362e70;
        case 0x362e84u: goto label_362e84;
        default: break;
    }

    ctx->pc = 0x362d68u;

    // 0x362d68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x362d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x362d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x362d74: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x362d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x362d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x362d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362d80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x362d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x362d84: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x362d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x362d88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x362d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362d8c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x362d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x362d90: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x362d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x362d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x362d98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362D98u;
    SET_GPR_U32(ctx, 31, 0x362DA0u);
    ctx->pc = 0x362D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D98u;
    // 0x362d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362D98u, 0x362DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DA0u;
label_362da0:
    // 0x362da0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362DA0u;
    SET_GPR_U32(ctx, 31, 0x362DA8u);
    ctx->pc = 0x362DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DA0u;
    // 0x362da4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362DA0u, 0x362DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DA8u;
label_362da8:
    // 0x362da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362dac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362db4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362DB4u;
    SET_GPR_U32(ctx, 31, 0x362DBCu);
    ctx->pc = 0x362DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DB4u;
    // 0x362db8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362DB4u, 0x362DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DBCu;
label_362dbc:
    // 0x362dbc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362DBCu;
    SET_GPR_U32(ctx, 31, 0x362DC4u);
    ctx->pc = 0x362DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DBCu;
    // 0x362dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362DBCu, 0x362DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DC4u;
label_362dc4:
    // 0x362dc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x362dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362dc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362dcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362dd4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362DD4u;
    SET_GPR_U32(ctx, 31, 0x362DDCu);
    ctx->pc = 0x362DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DD4u;
    // 0x362dd8: 0x2ac03  sra         $s5, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362DD4u, 0x362DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DDCu;
label_362ddc:
    // 0x362ddc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362DDCu;
    SET_GPR_U32(ctx, 31, 0x362DE4u);
    ctx->pc = 0x362DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DDCu;
    // 0x362de0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362DDCu, 0x362DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DE4u;
label_362de4:
    // 0x362de4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362dec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362df0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362DF0u;
    SET_GPR_U32(ctx, 31, 0x362DF8u);
    ctx->pc = 0x362DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DF0u;
    // 0x362df4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362DF0u, 0x362DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DF8u;
label_362df8:
    // 0x362df8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362DF8u;
    SET_GPR_U32(ctx, 31, 0x362E00u);
    ctx->pc = 0x362DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DF8u;
    // 0x362dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362DF8u, 0x362E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E00u;
label_362e00:
    // 0x362e00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e08: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x362e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e0c: 0x0  nop
    ctx->pc = 0x362e0cu;
    // NOP
label_362e10:
    // 0x362e10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x362e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e20: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x362E20u;
    SET_GPR_U32(ctx, 31, 0x362E28u);
    ctx->pc = 0x362E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E20u;
    // 0x362e24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x362E20u, 0x362E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E28u;
label_362e28:
    // 0x362e28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362E28u;
    SET_GPR_U32(ctx, 31, 0x362E30u);
    ctx->pc = 0x362E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E28u;
    // 0x362e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362E28u, 0x362E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E30u;
label_362e30:
    // 0x362e30: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x362e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x362e34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x362e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x362e38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x362E38u;
    {
        const bool branch_taken_0x362e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E38u;
        // 0x362e3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e38) {
            ctx->pc = 0x362E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362e10;
        }
    }
    ctx->pc = 0x362E40u;
    // 0x362e40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x362e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x362e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e48: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x362e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e4c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x362e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e50: 0xc0b0b4e  jal         func_2C2D38
    ctx->pc = 0x362E50u;
    SET_GPR_U32(ctx, 31, 0x362E58u);
    ctx->pc = 0x362E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E50u;
    // 0x362e54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D38u, 0x362E50u, 0x362E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E58u;
label_362e58:
    // 0x362e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_362e60:
    // 0x362e60: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x362e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x362e64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x362e68: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x362E68u;
    SET_GPR_U32(ctx, 31, 0x362E70u);
    ctx->pc = 0x362E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E68u;
    // 0x362e6c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x362E68u, 0x362E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E70u;
label_362e70:
    // 0x362e70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x362e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362e7c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x362E7Cu;
    SET_GPR_U32(ctx, 31, 0x362E84u);
    ctx->pc = 0x362E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E7Cu;
    // 0x362e80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x362E7Cu, 0x362E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E84u;
label_362e84:
    // 0x362e84: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x362e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x362e88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x362E88u;
    {
        const bool branch_taken_0x362e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E88u;
        // 0x362e8c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e88) {
            ctx->pc = 0x362E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362e60;
        }
    }
    ctx->pc = 0x362E90u;
    // 0x362e90: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x362e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x362e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362e9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x362e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362ea0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x362ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362ea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x362ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362ea8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x362ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362eac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x362eacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x362EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EB4u;
        // 0x362eb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362EBCu;
    // 0x362ebc: 0x0  nop
    ctx->pc = 0x362ebcu;
    // NOP
    ctx->pc = 0x362ec0u;
}
