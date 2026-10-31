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

// Function: sub_0035DDF0
// Address: 0x35ddf0 - 0x35de90
void sub_0035DDF0_0x35ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DDF0_0x35ddf0");
#endif

    switch (ctx->pc) {
        case 0x35de1cu: goto label_35de1c;
        case 0x35de24u: goto label_35de24;
        case 0x35de38u: goto label_35de38;
        case 0x35de40u: goto label_35de40;
        case 0x35de54u: goto label_35de54;
        case 0x35de5cu: goto label_35de5c;
        case 0x35de6cu: goto label_35de6c;
        default: break;
    }

    ctx->pc = 0x35ddf0u;

    // 0x35ddf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35ddf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ddf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35ddfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35de00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35de00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35de04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35de0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35de10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35de14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DE14u;
    SET_GPR_U32(ctx, 31, 0x35DE1Cu);
    ctx->pc = 0x35DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE14u;
    // 0x35de18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DE14u, 0x35DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE1Cu;
label_35de1c:
    // 0x35de1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DE1Cu;
    SET_GPR_U32(ctx, 31, 0x35DE24u);
    ctx->pc = 0x35DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE1Cu;
    // 0x35de20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DE1Cu, 0x35DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE24u;
label_35de24:
    // 0x35de24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35de24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35de28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35de30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DE30u;
    SET_GPR_U32(ctx, 31, 0x35DE38u);
    ctx->pc = 0x35DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE30u;
    // 0x35de34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DE30u, 0x35DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE38u;
label_35de38:
    // 0x35de38: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DE38u;
    SET_GPR_U32(ctx, 31, 0x35DE40u);
    ctx->pc = 0x35DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE38u;
    // 0x35de3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DE38u, 0x35DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE40u;
label_35de40:
    // 0x35de40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35de40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35de44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DE4Cu;
    SET_GPR_U32(ctx, 31, 0x35DE54u);
    ctx->pc = 0x35DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE4Cu;
    // 0x35de50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DE4Cu, 0x35DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE54u;
label_35de54:
    // 0x35de54: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DE54u;
    SET_GPR_U32(ctx, 31, 0x35DE5Cu);
    ctx->pc = 0x35DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE54u;
    // 0x35de58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DE54u, 0x35DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE5Cu;
label_35de5c:
    // 0x35de5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35de5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de64: 0xc08e958  jal         func_23A560
    ctx->pc = 0x35DE64u;
    SET_GPR_U32(ctx, 31, 0x35DE6Cu);
    ctx->pc = 0x35DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE64u;
    // 0x35de68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A560u, 0x35DE64u, 0x35DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE6Cu;
label_35de6c:
    // 0x35de6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35de6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35de70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35de70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35de74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35de78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35de78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35de7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35de7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35de80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35de80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35de84: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE84u;
        // 0x35de88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE8Cu;
    // 0x35de8c: 0x0  nop
    ctx->pc = 0x35de8cu;
    // NOP
    ctx->pc = 0x35de90u;
}
