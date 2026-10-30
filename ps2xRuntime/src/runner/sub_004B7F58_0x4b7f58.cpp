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

// Function: sub_004B7F58
// Address: 0x4b7f58 - 0x4b7fc0
void sub_004B7F58_0x4b7f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F58_0x4b7f58");
#endif

    switch (ctx->pc) {
        case 0x4b7f58u: goto label_4b7f58;
        case 0x4b7f5cu: goto label_4b7f5c;
        case 0x4b7f60u: goto label_4b7f60;
        case 0x4b7f64u: goto label_4b7f64;
        case 0x4b7f68u: goto label_4b7f68;
        case 0x4b7f6cu: goto label_4b7f6c;
        case 0x4b7f70u: goto label_4b7f70;
        case 0x4b7f74u: goto label_4b7f74;
        case 0x4b7f78u: goto label_4b7f78;
        case 0x4b7f7cu: goto label_4b7f7c;
        case 0x4b7f80u: goto label_4b7f80;
        case 0x4b7f84u: goto label_4b7f84;
        case 0x4b7f88u: goto label_4b7f88;
        case 0x4b7f8cu: goto label_4b7f8c;
        case 0x4b7f90u: goto label_4b7f90;
        case 0x4b7f94u: goto label_4b7f94;
        case 0x4b7f98u: goto label_4b7f98;
        case 0x4b7f9cu: goto label_4b7f9c;
        case 0x4b7fa0u: goto label_4b7fa0;
        case 0x4b7fa4u: goto label_4b7fa4;
        case 0x4b7fa8u: goto label_4b7fa8;
        case 0x4b7facu: goto label_4b7fac;
        case 0x4b7fb0u: goto label_4b7fb0;
        case 0x4b7fb4u: goto label_4b7fb4;
        case 0x4b7fb8u: goto label_4b7fb8;
        case 0x4b7fbcu: goto label_4b7fbc;
        default: break;
    }

    ctx->pc = 0x4b7f58u;

label_4b7f58:
    // 0x4b7f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b7f5c:
    // 0x4b7f5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4b7f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7f60:
    // 0x4b7f60: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4b7f64:
    if (ctx->pc == 0x4B7F64u) {
        ctx->pc = 0x4B7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F60u;
        // 0x4b7f64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7F68u;
        goto label_4b7f68;
    }
    ctx->pc = 0x4B7F60u;
    {
        const bool branch_taken_0x4b7f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F60u;
        // 0x4b7f64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f60) {
            ctx->pc = 0x4B7F84u;
            goto label_4b7f84;
        }
    }
    ctx->pc = 0x4B7F68u;
label_4b7f68:
    // 0x4b7f68: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4b7f6c:
    // 0x4b7f6c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4b7f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4b7f70:
    // 0x4b7f70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4b7f74:
    if (ctx->pc == 0x4B7F74u) {
        ctx->pc = 0x4B7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F70u;
        // 0x4b7f74: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7F78u;
        goto label_4b7f78;
    }
    ctx->pc = 0x4B7F70u;
    {
        const bool branch_taken_0x4b7f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F70u;
        // 0x4b7f74: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f70) {
            ctx->pc = 0x4B7FB0u;
            goto label_4b7fb0;
        }
    }
    ctx->pc = 0x4B7F78u;
label_4b7f78:
    // 0x4b7f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b7f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b7f7c:
    // 0x4b7f7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_4b7f80:
    if (ctx->pc == 0x4B7F80u) {
        ctx->pc = 0x4B7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F7Cu;
        // 0x4b7f80: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7F84u;
        goto label_4b7f84;
    }
    ctx->pc = 0x4B7F7Cu;
    {
        const bool branch_taken_0x4b7f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F7Cu;
        // 0x4b7f80: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f7c) {
            ctx->pc = 0x4B7FB0u;
            goto label_4b7fb0;
        }
    }
    ctx->pc = 0x4B7F84u;
label_4b7f84:
    // 0x4b7f84: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4b7f88:
    // 0x4b7f88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b7f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4b7f8c:
    // 0x4b7f8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4b7f90:
    if (ctx->pc == 0x4B7F90u) {
        ctx->pc = 0x4B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F8Cu;
        // 0x4b7f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7F94u;
        goto label_4b7f94;
    }
    ctx->pc = 0x4B7F8Cu;
    {
        const bool branch_taken_0x4b7f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F8Cu;
        // 0x4b7f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f8c) {
            ctx->pc = 0x4B7FB4u;
            goto label_4b7fb4;
        }
    }
    ctx->pc = 0x4B7F94u;
label_4b7f94:
    // 0x4b7f94: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x4b7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_4b7f98:
    // 0x4b7f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7f9c:
    // 0x4b7f9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b7f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7fa0:
    // 0x4b7fa0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4b7fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4b7fa4:
    // 0x4b7fa4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4b7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4b7fa8:
    // 0x4b7fa8: 0x40f809  jalr        $v0
label_4b7fac:
    if (ctx->pc == 0x4B7FACu) {
        ctx->pc = 0x4B7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7FA8u;
        // 0x4b7fac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7FB0u;
        goto label_4b7fb0;
    }
    ctx->pc = 0x4B7FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B7FB0u);
        ctx->pc = 0x4B7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7FA8u;
        // 0x4b7fac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7FA8u, 0x4B7FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B7FB0u;
label_4b7fb0:
    // 0x4b7fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7fb4:
    // 0x4b7fb4: 0x3e00008  jr          $ra
label_4b7fb8:
    if (ctx->pc == 0x4B7FB8u) {
        ctx->pc = 0x4B7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7FB4u;
        // 0x4b7fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7FBCu;
        goto label_4b7fbc;
    }
    ctx->pc = 0x4B7FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7FB4u;
        // 0x4b7fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7FBCu;
label_4b7fbc:
    // 0x4b7fbc: 0x0  nop
    ctx->pc = 0x4b7fbcu;
    // NOP
    ctx->pc = 0x4b7fc0u;
}
