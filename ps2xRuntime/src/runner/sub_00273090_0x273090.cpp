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

// Function: sub_00273090
// Address: 0x273090 - 0x273110
void sub_00273090_0x273090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273090_0x273090");
#endif

    switch (ctx->pc) {
        case 0x2730a8u: goto label_2730a8;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730ccu: goto label_2730cc;
        case 0x2730ecu: goto label_2730ec;
        case 0x273100u: goto label_273100;
        default: break;
    }

    ctx->pc = 0x273090u;

    // 0x273090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x273098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27309c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2730a0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2730A0u;
    SET_GPR_U32(ctx, 31, 0x2730A8u);
    ctx->pc = 0x2730A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730A0u;
    // 0x2730a4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2730A0u, 0x2730A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730A8u;
label_2730a8:
    // 0x2730a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2730A8u;
    {
        const bool branch_taken_0x2730a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730A8u;
        // 0x2730ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730a8) {
            ctx->pc = 0x2730F4u;
            goto label_2730f4;
        }
    }
    ctx->pc = 0x2730B0u;
    // 0x2730b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2730b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730b4: 0xc08b3ae  jal         func_22CEB8
    ctx->pc = 0x2730B4u;
    SET_GPR_U32(ctx, 31, 0x2730BCu);
    ctx->pc = 0x2730B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730B4u;
    // 0x2730b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x2730B4u, 0x2730BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730BCu;
label_2730bc:
    // 0x2730bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2730bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2730c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2730c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730c4: 0xc089998  jal         func_226660
    ctx->pc = 0x2730C4u;
    SET_GPR_U32(ctx, 31, 0x2730CCu);
    ctx->pc = 0x2730C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730C4u;
    // 0x2730c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2730C4u, 0x2730CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730CCu;
label_2730cc:
    // 0x2730cc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2730CCu;
    {
        const bool branch_taken_0x2730cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730cc) {
            ctx->pc = 0x2730D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2730CCu;
            // 0x2730d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273104u;
            goto label_273104;
        }
    }
    ctx->pc = 0x2730D4u;
    // 0x2730d4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2730d8: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x2730d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x2730dc: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2730DCu;
    {
        const bool branch_taken_0x2730dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2730dc) {
            ctx->pc = 0x2730E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2730DCu;
            // 0x2730e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273104u;
            goto label_273104;
        }
    }
    ctx->pc = 0x2730E4u;
    // 0x2730e4: 0xc09b666  jal         func_26D998
    ctx->pc = 0x2730E4u;
    SET_GPR_U32(ctx, 31, 0x2730ECu);
    ctx->pc = 0x2730E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730E4u;
    // 0x2730e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D998u, 0x2730E4u, 0x2730ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730ECu;
label_2730ec:
    // 0x2730ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2730ECu;
    {
        const bool branch_taken_0x2730ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730ECu;
        // 0x2730f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ec) {
            ctx->pc = 0x273104u;
            goto label_273104;
        }
    }
    ctx->pc = 0x2730F4u;
label_2730f4:
    // 0x2730f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2730f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730f8: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x2730F8u;
    SET_GPR_U32(ctx, 31, 0x273100u);
    ctx->pc = 0x2730FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730F8u;
    // 0x2730fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x2730F8u, 0x273100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273100u;
label_273100:
    // 0x273100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273104:
    // 0x273104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273108: 0x3e00008  jr          $ra
    ctx->pc = 0x273108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273108u;
        // 0x27310c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273110u;
}
