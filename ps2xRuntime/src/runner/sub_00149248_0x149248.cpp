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

// Function: sub_00149248
// Address: 0x149248 - 0x1492c8
void sub_00149248_0x149248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149248_0x149248");
#endif

    switch (ctx->pc) {
        case 0x149278u: goto label_149278;
        case 0x1492a4u: goto label_1492a4;
        default: break;
    }

    ctx->pc = 0x149248u;

    // 0x149248: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x14924c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149250: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x149250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x149254: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x149254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x149258: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x149258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x14925c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14925cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149264: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x149264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x149268: 0x24a5a688  addiu       $a1, $a1, -0x5978
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
    // 0x14926c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14926cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149270: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x149270u;
    SET_GPR_U32(ctx, 31, 0x149278u);
    ctx->pc = 0x149274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149270u;
    // 0x149274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x149270u, 0x149278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149278u;
label_149278:
    // 0x149278: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149278u;
    {
        const bool branch_taken_0x149278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149278u;
        // 0x14927c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149278) {
            ctx->pc = 0x14928Cu;
            goto label_14928c;
        }
    }
    ctx->pc = 0x149280u;
    // 0x149280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149284u;
    {
        const bool branch_taken_0x149284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149284u;
        // 0x149288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149284) {
            ctx->pc = 0x14929Cu;
            goto label_14929c;
        }
    }
    ctx->pc = 0x14928Cu;
label_14928c:
    // 0x14928c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14928Cu;
    {
        const bool branch_taken_0x14928c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x149290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14928Cu;
        // 0x149290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14928c) {
            ctx->pc = 0x1492B0u;
            goto label_1492b0;
        }
    }
    ctx->pc = 0x149294u;
    // 0x149294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149298: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
label_14929c:
    // 0x14929c: 0xc110644  jal         func_441910
    ctx->pc = 0x14929Cu;
    SET_GPR_U32(ctx, 31, 0x1492A4u);
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x14929Cu, 0x1492A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492A4u;
label_1492a4:
    // 0x1492a4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1492a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1492a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1492a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1492ac: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1492b0:
    // 0x1492b0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1492b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1492b4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1492b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1492b8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1492b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1492bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1492BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492BCu;
        // 0x1492c0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1492C4u;
    // 0x1492c4: 0x0  nop
    ctx->pc = 0x1492c4u;
    // NOP
    ctx->pc = 0x1492c8u;
}
