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

// Function: sub_0015F4F8
// Address: 0x15f4f8 - 0x15f540
void sub_0015F4F8_0x15f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F4F8_0x15f4f8");
#endif

    switch (ctx->pc) {
        case 0x15f520u: goto label_15f520;
        default: break;
    }

    ctx->pc = 0x15f4f8u;

    // 0x15f4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f4fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15f4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15f504: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F504u;
    {
        const bool branch_taken_0x15f504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F504u;
        // 0x15f508: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f504) {
            ctx->pc = 0x15F52Cu;
            goto label_15f52c;
        }
    }
    ctx->pc = 0x15F50Cu;
    // 0x15f50c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F50Cu;
    {
        const bool branch_taken_0x15f50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F50Cu;
        // 0x15f510: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f50c) {
            ctx->pc = 0x15F52Cu;
            goto label_15f52c;
        }
    }
    ctx->pc = 0x15F514u;
    // 0x15f514: 0x261067d0  addiu       $s0, $s0, 0x67D0
    ctx->pc = 0x15f514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26576));
    // 0x15f518: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15F518u;
    SET_GPR_U32(ctx, 31, 0x15F520u);
    ctx->pc = 0x15F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F518u;
    // 0x15f51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15F518u, 0x15F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F520u;
label_15f520:
    // 0x15f520: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15f524: 0x24638870  addiu       $v1, $v1, -0x7790
    ctx->pc = 0x15f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x15f528: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15f528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_15f52c:
    // 0x15f52c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15f52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f534: 0x3e00008  jr          $ra
    ctx->pc = 0x15F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F534u;
        // 0x15f538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F53Cu;
    // 0x15f53c: 0x0  nop
    ctx->pc = 0x15f53cu;
    // NOP
    ctx->pc = 0x15f540u;
}
