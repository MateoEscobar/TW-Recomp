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

// Function: sub_00461C98
// Address: 0x461c98 - 0x461d60
void sub_00461C98_0x461c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461C98_0x461c98");
#endif

    switch (ctx->pc) {
        case 0x461cb8u: goto label_461cb8;
        case 0x461cd4u: goto label_461cd4;
        case 0x461cdcu: goto label_461cdc;
        case 0x461cf4u: goto label_461cf4;
        case 0x461cfcu: goto label_461cfc;
        case 0x461d10u: goto label_461d10;
        case 0x461d20u: goto label_461d20;
        case 0x461d30u: goto label_461d30;
        case 0x461d3cu: goto label_461d3c;
        default: break;
    }

    ctx->pc = 0x461c98u;

    // 0x461c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x461c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x461c9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x461c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x461ca0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x461ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x461ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x461ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x461ca8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x461ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x461cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461cb0: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x461CB0u;
    SET_GPR_U32(ctx, 31, 0x461CB8u);
    ctx->pc = 0x461CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461CB0u;
    // 0x461cb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x461CB0u, 0x461CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CB8u;
label_461cb8:
    // 0x461cb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x461cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x461cbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x461cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461cc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461cc4: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x461cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x461cc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x461cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x461ccc: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x461CCCu;
    SET_GPR_U32(ctx, 31, 0x461CD4u);
    ctx->pc = 0x461CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461CCCu;
    // 0x461cd0: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x461CCCu, 0x461CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CD4u;
label_461cd4:
    // 0x461cd4: 0xc11dad8  jal         func_476B60
    ctx->pc = 0x461CD4u;
    SET_GPR_U32(ctx, 31, 0x461CDCu);
    ctx->pc = 0x461CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461CD4u;
    // 0x461cd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B60u, 0x461CD4u, 0x461CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CDCu;
label_461cdc:
    // 0x461cdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x461cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x461ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ce4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x461ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461cec: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x461CECu;
    SET_GPR_U32(ctx, 31, 0x461CF4u);
    ctx->pc = 0x461CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461CECu;
    // 0x461cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x461CECu, 0x461CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CF4u;
label_461cf4:
    // 0x461cf4: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x461CF4u;
    SET_GPR_U32(ctx, 31, 0x461CFCu);
    ctx->pc = 0x461CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461CF4u;
    // 0x461cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x461CF4u, 0x461CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CFCu;
label_461cfc:
    // 0x461cfc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x461cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x461d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x461d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461d08: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x461D08u;
    SET_GPR_U32(ctx, 31, 0x461D10u);
    ctx->pc = 0x461D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461D08u;
    // 0x461d0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x461D08u, 0x461D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D10u;
label_461d10:
    // 0x461d10: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x461d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x461d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461d18: 0xc11dadc  jal         func_476B70
    ctx->pc = 0x461D18u;
    SET_GPR_U32(ctx, 31, 0x461D20u);
    ctx->pc = 0x461D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461D18u;
    // 0x461d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B70u, 0x461D18u, 0x461D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D20u;
label_461d20:
    // 0x461d20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x461d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x461d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461d28: 0xc11dadc  jal         func_476B70
    ctx->pc = 0x461D28u;
    SET_GPR_U32(ctx, 31, 0x461D30u);
    ctx->pc = 0x461D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461D28u;
    // 0x461d2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B70u, 0x461D28u, 0x461D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D30u;
label_461d30:
    // 0x461d30: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x461d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x461d34: 0xc11daf2  jal         func_476BC8
    ctx->pc = 0x461D34u;
    SET_GPR_U32(ctx, 31, 0x461D3Cu);
    ctx->pc = 0x461D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461D34u;
    // 0x461d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476BC8u, 0x461D34u, 0x461D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D3Cu;
label_461d3c:
    // 0x461d3c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x461d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461d40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x461d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x461d44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x461d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x461d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x461d4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x461d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461d54: 0x3e00008  jr          $ra
    ctx->pc = 0x461D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461D54u;
        // 0x461d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461D5Cu;
    // 0x461d5c: 0x0  nop
    ctx->pc = 0x461d5cu;
    // NOP
    ctx->pc = 0x461d60u;
}
