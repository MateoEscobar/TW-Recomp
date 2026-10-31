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

// Function: sub_003F8F38
// Address: 0x3f8f38 - 0x3f8fd0
void sub_003F8F38_0x3f8f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8F38_0x3f8f38");
#endif

    switch (ctx->pc) {
        case 0x3f8f60u: goto label_3f8f60;
        case 0x3f8f6cu: goto label_3f8f6c;
        case 0x3f8f84u: goto label_3f8f84;
        case 0x3f8f9cu: goto label_3f8f9c;
        case 0x3f8fb0u: goto label_3f8fb0;
        default: break;
    }

    ctx->pc = 0x3f8f38u;

    // 0x3f8f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f8f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f8f3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3f8f40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f8f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f8f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3f8f48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f8f4c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3f8f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3f8f50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3f8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3f8f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f8f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f8f58: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F8F58u;
    SET_GPR_U32(ctx, 31, 0x3F8F60u);
    ctx->pc = 0x3F8F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8F58u;
    // 0x3f8f5c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F8F58u, 0x3F8F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8F60u;
label_3f8f60:
    // 0x3f8f60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f8f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f64: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F8F64u;
    SET_GPR_U32(ctx, 31, 0x3F8F6Cu);
    ctx->pc = 0x3F8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8F64u;
    // 0x3f8f68: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F8F64u, 0x3F8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8F6Cu;
label_3f8f6c:
    // 0x3f8f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f8f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f8f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f74: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x3f8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x3f8f78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f8f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8f7c: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F8F7Cu;
    SET_GPR_U32(ctx, 31, 0x3F8F84u);
    ctx->pc = 0x3F8F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8F7Cu;
    // 0x3f8f80: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F8F7Cu, 0x3F8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8F84u;
label_3f8f84:
    // 0x3f8f84: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F8F84u;
    {
        const bool branch_taken_0x3f8f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8F84u;
        // 0x3f8f88: 0x8e622c7c  lw          $v0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8f84) {
            ctx->pc = 0x3F8F9Cu;
            goto label_3f8f9c;
        }
    }
    ctx->pc = 0x3F8F8Cu;
    // 0x3f8f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f8f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f8f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8f94: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F8F94u;
    SET_GPR_U32(ctx, 31, 0x3F8F9Cu);
    ctx->pc = 0x3F8F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8F94u;
    // 0x3f8f98: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F8F94u, 0x3F8F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8F9Cu;
label_3f8f9c:
    // 0x3f8f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f8fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f8fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f8fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f8fa8: 0xc0e942a  jal         func_3A50A8
    ctx->pc = 0x3F8FA8u;
    SET_GPR_U32(ctx, 31, 0x3F8FB0u);
    ctx->pc = 0x3F8FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8FA8u;
    // 0x3f8fac: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50A8u, 0x3F8FA8u, 0x3F8FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8FB0u;
label_3f8fb0:
    // 0x3f8fb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f8fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f8fb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f8fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f8fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f8fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f8fbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3f8fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f8fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f8fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f8fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F8FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8FC4u;
        // 0x3f8fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F8FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F8FCCu;
    // 0x3f8fcc: 0x0  nop
    ctx->pc = 0x3f8fccu;
    // NOP
    ctx->pc = 0x3f8fd0u;
}
