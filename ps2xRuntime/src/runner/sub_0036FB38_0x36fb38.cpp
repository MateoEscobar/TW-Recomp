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

// Function: sub_0036FB38
// Address: 0x36fb38 - 0x36fc80
void sub_0036FB38_0x36fb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FB38_0x36fb38");
#endif

    switch (ctx->pc) {
        case 0x36fb70u: goto label_36fb70;
        case 0x36fb84u: goto label_36fb84;
        case 0x36fb8cu: goto label_36fb8c;
        case 0x36fba4u: goto label_36fba4;
        case 0x36fbacu: goto label_36fbac;
        case 0x36fbb8u: goto label_36fbb8;
        case 0x36fbccu: goto label_36fbcc;
        case 0x36fbd8u: goto label_36fbd8;
        case 0x36fc00u: goto label_36fc00;
        case 0x36fc08u: goto label_36fc08;
        case 0x36fc18u: goto label_36fc18;
        case 0x36fc30u: goto label_36fc30;
        case 0x36fc44u: goto label_36fc44;
        default: break;
    }

    ctx->pc = 0x36fb38u;

    // 0x36fb38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36fb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36fb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fb40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36fb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36fb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36fb48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb4c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x36fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x36fb50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36fb54: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x36fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x36fb58: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x36fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x36fb5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x36fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x36fb60: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36fb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36fb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36fb68: 0xc102488  jal         func_409220
    ctx->pc = 0x36FB68u;
    SET_GPR_U32(ctx, 31, 0x36FB70u);
    ctx->pc = 0x36FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB68u;
    // 0x36fb6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36FB68u, 0x36FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB70u;
label_36fb70:
    // 0x36fb70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FB7Cu;
    SET_GPR_U32(ctx, 31, 0x36FB84u);
    ctx->pc = 0x36FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB7Cu;
    // 0x36fb80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FB7Cu, 0x36FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB84u;
label_36fb84:
    // 0x36fb84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FB84u;
    SET_GPR_U32(ctx, 31, 0x36FB8Cu);
    ctx->pc = 0x36FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB84u;
    // 0x36fb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FB84u, 0x36FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB8Cu;
label_36fb8c:
    // 0x36fb8c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36fb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36fb90: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36fb90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36fb94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36fb9c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FB9Cu;
    SET_GPR_U32(ctx, 31, 0x36FBA4u);
    ctx->pc = 0x36FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB9Cu;
    // 0x36fba0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FB9Cu, 0x36FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBA4u;
label_36fba4:
    // 0x36fba4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FBA4u;
    SET_GPR_U32(ctx, 31, 0x36FBACu);
    ctx->pc = 0x36FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBA4u;
    // 0x36fba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FBA4u, 0x36FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBACu;
label_36fbac:
    // 0x36fbac: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x36fbacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fbb0: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x36fbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36fbb4: 0x0  nop
    ctx->pc = 0x36fbb4u;
    // NOP
label_36fbb8:
    // 0x36fbb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36fbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fbc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36fbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbc4: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36FBC4u;
    SET_GPR_U32(ctx, 31, 0x36FBCCu);
    ctx->pc = 0x36FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBC4u;
    // 0x36fbc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36FBC4u, 0x36FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBCCu;
label_36fbcc:
    // 0x36fbcc: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x36fbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x36fbd0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FBD0u;
    SET_GPR_U32(ctx, 31, 0x36FBD8u);
    ctx->pc = 0x36FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBD0u;
    // 0x36fbd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FBD0u, 0x36FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBD8u;
label_36fbd8:
    // 0x36fbd8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x36fbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbdc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x36fbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fbe0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x36fbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36fbe4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36FBE4u;
    {
        const bool branch_taken_0x36fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBE4u;
        // 0x36fbe8: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fbe4) {
            ctx->pc = 0x36FBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fbb8;
        }
    }
    ctx->pc = 0x36FBECu;
    // 0x36fbec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36fbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbf0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbf4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbf8: 0xc06d5f2  jal         func_1B57C8
    ctx->pc = 0x36FBF8u;
    SET_GPR_U32(ctx, 31, 0x36FC00u);
    ctx->pc = 0x36FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBF8u;
    // 0x36fbfc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B57C8u, 0x36FBF8u, 0x36FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC00u;
label_36fc00:
    // 0x36fc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc04: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x36fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_36fc08:
    // 0x36fc08: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36fc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36fc0c: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x36fc0cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36fc10: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36FC10u;
    SET_GPR_U32(ctx, 31, 0x36FC18u);
    ctx->pc = 0x36FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC10u;
    // 0x36fc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36FC10u, 0x36FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC18u;
label_36fc18:
    // 0x36fc18: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36FC18u;
    {
        const bool branch_taken_0x36fc18 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC18u;
        // 0x36fc1c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc18) {
            ctx->pc = 0x36FC34u;
            goto label_36fc34;
        }
    }
    ctx->pc = 0x36FC20u;
    // 0x36fc20: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x36fc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x36fc24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36fc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36fc28: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36FC28u;
    SET_GPR_U32(ctx, 31, 0x36FC30u);
    ctx->pc = 0x36FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC28u;
    // 0x36fc2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36FC28u, 0x36FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC30u;
label_36fc30:
    // 0x36fc30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36fc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fc34:
    // 0x36fc34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36fc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc3c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36FC3Cu;
    SET_GPR_U32(ctx, 31, 0x36FC44u);
    ctx->pc = 0x36FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC3Cu;
    // 0x36fc40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36FC3Cu, 0x36FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC44u;
label_36fc44:
    // 0x36fc44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36fc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc48: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x36fc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36fc4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x36FC4Cu;
    {
        const bool branch_taken_0x36fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC4Cu;
        // 0x36fc50: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc4c) {
            ctx->pc = 0x36FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fc08;
        }
    }
    ctx->pc = 0x36FC54u;
    // 0x36fc54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x36fc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36fc58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36fc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc5c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36fc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36fc60: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x36fc60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36fc64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36fc64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36fc68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36fc68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36fc6c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x36fc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fc70: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x36fc70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36fc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x36FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC78u;
        // 0x36fc7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FC80u;
}
