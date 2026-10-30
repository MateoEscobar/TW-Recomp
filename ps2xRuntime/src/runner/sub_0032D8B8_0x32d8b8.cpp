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

// Function: sub_0032D8B8
// Address: 0x32d8b8 - 0x32d958
void sub_0032D8B8_0x32d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D8B8_0x32d8b8");
#endif

    switch (ctx->pc) {
        case 0x32d8dcu: goto label_32d8dc;
        case 0x32d8f8u: goto label_32d8f8;
        case 0x32d908u: goto label_32d908;
        case 0x32d910u: goto label_32d910;
        case 0x32d91cu: goto label_32d91c;
        case 0x32d938u: goto label_32d938;
        default: break;
    }

    ctx->pc = 0x32d8b8u;

    // 0x32d8b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32d8bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32d8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d8c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32d8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32d8d4: 0xc0cb980  jal         func_32E600
    ctx->pc = 0x32D8D4u;
    SET_GPR_U32(ctx, 31, 0x32D8DCu);
    ctx->pc = 0x32D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D8D4u;
    // 0x32d8d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E600u, 0x32D8D4u, 0x32D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D8DCu;
label_32d8dc:
    // 0x32d8dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d8e0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x32d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32d8e4: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32D8E4u;
    {
        const bool branch_taken_0x32d8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d8e4) {
            ctx->pc = 0x32D8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D8E4u;
            // 0x32d8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D92Cu;
            goto label_32d92c;
        }
    }
    ctx->pc = 0x32D8ECu;
    // 0x32d8ec: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x32d8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32d8f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32d8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d8f4: 0x0  nop
    ctx->pc = 0x32d8f4u;
    // NOP
label_32d8f8:
    // 0x32d8f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d900: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32D900u;
    SET_GPR_U32(ctx, 31, 0x32D908u);
    ctx->pc = 0x32D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D900u;
    // 0x32d904: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32D900u, 0x32D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D908u;
label_32d908:
    // 0x32d908: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32D908u;
    SET_GPR_U32(ctx, 31, 0x32D910u);
    ctx->pc = 0x32D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D908u;
    // 0x32d90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32D908u, 0x32D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D910u;
label_32d910:
    // 0x32d910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d914: 0xc0cb980  jal         func_32E600
    ctx->pc = 0x32D914u;
    SET_GPR_U32(ctx, 31, 0x32D91Cu);
    ctx->pc = 0x32D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D914u;
    // 0x32d918: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E600u, 0x32D914u, 0x32D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D91Cu;
label_32d91c:
    // 0x32d91c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32d920: 0x1052fff5  beq         $v0, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x32D920u;
    {
        const bool branch_taken_0x32d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x32D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D920u;
        // 0x32d924: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d920) {
            ctx->pc = 0x32D8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d8f8;
        }
    }
    ctx->pc = 0x32D928u;
    // 0x32d928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d92c:
    // 0x32d92c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d930: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32D930u;
    SET_GPR_U32(ctx, 31, 0x32D938u);
    ctx->pc = 0x32D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D930u;
    // 0x32d934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32D930u, 0x32D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D938u;
label_32d938:
    // 0x32d938: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32d938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d93c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32d93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d940: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32d940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d94c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D94Cu;
        // 0x32d950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D954u;
    // 0x32d954: 0x0  nop
    ctx->pc = 0x32d954u;
    // NOP
    ctx->pc = 0x32d958u;
}
