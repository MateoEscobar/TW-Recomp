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

// Function: sub_00234FB8
// Address: 0x234fb8 - 0x235010
void sub_00234FB8_0x234fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234FB8_0x234fb8");
#endif

    switch (ctx->pc) {
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        case 0x234fd8u: goto label_234fd8;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe0u: goto label_234fe0;
        case 0x234fe4u: goto label_234fe4;
        case 0x234fe8u: goto label_234fe8;
        case 0x234fecu: goto label_234fec;
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        default: break;
    }

    ctx->pc = 0x234fb8u;

label_234fb8:
    // 0x234fb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_234fbc:
    // 0x234fbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x234fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_234fc0:
    // 0x234fc0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_234fc4:
    // 0x234fc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234fc8:
    // 0x234fc8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x234fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_234fcc:
    // 0x234fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234fd0:
    // 0x234fd0: 0xc0e409a  jal         func_390268
label_234fd4:
    if (ctx->pc == 0x234FD4u) {
        ctx->pc = 0x234FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD0u;
        // 0x234fd4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FD8u;
        goto label_234fd8;
    }
    ctx->pc = 0x234FD0u;
    SET_GPR_U32(ctx, 31, 0x234FD8u);
    ctx->pc = 0x234FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FD0u;
    // 0x234fd4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x234FD0u, 0x234FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FD8u;
label_234fd8:
    // 0x234fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234fdc:
    // 0x234fdc: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_234fe0:
    if (ctx->pc == 0x234FE0u) {
        ctx->pc = 0x234FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FDCu;
        // 0x234fe0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FE4u;
        goto label_234fe4;
    }
    ctx->pc = 0x234FDCu;
    {
        const bool branch_taken_0x234fdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234fdc) {
            ctx->pc = 0x234FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FDCu;
            // 0x234fe0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234FF0u;
            goto label_234ff0;
        }
    }
    ctx->pc = 0x234FE4u;
label_234fe4:
    // 0x234fe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x234fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_234fe8:
    // 0x234fe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_234fec:
    if (ctx->pc == 0x234FECu) {
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FF0u;
        goto label_234ff0;
    }
    ctx->pc = 0x234FE8u;
    {
        const bool branch_taken_0x234fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fe8) {
            ctx->pc = 0x235000u;
            goto label_235000;
        }
    }
    ctx->pc = 0x234FF0u;
label_234ff0:
    // 0x234ff0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x234ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_234ff4:
    // 0x234ff4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234ff8:
    // 0x234ff8: 0x40f809  jalr        $v0
label_234ffc:
    if (ctx->pc == 0x234FFCu) {
        ctx->pc = 0x234FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FF8u;
        // 0x234ffc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235000u;
        goto label_235000;
    }
    ctx->pc = 0x234FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235000u);
        ctx->pc = 0x234FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FF8u;
        // 0x234ffc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FF8u, 0x235000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235000u;
label_235000:
    // 0x235000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235004:
    // 0x235004: 0x3e00008  jr          $ra
label_235008:
    if (ctx->pc == 0x235008u) {
        ctx->pc = 0x235008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235004u;
        // 0x235008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23500Cu;
        goto label_23500c;
    }
    ctx->pc = 0x235004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235004u;
        // 0x235008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23500Cu;
label_23500c:
    // 0x23500c: 0x0  nop
    ctx->pc = 0x23500cu;
    // NOP
    ctx->pc = 0x235010u;
}
