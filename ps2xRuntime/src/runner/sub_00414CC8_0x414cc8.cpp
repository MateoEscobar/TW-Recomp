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

// Function: sub_00414CC8
// Address: 0x414cc8 - 0x414d28
void sub_00414CC8_0x414cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414CC8_0x414cc8");
#endif

    switch (ctx->pc) {
        case 0x414cf8u: goto label_414cf8;
        case 0x414d04u: goto label_414d04;
        default: break;
    }

    ctx->pc = 0x414cc8u;

    // 0x414cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x414ccc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x414cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x414cd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x414cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x414cd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x414cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x414cd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x414cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x414cdc: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x414CDCu;
    {
        const bool branch_taken_0x414cdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x414CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CDCu;
        // 0x414ce0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414cdc) {
            ctx->pc = 0x414D10u;
            goto label_414d10;
        }
    }
    ctx->pc = 0x414CE4u;
    // 0x414ce4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x414CE4u;
    {
        const bool branch_taken_0x414ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CE4u;
        // 0x414ce8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ce4) {
            ctx->pc = 0x414D10u;
            goto label_414d10;
        }
    }
    ctx->pc = 0x414CECu;
    // 0x414cec: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x414cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x414cf0: 0x24503f50  addiu       $s0, $v0, 0x3F50
    ctx->pc = 0x414cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16208));
    // 0x414cf4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x414cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_414cf8:
    // 0x414cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414cfc: 0xc10510e  jal         func_414438
    ctx->pc = 0x414CFCu;
    SET_GPR_U32(ctx, 31, 0x414D04u);
    ctx->pc = 0x414D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414CFCu;
    // 0x414d00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414438u, 0x414CFCu, 0x414D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414D04u;
label_414d04:
    // 0x414d04: 0x0  nop
    ctx->pc = 0x414d04u;
    // NOP
    // 0x414d08: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x414D08u;
    {
        const bool branch_taken_0x414d08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x414D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D08u;
        // 0x414d0c: 0x26100184  addiu       $s0, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d08) {
            ctx->pc = 0x414CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414cf8;
        }
    }
    ctx->pc = 0x414D10u;
label_414d10:
    // 0x414d10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x414d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x414d14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x414d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414d18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x414d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414d20: 0x3e00008  jr          $ra
    ctx->pc = 0x414D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D20u;
        // 0x414d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414D28u;
}
