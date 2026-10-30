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

// Function: sub_00298EA0
// Address: 0x298ea0 - 0x298f68
void sub_00298EA0_0x298ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298EA0_0x298ea0");
#endif

    switch (ctx->pc) {
        case 0x298eb8u: goto label_298eb8;
        case 0x298ec8u: goto label_298ec8;
        case 0x298edcu: goto label_298edc;
        case 0x298eecu: goto label_298eec;
        case 0x298f20u: goto label_298f20;
        case 0x298f30u: goto label_298f30;
        case 0x298f40u: goto label_298f40;
        case 0x298f50u: goto label_298f50;
        case 0x298f60u: goto label_298f60;
        default: break;
    }

    ctx->pc = 0x298ea0u;

    // 0x298ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298ea4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x298ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x298ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298eb0: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298EB0u;
    SET_GPR_U32(ctx, 31, 0x298EB8u);
    ctx->pc = 0x298EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EB0u;
    // 0x298eb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298EB0u, 0x298EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EB8u;
label_298eb8:
    // 0x298eb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ebc: 0x24710284  addiu       $s1, $v1, 0x284
    ctx->pc = 0x298ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 644));
    // 0x298ec0: 0xc0a6794  jal         func_299E50
    ctx->pc = 0x298EC0u;
    SET_GPR_U32(ctx, 31, 0x298EC8u);
    ctx->pc = 0x298EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EC0u;
    // 0x298ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E50u, 0x298EC0u, 0x298EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EC8u;
label_298ec8:
    // 0x298ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ecc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298ECCu;
    {
        const bool branch_taken_0x298ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x298ecc) {
            ctx->pc = 0x298ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298ECCu;
            // 0x298ed0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298EF4u;
            goto label_298ef4;
        }
    }
    ctx->pc = 0x298ED4u;
    // 0x298ed4: 0xc0a67c6  jal         func_299F18
    ctx->pc = 0x298ED4u;
    SET_GPR_U32(ctx, 31, 0x298EDCu);
    ctx->pc = 0x298ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298ED4u;
    // 0x298ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F18u, 0x298ED4u, 0x298EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EDCu;
label_298edc:
    // 0x298edc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298EDCu;
    {
        const bool branch_taken_0x298edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298edc) {
            ctx->pc = 0x298EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298EDCu;
            // 0x298ee0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298EF4u;
            goto label_298ef4;
        }
    }
    ctx->pc = 0x298EE4u;
    // 0x298ee4: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x298EE4u;
    SET_GPR_U32(ctx, 31, 0x298EECu);
    ctx->pc = 0x298EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EE4u;
    // 0x298ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298EE4u, 0x298EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EECu;
label_298eec:
    // 0x298eec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x298EECu;
    {
        const bool branch_taken_0x298eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EECu;
        // 0x298ef0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298eec) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298EF4u;
label_298ef4:
    // 0x298ef4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x298ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x298ef8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x298EF8u;
    {
        const bool branch_taken_0x298ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EF8u;
        // 0x298efc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ef8) {
            ctx->pc = 0x298F70u;
            return;
        }
    }
    ctx->pc = 0x298F00u;
    // 0x298f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x298f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298f04: 0x244211c0  addiu       $v0, $v0, 0x11C0
    ctx->pc = 0x298f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x298f08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298f0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x298f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298f10: 0x800008  jr          $a0
    ctx->pc = 0x298F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298F18u: goto label_298f18;
            case 0x298F28u: goto label_298f28;
            case 0x298F38u: goto label_298f38;
            case 0x298F48u: goto label_298f48;
            case 0x298F58u: goto label_298f58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298F18u;
label_298f18:
    // 0x298f18: 0xc0a60da  jal         func_298368
    ctx->pc = 0x298F18u;
    SET_GPR_U32(ctx, 31, 0x298F20u);
    ctx->pc = 0x298F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F18u;
    // 0x298f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298368u, 0x298F18u, 0x298F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F20u;
label_298f20:
    // 0x298f20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x298F20u;
    {
        const bool branch_taken_0x298f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F20u;
        // 0x298f24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f20) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298F28u;
label_298f28:
    // 0x298f28: 0xc0a6108  jal         func_298420
    ctx->pc = 0x298F28u;
    SET_GPR_U32(ctx, 31, 0x298F30u);
    ctx->pc = 0x298F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F28u;
    // 0x298f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298420u, 0x298F28u, 0x298F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F30u;
label_298f30:
    // 0x298f30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x298F30u;
    {
        const bool branch_taken_0x298f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F30u;
        // 0x298f34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f30) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298F38u;
label_298f38:
    // 0x298f38: 0xc0a6178  jal         func_2985E0
    ctx->pc = 0x298F38u;
    SET_GPR_U32(ctx, 31, 0x298F40u);
    ctx->pc = 0x298F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F38u;
    // 0x298f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2985E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2985E0u, 0x298F38u, 0x298F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F40u;
label_298f40:
    // 0x298f40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298F40u;
    {
        const bool branch_taken_0x298f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F40u;
        // 0x298f44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f40) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298F48u;
label_298f48:
    // 0x298f48: 0xc0a61e8  jal         func_2987A0
    ctx->pc = 0x298F48u;
    SET_GPR_U32(ctx, 31, 0x298F50u);
    ctx->pc = 0x298F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F48u;
    // 0x298f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2987A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2987A0u, 0x298F48u, 0x298F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F50u;
label_298f50:
    // 0x298f50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298F50u;
    {
        const bool branch_taken_0x298f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F50u;
        // 0x298f54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f50) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298F58u;
label_298f58:
    // 0x298f58: 0xc0a62a2  jal         func_298A88
    ctx->pc = 0x298F58u;
    SET_GPR_U32(ctx, 31, 0x298F60u);
    ctx->pc = 0x298F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F58u;
    // 0x298f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298A88u, 0x298F58u, 0x298F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F60u;
label_298f60:
    // 0x298f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298F60u;
    {
        const bool branch_taken_0x298f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F60u;
        // 0x298f64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f60) {
            ctx->pc = 0x298F74u;
            return;
        }
    }
    ctx->pc = 0x298F68u;
}
