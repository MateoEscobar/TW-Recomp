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

// Function: sub_00143F68
// Address: 0x143f68 - 0x143fd8
void sub_00143F68_0x143f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143F68_0x143f68");
#endif

    switch (ctx->pc) {
        case 0x143f90u: goto label_143f90;
        default: break;
    }

    ctx->pc = 0x143f68u;

    // 0x143f68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f6c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x143f70: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x143f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143f74: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x143f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x143f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x143f7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x143F7Cu;
    {
        const bool branch_taken_0x143f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F7Cu;
        // 0x143f80: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f7c) {
            ctx->pc = 0x143FC8u;
            goto label_143fc8;
        }
    }
    ctx->pc = 0x143F84u;
    // 0x143f84: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x143f84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x143f88: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x143f88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x143f8c: 0x0  nop
    ctx->pc = 0x143f8cu;
    // NOP
label_143f90:
    // 0x143f90: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x143f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x143f94: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x143f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x143f98: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x143f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x143f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x143f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x143fa0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x143fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x143fa4: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x143fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x143fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x143fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143fac: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143fb4: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x143fb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143fb8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x143fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x143fbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x143fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143fc0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143FC0u;
    {
        const bool branch_taken_0x143fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x143FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FC0u;
        // 0x143fc4: 0x831826  xor         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fc0) {
            ctx->pc = 0x143F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f90;
        }
    }
    ctx->pc = 0x143FC8u;
label_143fc8:
    // 0x143fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x143FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FC8u;
        // 0x143fcc: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143FD0u;
    // 0x143fd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143fd4: 0x0  nop
    ctx->pc = 0x143fd4u;
    // NOP
    ctx->pc = 0x143fd8u;
}
