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

// Function: sub_00234F68
// Address: 0x234f68 - 0x234fb8
void sub_00234F68_0x234f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F68_0x234f68");
#endif

    switch (ctx->pc) {
        case 0x234f68u: goto label_234f68;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f70u: goto label_234f70;
        case 0x234f74u: goto label_234f74;
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        default: break;
    }

    ctx->pc = 0x234f68u;

label_234f68:
    // 0x234f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234f6c:
    // 0x234f6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x234f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_234f70:
    // 0x234f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234f74:
    // 0x234f74: 0xc0e402c  jal         func_3900B0
label_234f78:
    if (ctx->pc == 0x234F78u) {
        ctx->pc = 0x234F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F74u;
        // 0x234f78: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F7Cu;
        goto label_234f7c;
    }
    ctx->pc = 0x234F74u;
    SET_GPR_U32(ctx, 31, 0x234F7Cu);
    ctx->pc = 0x234F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F74u;
    // 0x234f78: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x234F74u, 0x234F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F7Cu;
label_234f7c:
    // 0x234f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f80:
    // 0x234f80: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_234f84:
    if (ctx->pc == 0x234F84u) {
        ctx->pc = 0x234F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F80u;
        // 0x234f84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F88u;
        goto label_234f88;
    }
    ctx->pc = 0x234F80u;
    {
        const bool branch_taken_0x234f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F80u;
        // 0x234f84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f80) {
            ctx->pc = 0x234FA4u;
            goto label_234fa4;
        }
    }
    ctx->pc = 0x234F88u;
label_234f88:
    // 0x234f88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x234f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_234f8c:
    // 0x234f8c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x234f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_234f90:
    // 0x234f90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234f94:
    // 0x234f94: 0x40f809  jalr        $v0
label_234f98:
    if (ctx->pc == 0x234F98u) {
        ctx->pc = 0x234F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F94u;
        // 0x234f98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F9Cu;
        goto label_234f9c;
    }
    ctx->pc = 0x234F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234F9Cu);
        ctx->pc = 0x234F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F94u;
        // 0x234f98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F94u, 0x234F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234F9Cu;
label_234f9c:
    // 0x234f9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_234fa0:
    if (ctx->pc == 0x234FA0u) {
        ctx->pc = 0x234FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F9Cu;
        // 0x234fa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FA4u;
        goto label_234fa4;
    }
    ctx->pc = 0x234F9Cu;
    {
        const bool branch_taken_0x234f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F9Cu;
        // 0x234fa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f9c) {
            ctx->pc = 0x234FACu;
            goto label_234fac;
        }
    }
    ctx->pc = 0x234FA4u;
label_234fa4:
    // 0x234fa4: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x234fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_234fa8:
    // 0x234fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234fac:
    // 0x234fac: 0x3e00008  jr          $ra
label_234fb0:
    if (ctx->pc == 0x234FB0u) {
        ctx->pc = 0x234FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FACu;
        // 0x234fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FB4u;
        goto label_234fb4;
    }
    ctx->pc = 0x234FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FACu;
        // 0x234fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234FB4u;
label_234fb4:
    // 0x234fb4: 0x0  nop
    ctx->pc = 0x234fb4u;
    // NOP
    ctx->pc = 0x234fb8u;
}
