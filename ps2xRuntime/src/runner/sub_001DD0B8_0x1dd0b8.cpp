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

// Function: sub_001DD0B8
// Address: 0x1dd0b8 - 0x1dd178
void sub_001DD0B8_0x1dd0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD0B8_0x1dd0b8");
#endif

    switch (ctx->pc) {
        case 0x1dd0ecu: goto label_1dd0ec;
        case 0x1dd108u: goto label_1dd108;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd15cu: goto label_1dd15c;
        default: break;
    }

    ctx->pc = 0x1dd0b8u;

    // 0x1dd0b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd0c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dd0c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd0c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dd0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dd0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0d8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD0D8u;
    {
        const bool branch_taken_0x1dd0d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D8u;
        // 0x1dd0dc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0d8) {
            ctx->pc = 0x1DD0F8u;
            goto label_1dd0f8;
        }
    }
    ctx->pc = 0x1DD0E0u;
    // 0x1dd0e0: 0x26302790  addiu       $s0, $s1, 0x2790
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10128));
    // 0x1dd0e4: 0xc0694f0  jal         func_1A53C0
    ctx->pc = 0x1DD0E4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ECu);
    ctx->pc = 0x1DD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E4u;
    // 0x1dd0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53C0u, 0x1DD0E4u, 0x1DD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0ECu;
label_1dd0ec:
    // 0x1dd0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DD0F0u;
    {
        const bool branch_taken_0x1dd0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F0u;
        // 0x1dd0f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0f0) {
            ctx->pc = 0x1DD154u;
            goto label_1dd154;
        }
    }
    ctx->pc = 0x1DD0F8u;
label_1dd0f8:
    // 0x1dd0f8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD0F8u;
    {
        const bool branch_taken_0x1dd0f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F8u;
        // 0x1dd0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0f8) {
            ctx->pc = 0x1DD120u;
            goto label_1dd120;
        }
    }
    ctx->pc = 0x1DD100u;
    // 0x1dd100: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DD100u;
    SET_GPR_U32(ctx, 31, 0x1DD108u);
    ctx->pc = 0x1DD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD100u;
    // 0x1dd104: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DD100u, 0x1DD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD108u;
label_1dd108:
    // 0x1dd108: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd110: 0xc07745e  jal         func_1DD178
    ctx->pc = 0x1DD110u;
    SET_GPR_U32(ctx, 31, 0x1DD118u);
    ctx->pc = 0x1DD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD110u;
    // 0x1dd114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD178u, 0x1DD110u, 0x1DD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DD118u;
    {
        const bool branch_taken_0x1dd118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD118u;
        // 0x1dd11c: 0x24040360  addiu       $a0, $zero, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd118) {
            ctx->pc = 0x1DD144u;
            goto label_1dd144;
        }
    }
    ctx->pc = 0x1DD120u;
label_1dd120:
    // 0x1dd120: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD120u;
    {
        const bool branch_taken_0x1dd120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD120u;
        // 0x1dd124: 0x24040360  addiu       $a0, $zero, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd120) {
            ctx->pc = 0x1DD144u;
            goto label_1dd144;
        }
    }
    ctx->pc = 0x1DD128u;
    // 0x1dd128: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DD128u;
    SET_GPR_U32(ctx, 31, 0x1DD130u);
    ctx->pc = 0x1DD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD128u;
    // 0x1dd12c: 0x24040109  addiu       $a0, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DD128u, 0x1DD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD130u;
label_1dd130:
    // 0x1dd130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd138: 0xc07745e  jal         func_1DD178
    ctx->pc = 0x1DD138u;
    SET_GPR_U32(ctx, 31, 0x1DD140u);
    ctx->pc = 0x1DD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD138u;
    // 0x1dd13c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD178u, 0x1DD138u, 0x1DD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD140u;
label_1dd140:
    // 0x1dd140: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
label_1dd144:
    // 0x1dd144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dd144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd148: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1dd148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1dd14c: 0x248420d0  addiu       $a0, $a0, 0x20D0
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
    // 0x1dd150: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1dd154:
    // 0x1dd154: 0xc069348  jal         func_1A4D20
    ctx->pc = 0x1DD154u;
    SET_GPR_U32(ctx, 31, 0x1DD15Cu);
    ctx->pc = 0x1A4D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D20u, 0x1DD154u, 0x1DD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD15Cu;
label_1dd15c:
    // 0x1dd15c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd160: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd164: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dd164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD16Cu;
        // 0x1dd170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD174u;
    // 0x1dd174: 0x0  nop
    ctx->pc = 0x1dd174u;
    // NOP
    ctx->pc = 0x1dd178u;
}
