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

// Function: sub_00414220
// Address: 0x414220 - 0x414280
void sub_00414220_0x414220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414220_0x414220");
#endif

    switch (ctx->pc) {
        case 0x414250u: goto label_414250;
        case 0x41425cu: goto label_41425c;
        default: break;
    }

    ctx->pc = 0x414220u;

    // 0x414220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x414224: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x414224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x414228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x414228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41422c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x414230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x414230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x414234: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x414234u;
    {
        const bool branch_taken_0x414234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x414238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414234u;
        // 0x414238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414234) {
            ctx->pc = 0x414268u;
            goto label_414268;
        }
    }
    ctx->pc = 0x41423Cu;
    // 0x41423c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x41423Cu;
    {
        const bool branch_taken_0x41423c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41423Cu;
        // 0x414240: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41423c) {
            ctx->pc = 0x414268u;
            goto label_414268;
        }
    }
    ctx->pc = 0x414244u;
    // 0x414244: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x414244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x414248: 0x24503a10  addiu       $s0, $v0, 0x3A10
    ctx->pc = 0x414248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x41424c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x41424cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_414250:
    // 0x414250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414254: 0xc104e12  jal         func_413848
    ctx->pc = 0x414254u;
    SET_GPR_U32(ctx, 31, 0x41425Cu);
    ctx->pc = 0x414258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414254u;
    // 0x414258: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413848u, 0x414254u, 0x41425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41425Cu;
label_41425c:
    // 0x41425c: 0x0  nop
    ctx->pc = 0x41425cu;
    // NOP
    // 0x414260: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x414260u;
    {
        const bool branch_taken_0x414260 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x414264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414260u;
        // 0x414264: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414260) {
            ctx->pc = 0x414250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414250;
        }
    }
    ctx->pc = 0x414268u;
label_414268:
    // 0x414268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x414268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41426c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41426cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414270: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x414270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414278: 0x3e00008  jr          $ra
    ctx->pc = 0x414278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414278u;
        // 0x41427c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414280u;
}
