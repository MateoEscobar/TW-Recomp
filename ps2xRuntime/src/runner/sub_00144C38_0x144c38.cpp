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

// Function: sub_00144C38
// Address: 0x144c38 - 0x144ce0
void sub_00144C38_0x144c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144C38_0x144c38");
#endif

    switch (ctx->pc) {
        case 0x144c54u: goto label_144c54;
        default: break;
    }

    ctx->pc = 0x144c38u;

    // 0x144c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144c3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x144c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x144c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144c4c: 0xc0512fc  jal         func_144BF0
    ctx->pc = 0x144C4Cu;
    SET_GPR_U32(ctx, 31, 0x144C54u);
    ctx->pc = 0x144C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C4Cu;
    // 0x144c50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x144C4Cu, 0x144C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C54u;
label_144c54:
    // 0x144c54: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x144C54u;
    {
        const bool branch_taken_0x144c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C54u;
        // 0x144c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c54) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144C5Cu;
    // 0x144c5c: 0x32021000  andi        $v0, $s0, 0x1000
    ctx->pc = 0x144c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
    // 0x144c60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144C60u;
    {
        const bool branch_taken_0x144c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C60u;
        // 0x144c64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c60) {
            ctx->pc = 0x144C7Cu;
            goto label_144c7c;
        }
    }
    ctx->pc = 0x144C68u;
    // 0x144c68: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x144c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x144c6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144C6Cu;
    {
        const bool branch_taken_0x144c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C6Cu;
        // 0x144c70: 0x32024000  andi        $v0, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c6c) {
            ctx->pc = 0x144C80u;
            goto label_144c80;
        }
    }
    ctx->pc = 0x144C74u;
    // 0x144c74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x144C74u;
    {
        const bool branch_taken_0x144c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C74u;
        // 0x144c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c74) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144C7Cu;
label_144c7c:
    // 0x144c7c: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x144c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_144c80:
    // 0x144c80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144C80u;
    {
        const bool branch_taken_0x144c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C80u;
        // 0x144c84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c80) {
            ctx->pc = 0x144C94u;
            goto label_144c94;
        }
    }
    ctx->pc = 0x144C88u;
    // 0x144c88: 0x92230032  lbu         $v1, 0x32($s1)
    ctx->pc = 0x144c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x144c8c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x144C8Cu;
    {
        const bool branch_taken_0x144c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x144C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C8Cu;
        // 0x144c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c8c) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144C94u;
label_144c94:
    // 0x144c94: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x144c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x144c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144C98u;
    {
        const bool branch_taken_0x144c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C98u;
        // 0x144c9c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c98) {
            ctx->pc = 0x144CACu;
            goto label_144cac;
        }
    }
    ctx->pc = 0x144CA0u;
    // 0x144ca0: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x144ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x144ca4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x144CA4u;
    {
        const bool branch_taken_0x144ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x144CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CA4u;
        // 0x144ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ca4) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144CACu;
label_144cac:
    // 0x144cac: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x144cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x144cb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144CB0u;
    {
        const bool branch_taken_0x144cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CB0u;
        // 0x144cb4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cb0) {
            ctx->pc = 0x144CC4u;
            goto label_144cc4;
        }
    }
    ctx->pc = 0x144CB8u;
    // 0x144cb8: 0x92240033  lbu         $a0, 0x33($s1)
    ctx->pc = 0x144cb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x144cbc: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x144CBCu;
    {
        const bool branch_taken_0x144cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x144CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CBCu;
        // 0x144cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cbc) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144CC4u;
label_144cc4:
    // 0x144cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144cc8:
    // 0x144cc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x144cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x144CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CD4u;
        // 0x144cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144CDCu;
    // 0x144cdc: 0x0  nop
    ctx->pc = 0x144cdcu;
    // NOP
    ctx->pc = 0x144ce0u;
}
