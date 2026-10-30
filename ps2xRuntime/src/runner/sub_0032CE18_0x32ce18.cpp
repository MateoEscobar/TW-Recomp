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

// Function: sub_0032CE18
// Address: 0x32ce18 - 0x32ceb8
void sub_0032CE18_0x32ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CE18_0x32ce18");
#endif

    switch (ctx->pc) {
        case 0x32ce80u: goto label_32ce80;
        default: break;
    }

    ctx->pc = 0x32ce18u;

    // 0x32ce18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ce1c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32ce1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ce24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ce28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32ce28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ce2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32ce30: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x32ce30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32ce34: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x32ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ce38: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x32ce38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ce3c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x32ce3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32ce40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CE40u;
    {
        const bool branch_taken_0x32ce40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE40u;
        // 0x32ce44: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce40) {
            ctx->pc = 0x32CE5Cu;
            goto label_32ce5c;
        }
    }
    ctx->pc = 0x32CE48u;
    // 0x32ce48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ce4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ce50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32ce54: 0x50910013  beql        $a0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x32CE54u;
    {
        const bool branch_taken_0x32ce54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x32ce54) {
            ctx->pc = 0x32CE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CE54u;
            // 0x32ce58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CEA4u;
            goto label_32cea4;
        }
    }
    ctx->pc = 0x32CE5Cu;
label_32ce5c:
    // 0x32ce5c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x32ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x32ce60: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x32ce60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x32ce64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ce68: 0x3c0a03ff  lui         $t2, 0x3FF
    ctx->pc = 0x32ce68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1023 << 16));
    // 0x32ce6c: 0x25295c18  addiu       $t1, $t1, 0x5C18
    ctx->pc = 0x32ce6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23576));
    // 0x32ce70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32ce70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ce74: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x32ce74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ce78: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x32CE78u;
    SET_GPR_U32(ctx, 31, 0x32CE80u);
    ctx->pc = 0x32CE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE78u;
    // 0x32ce7c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x32CE78u, 0x32CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE80u;
label_32ce80:
    // 0x32ce80: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x32ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ce84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32ce88: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x32ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32ce8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32ce90: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x32ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x32ce94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ce98: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x32ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x32ce9c: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x32ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x32cea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32cea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32cea4:
    // 0x32cea4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32cea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x32CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CEB0u;
        // 0x32ceb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CEB8u;
}
