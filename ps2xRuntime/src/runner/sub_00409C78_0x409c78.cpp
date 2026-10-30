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

// Function: sub_00409C78
// Address: 0x409c78 - 0x409d68
void sub_00409C78_0x409c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409C78_0x409c78");
#endif

    switch (ctx->pc) {
        case 0x409ca4u: goto label_409ca4;
        case 0x409cb4u: goto label_409cb4;
        case 0x409cc4u: goto label_409cc4;
        case 0x409cd0u: goto label_409cd0;
        case 0x409ce4u: goto label_409ce4;
        case 0x409cf4u: goto label_409cf4;
        case 0x409d00u: goto label_409d00;
        case 0x409d0cu: goto label_409d0c;
        case 0x409d18u: goto label_409d18;
        case 0x409d20u: goto label_409d20;
        case 0x409d2cu: goto label_409d2c;
        case 0x409d38u: goto label_409d38;
        default: break;
    }

    ctx->pc = 0x409c78u;

    // 0x409c78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x409c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x409c7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x409c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x409c80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x409c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x409c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x409c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x409c8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x409c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x409c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x409c94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x409c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409c9c: 0xc0c8f7e  jal         func_323DF8
    ctx->pc = 0x409C9Cu;
    SET_GPR_U32(ctx, 31, 0x409CA4u);
    ctx->pc = 0x409CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C9Cu;
    // 0x409ca0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323DF8u, 0x409C9Cu, 0x409CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CA4u;
label_409ca4:
    // 0x409ca4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cac: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409CACu;
    SET_GPR_U32(ctx, 31, 0x409CB4u);
    ctx->pc = 0x409CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CACu;
    // 0x409cb0: 0x24a58038  addiu       $a1, $a1, -0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409CACu, 0x409CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CB4u;
label_409cb4:
    // 0x409cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x409cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cbc: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x409CBCu;
    SET_GPR_U32(ctx, 31, 0x409CC4u);
    ctx->pc = 0x409CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CBCu;
    // 0x409cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x409CBCu, 0x409CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CC4u;
label_409cc4:
    // 0x409cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cc8: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409CC8u;
    SET_GPR_U32(ctx, 31, 0x409CD0u);
    ctx->pc = 0x409CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CC8u;
    // 0x409ccc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409CC8u, 0x409CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CD0u;
label_409cd0:
    // 0x409cd0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x409CD0u;
    {
        const bool branch_taken_0x409cd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x409CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CD0u;
        // 0x409cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409cd0) {
            ctx->pc = 0x409D04u;
            goto label_409d04;
        }
    }
    ctx->pc = 0x409CD8u;
    // 0x409cd8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409cdc: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409CDCu;
    SET_GPR_U32(ctx, 31, 0x409CE4u);
    ctx->pc = 0x409CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CDCu;
    // 0x409ce0: 0x24a58040  addiu       $a1, $a1, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409CDCu, 0x409CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CE4u;
label_409ce4:
    // 0x409ce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cec: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x409CECu;
    SET_GPR_U32(ctx, 31, 0x409CF4u);
    ctx->pc = 0x409CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CECu;
    // 0x409cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x409CECu, 0x409CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409CF4u;
label_409cf4:
    // 0x409cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409cf8: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409CF8u;
    SET_GPR_U32(ctx, 31, 0x409D00u);
    ctx->pc = 0x409CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409CF8u;
    // 0x409cfc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409CF8u, 0x409D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D00u;
label_409d00:
    // 0x409d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_409d04:
    // 0x409d04: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409D04u;
    SET_GPR_U32(ctx, 31, 0x409D0Cu);
    ctx->pc = 0x409D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D04u;
    // 0x409d08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409D04u, 0x409D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D0Cu;
label_409d0c:
    // 0x409d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x409d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d10: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x409D10u;
    SET_GPR_U32(ctx, 31, 0x409D18u);
    ctx->pc = 0x409D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D10u;
    // 0x409d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x409D10u, 0x409D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D18u;
label_409d18:
    // 0x409d18: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409D18u;
    SET_GPR_U32(ctx, 31, 0x409D20u);
    ctx->pc = 0x409D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D18u;
    // 0x409d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409D18u, 0x409D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D20u;
label_409d20:
    // 0x409d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d24: 0xc10289c  jal         func_40A270
    ctx->pc = 0x409D24u;
    SET_GPR_U32(ctx, 31, 0x409D2Cu);
    ctx->pc = 0x409D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D24u;
    // 0x409d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A270u, 0x409D24u, 0x409D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D2Cu;
label_409d2c:
    // 0x409d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d30: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409D30u;
    SET_GPR_U32(ctx, 31, 0x409D38u);
    ctx->pc = 0x409D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D30u;
    // 0x409d34: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409D30u, 0x409D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D38u;
label_409d38:
    // 0x409d38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x409d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x409d3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x409d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409d44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x409d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x409D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D4Cu;
        // 0x409d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409D54u;
    // 0x409d54: 0x0  nop
    ctx->pc = 0x409d54u;
    // NOP
    // 0x409d58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x409d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x409d5c: 0x0  nop
    ctx->pc = 0x409d5cu;
    // NOP
    // 0x409d60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x409d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x409d64: 0x0  nop
    ctx->pc = 0x409d64u;
    // NOP
    ctx->pc = 0x409d68u;
}
