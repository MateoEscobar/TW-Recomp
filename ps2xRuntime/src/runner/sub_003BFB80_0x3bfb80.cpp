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

// Function: sub_003BFB80
// Address: 0x3bfb80 - 0x3bfbf0
void sub_003BFB80_0x3bfb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFB80_0x3bfb80");
#endif

    switch (ctx->pc) {
        case 0x3bfb80u: goto label_3bfb80;
        case 0x3bfb84u: goto label_3bfb84;
        case 0x3bfb88u: goto label_3bfb88;
        case 0x3bfb8cu: goto label_3bfb8c;
        case 0x3bfb90u: goto label_3bfb90;
        case 0x3bfb94u: goto label_3bfb94;
        case 0x3bfb98u: goto label_3bfb98;
        case 0x3bfb9cu: goto label_3bfb9c;
        case 0x3bfba0u: goto label_3bfba0;
        case 0x3bfba4u: goto label_3bfba4;
        case 0x3bfba8u: goto label_3bfba8;
        case 0x3bfbacu: goto label_3bfbac;
        case 0x3bfbb0u: goto label_3bfbb0;
        case 0x3bfbb4u: goto label_3bfbb4;
        case 0x3bfbb8u: goto label_3bfbb8;
        case 0x3bfbbcu: goto label_3bfbbc;
        case 0x3bfbc0u: goto label_3bfbc0;
        case 0x3bfbc4u: goto label_3bfbc4;
        case 0x3bfbc8u: goto label_3bfbc8;
        case 0x3bfbccu: goto label_3bfbcc;
        case 0x3bfbd0u: goto label_3bfbd0;
        case 0x3bfbd4u: goto label_3bfbd4;
        case 0x3bfbd8u: goto label_3bfbd8;
        case 0x3bfbdcu: goto label_3bfbdc;
        case 0x3bfbe0u: goto label_3bfbe0;
        case 0x3bfbe4u: goto label_3bfbe4;
        case 0x3bfbe8u: goto label_3bfbe8;
        case 0x3bfbecu: goto label_3bfbec;
        default: break;
    }

    ctx->pc = 0x3bfb80u;

label_3bfb80:
    // 0x3bfb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bfb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3bfb84:
    // 0x3bfb84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bfb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bfb88:
    // 0x3bfb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bfb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bfb8c:
    // 0x3bfb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bfb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfb90:
    // 0x3bfb90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bfb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bfb94:
    // 0x3bfb94: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bfb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfb98:
    // 0x3bfb98: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfb9c:
    // 0x3bfb9c: 0x40f809  jalr        $v0
label_3bfba0:
    if (ctx->pc == 0x3BFBA0u) {
        ctx->pc = 0x3BFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB9Cu;
        // 0x3bfba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFBA4u;
        goto label_3bfba4;
    }
    ctx->pc = 0x3BFB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFBA4u);
        ctx->pc = 0x3BFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB9Cu;
        // 0x3bfba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB9Cu, 0x3BFBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFBA4u;
label_3bfba4:
    // 0x3bfba4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bfba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfba8:
    // 0x3bfba8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3bfbac:
    // 0x3bfbac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bfbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3bfbb0:
    // 0x3bfbb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3bfbb4:
    // 0x3bfbb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3bfbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bfbb8:
    // 0x3bfbb8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_3bfbbc:
    if (ctx->pc == 0x3BFBBCu) {
        ctx->pc = 0x3BFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBB8u;
        // 0x3bfbbc: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFBC0u;
        goto label_3bfbc0;
    }
    ctx->pc = 0x3BFBB8u;
    {
        const bool branch_taken_0x3bfbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBB8u;
        // 0x3bfbbc: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfbb8) {
            ctx->pc = 0x3BFBC4u;
            goto label_3bfbc4;
        }
    }
    ctx->pc = 0x3BFBC0u;
label_3bfbc0:
    // 0x3bfbc0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3bfbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_3bfbc4:
    // 0x3bfbc4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bfbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3bfbc8:
    // 0x3bfbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bfbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bfbcc:
    // 0x3bfbcc: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x3bfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_3bfbd0:
    // 0x3bfbd0: 0xc0e6ec6  jal         func_39BB18
label_3bfbd4:
    if (ctx->pc == 0x3BFBD4u) {
        ctx->pc = 0x3BFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBD0u;
        // 0x3bfbd4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFBD8u;
        goto label_3bfbd8;
    }
    ctx->pc = 0x3BFBD0u;
    SET_GPR_U32(ctx, 31, 0x3BFBD8u);
    ctx->pc = 0x3BFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFBD0u;
    // 0x3bfbd4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3BFBD0u, 0x3BFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFBD8u;
label_3bfbd8:
    // 0x3bfbd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bfbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bfbdc:
    // 0x3bfbdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bfbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfbe0:
    // 0x3bfbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bfbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfbe4:
    // 0x3bfbe4: 0x3e00008  jr          $ra
label_3bfbe8:
    if (ctx->pc == 0x3BFBE8u) {
        ctx->pc = 0x3BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBE4u;
        // 0x3bfbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFBECu;
        goto label_3bfbec;
    }
    ctx->pc = 0x3BFBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFBE4u;
        // 0x3bfbe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFBECu;
label_3bfbec:
    // 0x3bfbec: 0x0  nop
    ctx->pc = 0x3bfbecu;
    // NOP
    ctx->pc = 0x3bfbf0u;
}
