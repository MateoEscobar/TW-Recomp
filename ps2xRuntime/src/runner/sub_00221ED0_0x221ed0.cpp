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

// Function: sub_00221ED0
// Address: 0x221ed0 - 0x221f80
void sub_00221ED0_0x221ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221ED0_0x221ed0");
#endif

    switch (ctx->pc) {
        case 0x221efcu: goto label_221efc;
        case 0x221f28u: goto label_221f28;
        case 0x221f40u: goto label_221f40;
        case 0x221f4cu: goto label_221f4c;
        case 0x221f58u: goto label_221f58;
        case 0x221f68u: goto label_221f68;
        default: break;
    }

    ctx->pc = 0x221ed0u;

    // 0x221ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221ed4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x221ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x221ed8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x221ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x221edc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x221edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221eec: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x221EECu;
    {
        const bool branch_taken_0x221eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EECu;
        // 0x221ef0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eec) {
            ctx->pc = 0x221F68u;
            goto label_221f68;
        }
    }
    ctx->pc = 0x221EF4u;
    // 0x221ef4: 0xc095018  jal         func_254060
    ctx->pc = 0x221EF4u;
    SET_GPR_U32(ctx, 31, 0x221EFCu);
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x221EF4u, 0x221EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EFCu;
label_221efc:
    // 0x221efc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x221efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221f04: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x221F04u;
    {
        const bool branch_taken_0x221f04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x221F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F04u;
        // 0x221f08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f04) {
            ctx->pc = 0x221F30u;
            goto label_221f30;
        }
    }
    ctx->pc = 0x221F0Cu;
    // 0x221f0c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221F0Cu;
    {
        const bool branch_taken_0x221f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x221F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F0Cu;
        // 0x221f10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f0c) {
            ctx->pc = 0x221F1Cu;
            goto label_221f1c;
        }
    }
    ctx->pc = 0x221F14u;
    // 0x221f14: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221F14u;
    {
        const bool branch_taken_0x221f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x221f14) {
            ctx->pc = 0x221F30u;
            goto label_221f30;
        }
    }
    ctx->pc = 0x221F1Cu;
label_221f1c:
    // 0x221f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f20: 0xc094f9a  jal         func_253E68
    ctx->pc = 0x221F20u;
    SET_GPR_U32(ctx, 31, 0x221F28u);
    ctx->pc = 0x221F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F20u;
    // 0x221f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x221F20u, 0x221F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F28u;
label_221f28:
    // 0x221f28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x221F28u;
    {
        const bool branch_taken_0x221f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F28u;
        // 0x221f2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f28) {
            ctx->pc = 0x221F6Cu;
            goto label_221f6c;
        }
    }
    ctx->pc = 0x221F30u;
label_221f30:
    // 0x221f30: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x221F30u;
    {
        const bool branch_taken_0x221f30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F30u;
        // 0x221f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f30) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221F38u;
    // 0x221f38: 0xc094fca  jal         func_253F28
    ctx->pc = 0x221F38u;
    SET_GPR_U32(ctx, 31, 0x221F40u);
    ctx->pc = 0x221F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F38u;
    // 0x221f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x221F38u, 0x221F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F40u;
label_221f40:
    // 0x221f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f44: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x221F44u;
    SET_GPR_U32(ctx, 31, 0x221F4Cu);
    ctx->pc = 0x221F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F44u;
    // 0x221f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x221F44u, 0x221F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F4Cu;
label_221f4c:
    // 0x221f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f50: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x221F50u;
    SET_GPR_U32(ctx, 31, 0x221F58u);
    ctx->pc = 0x221F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F50u;
    // 0x221f54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x221F50u, 0x221F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F58u;
label_221f58:
    // 0x221f58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221F58u;
    {
        const bool branch_taken_0x221f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F58u;
        // 0x221f5c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f58) {
            ctx->pc = 0x221F6Cu;
            goto label_221f6c;
        }
    }
    ctx->pc = 0x221F60u;
label_221f60:
    // 0x221f60: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x221F60u;
    SET_GPR_U32(ctx, 31, 0x221F68u);
    ctx->pc = 0x221F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F60u;
    // 0x221f64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x221F60u, 0x221F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F68u;
label_221f68:
    // 0x221f68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x221f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_221f6c:
    // 0x221f6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x221f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221f70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221f78: 0x3e00008  jr          $ra
    ctx->pc = 0x221F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F78u;
        // 0x221f7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221F80u;
}
