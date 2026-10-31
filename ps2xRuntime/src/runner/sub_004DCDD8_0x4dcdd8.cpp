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

// Function: sub_004DCDD8
// Address: 0x4dcdd8 - 0x4dce18
void sub_004DCDD8_0x4dcdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCDD8_0x4dcdd8");
#endif

    switch (ctx->pc) {
        case 0x4dcdd8u: goto label_4dcdd8;
        case 0x4dcddcu: goto label_4dcddc;
        case 0x4dcde0u: goto label_4dcde0;
        case 0x4dcde4u: goto label_4dcde4;
        case 0x4dcde8u: goto label_4dcde8;
        case 0x4dcdecu: goto label_4dcdec;
        case 0x4dcdf0u: goto label_4dcdf0;
        case 0x4dcdf4u: goto label_4dcdf4;
        case 0x4dcdf8u: goto label_4dcdf8;
        case 0x4dcdfcu: goto label_4dcdfc;
        case 0x4dce00u: goto label_4dce00;
        case 0x4dce04u: goto label_4dce04;
        case 0x4dce08u: goto label_4dce08;
        case 0x4dce0cu: goto label_4dce0c;
        case 0x4dce10u: goto label_4dce10;
        case 0x4dce14u: goto label_4dce14;
        default: break;
    }

    ctx->pc = 0x4dcdd8u;

label_4dcdd8:
    // 0x4dcdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dcdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dcddc:
    // 0x4dcddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dcddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dcde0:
    // 0x4dcde0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dcde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcde4:
    // 0x4dcde4: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x4dcde4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4dcde8:
    // 0x4dcde8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4dcde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4dcdec:
    // 0x4dcdec: 0x40f809  jalr        $v0
label_4dcdf0:
    if (ctx->pc == 0x4DCDF0u) {
        ctx->pc = 0x4DCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCDECu;
        // 0x4dcdf0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCDF4u;
        goto label_4dcdf4;
    }
    ctx->pc = 0x4DCDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCDF4u);
        ctx->pc = 0x4DCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCDECu;
        // 0x4dcdf0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCDECu, 0x4DCDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCDF4u;
label_4dcdf4:
    // 0x4dcdf4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4dcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_4dcdf8:
    // 0x4dcdf8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x4dcdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_4dcdfc:
    // 0x4dcdfc: 0xc10acae  jal         func_42B2B8
label_4dce00:
    if (ctx->pc == 0x4DCE00u) {
        ctx->pc = 0x4DCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCDFCu;
        // 0x4dce00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE04u;
        goto label_4dce04;
    }
    ctx->pc = 0x4DCDFCu;
    SET_GPR_U32(ctx, 31, 0x4DCE04u);
    ctx->pc = 0x4DCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCDFCu;
    // 0x4dce00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4DCDFCu, 0x4DCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCE04u;
label_4dce04:
    // 0x4dce04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dce08:
    // 0x4dce08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4dce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4dce0c:
    // 0x4dce0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4dce0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4dce10:
    // 0x4dce10: 0x3e00008  jr          $ra
label_4dce14:
    if (ctx->pc == 0x4DCE14u) {
        ctx->pc = 0x4DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE10u;
        // 0x4dce14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE18u;
        goto label_fallthrough_0x4dce10;
    }
    ctx->pc = 0x4DCE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE10u;
        // 0x4dce14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dce10:
    ctx->pc = 0x4DCE18u;
}
