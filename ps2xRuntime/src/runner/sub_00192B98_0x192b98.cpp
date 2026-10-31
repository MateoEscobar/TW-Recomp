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

// Function: sub_00192B98
// Address: 0x192b98 - 0x192c20
void sub_00192B98_0x192b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B98_0x192b98");
#endif

    switch (ctx->pc) {
        case 0x192b98u: goto label_192b98;
        case 0x192b9cu: goto label_192b9c;
        case 0x192ba0u: goto label_192ba0;
        case 0x192ba4u: goto label_192ba4;
        case 0x192ba8u: goto label_192ba8;
        case 0x192bacu: goto label_192bac;
        case 0x192bb0u: goto label_192bb0;
        case 0x192bb4u: goto label_192bb4;
        case 0x192bb8u: goto label_192bb8;
        case 0x192bbcu: goto label_192bbc;
        case 0x192bc0u: goto label_192bc0;
        case 0x192bc4u: goto label_192bc4;
        case 0x192bc8u: goto label_192bc8;
        case 0x192bccu: goto label_192bcc;
        case 0x192bd0u: goto label_192bd0;
        case 0x192bd4u: goto label_192bd4;
        case 0x192bd8u: goto label_192bd8;
        case 0x192bdcu: goto label_192bdc;
        case 0x192be0u: goto label_192be0;
        case 0x192be4u: goto label_192be4;
        case 0x192be8u: goto label_192be8;
        case 0x192becu: goto label_192bec;
        case 0x192bf0u: goto label_192bf0;
        case 0x192bf4u: goto label_192bf4;
        case 0x192bf8u: goto label_192bf8;
        case 0x192bfcu: goto label_192bfc;
        case 0x192c00u: goto label_192c00;
        case 0x192c04u: goto label_192c04;
        case 0x192c08u: goto label_192c08;
        case 0x192c0cu: goto label_192c0c;
        case 0x192c10u: goto label_192c10;
        case 0x192c14u: goto label_192c14;
        case 0x192c18u: goto label_192c18;
        case 0x192c1cu: goto label_192c1c;
        default: break;
    }

    ctx->pc = 0x192b98u;

label_192b98:
    // 0x192b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_192b9c:
    // 0x192b9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_192ba0:
    // 0x192ba0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_192ba4:
    // 0x192ba4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x192ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_192ba8:
    // 0x192ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192bac:
    // 0x192bac: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_192bb0:
    // 0x192bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192bb4:
    // 0x192bb4: 0x858818  mult        $s1, $a0, $a1
    ctx->pc = 0x192bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_192bb8:
    // 0x192bb8: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_192bbc:
    // 0x192bbc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x192bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_192bc0:
    // 0x192bc0: 0x250834d0  addiu       $t0, $t0, 0x34D0
    ctx->pc = 0x192bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13520));
label_192bc4:
    // 0x192bc4: 0x254a3518  addiu       $t2, $t2, 0x3518
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 13592));
label_192bc8:
    // 0x192bc8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_192bcc:
    // 0x192bcc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x192bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_192bd0:
    // 0x192bd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192bd4:
    // 0x192bd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x192bd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192bd8:
    // 0x192bd8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x192bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_192bdc:
    // 0x192bdc: 0x24a53510  addiu       $a1, $a1, 0x3510
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13584));
label_192be0:
    // 0x192be0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_192be4:
    // 0x192be4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_192be8:
    // 0x192be8: 0x40f809  jalr        $v0
label_192bec:
    if (ctx->pc == 0x192BECu) {
        ctx->pc = 0x192BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BE8u;
        // 0x192bec: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192BF0u;
        goto label_192bf0;
    }
    ctx->pc = 0x192BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192BF0u);
        ctx->pc = 0x192BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BE8u;
        // 0x192bec: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192BE8u, 0x192BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192BF0u;
label_192bf0:
    // 0x192bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192bf4:
    // 0x192bf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192bf8:
    // 0x192bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192bfc:
    // 0x192bfc: 0xc10c1fa  jal         func_4307E8
label_192c00:
    if (ctx->pc == 0x192C00u) {
        ctx->pc = 0x192C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BFCu;
        // 0x192c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192C04u;
        goto label_192c04;
    }
    ctx->pc = 0x192BFCu;
    SET_GPR_U32(ctx, 31, 0x192C04u);
    ctx->pc = 0x192C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BFCu;
    // 0x192c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x192BFCu, 0x192C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C04u;
label_192c04:
    // 0x192c04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192c08:
    // 0x192c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192c0c:
    // 0x192c0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192c10:
    // 0x192c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192c14:
    // 0x192c14: 0x3e00008  jr          $ra
label_192c18:
    if (ctx->pc == 0x192C18u) {
        ctx->pc = 0x192C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C14u;
        // 0x192c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192C1Cu;
        goto label_192c1c;
    }
    ctx->pc = 0x192C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C14u;
        // 0x192c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192C1Cu;
label_192c1c:
    // 0x192c1c: 0x0  nop
    ctx->pc = 0x192c1cu;
    // NOP
    ctx->pc = 0x192c20u;
}
