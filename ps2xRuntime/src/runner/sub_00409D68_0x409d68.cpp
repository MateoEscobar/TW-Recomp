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

// Function: sub_00409D68
// Address: 0x409d68 - 0x409e78
void sub_00409D68_0x409d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409D68_0x409d68");
#endif

    switch (ctx->pc) {
        case 0x409d94u: goto label_409d94;
        case 0x409da4u: goto label_409da4;
        case 0x409db0u: goto label_409db0;
        case 0x409dbcu: goto label_409dbc;
        case 0x409dccu: goto label_409dcc;
        case 0x409dd8u: goto label_409dd8;
        case 0x409de4u: goto label_409de4;
        case 0x409df8u: goto label_409df8;
        case 0x409e04u: goto label_409e04;
        case 0x409e10u: goto label_409e10;
        case 0x409e20u: goto label_409e20;
        case 0x409e2cu: goto label_409e2c;
        case 0x409e38u: goto label_409e38;
        case 0x409e44u: goto label_409e44;
        default: break;
    }

    ctx->pc = 0x409d68u;

    // 0x409d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x409d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x409d6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x409d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x409d70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x409d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x409d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x409d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x409d7c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x409d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x409d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x409d84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x409d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409d8c: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x409D8Cu;
    SET_GPR_U32(ctx, 31, 0x409D94u);
    ctx->pc = 0x409D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D8Cu;
    // 0x409d90: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x409D8Cu, 0x409D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409D94u;
label_409d94:
    // 0x409d94: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409d9c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409D9Cu;
    SET_GPR_U32(ctx, 31, 0x409DA4u);
    ctx->pc = 0x409DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409D9Cu;
    // 0x409da0: 0x24a58038  addiu       $a1, $a1, -0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409D9Cu, 0x409DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DA4u;
label_409da4:
    // 0x409da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409da8: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x409DA8u;
    SET_GPR_U32(ctx, 31, 0x409DB0u);
    ctx->pc = 0x409DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DA8u;
    // 0x409dac: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x409DA8u, 0x409DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DB0u;
label_409db0:
    // 0x409db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409db4: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409DB4u;
    SET_GPR_U32(ctx, 31, 0x409DBCu);
    ctx->pc = 0x409DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DB4u;
    // 0x409db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409DB4u, 0x409DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DBCu;
label_409dbc:
    // 0x409dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x409dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409dc4: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x409DC4u;
    SET_GPR_U32(ctx, 31, 0x409DCCu);
    ctx->pc = 0x409DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DC4u;
    // 0x409dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x409DC4u, 0x409DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DCCu;
label_409dcc:
    // 0x409dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409dd0: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409DD0u;
    SET_GPR_U32(ctx, 31, 0x409DD8u);
    ctx->pc = 0x409DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DD0u;
    // 0x409dd4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409DD0u, 0x409DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DD8u;
label_409dd8:
    // 0x409dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409ddc: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409DDCu;
    SET_GPR_U32(ctx, 31, 0x409DE4u);
    ctx->pc = 0x409DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DDCu;
    // 0x409de0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409DDCu, 0x409DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DE4u;
label_409de4:
    // 0x409de4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x409DE4u;
    {
        const bool branch_taken_0x409de4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x409DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DE4u;
        // 0x409de8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409de4) {
            ctx->pc = 0x409E38u;
            goto label_409e38;
        }
    }
    ctx->pc = 0x409DECu;
    // 0x409dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409df0: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409DF0u;
    SET_GPR_U32(ctx, 31, 0x409DF8u);
    ctx->pc = 0x409DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DF0u;
    // 0x409df4: 0x24a58040  addiu       $a1, $a1, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409DF0u, 0x409DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409DF8u;
label_409df8:
    // 0x409df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409dfc: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x409DFCu;
    SET_GPR_U32(ctx, 31, 0x409E04u);
    ctx->pc = 0x409E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409DFCu;
    // 0x409e00: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x409DFCu, 0x409E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E04u;
label_409e04:
    // 0x409e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e08: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409E08u;
    SET_GPR_U32(ctx, 31, 0x409E10u);
    ctx->pc = 0x409E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E08u;
    // 0x409e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409E08u, 0x409E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E10u;
label_409e10:
    // 0x409e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x409e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e18: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x409E18u;
    SET_GPR_U32(ctx, 31, 0x409E20u);
    ctx->pc = 0x409E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E18u;
    // 0x409e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x409E18u, 0x409E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E20u;
label_409e20:
    // 0x409e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e24: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x409E24u;
    SET_GPR_U32(ctx, 31, 0x409E2Cu);
    ctx->pc = 0x409E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E24u;
    // 0x409e28: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x409E24u, 0x409E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E2Cu;
label_409e2c:
    // 0x409e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e30: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409E30u;
    SET_GPR_U32(ctx, 31, 0x409E38u);
    ctx->pc = 0x409E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E30u;
    // 0x409e34: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409E30u, 0x409E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E38u;
label_409e38:
    // 0x409e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409e3c: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409E3Cu;
    SET_GPR_U32(ctx, 31, 0x409E44u);
    ctx->pc = 0x409E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409E3Cu;
    // 0x409e40: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409E3Cu, 0x409E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409E44u;
label_409e44:
    // 0x409e44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x409e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x409e48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x409e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409e4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409e50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x409e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409e58: 0x3e00008  jr          $ra
    ctx->pc = 0x409E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E58u;
        // 0x409e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409E60u;
    // 0x409e60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x409e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x409e64: 0x0  nop
    ctx->pc = 0x409e64u;
    // NOP
    // 0x409e68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x409e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x409e6c: 0x0  nop
    ctx->pc = 0x409e6cu;
    // NOP
    // 0x409e70: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x409e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x409e74: 0x0  nop
    ctx->pc = 0x409e74u;
    // NOP
    ctx->pc = 0x409e78u;
}
