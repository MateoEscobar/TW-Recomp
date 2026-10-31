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

// Function: sub_0035B260
// Address: 0x35b260 - 0x35b2d0
void sub_0035B260_0x35b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B260_0x35b260");
#endif

    switch (ctx->pc) {
        case 0x35b280u: goto label_35b280;
        case 0x35b288u: goto label_35b288;
        case 0x35b294u: goto label_35b294;
        case 0x35b2acu: goto label_35b2ac;
        case 0x35b2b8u: goto label_35b2b8;
        default: break;
    }

    ctx->pc = 0x35b260u;

    // 0x35b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b278: 0xc102488  jal         func_409220
    ctx->pc = 0x35B278u;
    SET_GPR_U32(ctx, 31, 0x35B280u);
    ctx->pc = 0x35B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B278u;
    // 0x35b27c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35B278u, 0x35B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B280u;
label_35b280:
    // 0x35b280: 0xc08d404  jal         func_235010
    ctx->pc = 0x35B280u;
    SET_GPR_U32(ctx, 31, 0x35B288u);
    ctx->pc = 0x35B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B280u;
    // 0x35b284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235010u, 0x35B280u, 0x35B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B288u;
label_35b288:
    // 0x35b288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b28c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B28Cu;
    SET_GPR_U32(ctx, 31, 0x35B294u);
    ctx->pc = 0x35B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B28Cu;
    // 0x35b290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B28Cu, 0x35B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B294u;
label_35b294:
    // 0x35b294: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B294u;
    {
        const bool branch_taken_0x35b294 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B294u;
        // 0x35b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b294) {
            ctx->pc = 0x35B2B0u;
            goto label_35b2b0;
        }
    }
    ctx->pc = 0x35B29Cu;
    // 0x35b29c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35b29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35b2a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35b2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35b2a4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35B2A4u;
    SET_GPR_U32(ctx, 31, 0x35B2ACu);
    ctx->pc = 0x35B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2A4u;
    // 0x35b2a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35B2A4u, 0x35B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2ACu;
label_35b2ac:
    // 0x35b2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b2b0:
    // 0x35b2b0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B2B0u;
    SET_GPR_U32(ctx, 31, 0x35B2B8u);
    ctx->pc = 0x35B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2B0u;
    // 0x35b2b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B2B0u, 0x35B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2B8u;
label_35b2b8:
    // 0x35b2b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2C8u;
        // 0x35b2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B2D0u;
}
