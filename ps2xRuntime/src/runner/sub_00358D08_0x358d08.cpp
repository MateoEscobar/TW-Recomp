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

// Function: sub_00358D08
// Address: 0x358d08 - 0x358de0
void sub_00358D08_0x358d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358D08_0x358d08");
#endif

    switch (ctx->pc) {
        case 0x358d30u: goto label_358d30;
        case 0x358d38u: goto label_358d38;
        case 0x358d48u: goto label_358d48;
        case 0x358d60u: goto label_358d60;
        case 0x358d68u: goto label_358d68;
        case 0x358d84u: goto label_358d84;
        case 0x358d90u: goto label_358d90;
        case 0x358da0u: goto label_358da0;
        case 0x358db4u: goto label_358db4;
        default: break;
    }

    ctx->pc = 0x358d08u;

    // 0x358d08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x358d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x358d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358d10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x358d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x358d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x358d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x358d1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x358d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x358d20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x358d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x358d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358d28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358D28u;
    SET_GPR_U32(ctx, 31, 0x358D30u);
    ctx->pc = 0x358D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D28u;
    // 0x358d2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358D28u, 0x358D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D30u;
label_358d30:
    // 0x358d30: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358D30u;
    SET_GPR_U32(ctx, 31, 0x358D38u);
    ctx->pc = 0x358D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D30u;
    // 0x358d34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358D30u, 0x358D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D38u;
label_358d38:
    // 0x358d38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x358d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x358d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d40: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x358d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d44: 0x0  nop
    ctx->pc = 0x358d44u;
    // NOP
label_358d48:
    // 0x358d48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x358d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x358d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358d54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x358d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d58: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x358D58u;
    SET_GPR_U32(ctx, 31, 0x358D60u);
    ctx->pc = 0x358D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D58u;
    // 0x358d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x358D58u, 0x358D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D60u;
label_358d60:
    // 0x358d60: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358D60u;
    SET_GPR_U32(ctx, 31, 0x358D68u);
    ctx->pc = 0x358D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D60u;
    // 0x358d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358D60u, 0x358D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D68u;
label_358d68:
    // 0x358d68: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x358d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x358d6c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x358d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x358d70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x358D70u;
    {
        const bool branch_taken_0x358d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D70u;
        // 0x358d74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d70) {
            ctx->pc = 0x358D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358d48;
        }
    }
    ctx->pc = 0x358D78u;
    // 0x358d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x358d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d7c: 0xc08e8e4  jal         func_23A390
    ctx->pc = 0x358D7Cu;
    SET_GPR_U32(ctx, 31, 0x358D84u);
    ctx->pc = 0x358D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D7Cu;
    // 0x358d80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A390u, 0x358D7Cu, 0x358D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D84u;
label_358d84:
    // 0x358d84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x358d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d88: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x358d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x358d8c: 0x0  nop
    ctx->pc = 0x358d8cu;
    // NOP
label_358d90:
    // 0x358d90: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x358d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x358d94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x358d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x358d98: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x358D98u;
    SET_GPR_U32(ctx, 31, 0x358DA0u);
    ctx->pc = 0x358D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D98u;
    // 0x358d9c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x358D98u, 0x358DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DA0u;
label_358da0:
    // 0x358da0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x358da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358dac: 0xc102576  jal         func_4095D8
    ctx->pc = 0x358DACu;
    SET_GPR_U32(ctx, 31, 0x358DB4u);
    ctx->pc = 0x358DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DACu;
    // 0x358db0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x358DACu, 0x358DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DB4u;
label_358db4:
    // 0x358db4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x358db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x358db8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x358DB8u;
    {
        const bool branch_taken_0x358db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DB8u;
        // 0x358dbc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358db8) {
            ctx->pc = 0x358D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358d90;
        }
    }
    ctx->pc = 0x358DC0u;
    // 0x358dc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x358dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358dc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x358dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358dcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x358dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358dd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x358dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x358DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DD8u;
        // 0x358ddc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358DE0u;
}
